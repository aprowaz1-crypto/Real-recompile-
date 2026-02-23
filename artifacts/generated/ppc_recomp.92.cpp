#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823ADA94"))) PPC_WEAK_FUNC(sub_823ADA94);
PPC_FUNC_IMPL(__imp__sub_823ADA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADA98"))) PPC_WEAK_FUNC(sub_823ADA98);
PPC_FUNC_IMPL(__imp__sub_823ADA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ADAA0;
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
	// bgt cr6,0x823adadc
	if (ctx.cr6.gt) goto loc_823ADADC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c490
	ctx.lr = 0x823ADAC8;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823adadc
	if (!ctx.cr6.eq) goto loc_823ADADC;
loc_823ADAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823ADADC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823adad0
	if (ctx.cr6.eq) goto loc_823ADAD0;
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

__attribute__((alias("__imp__sub_823ADB0C"))) PPC_WEAK_FUNC(sub_823ADB0C);
PPC_FUNC_IMPL(__imp__sub_823ADB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADB10"))) PPC_WEAK_FUNC(sub_823ADB10);
PPC_FUNC_IMPL(__imp__sub_823ADB10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823ada20
	sub_823ADA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ADB18"))) PPC_WEAK_FUNC(sub_823ADB18);
PPC_FUNC_IMPL(__imp__sub_823ADB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-27036
	ctx.r10.s64 = ctx.r11.s64 + -27036;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823ada20
	ctx.lr = 0x823ADB48;
	sub_823ADA20(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823adb60
	if (ctx.cr6.eq) goto loc_823ADB60;
	// bl 0x82357128
	ctx.lr = 0x823ADB5C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823ADB60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADB78"))) PPC_WEAK_FUNC(sub_823ADB78);
PPC_FUNC_IMPL(__imp__sub_823ADB78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27028
	ctx.r8.s64 = ctx.r10.s64 + -27028;
	// addi r7,r9,-27036
	ctx.r7.s64 = ctx.r9.s64 + -27036;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADBF8"))) PPC_WEAK_FUNC(sub_823ADBF8);
PPC_FUNC_IMPL(__imp__sub_823ADBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823ADC00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-27028
	ctx.r10.s64 = ctx.r11.s64 + -27028;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// beq cr6,0x823adc34
	if (ctx.cr6.eq) goto loc_823ADC34;
	// bl 0x82357240
	ctx.lr = 0x823ADC30;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823ADC34:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,52
	ctx.r30.s64 = ctx.r28.s64 + 52;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r31.u32);
	// beq cr6,0x823adc58
	if (ctx.cr6.eq) goto loc_823ADC58;
	// bl 0x82357240
	ctx.lr = 0x823ADC54;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823ADC58:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// beq cr6,0x823adc7c
	if (ctx.cr6.eq) goto loc_823ADC7C;
	// bl 0x82357240
	ctx.lr = 0x823ADC78;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823ADC7C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r9,r10,-27036
	ctx.r9.s64 = ctx.r10.s64 + -27036;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// bl 0x823ada20
	ctx.lr = 0x823ADC9C;
	sub_823ADA20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823ADCA4"))) PPC_WEAK_FUNC(sub_823ADCA4);
PPC_FUNC_IMPL(__imp__sub_823ADCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ADCA8"))) PPC_WEAK_FUNC(sub_823ADCA8);
PPC_FUNC_IMPL(__imp__sub_823ADCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823ADCB0;
	sub_8224877C(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a3d90
	ctx.lr = 0x823ADCBC;
	sub_823A3D90(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x822d6388
	ctx.lr = 0x823ADCFC;
	sub_822D6388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823addf0
	if (ctx.cr6.eq) goto loc_823ADDF0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823addf8
	if (!ctx.cr6.gt) goto loc_823ADDF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,30604
	ctx.r28.s64 = ctx.r11.s64 + 30604;
loc_823ADD20:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82370310
	ctx.lr = 0x823ADD30;
	sub_82370310(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82370088
	ctx.lr = 0x823ADD3C;
	sub_82370088(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82370360
	ctx.lr = 0x823ADD48;
	sub_82370360(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823700d8
	ctx.lr = 0x823ADD50;
	sub_823700D8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// ld r25,0(r8)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x823ADD70;
	sub_82248A40(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad688
	ctx.lr = 0x823ADD78;
	sub_823AD688(ctx, base);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82370360
	ctx.lr = 0x823ADD88;
	sub_82370360(ctx, base);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// std r25,308(r1)
	PPC_STORE_U64(ctx.r1.u32 + 308, ctx.r25.u64);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// bl 0x823a3e18
	ctx.lr = 0x823ADDC0;
	sub_823A3E18(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad750
	ctx.lr = 0x823ADDC8;
	sub_823AD750(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823700d8
	ctx.lr = 0x823ADDD4;
	sub_823700D8(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823add20
	if (ctx.cr6.lt) goto loc_823ADD20;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823ADDF0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823ADDF8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823ADE00"))) PPC_WEAK_FUNC(sub_823ADE00);
PPC_FUNC_IMPL(__imp__sub_823ADE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823ADE08;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a3d90
	ctx.lr = 0x823ADE18;
	sub_823A3D90(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823ae104
	if (!ctx.cr6.gt) goto loc_823AE104;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r29,12
	ctx.r25.s64 = ctx.r29.s64 + 12;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lfs f31,11484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f31.f64 = double(temp.f32);
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r23,r11,30604
	ctx.r23.s64 = ctx.r11.s64 + 30604;
loc_823ADE54:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823ade88
	if (!ctx.cr6.gt) goto loc_823ADE88;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ade88
	if (ctx.cr6.eq) goto loc_823ADE88;
loc_823ADE70:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823ade8c
	if (ctx.cr6.eq) goto loc_823ADE8C;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ade70
	if (!ctx.cr6.eq) goto loc_823ADE70;
loc_823ADE88:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823ADE8C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823adea0
	if (!ctx.cr6.eq) goto loc_823ADEA0;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x823ae0ec
	goto loc_823AE0EC;
loc_823ADEA0:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ae0ec
	if (ctx.cr6.eq) goto loc_823AE0EC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad688
	ctx.lr = 0x823ADEC0;
	sub_823AD688(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// lwzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x82370310
	ctx.lr = 0x823ADEDC;
	sub_82370310(ctx, base);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82370088
	ctx.lr = 0x823ADEE8;
	sub_82370088(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82370360
	ctx.lr = 0x823ADEF4;
	sub_82370360(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x823700d8
	ctx.lr = 0x823ADEFC;
	sub_823700D8(ctx, base);
	// lwz r8,56(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lwzx r4,r7,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// ld r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x823ADF1C;
	sub_82248A40(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r5,r11,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ae054
	if (ctx.cr6.eq) goto loc_823AE054;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae054
	if (ctx.cr6.eq) goto loc_823AE054;
	// stw r22,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r22.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82370360
	ctx.lr = 0x823ADF48;
	sub_82370360(ctx, base);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// std r30,308(r1)
	PPC_STORE_U64(ctx.r1.u32 + 308, ctx.r30.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lhz r5,22(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,340(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// bl 0x82370c48
	ctx.lr = 0x823ADFB0;
	sub_82370C48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r5,14(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82372388
	ctx.lr = 0x823ADFC0;
	sub_82372388(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371ca0
	ctx.lr = 0x823ADFD0;
	sub_82371CA0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82371ca0
	ctx.lr = 0x823ADFE0;
	sub_82371CA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237efc8
	ctx.lr = 0x823ADFEC;
	sub_8237EFC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237f2d8
	ctx.lr = 0x823ADFF8;
	sub_8237F2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ae03c
	if (ctx.cr6.eq) goto loc_823AE03C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823ac6b8
	ctx.lr = 0x823AE008;
	sub_823AC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237f1e0
	ctx.lr = 0x823AE018;
	sub_8237F1E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ad888
	ctx.lr = 0x823AE028;
	sub_823AD888(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237eff8
	ctx.lr = 0x823AE030;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x823AE038;
	sub_82372340(ctx, base);
	// b 0x823ae090
	goto loc_823AE090;
loc_823AE03C:
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8237eff8
	ctx.lr = 0x823AE048;
	sub_8237EFF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82372340
	ctx.lr = 0x823AE050;
	sub_82372340(ctx, base);
	// b 0x823ae090
	goto loc_823AE090;
loc_823AE054:
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82370360
	ctx.lr = 0x823AE064;
	sub_82370360(ctx, base);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// std r30,308(r1)
	PPC_STORE_U64(ctx.r1.u32 + 308, ctx.r30.u64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_823AE090:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823a3e18
	ctx.lr = 0x823AE09C;
	sub_823A3E18(ctx, base);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823ae0d0
	if (!ctx.cr6.gt) goto loc_823AE0D0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae0d0
	if (ctx.cr6.eq) goto loc_823AE0D0;
loc_823AE0B8:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823ae0d4
	if (ctx.cr6.eq) goto loc_823AE0D4;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae0b8
	if (!ctx.cr6.eq) goto loc_823AE0B8;
loc_823AE0D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823AE0D4:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// bl 0x823700d8
	ctx.lr = 0x823AE0E4;
	sub_823700D8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad750
	ctx.lr = 0x823AE0EC;
	sub_823AD750(ctx, base);
loc_823AE0EC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r24,r24,24
	ctx.r24.s64 = ctx.r24.s64 + 24;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ade54
	if (ctx.cr6.lt) goto loc_823ADE54;
loc_823AE104:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x823ae118
	if (!ctx.cr6.eq) goto loc_823AE118;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_823AE118:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823AE124"))) PPC_WEAK_FUNC(sub_823AE124);
PPC_FUNC_IMPL(__imp__sub_823AE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE128"))) PPC_WEAK_FUNC(sub_823AE128);
PPC_FUNC_IMPL(__imp__sub_823AE128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823AE130;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x823ada20
	ctx.lr = 0x823AE148;
	sub_823ADA20(ctx, base);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823ae1f8
	if (ctx.cr6.eq) goto loc_823AE1F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r11,30912
	ctx.r26.s64 = ctx.r11.s64 + 30912;
loc_823AE160:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r28,68(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823AE170;
	sub_823570E0(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x823AE178;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae1a4
	if (ctx.cr6.eq) goto loc_823AE1A4;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82248a40
	ctx.lr = 0x823AE198;
	sub_82248A40(ctx, base);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x823ae1a8
	goto loc_823AE1A8;
loc_823AE1A4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823AE1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE1B0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae204
	if (ctx.cr6.eq) goto loc_823AE204;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae1dc
	if (ctx.cr6.eq) goto loc_823AE1DC;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
loc_823AE1DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae1f0
	if (!ctx.cr6.eq) goto loc_823AE1F0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823AE1F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823ae160
	if (!ctx.cr6.eq) goto loc_823AE160;
loc_823AE1F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823AE204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823AE210"))) PPC_WEAK_FUNC(sub_823AE210);
PPC_FUNC_IMPL(__imp__sub_823AE210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adbf8
	ctx.lr = 0x823AE230;
	sub_823ADBF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae248
	if (ctx.cr6.eq) goto loc_823AE248;
	// bl 0x82357128
	ctx.lr = 0x823AE244;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AE248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE260"))) PPC_WEAK_FUNC(sub_823AE260);
PPC_FUNC_IMPL(__imp__sub_823AE260) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ae2cc
	if (ctx.cr6.eq) goto loc_823AE2CC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823ae2b0
	if (ctx.cr6.eq) goto loc_823AE2B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823ae2d4
	if (!ctx.cr6.eq) goto loc_823AE2D4;
	// bl 0x823ad960
	ctx.lr = 0x823AE294;
	sub_823AD960(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
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
loc_823AE2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ade00
	ctx.lr = 0x823AE2B8;
	sub_823ADE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823AE2CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823adca8
	ctx.lr = 0x823AE2D4;
	sub_823ADCA8(ctx, base);
loc_823AE2D4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823AE2E8"))) PPC_WEAK_FUNC(sub_823AE2E8);
PPC_FUNC_IMPL(__imp__sub_823AE2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823AE2F0;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r21,r3,12
	ctx.r21.s64 = ctx.r3.s64 + 12;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823ae128
	ctx.lr = 0x823AE314;
	sub_823AE128(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// stw r23,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r20,24(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823ae618
	if (ctx.cr6.eq) goto loc_823AE618;
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// addi r25,r31,52
	ctx.r25.s64 = ctx.r31.s64 + 52;
	// addi r24,r31,72
	ctx.r24.s64 = ctx.r31.s64 + 72;
loc_823AE348:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x823ae37c
	if (!ctx.cr6.gt) goto loc_823AE37C;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae37c
	if (ctx.cr6.eq) goto loc_823AE37C;
loc_823AE364:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823ae380
	if (ctx.cr6.eq) goto loc_823AE380;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae364
	if (!ctx.cr6.eq) goto loc_823AE364;
loc_823AE37C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823AE380:
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823ae414
	if (ctx.cr6.gt) goto loc_823AE414;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ae434
	if (ctx.cr0.eq) goto loc_823AE434;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823AE3AC;
	sub_823570E0(ctx, base);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823AE3BC;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE3C8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae434
	if (ctx.cr6.eq) goto loc_823AE434;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823AE3DC;
	sub_823585A0(ctx, base);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ae40c
	if (ctx.cr6.eq) goto loc_823AE40C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x823AE3F8;
	sub_82358508(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae40c
	if (ctx.cr6.eq) goto loc_823AE40C;
	// bl 0x82357240
	ctx.lr = 0x823AE408;
	sub_82357240(ctx, base);
	// stw r23,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r23.u32);
loc_823AE40C:
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r29,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r29.u32);
loc_823AE414:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae434
	if (ctx.cr6.eq) goto loc_823AE434;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
loc_823AE434:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x823ae468
	if (!ctx.cr6.gt) goto loc_823AE468;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae468
	if (ctx.cr6.eq) goto loc_823AE468;
loc_823AE450:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823ae46c
	if (ctx.cr6.eq) goto loc_823AE46C;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae450
	if (!ctx.cr6.eq) goto loc_823AE450;
loc_823AE468:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823AE46C:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r27,r11,44
	ctx.r27.s64 = ctx.r11.s64 + 44;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823ae500
	if (ctx.cr6.gt) goto loc_823AE500;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ae520
	if (ctx.cr0.eq) goto loc_823AE520;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823AE498;
	sub_823570E0(ctx, base);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823AE4A8;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE4B4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae520
	if (ctx.cr6.eq) goto loc_823AE520;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823AE4C8;
	sub_823585A0(ctx, base);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ae4f8
	if (ctx.cr6.eq) goto loc_823AE4F8;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x823AE4E4;
	sub_82358508(ctx, base);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae4f8
	if (ctx.cr6.eq) goto loc_823AE4F8;
	// bl 0x82357240
	ctx.lr = 0x823AE4F4;
	sub_82357240(ctx, base);
	// stw r23,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r23.u32);
loc_823AE4F8:
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stw r29,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r29.u32);
loc_823AE500:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae520
	if (ctx.cr6.eq) goto loc_823AE520;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
loc_823AE520:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x823ae554
	if (!ctx.cr6.gt) goto loc_823AE554;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae554
	if (ctx.cr6.eq) goto loc_823AE554;
loc_823AE53C:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823ae558
	if (ctx.cr6.eq) goto loc_823AE558;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae53c
	if (!ctx.cr6.eq) goto loc_823AE53C;
loc_823AE554:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823AE558:
	// lwz r28,8(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r27,r11,52
	ctx.r27.s64 = ctx.r11.s64 + 52;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823ae5ec
	if (ctx.cr6.gt) goto loc_823AE5EC;
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ae60c
	if (ctx.cr0.eq) goto loc_823AE60C;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823AE584;
	sub_823570E0(ctx, base);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823AE594;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE5A0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ae60c
	if (ctx.cr6.eq) goto loc_823AE60C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823AE5B4;
	sub_823585A0(ctx, base);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ae5e4
	if (ctx.cr6.eq) goto loc_823AE5E4;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x823AE5D0;
	sub_82358508(ctx, base);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae5e4
	if (ctx.cr6.eq) goto loc_823AE5E4;
	// bl 0x82357240
	ctx.lr = 0x823AE5E0;
	sub_82357240(ctx, base);
	// stw r23,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r23.u32);
loc_823AE5E4:
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// stw r29,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r29.u32);
loc_823AE5EC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae60c
	if (ctx.cr6.eq) goto loc_823AE60C;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
loc_823AE60C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x823ae348
	if (ctx.cr6.lt) goto loc_823AE348;
loc_823AE618:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823AE620"))) PPC_WEAK_FUNC(sub_823AE620);
PPC_FUNC_IMPL(__imp__sub_823AE620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823AE628;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae64c
	if (!ctx.cr6.eq) goto loc_823AE64C;
loc_823AE640:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823AE64C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ad960
	ctx.lr = 0x823AE654;
	sub_823AD960(ctx, base);
	// addi r27,r25,12
	ctx.r27.s64 = ctx.r25.s64 + 12;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ae128
	ctx.lr = 0x823AE664;
	sub_823AE128(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r24,24(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823ae7e4
	if (ctx.cr6.eq) goto loc_823AE7E4;
	// addi r26,r25,32
	ctx.r26.s64 = ctx.r25.s64 + 32;
loc_823AE678:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823ae6ac
	if (!ctx.cr6.gt) goto loc_823AE6AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae6ac
	if (ctx.cr6.eq) goto loc_823AE6AC;
loc_823AE694:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823ae6b0
	if (ctx.cr6.eq) goto loc_823AE6B0;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae694
	if (!ctx.cr6.eq) goto loc_823AE694;
loc_823AE6AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AE6B0:
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823ae6dc
	if (ctx.cr6.gt) goto loc_823AE6DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239c490
	ctx.lr = 0x823AE6D4;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ae640
	if (ctx.cr6.eq) goto loc_823AE640;
loc_823AE6DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae640
	if (ctx.cr6.eq) goto loc_823AE640;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823ae730
	if (!ctx.cr6.gt) goto loc_823AE730;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae730
	if (ctx.cr6.eq) goto loc_823AE730;
loc_823AE718:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823ae734
	if (ctx.cr6.eq) goto loc_823AE734;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae718
	if (!ctx.cr6.eq) goto loc_823AE718;
loc_823AE730:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AE734:
	// lwz r30,60(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// addi r31,r25,52
	ctx.r31.s64 = ctx.r25.s64 + 52;
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// addi r29,r11,44
	ctx.r29.s64 = ctx.r11.s64 + 44;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823ae764
	if (ctx.cr6.gt) goto loc_823AE764;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x823AE75C;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ae640
	if (ctx.cr6.eq) goto loc_823AE640;
loc_823AE764:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae640
	if (ctx.cr6.eq) goto loc_823AE640;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823ae7b8
	if (!ctx.cr6.gt) goto loc_823AE7B8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ae7b8
	if (ctx.cr6.eq) goto loc_823AE7B8;
loc_823AE7A0:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823ae7bc
	if (ctx.cr6.eq) goto loc_823AE7BC;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ae7a0
	if (!ctx.cr6.eq) goto loc_823AE7A0;
loc_823AE7B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823AE7BC:
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r25,72
	ctx.r3.s64 = ctx.r25.s64 + 72;
	// bl 0x823ada98
	ctx.lr = 0x823AE7D0;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ae640
	if (ctx.cr6.eq) goto loc_823AE640;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823ae678
	if (ctx.cr6.lt) goto loc_823AE678;
loc_823AE7E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823AE7F8"))) PPC_WEAK_FUNC(sub_823AE7F8);
PPC_FUNC_IMPL(__imp__sub_823AE7F8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-27028
	ctx.r9.s64 = ctx.r11.s64 + -27028;
	// addi r8,r10,-27036
	ctx.r8.s64 = ctx.r10.s64 + -27036;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// bl 0x823ae2e8
	ctx.lr = 0x823AE888;
	sub_823AE2E8(ctx, base);
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

__attribute__((alias("__imp__sub_823AE8A0"))) PPC_WEAK_FUNC(sub_823AE8A0);
PPC_FUNC_IMPL(__imp__sub_823AE8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AE8A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE8C0;
	sub_823570E0(ctx, base);
	// addi r11,r29,-17
	ctx.r11.s64 = ctx.r29.s64 + -17;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bgt cr6,0x823aed60
	if (ctx.cr6.gt) goto loc_823AED60;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5916
	ctx.r12.s64 = ctx.r12.s64 + -5916;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-5060(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5060);
	// lwz r17,-5012(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5012);
	// lwz r17,-4964(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4964);
	// lwz r17,-4916(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4916);
	// lwz r17,-4868(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4868);
	// lwz r17,-4820(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4820);
	// lwz r17,-5156(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5156);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-5444(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5444);
	// lwz r17,-5396(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5396);
	// lwz r17,-5348(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5348);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-5588(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5588);
	// lwz r17,-5540(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5540);
	// lwz r17,-5492(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5492);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-5780(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5780);
	// lwz r17,-5732(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5732);
	// lwz r17,-5684(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5684);
	// lwz r17,-5636(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5636);
	// lwz r17,-5204(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5204);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-5300(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5300);
	// lwz r17,-5252(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5252);
	// lwz r17,-4768(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4768);
	// lwz r17,-5108(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5108);
	// li r3,692
	ctx.r3.s64 = 692;
	// bl 0x823570f0
	ctx.lr = 0x823AE974;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c0988
	ctx.lr = 0x823AE984;
	sub_823C0988(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE990;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,620
	ctx.r3.s64 = 620;
	// bl 0x823570f0
	ctx.lr = 0x823AE9A4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c0078
	ctx.lr = 0x823AE9B4;
	sub_823C0078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE9C0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,700
	ctx.r3.s64 = 700;
	// bl 0x823570f0
	ctx.lr = 0x823AE9D4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bf698
	ctx.lr = 0x823AE9E4;
	sub_823BF698(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AE9F0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,692
	ctx.r3.s64 = 692;
	// bl 0x823570f0
	ctx.lr = 0x823AEA04;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bf068
	ctx.lr = 0x823AEA14;
	sub_823BF068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEA20;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x823570f0
	ctx.lr = 0x823AEA34;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823be218
	ctx.lr = 0x823AEA44;
	sub_823BE218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEA50;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x823570f0
	ctx.lr = 0x823AEA64;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bd1f8
	ctx.lr = 0x823AEA74;
	sub_823BD1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEA80;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x823570f0
	ctx.lr = 0x823AEA94;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bbcb0
	ctx.lr = 0x823AEAA4;
	sub_823BBCB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEAB0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AEAC4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bb9f0
	ctx.lr = 0x823AEAD4;
	sub_823BB9F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEAE0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AEAF4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bb8b0
	ctx.lr = 0x823AEB04;
	sub_823BB8B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEB10;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AEB24;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bb728
	ctx.lr = 0x823AEB34;
	sub_823BB728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEB40;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x823570f0
	ctx.lr = 0x823AEB54;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bb318
	ctx.lr = 0x823AEB64;
	sub_823BB318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEB70;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x823570f0
	ctx.lr = 0x823AEB84;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bac60
	ctx.lr = 0x823AEB94;
	sub_823BAC60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEBA0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x823570f0
	ctx.lr = 0x823AEBB4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ba2e0
	ctx.lr = 0x823AEBC4;
	sub_823BA2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEBD0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x823570f0
	ctx.lr = 0x823AEBE4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b9b80
	ctx.lr = 0x823AEBF4;
	sub_823B9B80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEC00;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x823570f0
	ctx.lr = 0x823AEC14;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b9488
	ctx.lr = 0x823AEC24;
	sub_823B9488(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEC30;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AEC44;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b9330
	ctx.lr = 0x823AEC54;
	sub_823B9330(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEC60;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AEC74;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b9250
	ctx.lr = 0x823AEC84;
	sub_823B9250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AEC90;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AECA4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b90a0
	ctx.lr = 0x823AECB4;
	sub_823B90A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AECC0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AECD4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b8ef8
	ctx.lr = 0x823AECE4;
	sub_823B8EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AECF0;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AED04;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b8d68
	ctx.lr = 0x823AED14;
	sub_823B8D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AED20;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x823AED34;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aed5c
	if (ctx.cr6.eq) goto loc_823AED5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b8bd8
	ctx.lr = 0x823AED44;
	sub_823B8BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AED50;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AED5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823AED60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823AED68;
	sub_823570E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AED74"))) PPC_WEAK_FUNC(sub_823AED74);
PPC_FUNC_IMPL(__imp__sub_823AED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AED78"))) PPC_WEAK_FUNC(sub_823AED78);
PPC_FUNC_IMPL(__imp__sub_823AED78) {
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
	ctx.lr = 0x823AED98;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-27016
	ctx.r9.s64 = ctx.r10.s64 + -27016;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823AEDAC;
	sub_823C10A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823AEDB8;
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

__attribute__((alias("__imp__sub_823AEDD0"))) PPC_WEAK_FUNC(sub_823AEDD0);
PPC_FUNC_IMPL(__imp__sub_823AEDD0) {
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
	ctx.lr = 0x823AEDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823aee28
	if (ctx.cr6.eq) goto loc_823AEE28;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AEE10;
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
loc_823AEE28:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ac5b8
	ctx.lr = 0x823AEE30;
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

__attribute__((alias("__imp__sub_823AEE48"))) PPC_WEAK_FUNC(sub_823AEE48);
PPC_FUNC_IMPL(__imp__sub_823AEE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AEE50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823AEE5C;
	sub_823A1E50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82256ce8
	ctx.lr = 0x823AEE68;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aeee4
	if (ctx.cr6.eq) goto loc_823AEEE4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823AEE80;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aeee4
	if (!ctx.cr6.eq) goto loc_823AEEE4;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823aeee4
	if (ctx.cr6.eq) goto loc_823AEEE4;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823aeee8
	if (ctx.cr6.eq) goto loc_823AEEE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AEEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AEED0;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AEEDC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AEEE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AEEE8:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823ac5b8
	ctx.lr = 0x823AEEF0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AEEF8"))) PPC_WEAK_FUNC(sub_823AEEF8);
PPC_FUNC_IMPL(__imp__sub_823AEEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AEF00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823AEF0C;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1028
	ctx.lr = 0x823AEF14;
	sub_823A1028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aef40
	if (ctx.cr6.eq) goto loc_823AEF40;
loc_823AEF24:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a12c8
	ctx.lr = 0x823AEF34;
	sub_823A12C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823aef24
	if (ctx.cr6.lt) goto loc_823AEF24;
loc_823AEF40:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AEF4C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AEF54"))) PPC_WEAK_FUNC(sub_823AEF54);
PPC_FUNC_IMPL(__imp__sub_823AEF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AEF58"))) PPC_WEAK_FUNC(sub_823AEF58);
PPC_FUNC_IMPL(__imp__sub_823AEF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-27016
	ctx.r10.s64 = ctx.r11.s64 + -27016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c1100
	ctx.lr = 0x823AEF88;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823AEF90;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aefa8
	if (ctx.cr6.eq) goto loc_823AEFA8;
	// bl 0x82357128
	ctx.lr = 0x823AEFA4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AEFA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEFC0"))) PPC_WEAK_FUNC(sub_823AEFC0);
PPC_FUNC_IMPL(__imp__sub_823AEFC0) {
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
	ctx.lr = 0x823AEFD8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af034
	if (ctx.cr6.eq) goto loc_823AF034;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x823af034
	if (!ctx.cr6.eq) goto loc_823AF034;
	// bl 0x823a0f10
	ctx.lr = 0x823AEFF0;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823af004
	if (!ctx.cr6.eq) goto loc_823AF004;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823af03c
	goto loc_823AF03C;
loc_823AF004:
	// bl 0x823a0f10
	ctx.lr = 0x823AF008;
	sub_823A0F10(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823af01c
	if (!ctx.cr6.eq) goto loc_823AF01C;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// b 0x823af038
	goto loc_823AF038;
loc_823AF01C:
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
loc_823AF034:
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_823AF038:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823AF03C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF048;
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

__attribute__((alias("__imp__sub_823AF060"))) PPC_WEAK_FUNC(sub_823AF060);
PPC_FUNC_IMPL(__imp__sub_823AF060) {
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
	// beq cr6,0x823af094
	if (ctx.cr6.eq) goto loc_823AF094;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x823af094
	if (!ctx.cr6.eq) goto loc_823AF094;
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
loc_823AF094:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823AF0A4;
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

__attribute__((alias("__imp__sub_823AF0B8"))) PPC_WEAK_FUNC(sub_823AF0B8);
PPC_FUNC_IMPL(__imp__sub_823AF0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AF0C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823AF0CC;
	sub_823AC6B8(ctx, base);
	// bl 0x823a1e50
	ctx.lr = 0x823AF0D0;
	sub_823A1E50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823AF0D8;
	sub_823A0F10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8237d2e8
	ctx.lr = 0x823AF0E0;
	sub_8237D2E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823af104
	if (!ctx.cr6.eq) goto loc_823AF104;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF0FC;
	sub_823AC608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AF104:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823AF10C;
	sub_823AC6B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823AF114;
	sub_823AC6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823af144
	if (!ctx.cr6.eq) goto loc_823AF144;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF130;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF13C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AF144:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823AF154;
	sub_823585A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240cdf8
	ctx.lr = 0x823AF160;
	sub_8240CDF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823af208
	if (ctx.cr6.eq) goto loc_823AF208;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af208
	if (ctx.cr6.eq) goto loc_823AF208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823AF180;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af19c
	if (ctx.cr6.eq) goto loc_823AF19C;
loc_823AF188:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF194;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AF19C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823af188
	if (ctx.cr6.eq) goto loc_823AF188;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823af1d0
	if (!ctx.cr6.eq) goto loc_823AF1D0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF1C8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AF1D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF1F4;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF200;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823AF208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823AF210;
	sub_823AC668(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF21C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AF224"))) PPC_WEAK_FUNC(sub_823AF224);
PPC_FUNC_IMPL(__imp__sub_823AF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF228"))) PPC_WEAK_FUNC(sub_823AF228);
PPC_FUNC_IMPL(__imp__sub_823AF228) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823AF244;
	sub_823A1E50(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823af25c
	if (!ctx.cr6.eq) goto loc_823AF25C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823af280
	if (ctx.cr6.eq) goto loc_823AF280;
loc_823AF25C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac660
	ctx.lr = 0x823AF264;
	sub_823AC660(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823af280
	if (!ctx.cr6.gt) goto loc_823AF280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x823ac658
	ctx.lr = 0x823AF280;
	sub_823AC658(ctx, base);
loc_823AF280:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823af2bc
	if (ctx.cr6.eq) goto loc_823AF2BC;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823AF294;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af330
	if (ctx.cr6.eq) goto loc_823AF330;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823af324
	if (ctx.cr6.eq) goto loc_823AF324;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF2B8;
	sub_823AC608(ctx, base);
	// b 0x823af324
	goto loc_823AF324;
loc_823AF2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823AF2C4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af30c
	if (ctx.cr6.eq) goto loc_823AF30C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF2E0;
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
	ctx.lr = 0x823AF2F4;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823af330
	if (!ctx.cr6.eq) goto loc_823AF330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823AF308;
	sub_82256CC0(ctx, base);
	// b 0x823af324
	goto loc_823AF324;
loc_823AF30C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823af330
	if (ctx.cr6.eq) goto loc_823AF330;
	// bl 0x823a0f10
	ctx.lr = 0x823AF31C;
	sub_823A0F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a4128
	ctx.lr = 0x823AF324;
	sub_823A4128(ctx, base);
loc_823AF324:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF330;
	sub_823AC5B8(ctx, base);
loc_823AF330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF348"))) PPC_WEAK_FUNC(sub_823AF348);
PPC_FUNC_IMPL(__imp__sub_823AF348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823AF368;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x823af3e4
	if (ctx.cr6.gt) goto loc_823AF3E4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823af39c
	// bdzf 4*cr6+eq,0x823af3a8
	// bdzf 4*cr6+eq,0x823af3b4
	// bdzf 4*cr6+eq,0x823af3c4
	// bdzf 4*cr6+eq,0x823af3d0
	// bne cr6,0x823af3e0
	if (!ctx.cr6.eq) goto loc_823AF3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af0b8
	ctx.lr = 0x823AF398;
	sub_823AF0B8(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af228
	ctx.lr = 0x823AF3A4;
	sub_823AF228(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF3A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aee48
	ctx.lr = 0x823AF3B0;
	sub_823AEE48(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF3B4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF3C0;
	sub_823AC5B8(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aeef8
	ctx.lr = 0x823AF3CC;
	sub_823AEEF8(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF3D0:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF3DC;
	sub_823AC5B8(ctx, base);
	// b 0x823af3e4
	goto loc_823AF3E4;
loc_823AF3E0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823AF3E4:
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

__attribute__((alias("__imp__sub_823AF400"))) PPC_WEAK_FUNC(sub_823AF400);
PPC_FUNC_IMPL(__imp__sub_823AF400) {
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
	ctx.lr = 0x823AF420;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26944
	ctx.r9.s64 = ctx.r10.s64 + -26944;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823AF434;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823AF458"))) PPC_WEAK_FUNC(sub_823AF458);
PPC_FUNC_IMPL(__imp__sub_823AF458) {
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
	ctx.lr = 0x823AF47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af4a0
	if (ctx.cr6.eq) goto loc_823AF4A0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AF498;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x823af4a8
	goto loc_823AF4A8;
loc_823AF4A0:
	// bl 0x823ac668
	ctx.lr = 0x823AF4A4;
	sub_823AC668(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_823AF4A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF4B0;
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

__attribute__((alias("__imp__sub_823AF4C4"))) PPC_WEAK_FUNC(sub_823AF4C4);
PPC_FUNC_IMPL(__imp__sub_823AF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF4C8"))) PPC_WEAK_FUNC(sub_823AF4C8);
PPC_FUNC_IMPL(__imp__sub_823AF4C8) {
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
	ctx.lr = 0x823AF4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af514
	if (ctx.cr6.eq) goto loc_823AF514;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AF508;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823af518
	goto loc_823AF518;
loc_823AF514:
	// li r4,4
	ctx.r4.s64 = 4;
loc_823AF518:
	// bl 0x823ac5b8
	ctx.lr = 0x823AF51C;
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

__attribute__((alias("__imp__sub_823AF530"))) PPC_WEAK_FUNC(sub_823AF530);
PPC_FUNC_IMPL(__imp__sub_823AF530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823af584
	if (ctx.cr6.eq) goto loc_823AF584;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823AF55C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af644
	if (ctx.cr6.eq) goto loc_823AF644;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823af638
	if (ctx.cr6.eq) goto loc_823AF638;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF580;
	sub_823AC608(ctx, base);
	// b 0x823af638
	goto loc_823AF638;
loc_823AF584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823AF58C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823af5c4
	if (!ctx.cr6.eq) goto loc_823AF5C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823af5c4
	if (!ctx.cr6.eq) goto loc_823AF5C4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823af644
	if (ctx.cr6.eq) goto loc_823AF644;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x823af63c
	goto loc_823AF63C;
loc_823AF5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823AF5CC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af5e4
	if (ctx.cr6.eq) goto loc_823AF5E4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823af608
	goto loc_823AF608;
loc_823AF5E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af610
	if (ctx.cr6.eq) goto loc_823AF610;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823AF608:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823AF610;
	sub_823AC608(ctx, base);
loc_823AF610:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823AF624;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823af644
	if (!ctx.cr6.eq) goto loc_823AF644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823AF638;
	sub_82256CC0(ctx, base);
loc_823AF638:
	// li r4,21
	ctx.r4.s64 = 21;
loc_823AF63C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF644;
	sub_823AC5B8(ctx, base);
loc_823AF644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF65C"))) PPC_WEAK_FUNC(sub_823AF65C);
PPC_FUNC_IMPL(__imp__sub_823AF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF660"))) PPC_WEAK_FUNC(sub_823AF660);
PPC_FUNC_IMPL(__imp__sub_823AF660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823AF680;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af6c0
	if (ctx.cr6.eq) goto loc_823AF6C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF6B4;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823af6c4
	goto loc_823AF6C4;
loc_823AF6C0:
	// li r4,9
	ctx.r4.s64 = 9;
loc_823AF6C4:
	// bl 0x823ac5b8
	ctx.lr = 0x823AF6C8;
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

__attribute__((alias("__imp__sub_823AF6E0"))) PPC_WEAK_FUNC(sub_823AF6E0);
PPC_FUNC_IMPL(__imp__sub_823AF6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823af734
	if (ctx.cr6.eq) goto loc_823AF734;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823AF70C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af800
	if (ctx.cr6.eq) goto loc_823AF800;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823af7f4
	if (ctx.cr6.eq) goto loc_823AF7F4;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF730;
	sub_823AC608(ctx, base);
	// b 0x823af7f4
	goto loc_823AF7F4;
loc_823AF734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823AF73C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823af780
	if (!ctx.cr6.eq) goto loc_823AF780;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823af780
	if (!ctx.cr6.eq) goto loc_823AF780;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823af800
	if (ctx.cr6.eq) goto loc_823AF800;
	// bl 0x823a0f10
	ctx.lr = 0x823AF770;
	sub_823A0F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a4128
	ctx.lr = 0x823AF778;
	sub_823A4128(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x823af7f8
	goto loc_823AF7F8;
loc_823AF780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823AF788;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af7a0
	if (ctx.cr6.eq) goto loc_823AF7A0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823af7c4
	goto loc_823AF7C4;
loc_823AF7A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af7cc
	if (ctx.cr6.eq) goto loc_823AF7CC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823AF7C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823AF7CC;
	sub_823AC608(ctx, base);
loc_823AF7CC:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823AF7E0;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823af800
	if (!ctx.cr6.eq) goto loc_823AF800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823AF7F4;
	sub_82256CC0(ctx, base);
loc_823AF7F4:
	// li r4,21
	ctx.r4.s64 = 21;
loc_823AF7F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF800;
	sub_823AC5B8(ctx, base);
loc_823AF800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF818"))) PPC_WEAK_FUNC(sub_823AF818);
PPC_FUNC_IMPL(__imp__sub_823AF818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823AF838;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af878
	if (ctx.cr6.eq) goto loc_823AF878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF86C;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823af87c
	goto loc_823AF87C;
loc_823AF878:
	// li r4,12
	ctx.r4.s64 = 12;
loc_823AF87C:
	// bl 0x823ac5b8
	ctx.lr = 0x823AF880;
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

__attribute__((alias("__imp__sub_823AF898"))) PPC_WEAK_FUNC(sub_823AF898);
PPC_FUNC_IMPL(__imp__sub_823AF898) {
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
	ctx.lr = 0x823AF8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af8e0
	if (ctx.cr6.eq) goto loc_823AF8E0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AF8D8;
	sub_823AC608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823af8e8
	goto loc_823AF8E8;
loc_823AF8E0:
	// bl 0x823ac668
	ctx.lr = 0x823AF8E4;
	sub_823AC668(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
loc_823AF8E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF8F0;
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

__attribute__((alias("__imp__sub_823AF904"))) PPC_WEAK_FUNC(sub_823AF904);
PPC_FUNC_IMPL(__imp__sub_823AF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF908"))) PPC_WEAK_FUNC(sub_823AF908);
PPC_FUNC_IMPL(__imp__sub_823AF908) {
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
	ctx.lr = 0x823AF92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823af950
	if (ctx.cr6.eq) goto loc_823AF950;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AF948;
	sub_823AC608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823af9b8
	goto loc_823AF9B8;
loc_823AF950:
	// bl 0x823ac670
	ctx.lr = 0x823AF954;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af978
	if (ctx.cr6.eq) goto loc_823AF978;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AF970;
	sub_823AC608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823af9b8
	goto loc_823AF9B8;
loc_823AF978:
	// bl 0x823a1e50
	ctx.lr = 0x823AF97C;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AF9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823af9c0
	if (ctx.cr6.eq) goto loc_823AF9C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823AF9B4;
	sub_823AC668(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
loc_823AF9B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AF9C0;
	sub_823AC5B8(ctx, base);
loc_823AF9C0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823AF9D4"))) PPC_WEAK_FUNC(sub_823AF9D4);
PPC_FUNC_IMPL(__imp__sub_823AF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF9D8"))) PPC_WEAK_FUNC(sub_823AF9D8);
PPC_FUNC_IMPL(__imp__sub_823AF9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823AF9E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823AF9EC;
	sub_823A1E50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82256ce8
	ctx.lr = 0x823AF9F8;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afa74
	if (ctx.cr6.eq) goto loc_823AFA74;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823AFA10;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823afa74
	if (!ctx.cr6.eq) goto loc_823AFA74;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823afa74
	if (ctx.cr6.eq) goto loc_823AFA74;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823afa78
	if (ctx.cr6.eq) goto loc_823AFA78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFA60;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFA6C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823AFA74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AFA78:
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFA80;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823AFA88"))) PPC_WEAK_FUNC(sub_823AFA88);
PPC_FUNC_IMPL(__imp__sub_823AFA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823AFA90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823AFA9C;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1028
	ctx.lr = 0x823AFAA4;
	sub_823A1028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afad0
	if (ctx.cr6.eq) goto loc_823AFAD0;
loc_823AFAB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a12c8
	ctx.lr = 0x823AFAC4;
	sub_823A12C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823afab4
	if (ctx.cr6.lt) goto loc_823AFAB4;
loc_823AFAD0:
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFADC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823AFAE4"))) PPC_WEAK_FUNC(sub_823AFAE4);
PPC_FUNC_IMPL(__imp__sub_823AFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AFAE8"))) PPC_WEAK_FUNC(sub_823AFAE8);
PPC_FUNC_IMPL(__imp__sub_823AFAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26944
	ctx.r10.s64 = ctx.r11.s64 + -26944;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823afb28
	if (ctx.cr6.eq) goto loc_823AFB28;
	// bl 0x82357128
	ctx.lr = 0x823AFB20;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_823AFB28:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823AFB30;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823AFB38;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823afb50
	if (ctx.cr6.eq) goto loc_823AFB50;
	// bl 0x82357128
	ctx.lr = 0x823AFB4C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823AFB50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFB68"))) PPC_WEAK_FUNC(sub_823AFB68);
PPC_FUNC_IMPL(__imp__sub_823AFB68) {
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
	ctx.lr = 0x823AFB80;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afbc4
	if (ctx.cr6.eq) goto loc_823AFBC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x823afbc4
	if (!ctx.cr6.eq) goto loc_823AFBC4;
	// bl 0x823a0f10
	ctx.lr = 0x823AFB98;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823afbac
	if (!ctx.cr6.eq) goto loc_823AFBAC;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823afbcc
	goto loc_823AFBCC;
loc_823AFBAC:
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
loc_823AFBC4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823AFBCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFBD8;
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

__attribute__((alias("__imp__sub_823AFBF0"))) PPC_WEAK_FUNC(sub_823AFBF0);
PPC_FUNC_IMPL(__imp__sub_823AFBF0) {
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
	// beq cr6,0x823afc24
	if (ctx.cr6.eq) goto loc_823AFC24;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x823afc24
	if (!ctx.cr6.eq) goto loc_823AFC24;
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
loc_823AFC24:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823AFC34;
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

__attribute__((alias("__imp__sub_823AFC48"))) PPC_WEAK_FUNC(sub_823AFC48);
PPC_FUNC_IMPL(__imp__sub_823AFC48) {
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
	ctx.lr = 0x823AFC60;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823afca8
	if (ctx.cr6.eq) goto loc_823AFCA8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFC90;
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
loc_823AFCA8:
	// bl 0x823a0f10
	ctx.lr = 0x823AFCAC;
	sub_823A0F10(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823afce4
	if (!ctx.cr6.eq) goto loc_823AFCE4;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823AFCCC;
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
loc_823AFCE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFCEC;
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

__attribute__((alias("__imp__sub_823AFD04"))) PPC_WEAK_FUNC(sub_823AFD04);
PPC_FUNC_IMPL(__imp__sub_823AFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AFD08"))) PPC_WEAK_FUNC(sub_823AFD08);
PPC_FUNC_IMPL(__imp__sub_823AFD08) {
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
	ctx.lr = 0x823AFD20;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823afd58
	if (ctx.cr6.eq) goto loc_823AFD58;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AFD50;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x823afdc0
	goto loc_823AFDC0;
loc_823AFD58:
	// bl 0x823ac670
	ctx.lr = 0x823AFD5C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823afd80
	if (ctx.cr6.eq) goto loc_823AFD80;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFD78;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x823afdc0
	goto loc_823AFDC0;
loc_823AFD80:
	// bl 0x823a1e50
	ctx.lr = 0x823AFD84;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823afdc8
	if (ctx.cr6.eq) goto loc_823AFDC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823AFDBC;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_823AFDC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFDC8;
	sub_823AC5B8(ctx, base);
loc_823AFDC8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823AFDDC"))) PPC_WEAK_FUNC(sub_823AFDDC);
PPC_FUNC_IMPL(__imp__sub_823AFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AFDE0"))) PPC_WEAK_FUNC(sub_823AFDE0);
PPC_FUNC_IMPL(__imp__sub_823AFDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823AFDE8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823AFDF4;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x823afe3c
	if (ctx.cr6.eq) goto loc_823AFE3C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823AFE28;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFE34;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823AFE3C:
	// bl 0x823ac670
	ctx.lr = 0x823AFE40;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823afe70
	if (ctx.cr6.eq) goto loc_823AFE70;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFE5C;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFE68;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823AFE70:
	// bl 0x823a0f10
	ctx.lr = 0x823AFE74;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1028
	ctx.lr = 0x823AFE7C;
	sub_823A1028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afeac
	if (ctx.cr6.eq) goto loc_823AFEAC;
loc_823AFE8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1310
	ctx.lr = 0x823AFE98;
	sub_823A1310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823afee8
	if (!ctx.cr6.eq) goto loc_823AFEE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823afe8c
	if (ctx.cr6.lt) goto loc_823AFE8C;
loc_823AFEAC:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823afecc
	if (ctx.cr6.eq) goto loc_823AFECC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFEC4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823AFECC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r4,6
	ctx.r4.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823afee0
	if (!ctx.cr6.eq) goto loc_823AFEE0;
	// li r4,9
	ctx.r4.s64 = 9;
loc_823AFEE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFEE8;
	sub_823AC5B8(ctx, base);
loc_823AFEE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823AFEF0"))) PPC_WEAK_FUNC(sub_823AFEF0);
PPC_FUNC_IMPL(__imp__sub_823AFEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823AFEF8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823AFF04;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823aff4c
	if (ctx.cr6.eq) goto loc_823AFF4C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFF38;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFF44;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823AFF4C:
	// bl 0x823a0f10
	ctx.lr = 0x823AFF50;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r25,68(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// bl 0x823ac670
	ctx.lr = 0x823AFF60;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823aff90
	if (ctx.cr6.eq) goto loc_823AFF90;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac608
	ctx.lr = 0x823AFF7C;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823AFF88;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823AFF90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1030
	ctx.lr = 0x823AFF98;
	sub_823A1030(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq cr6,0x823affe4
	if (ctx.cr6.eq) goto loc_823AFFE4;
loc_823AFFAC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a14b0
	ctx.lr = 0x823AFFC0;
	sub_823A14B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823affd8
	if (ctx.cr6.eq) goto loc_823AFFD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a12c8
	ctx.lr = 0x823AFFD8;
	sub_823A12C8(ctx, base);
loc_823AFFD8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823affac
	if (ctx.cr6.lt) goto loc_823AFFAC;
loc_823AFFE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1028
	ctx.lr = 0x823AFFEC;
	sub_823A1028(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0054
	if (ctx.cr6.eq) goto loc_823B0054;
loc_823AFFFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a11e8
	ctx.lr = 0x823B0008;
	sub_823A11E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0030
	if (ctx.cr6.eq) goto loc_823B0030;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1240
	ctx.lr = 0x823B0020;
	sub_823A1240(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r24
	ctx.r10.s64 = ctx.r24.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823b0044
	if (ctx.cr6.eq) goto loc_823B0044;
loc_823B0030:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1310
	ctx.lr = 0x823B003C;
	sub_823A1310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0048
	if (ctx.cr6.eq) goto loc_823B0048;
loc_823B0044:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823B0048:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823afffc
	if (ctx.cr6.lt) goto loc_823AFFFC;
loc_823B0054:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823b0070
	if (!ctx.cr6.eq) goto loc_823B0070;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1038
	ctx.lr = 0x823B0064;
	sub_823A1038(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0070;
	sub_823AC5B8(ctx, base);
loc_823B0070:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823B0078"))) PPC_WEAK_FUNC(sub_823B0078);
PPC_FUNC_IMPL(__imp__sub_823B0078) {
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
	ctx.lr = 0x823B009C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b00c0
	if (ctx.cr6.eq) goto loc_823B00C0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B00B8;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x823b00d8
	goto loc_823B00D8;
loc_823B00C0:
	// bl 0x823a0f10
	ctx.lr = 0x823B00C4;
	sub_823A0F10(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,6
	ctx.r4.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b00d8
	if (!ctx.cr6.eq) goto loc_823B00D8;
	// li r4,9
	ctx.r4.s64 = 9;
loc_823B00D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B00E0;
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

__attribute__((alias("__imp__sub_823B00F4"))) PPC_WEAK_FUNC(sub_823B00F4);
PPC_FUNC_IMPL(__imp__sub_823B00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B00F8"))) PPC_WEAK_FUNC(sub_823B00F8);
PPC_FUNC_IMPL(__imp__sub_823B00F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B0100;
	sub_82248784(ctx, base);
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
	ctx.lr = 0x823B0118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b0134
	if (ctx.cr6.eq) goto loc_823B0134;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b0268
	goto loc_823B0268;
loc_823B0134:
	// bl 0x823ac6b8
	ctx.lr = 0x823B0138;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B0140;
	sub_823A0F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240cc78
	ctx.lr = 0x823B0170;
	sub_8240CC78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x823b0244
	if (!ctx.cr6.eq) goto loc_823B0244;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0244
	if (ctx.cr6.eq) goto loc_823B0244;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B0190;
	sub_823570E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823B0198;
	sub_823570F0(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B01A4;
	sub_823570E0(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b01c0
	if (!ctx.cr6.eq) goto loc_823B01C0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b0264
	goto loc_823B0264;
loc_823B01C0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823B01C8;
	sub_823585A0(ctx, base);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B01D8;
	sub_823585A0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240cc78
	ctx.lr = 0x823B01F4;
	sub_8240CC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b0228
	if (ctx.cr6.eq) goto loc_823B0228;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0228
	if (ctx.cr6.eq) goto loc_823B0228;
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
	ctx.lr = 0x823B0220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x823b0260
	goto loc_823B0260;
loc_823B0228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B0230;
	sub_823AC668(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B023C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B0244:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B025C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823B0260:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823B0264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B0268:
	// bl 0x823ac608
	ctx.lr = 0x823B026C;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0278;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B0280"))) PPC_WEAK_FUNC(sub_823B0280);
PPC_FUNC_IMPL(__imp__sub_823B0280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B0288;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B0294;
	sub_823A0F10(ctx, base);
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
	ctx.lr = 0x823B02AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b02dc
	if (ctx.cr6.eq) goto loc_823B02DC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B02C8;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B02D4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B02DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B02E4;
	sub_823AC6B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B02EC;
	sub_823AC6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b031c
	if (ctx.cr6.eq) goto loc_823B031C;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0308;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0314;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B031C:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B032C;
	sub_823585A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240cd58
	ctx.lr = 0x823B033C;
	sub_8240CD58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b038c
	if (ctx.cr6.eq) goto loc_823B038C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b038c
	if (ctx.cr6.eq) goto loc_823B038C;
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
	ctx.lr = 0x823B0368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0378;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0384;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B038C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B0394;
	sub_823AC668(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B03A0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B03A8"))) PPC_WEAK_FUNC(sub_823B03A8);
PPC_FUNC_IMPL(__imp__sub_823B03A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823B03B0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B03BC;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B03C8;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,68(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B03E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x823b0414
	if (ctx.cr6.eq) goto loc_823B0414;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B0400;
	sub_823AC608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B040C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823B0414:
	// bl 0x823ac670
	ctx.lr = 0x823B0418;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0448
	if (ctx.cr6.eq) goto loc_823B0448;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0434;
	sub_823AC608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0440;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823B0448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1030
	ctx.lr = 0x823B0450;
	sub_823A1030(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq cr6,0x823b049c
	if (ctx.cr6.eq) goto loc_823B049C;
loc_823B0464:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a14b0
	ctx.lr = 0x823B0478;
	sub_823A14B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0490
	if (ctx.cr6.eq) goto loc_823B0490;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a12c8
	ctx.lr = 0x823B0490;
	sub_823A12C8(ctx, base);
loc_823B0490:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823b0464
	if (ctx.cr6.lt) goto loc_823B0464;
loc_823B049C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1028
	ctx.lr = 0x823B04A4;
	sub_823A1028(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b050c
	if (ctx.cr6.eq) goto loc_823B050C;
loc_823B04B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a11e8
	ctx.lr = 0x823B04C0;
	sub_823A11E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b04e8
	if (ctx.cr6.eq) goto loc_823B04E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1240
	ctx.lr = 0x823B04D8;
	sub_823A1240(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r24
	ctx.r10.s64 = ctx.r24.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823b04fc
	if (ctx.cr6.eq) goto loc_823B04FC;
loc_823B04E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1310
	ctx.lr = 0x823B04F4;
	sub_823A1310(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0500
	if (ctx.cr6.eq) goto loc_823B0500;
loc_823B04FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823B0500:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823b04b4
	if (ctx.cr6.lt) goto loc_823B04B4;
loc_823B050C:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823b0528
	if (!ctx.cr6.eq) goto loc_823B0528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1038
	ctx.lr = 0x823B051C;
	sub_823A1038(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0528;
	sub_823AC5B8(ctx, base);
loc_823B0528:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823B0530"))) PPC_WEAK_FUNC(sub_823B0530);
PPC_FUNC_IMPL(__imp__sub_823B0530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B0538;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B0544;
	sub_823AC6B8(ctx, base);
	// bl 0x823a1e50
	ctx.lr = 0x823B0548;
	sub_823A1E50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B0550;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B0558;
	sub_823AC6B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B0560;
	sub_823AC6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b0590
	if (!ctx.cr6.eq) goto loc_823B0590;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B057C;
	sub_823AC608(ctx, base);
loc_823B057C:
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0588;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B0590:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B05A0;
	sub_823585A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8240cdf8
	ctx.lr = 0x823B05AC;
	sub_8240CDF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b0640
	if (ctx.cr6.eq) goto loc_823B0640;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0640
	if (ctx.cr6.eq) goto loc_823B0640;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823B05CC;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b057c
	if (!ctx.cr6.eq) goto loc_823B057C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b057c
	if (ctx.cr6.eq) goto loc_823B057C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b0608
	if (!ctx.cr6.eq) goto loc_823B0608;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0600;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B0608:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B061C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B062C;
	sub_823AC608(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0638;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B0640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B0648;
	sub_823AC668(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0654;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B065C"))) PPC_WEAK_FUNC(sub_823B065C);
PPC_FUNC_IMPL(__imp__sub_823B065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0660"))) PPC_WEAK_FUNC(sub_823B0660);
PPC_FUNC_IMPL(__imp__sub_823B0660) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823B067C;
	sub_823A1E50(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b0694
	if (!ctx.cr6.eq) goto loc_823B0694;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b06b8
	if (ctx.cr6.eq) goto loc_823B06B8;
loc_823B0694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac660
	ctx.lr = 0x823B069C;
	sub_823AC660(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823b06b8
	if (!ctx.cr6.gt) goto loc_823B06B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x823ac658
	ctx.lr = 0x823B06B8;
	sub_823AC658(ctx, base);
loc_823B06B8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b06f4
	if (ctx.cr6.eq) goto loc_823B06F4;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B06CC;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0768
	if (ctx.cr6.eq) goto loc_823B0768;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b075c
	if (ctx.cr6.eq) goto loc_823B075C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B06F0;
	sub_823AC608(ctx, base);
	// b 0x823b075c
	goto loc_823B075C;
loc_823B06F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B06FC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0744
	if (ctx.cr6.eq) goto loc_823B0744;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0718;
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
	ctx.lr = 0x823B072C;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b0768
	if (!ctx.cr6.eq) goto loc_823B0768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B0740;
	sub_82256CC0(ctx, base);
	// b 0x823b075c
	goto loc_823B075C;
loc_823B0744:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b0768
	if (ctx.cr6.eq) goto loc_823B0768;
	// bl 0x823a0f10
	ctx.lr = 0x823B0754;
	sub_823A0F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a4128
	ctx.lr = 0x823B075C;
	sub_823A4128(ctx, base);
loc_823B075C:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0768;
	sub_823AC5B8(ctx, base);
loc_823B0768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0780"))) PPC_WEAK_FUNC(sub_823B0780);
PPC_FUNC_IMPL(__imp__sub_823B0780) {
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
	ctx.lr = 0x823B0798;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B07AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b07cc
	if (ctx.cr6.eq) goto loc_823B07CC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B07C8;
	sub_823AC608(ctx, base);
	// b 0x823b080c
	goto loc_823B080C;
loc_823B07CC:
	// bl 0x823ac670
	ctx.lr = 0x823B07D0;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b080c
	if (!ctx.cr6.eq) goto loc_823B080C;
	// bl 0x823a1e50
	ctx.lr = 0x823B07DC;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0818
	if (ctx.cr6.eq) goto loc_823B0818;
loc_823B080C:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0818;
	sub_823AC5B8(ctx, base);
loc_823B0818:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B082C"))) PPC_WEAK_FUNC(sub_823B082C);
PPC_FUNC_IMPL(__imp__sub_823B082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0830"))) PPC_WEAK_FUNC(sub_823B0830);
PPC_FUNC_IMPL(__imp__sub_823B0830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B0850;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bgt cr6,0x823b09dc
	if (ctx.cr6.gt) goto loc_823B09DC;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2160
	ctx.r12.s64 = ctx.r12.s64 + 2160;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,2248(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2248);
	// lwz r17,2260(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2260);
	// lwz r17,2272(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2272);
	// lwz r17,2284(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2284);
	// lwz r17,2296(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2296);
	// lwz r17,2308(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2308);
	// lwz r17,2320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2320);
	// lwz r17,2332(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2332);
	// lwz r17,2344(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2344);
	// lwz r17,2356(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2356);
	// lwz r17,2368(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2368);
	// lwz r17,2380(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2380);
	// lwz r17,2392(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2392);
	// lwz r17,2404(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2404);
	// lwz r17,2416(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2416);
	// lwz r17,2476(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2476);
	// lwz r17,2488(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2488);
	// lwz r17,2500(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2500);
	// lwz r17,2428(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2428);
	// lwz r17,2452(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2452);
	// lwz r17,2464(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2464);
	// lwz r17,2512(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2512);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af458
	ctx.lr = 0x823B08D0;
	sub_823AF458(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823afd08
	ctx.lr = 0x823B08DC;
	sub_823AFD08(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823afde0
	ctx.lr = 0x823B08E8;
	sub_823AFDE0(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af4c8
	ctx.lr = 0x823B08F4;
	sub_823AF4C8(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823afef0
	ctx.lr = 0x823B0900;
	sub_823AFEF0(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0078
	ctx.lr = 0x823B090C;
	sub_823B0078(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b00f8
	ctx.lr = 0x823B0918;
	sub_823B00F8(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af530
	ctx.lr = 0x823B0924;
	sub_823AF530(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af660
	ctx.lr = 0x823B0930;
	sub_823AF660(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0280
	ctx.lr = 0x823B093C;
	sub_823B0280(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af6e0
	ctx.lr = 0x823B0948;
	sub_823AF6E0(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af818
	ctx.lr = 0x823B0954;
	sub_823AF818(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af898
	ctx.lr = 0x823B0960;
	sub_823AF898(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af908
	ctx.lr = 0x823B096C;
	sub_823AF908(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b03a8
	ctx.lr = 0x823B0978;
	sub_823B03A8(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B0984;
	sub_823AC668(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0990;
	sub_823AC5B8(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0780
	ctx.lr = 0x823B099C;
	sub_823B0780(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823afa88
	ctx.lr = 0x823B09A8;
	sub_823AFA88(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0530
	ctx.lr = 0x823B09B4;
	sub_823B0530(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0660
	ctx.lr = 0x823B09C0;
	sub_823B0660(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823af9d8
	ctx.lr = 0x823B09CC;
	sub_823AF9D8(ctx, base);
	// b 0x823b09dc
	goto loc_823B09DC;
	// bl 0x823a0f10
	ctx.lr = 0x823B09D4;
	sub_823A0F10(ctx, base);
	// bl 0x823a1038
	ctx.lr = 0x823B09D8;
	sub_823A1038(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B09DC:
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

__attribute__((alias("__imp__sub_823B09F8"))) PPC_WEAK_FUNC(sub_823B09F8);
PPC_FUNC_IMPL(__imp__sub_823B09F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0A0C;
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

__attribute__((alias("__imp__sub_823B0A20"))) PPC_WEAK_FUNC(sub_823B0A20);
PPC_FUNC_IMPL(__imp__sub_823B0A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B0A28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B0A34;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1048
	ctx.lr = 0x823B0A3C;
	sub_823A1048(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0a74
	if (ctx.cr6.eq) goto loc_823B0A74;
loc_823B0A4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1528
	ctx.lr = 0x823B0A5C;
	sub_823A1528(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x823b0a8c
	if (ctx.cr6.eq) goto loc_823B0A8C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823b0a4c
	if (ctx.cr6.lt) goto loc_823B0A4C;
loc_823B0A74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a1870
	ctx.lr = 0x823B0A80;
	sub_823A1870(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B0A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B0A98"))) PPC_WEAK_FUNC(sub_823B0A98);
PPC_FUNC_IMPL(__imp__sub_823B0A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b0aec
	if (ctx.cr6.eq) goto loc_823B0AEC;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x823c1170
	ctx.lr = 0x823B0AC4;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0bec
	if (ctx.cr6.eq) goto loc_823B0BEC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b0be0
	if (ctx.cr6.eq) goto loc_823B0BE0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0AE8;
	sub_823AC608(ctx, base);
	// b 0x823b0be0
	goto loc_823B0BE0;
loc_823B0AEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B0AF4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b0b6c
	if (!ctx.cr6.eq) goto loc_823B0B6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b0b6c
	if (!ctx.cr6.eq) goto loc_823B0B6C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b0bec
	if (ctx.cr6.eq) goto loc_823B0BEC;
	// bl 0x82256ce8
	ctx.lr = 0x823B0B2C;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b0b64
	if (ctx.cr6.eq) goto loc_823B0B64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0B60;
	sub_823AC608(ctx, base);
	// b 0x823b0be0
	goto loc_823B0BE0;
loc_823B0B64:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823b0be8
	goto loc_823B0BE8;
loc_823B0B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B0B74;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b0b8c
	if (ctx.cr6.eq) goto loc_823B0B8C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b0bb0
	goto loc_823B0BB0;
loc_823B0B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0bb8
	if (ctx.cr6.eq) goto loc_823B0BB8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B0BB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B0BB8;
	sub_823AC608(ctx, base);
loc_823B0BB8:
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823c12c0
	ctx.lr = 0x823B0BCC;
	sub_823C12C0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b0bec
	if (!ctx.cr6.eq) goto loc_823B0BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B0BE0;
	sub_82256CC0(ctx, base);
loc_823B0BE0:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B0BE8:
	// bl 0x823ac5b8
	ctx.lr = 0x823B0BEC;
	sub_823AC5B8(ctx, base);
loc_823B0BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0C04"))) PPC_WEAK_FUNC(sub_823B0C04);
PPC_FUNC_IMPL(__imp__sub_823B0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0C08"))) PPC_WEAK_FUNC(sub_823B0C08);
PPC_FUNC_IMPL(__imp__sub_823B0C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b0c5c
	if (ctx.cr6.eq) goto loc_823B0C5C;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x823c1170
	ctx.lr = 0x823B0C34;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0d5c
	if (ctx.cr6.eq) goto loc_823B0D5C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b0d50
	if (ctx.cr6.eq) goto loc_823B0D50;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0C58;
	sub_823AC608(ctx, base);
	// b 0x823b0d50
	goto loc_823B0D50;
loc_823B0C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B0C64;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b0cdc
	if (!ctx.cr6.eq) goto loc_823B0CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b0cdc
	if (!ctx.cr6.eq) goto loc_823B0CDC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b0d5c
	if (ctx.cr6.eq) goto loc_823B0D5C;
	// bl 0x82256ce8
	ctx.lr = 0x823B0C9C;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b0cd4
	if (ctx.cr6.eq) goto loc_823B0CD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B0CD0;
	sub_823AC608(ctx, base);
	// b 0x823b0d50
	goto loc_823B0D50;
loc_823B0CD4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823b0d58
	goto loc_823B0D58;
loc_823B0CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B0CE4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b0cfc
	if (ctx.cr6.eq) goto loc_823B0CFC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b0d20
	goto loc_823B0D20;
loc_823B0CFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B0D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0d28
	if (ctx.cr6.eq) goto loc_823B0D28;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B0D20:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B0D28;
	sub_823AC608(ctx, base);
loc_823B0D28:
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823c12c0
	ctx.lr = 0x823B0D3C;
	sub_823C12C0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b0d5c
	if (!ctx.cr6.eq) goto loc_823B0D5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B0D50;
	sub_82256CC0(ctx, base);
loc_823B0D50:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B0D58:
	// bl 0x823ac5b8
	ctx.lr = 0x823B0D5C;
	sub_823AC5B8(ctx, base);
loc_823B0D5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0D74"))) PPC_WEAK_FUNC(sub_823B0D74);
PPC_FUNC_IMPL(__imp__sub_823B0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0D78"))) PPC_WEAK_FUNC(sub_823B0D78);
PPC_FUNC_IMPL(__imp__sub_823B0D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B0D80;
	sub_82248784(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0e08
	if (ctx.cr6.eq) goto loc_823B0E08;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b0e08
	if (!ctx.cr6.gt) goto loc_823B0E08;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-26876
	ctx.r27.s64 = ctx.r11.s64 + -26876;
loc_823B0DB4:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b0df4
	if (ctx.cr6.eq) goto loc_823B0DF4;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82248910
	ctx.lr = 0x823B0DF4;
	sub_82248910(ctx, base);
loc_823B0DF4:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b0db4
	if (ctx.cr6.lt) goto loc_823B0DB4;
loc_823B0E08:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B0E14;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B0E1C"))) PPC_WEAK_FUNC(sub_823B0E1C);
PPC_FUNC_IMPL(__imp__sub_823B0E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0E20"))) PPC_WEAK_FUNC(sub_823B0E20);
PPC_FUNC_IMPL(__imp__sub_823B0E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823b0e98
	if (!ctx.cr6.gt) goto loc_823B0E98;
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r7,0
	ctx.r7.s64 = 0;
loc_823B0E50:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_823B0E5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0e7c
	if (!ctx.cr0.eq) goto loc_823B0E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b0e5c
	if (!ctx.cr6.eq) goto loc_823B0E5C;
loc_823B0E7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b0ebc
	if (ctx.cr6.eq) goto loc_823B0EBC;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b0e50
	if (ctx.cr6.lt) goto loc_823B0E50;
loc_823B0E98:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82358508
	ctx.lr = 0x823B0EAC;
	sub_82358508(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_823B0EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0ED4"))) PPC_WEAK_FUNC(sub_823B0ED4);
PPC_FUNC_IMPL(__imp__sub_823B0ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0ED8"))) PPC_WEAK_FUNC(sub_823B0ED8);
PPC_FUNC_IMPL(__imp__sub_823B0ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0f40
	if (ctx.cr6.eq) goto loc_823B0F40;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823b0f40
	if (!ctx.cr6.gt) goto loc_823B0F40;
loc_823B0EFC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_823B0F08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0f28
	if (!ctx.cr0.eq) goto loc_823B0F28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b0f08
	if (!ctx.cr6.eq) goto loc_823B0F08;
loc_823B0F28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823b0efc
	if (ctx.cr6.lt) goto loc_823B0EFC;
loc_823B0F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0F48"))) PPC_WEAK_FUNC(sub_823B0F48);
PPC_FUNC_IMPL(__imp__sub_823B0F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B0F50;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x823B0F64;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r9,r10,-26832
	ctx.r9.s64 = ctx.r10.s64 + -26832;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B0F78;
	sub_823C10A0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r30,r31,212
	ctx.r30.s64 = ctx.r31.s64 + 212;
	// addi r7,r8,30604
	ctx.r7.s64 = ctx.r8.s64 + 30604;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// bl 0x82370088
	ctx.lr = 0x823B0F90;
	sub_82370088(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r29,r31,260
	ctx.r29.s64 = ctx.r31.s64 + 260;
	// addi r5,r6,30588
	ctx.r5.s64 = ctx.r6.s64 + 30588;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r5,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r5.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823585a0
	ctx.lr = 0x823B0FAC;
	sub_823585A0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r28,r31,272
	ctx.r28.s64 = ctx.r31.s64 + 272;
	// addi r11,r4,30596
	ctx.r11.s64 = ctx.r4.s64 + 30596;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823585a0
	ctx.lr = 0x823B0FC8;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823B1004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823B1018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823B102C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B1038"))) PPC_WEAK_FUNC(sub_823B1038);
PPC_FUNC_IMPL(__imp__sub_823B1038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-26832
	ctx.r10.s64 = ctx.r11.s64 + -26832;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823b1074
	if (ctx.cr6.eq) goto loc_823B1074;
	// bl 0x82357128
	ctx.lr = 0x823B1070;
	sub_82357128(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_823B1074:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1088
	if (ctx.cr6.eq) goto loc_823B1088;
	// bl 0x82357128
	ctx.lr = 0x823B1084;
	sub_82357128(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_823B1088:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b109c
	if (ctx.cr6.eq) goto loc_823B109C;
	// bl 0x82357128
	ctx.lr = 0x823B1098;
	sub_82357128(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
loc_823B109C:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b10b0
	if (ctx.cr6.eq) goto loc_823B10B0;
	// bl 0x82357128
	ctx.lr = 0x823B10AC;
	sub_82357128(ctx, base);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
loc_823B10B0:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b10c4
	if (ctx.cr6.eq) goto loc_823B10C4;
	// bl 0x82357128
	ctx.lr = 0x823B10C0;
	sub_82357128(ctx, base);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
loc_823B10C4:
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
	// addi r6,r9,30604
	ctx.r6.s64 = ctx.r9.s64 + 30604;
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// stw r7,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// stw r6,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x823B10F4;
	sub_823700D8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823c1100
	ctx.lr = 0x823B10FC;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B1104;
	sub_823C13B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B111C"))) PPC_WEAK_FUNC(sub_823B111C);
PPC_FUNC_IMPL(__imp__sub_823B111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1120"))) PPC_WEAK_FUNC(sub_823B1120);
PPC_FUNC_IMPL(__imp__sub_823B1120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B1128;
	sub_8224878C(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B1134;
	sub_823A0F10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a1048
	ctx.lr = 0x823B113C;
	sub_823A1048(ctx, base);
	// addic. r30,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r30.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x823b11b8
	if (ctx.cr0.lt) goto loc_823B11B8;
loc_823B1144:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a1528
	ctx.lr = 0x823B1154;
	sub_823A1528(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b1190
	if (!ctx.cr6.gt) goto loc_823B1190;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_823B1170:
	// ldx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x823b11b0
	if (ctx.cr6.eq) goto loc_823B11B0;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823b1170
	if (ctx.cr6.lt) goto loc_823B1170;
loc_823B1190:
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234e9a0
	ctx.lr = 0x823B11A4;
	sub_8234E9A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a14e0
	ctx.lr = 0x823B11B0;
	sub_823A14E0(ctx, base);
loc_823B11B0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823b1144
	if (!ctx.cr0.lt) goto loc_823B1144;
loc_823B11B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x823B11D4;
	sub_82248F70(ctx, base);
	// lbz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82256578
	ctx.lr = 0x823B11E4;
	sub_82256578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b122c
	if (ctx.cr6.eq) goto loc_823B122C;
loc_823B11F0:
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
	ctx.lr = 0x823B1208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B1218;
	sub_823AC608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1224;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B122C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b128c
	if (!ctx.cr6.gt) goto loc_823B128C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
loc_823B1248:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ldx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// cmpld cr6,r7,r10
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x823b1270
	if (!ctx.cr6.eq) goto loc_823B1270;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x823b1278
	goto loc_823B1278;
loc_823B1270:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823B1278:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b1248
	if (ctx.cr6.lt) goto loc_823B1248;
loc_823B128C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b12cc
	if (ctx.cr6.eq) goto loc_823B12CC;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_823B1298:
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234e860
	ctx.lr = 0x823B12AC;
	sub_8234E860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b12c0
	if (!ctx.cr6.eq) goto loc_823B12C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823b0a20
	ctx.lr = 0x823B12C0;
	sub_823B0A20(ctx, base);
loc_823B12C0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x823b1298
	if (!ctx.cr0.eq) goto loc_823B1298;
loc_823B12CC:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234e5a8
	ctx.lr = 0x823B12F4;
	sub_8234E5A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b133c
	if (ctx.cr6.eq) goto loc_823B133C;
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
	ctx.lr = 0x823B1318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B1328;
	sub_823AC608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1334;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B133C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b1370
	if (!ctx.cr6.eq) goto loc_823B1370;
loc_823B1348:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B135C;
	sub_823AC608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1368;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B1370:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B1378;
	sub_823570E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823B1380;
	sub_823570F0(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B138C;
	sub_823570E0(ctx, base);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1348
	if (ctx.cr6.eq) goto loc_823B1348;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82358590
	ctx.lr = 0x823B13A4;
	sub_82358590(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r7,r31,164
	ctx.r7.s64 = ctx.r31.s64 + 164;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B13B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b13b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B13B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256f58
	ctx.lr = 0x823B13D4;
	sub_82256F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b13e8
	if (ctx.cr6.eq) goto loc_823B13E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b11f0
	if (!ctx.cr6.eq) goto loc_823B11F0;
loc_823B13E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B13F0;
	sub_823AC668(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B13FC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B1404"))) PPC_WEAK_FUNC(sub_823B1404);
PPC_FUNC_IMPL(__imp__sub_823B1404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1408"))) PPC_WEAK_FUNC(sub_823B1408);
PPC_FUNC_IMPL(__imp__sub_823B1408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B1410;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b1480
	if (!ctx.cr6.gt) goto loc_823B1480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
loc_823B143C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B1440:
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b14a0
	if (!ctx.cr6.eq) goto loc_823B14A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x823b1440
	if (ctx.cr6.lt) goto loc_823B1440;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
loc_823B1468:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,164
	ctx.r29.s64 = ctx.r29.s64 + 164;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b143c
	if (ctx.cr6.lt) goto loc_823B143C;
loc_823B1480:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823b14c0
	if (ctx.cr6.gt) goto loc_823B14C0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1498;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B14A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x823b0e20
	ctx.lr = 0x823B14BC;
	sub_823B0E20(ctx, base);
	// b 0x823b1468
	goto loc_823B1468;
loc_823B14C0:
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8240d130
	ctx.lr = 0x823B14DC;
	sub_8240D130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x823b15a0
	if (!ctx.cr6.eq) goto loc_823B15A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b15a0
	if (ctx.cr6.eq) goto loc_823B15A0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B14FC;
	sub_823570E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823570f0
	ctx.lr = 0x823B1504;
	sub_823570F0(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B1510;
	sub_823570E0(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b152c
	if (!ctx.cr6.eq) goto loc_823B152C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b15c0
	goto loc_823B15C0;
loc_823B152C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82358590
	ctx.lr = 0x823B1538;
	sub_82358590(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r8,r31,164
	ctx.r8.s64 = ctx.r31.s64 + 164;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B154C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b154c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B154C;
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x8240d130
	ctx.lr = 0x823B1570;
	sub_8240D130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b1584
	if (ctx.cr6.eq) goto loc_823B1584;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b15a0
	if (!ctx.cr6.eq) goto loc_823B15A0;
loc_823B1584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B158C;
	sub_823AC668(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1598;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B15A0:
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
	ctx.lr = 0x823B15B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823B15C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B15C8;
	sub_823AC608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B15D4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B15DC"))) PPC_WEAK_FUNC(sub_823B15DC);
PPC_FUNC_IMPL(__imp__sub_823B15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B15E0"))) PPC_WEAK_FUNC(sub_823B15E0);
PPC_FUNC_IMPL(__imp__sub_823B15E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1038
	ctx.lr = 0x823B1600;
	sub_823B1038(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1618
	if (ctx.cr6.eq) goto loc_823B1618;
	// bl 0x82357128
	ctx.lr = 0x823B1614;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B1618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1630"))) PPC_WEAK_FUNC(sub_823B1630);
PPC_FUNC_IMPL(__imp__sub_823B1630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B1650;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823b16f4
	if (ctx.cr6.gt) goto loc_823B16F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b169c
	// bdzf 4*cr6+eq,0x823b16a8
	// bdzf 4*cr6+eq,0x823b16b4
	// bdzf 4*cr6+eq,0x823b16c4
	// bdzf 4*cr6+eq,0x823b16d0
	// bdzf 4*cr6+eq,0x823b16dc
	// bdzf 4*cr6+eq,0x823b16f0
	// bne cr6,0x823b16e8
	if (!ctx.cr6.eq) goto loc_823B16E8;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x8234e728
	ctx.lr = 0x823B168C;
	sub_8234E728(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1698;
	sub_823AC5B8(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B169C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1120
	ctx.lr = 0x823B16A4;
	sub_823B1120(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0a98
	ctx.lr = 0x823B16B0;
	sub_823B0A98(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16B4:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B16C0;
	sub_823AC5B8(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1408
	ctx.lr = 0x823B16CC;
	sub_823B1408(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0c08
	ctx.lr = 0x823B16D8;
	sub_823B0C08(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b0d78
	ctx.lr = 0x823B16E4;
	sub_823B0D78(ctx, base);
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16E8:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x823b16f4
	goto loc_823B16F4;
loc_823B16F0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B16F4:
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

__attribute__((alias("__imp__sub_823B1710"))) PPC_WEAK_FUNC(sub_823B1710);
PPC_FUNC_IMPL(__imp__sub_823B1710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b1784
	if (ctx.cr6.eq) goto loc_823B1784;
	// addi r4,r3,216
	ctx.r4.s64 = ctx.r3.s64 + 216;
	// addi r3,r5,28
	ctx.r3.s64 = ctx.r5.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x823B1750;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,263
	ctx.r11.s64 = ctx.r31.s64 + 263;
	// addi r10,r30,75
	ctx.r10.s64 = ctx.r30.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B1760:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823b1760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1760;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B177C;
	sub_82248A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b1788
	goto loc_823B1788;
loc_823B1784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B17A0"))) PPC_WEAK_FUNC(sub_823B17A0);
PPC_FUNC_IMPL(__imp__sub_823B17A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B17A8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B17B4;
	sub_823AC6B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b193c
	if (ctx.cr6.eq) goto loc_823B193C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x823b193c
	if (!ctx.cr6.eq) goto loc_823B193C;
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// bl 0x82370360
	ctx.lr = 0x823B17E0;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r27,79
	ctx.r11.s64 = ctx.r27.s64 + 79;
	// addi r10,r31,263
	ctx.r10.s64 = ctx.r31.s64 + 263;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B17F0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823b17f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B17F0;
	// addi r4,r27,92
	ctx.r4.s64 = ctx.r27.s64 + 92;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B180C;
	sub_82248A40(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// ble cr6,0x823b193c
	if (!ctx.cr6.gt) goto loc_823B193C;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bgt cr6,0x823b193c
	if (ctx.cr6.gt) goto loc_823B193C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B182C;
	sub_823570E0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823570f0
	ctx.lr = 0x823B1838;
	sub_823570F0(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B1844;
	sub_823570E0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b1858
	if (!ctx.cr6.eq) goto loc_823B1858;
loc_823B1850:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x823b1940
	goto loc_823B1940;
loc_823B1858:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358590
	ctx.lr = 0x823B1868;
	sub_82358590(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B1870;
	sub_823570E0(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823570f0
	ctx.lr = 0x823B187C;
	sub_823570F0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B1888;
	sub_823570E0(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b1850
	if (ctx.cr6.eq) goto loc_823B1850;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b18f4
	if (!ctx.cr6.gt) goto loc_823B18F4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B18AC:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82357068
	ctx.lr = 0x823B18BC;
	sub_82357068(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356608
	ctx.lr = 0x823B18C4;
	sub_82356608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r9,r29,r10
	PPC_STORE_U64(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u64);
	// bl 0x82356eb8
	ctx.lr = 0x823B18DC;
	sub_82356EB8(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b18ac
	if (ctx.cr6.lt) goto loc_823B18AC;
loc_823B18F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B18FC;
	sub_823570E0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823570f0
	ctx.lr = 0x823B1908;
	sub_823570F0(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B1914;
	sub_823570E0(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1850
	if (ctx.cr6.eq) goto loc_823B1850;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358590
	ctx.lr = 0x823B1930;
	sub_82358590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B193C:
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_823B1940:
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B1950;
	sub_823AC608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B195C;
	sub_823AC5B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B1968"))) PPC_WEAK_FUNC(sub_823B1968);
PPC_FUNC_IMPL(__imp__sub_823B1968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823B1970;
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
	// bne cr6,0x823b1988
	if (!ctx.cr6.eq) goto loc_823B1988;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823B1988:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823b19a0
	if (!ctx.cr0.eq) goto loc_823B19A0;
loc_823B1994:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B19A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B19A8;
	sub_823570E0(ctx, base);
	// mulli r30,r26,104
	ctx.r30.s64 = ctx.r26.s64 * 104;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823B19B8;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B19C4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823b1994
	if (ctx.cr6.eq) goto loc_823B1994;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B19D8;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1a6c
	if (ctx.cr6.eq) goto loc_823B1A6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b1a54
	if (!ctx.cr6.gt) goto loc_823B1A54;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823B19FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b1a10
	if (ctx.cr6.eq) goto loc_823B1A10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82396db8
	ctx.lr = 0x823B1A10;
	sub_82396DB8(ctx, base);
loc_823B1A10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82396cc8
	ctx.lr = 0x823B1A20;
	sub_82396CC8(ctx, base);
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
	ctx.lr = 0x823B1A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b19fc
	if (ctx.cr6.lt) goto loc_823B19FC;
loc_823B1A54:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1a6c
	if (ctx.cr6.eq) goto loc_823B1A6C;
	// bl 0x82357240
	ctx.lr = 0x823B1A64;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823B1A6C:
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

__attribute__((alias("__imp__sub_823B1A80"))) PPC_WEAK_FUNC(sub_823B1A80);
PPC_FUNC_IMPL(__imp__sub_823B1A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B1A88;
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
	// bgt cr6,0x823b1ac4
	if (ctx.cr6.gt) goto loc_823B1AC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b1968
	ctx.lr = 0x823B1AB0;
	sub_823B1968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b1ac4
	if (!ctx.cr6.eq) goto loc_823B1AC4;
loc_823B1AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B1AC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1ab8
	if (ctx.cr6.eq) goto loc_823B1AB8;
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823b1ae8
	if (ctx.cr0.eq) goto loc_823B1AE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82396db8
	ctx.lr = 0x823B1AE8;
	sub_82396DB8(ctx, base);
loc_823B1AE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82396cc8
	ctx.lr = 0x823B1AF4;
	sub_82396CC8(ctx, base);
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

__attribute__((alias("__imp__sub_823B1B0C"))) PPC_WEAK_FUNC(sub_823B1B0C);
PPC_FUNC_IMPL(__imp__sub_823B1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1B10"))) PPC_WEAK_FUNC(sub_823B1B10);
PPC_FUNC_IMPL(__imp__sub_823B1B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823B1B18;
	sub_8224877C(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b1d2c
	if (ctx.cr6.eq) goto loc_823B1D2C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x823b1d2c
	if (!ctx.cr6.eq) goto loc_823B1D2C;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823b1bd0
	if (ctx.cr6.gt) goto loc_823B1BD0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b1bc4
	if (!ctx.cr6.gt) goto loc_823B1BC4;
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823B1B58:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x823724d8
	ctx.lr = 0x823B1B60;
	sub_823724D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356e70
	ctx.lr = 0x823B1B68;
	sub_82356E70(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356f88
	ctx.lr = 0x823B1B78;
	sub_82356F88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82357038
	ctx.lr = 0x823B1B84;
	sub_82357038(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1710
	ctx.lr = 0x823B1B94;
	sub_823B1710(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b1a80
	ctx.lr = 0x823B1BA0;
	sub_823B1A80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823B1BA8;
	sub_82356EB8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82372570
	ctx.lr = 0x823B1BB0;
	sub_82372570(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b1b58
	if (ctx.cr6.lt) goto loc_823B1B58;
loc_823B1BC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B1BD0:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1d2c
	if (ctx.cr6.eq) goto loc_823B1D2C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b1d20
	if (!ctx.cr6.gt) goto loc_823B1D20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r4,8
	ctx.r26.s64 = ctx.r4.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r25,r11,30604
	ctx.r25.s64 = ctx.r11.s64 + 30604;
loc_823B1C00:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823724d8
	ctx.lr = 0x823B1C08;
	sub_823724D8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823b1cb8
	if (!ctx.cr6.eq) goto loc_823B1CB8;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x823b0ed8
	ctx.lr = 0x823B1C2C;
	sub_823B0ED8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b1cc8
	if (ctx.cr6.eq) goto loc_823B1CC8;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82370088
	ctx.lr = 0x823B1C44;
	sub_82370088(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82370088
	ctx.lr = 0x823B1C4C;
	sub_82370088(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82370208
	ctx.lr = 0x823B1C58;
	sub_82370208(ctx, base);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82370088
	ctx.lr = 0x823B1C64;
	sub_82370088(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82370360
	ctx.lr = 0x823B1C70;
	sub_82370360(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82370360
	ctx.lr = 0x823B1C7C;
	sub_82370360(ctx, base);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823700d8
	ctx.lr = 0x823B1C88;
	sub_823700D8(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,332(r1)
	PPC_STORE_U64(ctx.r1.u32 + 332, ctx.r11.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B1CA0;
	sub_82248A40(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823700d8
	ctx.lr = 0x823B1CA8;
	sub_823700D8(ctx, base);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x823700d8
	ctx.lr = 0x823B1CB4;
	sub_823700D8(ctx, base);
	// b 0x823b1cc8
	goto loc_823B1CC8;
loc_823B1CB8:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1710
	ctx.lr = 0x823B1CC8;
	sub_823B1710(ctx, base);
loc_823B1CC8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356e70
	ctx.lr = 0x823B1CD0;
	sub_82356E70(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82356f88
	ctx.lr = 0x823B1CE0;
	sub_82356F88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82357038
	ctx.lr = 0x823B1CEC;
	sub_82357038(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b1a80
	ctx.lr = 0x823B1CF8;
	sub_823B1A80(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B1D00;
	sub_82356EB8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82372570
	ctx.lr = 0x823B1D08;
	sub_82372570(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,164
	ctx.r29.s64 = ctx.r29.s64 + 164;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b1c00
	if (ctx.cr6.lt) goto loc_823B1C00;
loc_823B1D20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B1D2C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B1D40;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823B1D4C"))) PPC_WEAK_FUNC(sub_823B1D4C);
PPC_FUNC_IMPL(__imp__sub_823B1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1D50"))) PPC_WEAK_FUNC(sub_823B1D50);
PPC_FUNC_IMPL(__imp__sub_823B1D50) {
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
	ctx.lr = 0x823B1D70;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-26760
	ctx.r8.s64 = ctx.r10.s64 + -26760;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823B1D9C"))) PPC_WEAK_FUNC(sub_823B1D9C);
PPC_FUNC_IMPL(__imp__sub_823B1D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1DA0"))) PPC_WEAK_FUNC(sub_823B1DA0);
PPC_FUNC_IMPL(__imp__sub_823B1DA0) {
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
	ctx.lr = 0x823B1DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b1de8
	if (ctx.cr6.eq) goto loc_823B1DE8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B1DE0;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b1df0
	goto loc_823B1DF0;
loc_823B1DE8:
	// bl 0x823ac668
	ctx.lr = 0x823B1DEC;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_823B1DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1DF8;
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

__attribute__((alias("__imp__sub_823B1E0C"))) PPC_WEAK_FUNC(sub_823B1E0C);
PPC_FUNC_IMPL(__imp__sub_823B1E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1E10"))) PPC_WEAK_FUNC(sub_823B1E10);
PPC_FUNC_IMPL(__imp__sub_823B1E10) {
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
	ctx.lr = 0x823B1E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b1e5c
	if (ctx.cr6.eq) goto loc_823B1E5C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B1E50;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b1e60
	goto loc_823B1E60;
loc_823B1E5C:
	// li r4,4
	ctx.r4.s64 = 4;
loc_823B1E60:
	// bl 0x823ac5b8
	ctx.lr = 0x823B1E64;
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

__attribute__((alias("__imp__sub_823B1E78"))) PPC_WEAK_FUNC(sub_823B1E78);
PPC_FUNC_IMPL(__imp__sub_823B1E78) {
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
	ctx.lr = 0x823B1E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b1ec0
	if (ctx.cr6.eq) goto loc_823B1EC0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B1EB8;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b1ec8
	goto loc_823B1EC8;
loc_823B1EC0:
	// bl 0x823ac668
	ctx.lr = 0x823B1EC4;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
loc_823B1EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1ED0;
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

__attribute__((alias("__imp__sub_823B1EE4"))) PPC_WEAK_FUNC(sub_823B1EE4);
PPC_FUNC_IMPL(__imp__sub_823B1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1EE8"))) PPC_WEAK_FUNC(sub_823B1EE8);
PPC_FUNC_IMPL(__imp__sub_823B1EE8) {
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
	ctx.lr = 0x823B1F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b1f30
	if (ctx.cr6.eq) goto loc_823B1F30;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B1F28;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b1f88
	goto loc_823B1F88;
loc_823B1F30:
	// bl 0x823ac670
	ctx.lr = 0x823B1F34;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b1f58
	if (ctx.cr6.eq) goto loc_823B1F58;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B1F50;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b1f88
	goto loc_823B1F88;
loc_823B1F58:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b1f90
	if (ctx.cr6.eq) goto loc_823B1F90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B1F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,10
	ctx.r4.s64 = 10;
	// bne cr6,0x823b1f88
	if (!ctx.cr6.eq) goto loc_823B1F88;
	// li r4,6
	ctx.r4.s64 = 6;
loc_823B1F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B1F90;
	sub_823AC5B8(ctx, base);
loc_823B1F90:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B1FA4"))) PPC_WEAK_FUNC(sub_823B1FA4);
PPC_FUNC_IMPL(__imp__sub_823B1FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1FA8"))) PPC_WEAK_FUNC(sub_823B1FA8);
PPC_FUNC_IMPL(__imp__sub_823B1FA8) {
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
	ctx.lr = 0x823B1FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b1ff4
	if (ctx.cr6.eq) goto loc_823B1FF4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B1FE8;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b1ff8
	goto loc_823B1FF8;
loc_823B1FF4:
	// li r4,7
	ctx.r4.s64 = 7;
loc_823B1FF8:
	// bl 0x823ac5b8
	ctx.lr = 0x823B1FFC;
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

__attribute__((alias("__imp__sub_823B2010"))) PPC_WEAK_FUNC(sub_823B2010);
PPC_FUNC_IMPL(__imp__sub_823B2010) {
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
	ctx.lr = 0x823B2034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b2058
	if (ctx.cr6.eq) goto loc_823B2058;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B2050;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b2060
	goto loc_823B2060;
loc_823B2058:
	// bl 0x823ac668
	ctx.lr = 0x823B205C;
	sub_823AC668(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
loc_823B2060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2068;
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

__attribute__((alias("__imp__sub_823B207C"))) PPC_WEAK_FUNC(sub_823B207C);
PPC_FUNC_IMPL(__imp__sub_823B207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2080"))) PPC_WEAK_FUNC(sub_823B2080);
PPC_FUNC_IMPL(__imp__sub_823B2080) {
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
	ctx.lr = 0x823B20A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b20c4
	if (ctx.cr6.eq) goto loc_823B20C4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B20C0;
	sub_823AC608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B20C4:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823ac5b8
	ctx.lr = 0x823B20CC;
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

__attribute__((alias("__imp__sub_823B20E0"))) PPC_WEAK_FUNC(sub_823B20E0);
PPC_FUNC_IMPL(__imp__sub_823B20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26760
	ctx.r10.s64 = ctx.r11.s64 + -26760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B210C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b2124
	if (ctx.cr6.eq) goto loc_823B2124;
	// bl 0x82357128
	ctx.lr = 0x823B2120;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B2124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B213C"))) PPC_WEAK_FUNC(sub_823B213C);
PPC_FUNC_IMPL(__imp__sub_823B213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2140"))) PPC_WEAK_FUNC(sub_823B2140);
PPC_FUNC_IMPL(__imp__sub_823B2140) {
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
	ctx.lr = 0x823B2158;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b219c
	if (ctx.cr6.eq) goto loc_823B219C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x823b219c
	if (!ctx.cr6.eq) goto loc_823B219C;
	// bl 0x823a1e50
	ctx.lr = 0x823B2170;
	sub_823A1E50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b2184
	if (!ctx.cr6.eq) goto loc_823B2184;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b21a4
	goto loc_823B21A4;
loc_823B2184:
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
loc_823B219C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B21A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B21B0;
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

__attribute__((alias("__imp__sub_823B21C8"))) PPC_WEAK_FUNC(sub_823B21C8);
PPC_FUNC_IMPL(__imp__sub_823B21C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B21D0;
	sub_8224878C(ctx, base);
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
	ctx.lr = 0x823B21E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b2218
	if (ctx.cr6.eq) goto loc_823B2218;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B2204;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2210;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B2218:
	// bl 0x823ac6b8
	ctx.lr = 0x823B221C;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823B2224;
	sub_823A1E50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B2230;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b2260
	if (ctx.cr6.eq) goto loc_823B2260;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B224C;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2258;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B2260:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b22ac
	if (ctx.cr6.eq) goto loc_823B22AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B22AC;
	sub_823AC5B8(ctx, base);
loc_823B22AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B22B4"))) PPC_WEAK_FUNC(sub_823B22B4);
PPC_FUNC_IMPL(__imp__sub_823B22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B22B8"))) PPC_WEAK_FUNC(sub_823B22B8);
PPC_FUNC_IMPL(__imp__sub_823B22B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B22C0;
	sub_8224878C(ctx, base);
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
	ctx.lr = 0x823B22D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b2308
	if (ctx.cr6.eq) goto loc_823B2308;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B22F4;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2300;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B2308:
	// bl 0x823ac6b8
	ctx.lr = 0x823B230C;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823B2314;
	sub_823A1E50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B2320;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b2350
	if (ctx.cr6.eq) goto loc_823B2350;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B233C;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2348;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B2350:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b2394
	if (ctx.cr6.eq) goto loc_823B2394;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2394;
	sub_823AC5B8(ctx, base);
loc_823B2394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B239C"))) PPC_WEAK_FUNC(sub_823B239C);
PPC_FUNC_IMPL(__imp__sub_823B239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B23A0"))) PPC_WEAK_FUNC(sub_823B23A0);
PPC_FUNC_IMPL(__imp__sub_823B23A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823b23b8
	if (ctx.cr6.eq) goto loc_823B23B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B23B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B23C8"))) PPC_WEAK_FUNC(sub_823B23C8);
PPC_FUNC_IMPL(__imp__sub_823B23C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B23E8;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823b24a4
	if (ctx.cr6.gt) goto loc_823B24A4;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9228
	ctx.r12.s64 = ctx.r12.s64 + 9228;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,9268(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9268);
	// lwz r17,9280(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9280);
	// lwz r17,9292(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9292);
	// lwz r17,9304(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9304);
	// lwz r17,9316(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9316);
	// lwz r17,9328(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9328);
	// lwz r17,9340(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9340);
	// lwz r17,9352(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9352);
	// lwz r17,9364(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9364);
	// lwz r17,9376(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1da0
	ctx.lr = 0x823B243C;
	sub_823B1DA0(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b21c8
	ctx.lr = 0x823B2448;
	sub_823B21C8(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1e10
	ctx.lr = 0x823B2454;
	sub_823B1E10(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1e78
	ctx.lr = 0x823B2460;
	sub_823B1E78(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1ee8
	ctx.lr = 0x823B246C;
	sub_823B1EE8(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b1fa8
	ctx.lr = 0x823B2478;
	sub_823B1FA8(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2010
	ctx.lr = 0x823B2484;
	sub_823B2010(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b22b8
	ctx.lr = 0x823B2490;
	sub_823B22B8(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2080
	ctx.lr = 0x823B249C;
	sub_823B2080(ctx, base);
	// b 0x823b24a4
	goto loc_823B24A4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B24A4:
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

__attribute__((alias("__imp__sub_823B24C0"))) PPC_WEAK_FUNC(sub_823B24C0);
PPC_FUNC_IMPL(__imp__sub_823B24C0) {
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
	ctx.lr = 0x823B24E0;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26688
	ctx.r9.s64 = ctx.r10.s64 + -26688;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B24F4;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823B251C;
	sub_823585A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823B2528;
	sub_823585A0(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x823585a0
	ctx.lr = 0x823B2534;
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

__attribute__((alias("__imp__sub_823B254C"))) PPC_WEAK_FUNC(sub_823B254C);
PPC_FUNC_IMPL(__imp__sub_823B254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2550"))) PPC_WEAK_FUNC(sub_823B2550);
PPC_FUNC_IMPL(__imp__sub_823B2550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,242(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 242);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-26688
	ctx.r10.s64 = ctx.r11.s64 + -26688;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823b258c
	if (ctx.cr6.eq) goto loc_823B258C;
	// bl 0x82357128
	ctx.lr = 0x823B2588;
	sub_82357128(ctx, base);
	// stw r30,242(r31)
	PPC_STORE_U32(ctx.r31.u32 + 242, ctx.r30.u32);
loc_823B258C:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b25a0
	if (ctx.cr6.eq) goto loc_823B25A0;
	// bl 0x82357128
	ctx.lr = 0x823B259C;
	sub_82357128(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
loc_823B25A0:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823B25A8;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B25B0;
	sub_823C13B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B25C8"))) PPC_WEAK_FUNC(sub_823B25C8);
PPC_FUNC_IMPL(__imp__sub_823B25C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b261c
	if (ctx.cr6.eq) goto loc_823B261C;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B25F4;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b26dc
	if (ctx.cr6.eq) goto loc_823B26DC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b26d0
	if (ctx.cr6.eq) goto loc_823B26D0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2618;
	sub_823AC608(ctx, base);
	// b 0x823b26d0
	goto loc_823B26D0;
loc_823B261C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B2624;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b265c
	if (!ctx.cr6.eq) goto loc_823B265C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B2640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b265c
	if (!ctx.cr6.eq) goto loc_823B265C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b26dc
	if (ctx.cr6.eq) goto loc_823B26DC;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823b26d4
	goto loc_823B26D4;
loc_823B265C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B2664;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b267c
	if (ctx.cr6.eq) goto loc_823B267C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b26a0
	goto loc_823B26A0;
loc_823B267C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B268C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b26a8
	if (ctx.cr6.eq) goto loc_823B26A8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B26A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B26A8;
	sub_823AC608(ctx, base);
loc_823B26A8:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B26BC;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b26dc
	if (!ctx.cr6.eq) goto loc_823B26DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B26D0;
	sub_82256CC0(ctx, base);
loc_823B26D0:
	// li r4,7
	ctx.r4.s64 = 7;
loc_823B26D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B26DC;
	sub_823AC5B8(ctx, base);
loc_823B26DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B26F4"))) PPC_WEAK_FUNC(sub_823B26F4);
PPC_FUNC_IMPL(__imp__sub_823B26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B26F8"))) PPC_WEAK_FUNC(sub_823B26F8);
PPC_FUNC_IMPL(__imp__sub_823B26F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B2718;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b2758
	if (ctx.cr6.eq) goto loc_823B2758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B273C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B274C;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b275c
	goto loc_823B275C;
loc_823B2758:
	// li r4,4
	ctx.r4.s64 = 4;
loc_823B275C:
	// bl 0x823ac5b8
	ctx.lr = 0x823B2760;
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

__attribute__((alias("__imp__sub_823B2778"))) PPC_WEAK_FUNC(sub_823B2778);
PPC_FUNC_IMPL(__imp__sub_823B2778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b27cc
	if (ctx.cr6.eq) goto loc_823B27CC;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B27A4;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b28cc
	if (ctx.cr6.eq) goto loc_823B28CC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b28c0
	if (ctx.cr6.eq) goto loc_823B28C0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B27C8;
	sub_823AC608(ctx, base);
	// b 0x823b28c0
	goto loc_823B28C0;
loc_823B27CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B27D4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b284c
	if (!ctx.cr6.eq) goto loc_823B284C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B27F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b284c
	if (!ctx.cr6.eq) goto loc_823B284C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b28cc
	if (ctx.cr6.eq) goto loc_823B28CC;
	// bl 0x82256ce8
	ctx.lr = 0x823B280C;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b2844
	if (ctx.cr6.eq) goto loc_823B2844;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B2830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2840;
	sub_823AC608(ctx, base);
	// b 0x823b28c0
	goto loc_823B28C0;
loc_823B2844:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823b28c8
	goto loc_823B28C8;
loc_823B284C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B2854;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b286c
	if (ctx.cr6.eq) goto loc_823B286C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b2890
	goto loc_823B2890;
loc_823B286C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B287C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b2898
	if (ctx.cr6.eq) goto loc_823B2898;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B2890:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B2898;
	sub_823AC608(ctx, base);
loc_823B2898:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B28AC;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b28cc
	if (!ctx.cr6.eq) goto loc_823B28CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B28C0;
	sub_82256CC0(ctx, base);
loc_823B28C0:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B28C8:
	// bl 0x823ac5b8
	ctx.lr = 0x823B28CC;
	sub_823AC5B8(ctx, base);
loc_823B28CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B28E4"))) PPC_WEAK_FUNC(sub_823B28E4);
PPC_FUNC_IMPL(__imp__sub_823B28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B28E8"))) PPC_WEAK_FUNC(sub_823B28E8);
PPC_FUNC_IMPL(__imp__sub_823B28E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2550
	ctx.lr = 0x823B2908;
	sub_823B2550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2920
	if (ctx.cr6.eq) goto loc_823B2920;
	// bl 0x82357128
	ctx.lr = 0x823B291C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B2920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2938"))) PPC_WEAK_FUNC(sub_823B2938);
PPC_FUNC_IMPL(__imp__sub_823B2938) {
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
	ctx.lr = 0x823B2950;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b297c
	if (ctx.cr6.eq) goto loc_823B297C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x823b297c
	if (!ctx.cr6.eq) goto loc_823B297C;
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
loc_823B297C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2990;
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

__attribute__((alias("__imp__sub_823B29A8"))) PPC_WEAK_FUNC(sub_823B29A8);
PPC_FUNC_IMPL(__imp__sub_823B29A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B29B0;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	ctx.lr = 0x823B29C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b29f8
	if (ctx.cr6.eq) goto loc_823B29F8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B29E4;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B29F0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B29F8:
	// bl 0x823ac6b8
	ctx.lr = 0x823B29FC;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B2A04;
	sub_823A0F10(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b2a1c
	if (ctx.cr6.eq) goto loc_823B2A1C;
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// b 0x823b2a20
	goto loc_823B2A20;
loc_823B2A1C:
	// li r27,254
	ctx.r27.s64 = 254;
loc_823B2A20:
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B2A34;
	sub_823585A0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b2a90
	if (!ctx.cr6.eq) goto loc_823B2A90;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x82357358
	ctx.lr = 0x823B2A48;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823B2A58;
	sub_82248A40(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823B2A68;
	sub_82248A40(ctx, base);
	// ld r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 92);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B2A80;
	sub_82248A40(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B2A90;
	sub_82248A40(ctx, base);
loc_823B2A90:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B2AA0;
	sub_823585A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240d208
	ctx.lr = 0x823B2AB4;
	sub_8240D208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b2b04
	if (ctx.cr6.eq) goto loc_823B2B04;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2b04
	if (ctx.cr6.eq) goto loc_823B2B04;
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
	ctx.lr = 0x823B2AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2AF0;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2AFC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B2B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B2B0C;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2B18;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B2B20"))) PPC_WEAK_FUNC(sub_823B2B20);
PPC_FUNC_IMPL(__imp__sub_823B2B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B2B28;
	sub_82248784(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B2B38;
	sub_823AC6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b2c3c
	if (ctx.cr6.eq) goto loc_823B2C3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x823b2c3c
	if (!ctx.cr6.eq) goto loc_823B2C3C;
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370310
	ctx.lr = 0x823B2B5C;
	sub_82370310(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,30604
	ctx.r27.s64 = ctx.r11.s64 + 30604;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// bl 0x82370088
	ctx.lr = 0x823B2B74;
	sub_82370088(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82370360
	ctx.lr = 0x823B2B80;
	sub_82370360(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82370360
	ctx.lr = 0x823B2B8C;
	sub_82370360(ctx, base);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x823700d8
	ctx.lr = 0x823B2B98;
	sub_823700D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823700d8
	ctx.lr = 0x823B2BA0;
	sub_823700D8(ctx, base);
	// ld r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 180);
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r29,r30,180
	ctx.r29.s64 = ctx.r30.s64 + 180;
	// std r10,60(r31)
	PPC_STORE_U64(ctx.r31.u32 + 60, ctx.r10.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B2BBC;
	sub_82248A40(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B2BCC;
	sub_82248A40(ctx, base);
	// bl 0x823abc48
	ctx.lr = 0x823B2BD0;
	sub_823ABC48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823abc58
	ctx.lr = 0x823B2BDC;
	sub_823ABC58(ctx, base);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b2c2c
	if (ctx.cr6.eq) goto loc_823B2C2C;
	// bl 0x823abc78
	ctx.lr = 0x823B2BF0;
	sub_823ABC78(ctx, base);
	// bl 0x823a0f10
	ctx.lr = 0x823B2BF4;
	sub_823A0F10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,136(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,132(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x823abcf8
	ctx.lr = 0x823B2C18;
	sub_823ABCF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b2c30
	if (!ctx.cr6.eq) goto loc_823B2C30;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b2c44
	goto loc_823B2C44;
loc_823B2C2C:
	// bl 0x823abc78
	ctx.lr = 0x823B2C30;
	sub_823ABC78(ctx, base);
loc_823B2C30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B2C3C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B2C44:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2C50;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B2C5C"))) PPC_WEAK_FUNC(sub_823B2C5C);
PPC_FUNC_IMPL(__imp__sub_823B2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2C60"))) PPC_WEAK_FUNC(sub_823B2C60);
PPC_FUNC_IMPL(__imp__sub_823B2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823B2C68;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B2C74;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B2C7C;
	sub_823A0F10(ctx, base);
	// lbz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b2d54
	if (ctx.cr6.eq) goto loc_823B2D54;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823B2C9C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r4,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b2d48
	if (ctx.cr6.eq) goto loc_823B2D48;
	// rlwinm r9,r4,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b2d48
	if (!ctx.cr6.eq) goto loc_823B2D48;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bgt cr6,0x823b2d48
	if (ctx.cr6.gt) goto loc_823B2D48;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11500
	ctx.r12.s64 = ctx.r12.s64 + 11500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,11552(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11552);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11552(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11552);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11564(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11564);
	// lwz r17,11592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11592);
	// lwz r17,11552(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11552);
	// lwz r17,11564(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11564);
	// lwz r17,11576(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11576);
	// lwz r17,11576(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11576);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x823b2d40
	goto loc_823B2D40;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x823b2d40
	goto loc_823B2D40;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
loc_823B2D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256330
	ctx.lr = 0x823B2D48;
	sub_82256330(ctx, base);
loc_823B2D48:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bne 0x823b2c9c
	if (!ctx.cr0.eq) goto loc_823B2C9C;
loc_823B2D54:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r28,120(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r27,124(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,24(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r30,28(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// beq cr6,0x823b2d74
	if (ctx.cr6.eq) goto loc_823B2D74;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_823B2D74:
	// addi r31,r26,152
	ctx.r31.s64 = ctx.r26.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B2D84;
	sub_823585A0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240c858
	ctx.lr = 0x823B2D9C;
	sub_8240C858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b2dec
	if (ctx.cr6.eq) goto loc_823B2DEC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2dec
	if (ctx.cr6.eq) goto loc_823B2DEC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B2DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2DD8;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2DE4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B2DEC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B2DF4;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2E00;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823B2E08"))) PPC_WEAK_FUNC(sub_823B2E08);
PPC_FUNC_IMPL(__imp__sub_823B2E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B2E28;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823b2ea4
	if (ctx.cr6.gt) goto loc_823B2EA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b2e60
	// bdzf 4*cr6+eq,0x823b2e6c
	// bdzf 4*cr6+eq,0x823b2e78
	// bdzf 4*cr6+eq,0x823b2e84
	// bdzf 4*cr6+eq,0x823b2e90
	// bne cr6,0x823b2ea0
	if (!ctx.cr6.eq) goto loc_823B2EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b29a8
	ctx.lr = 0x823B2E5C;
	sub_823B29A8(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b25c8
	ctx.lr = 0x823B2E68;
	sub_823B25C8(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b26f8
	ctx.lr = 0x823B2E74;
	sub_823B26F8(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2E78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2c60
	ctx.lr = 0x823B2E80;
	sub_823B2C60(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2E84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2778
	ctx.lr = 0x823B2E8C;
	sub_823B2778(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2E90:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B2E9C;
	sub_823AC5B8(ctx, base);
	// b 0x823b2ea4
	goto loc_823B2EA4;
loc_823B2EA0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B2EA4:
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

__attribute__((alias("__imp__sub_823B2EC0"))) PPC_WEAK_FUNC(sub_823B2EC0);
PPC_FUNC_IMPL(__imp__sub_823B2EC0) {
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
	ctx.lr = 0x823B2EE0;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-26616
	ctx.r9.s64 = ctx.r10.s64 + -26616;
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

__attribute__((alias("__imp__sub_823B2F04"))) PPC_WEAK_FUNC(sub_823B2F04);
PPC_FUNC_IMPL(__imp__sub_823B2F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2F08"))) PPC_WEAK_FUNC(sub_823B2F08);
PPC_FUNC_IMPL(__imp__sub_823B2F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26616
	ctx.r10.s64 = ctx.r11.s64 + -26616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B2F34;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b2f4c
	if (ctx.cr6.eq) goto loc_823B2F4C;
	// bl 0x82357128
	ctx.lr = 0x823B2F48;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B2F4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2F64"))) PPC_WEAK_FUNC(sub_823B2F64);
PPC_FUNC_IMPL(__imp__sub_823B2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B2F68"))) PPC_WEAK_FUNC(sub_823B2F68);
PPC_FUNC_IMPL(__imp__sub_823B2F68) {
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
	ctx.lr = 0x823B2F80;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2fac
	if (ctx.cr6.eq) goto loc_823B2FAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x823b2fac
	if (!ctx.cr6.eq) goto loc_823B2FAC;
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
loc_823B2FAC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B2FC0;
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

__attribute__((alias("__imp__sub_823B2FD8"))) PPC_WEAK_FUNC(sub_823B2FD8);
PPC_FUNC_IMPL(__imp__sub_823B2FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B2FE0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B2FEC;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823B2FF4;
	sub_823A1E50(ctx, base);
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
	ctx.lr = 0x823B300C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b303c
	if (ctx.cr6.eq) goto loc_823B303C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B3028;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3034;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B303C:
	// bl 0x823ac670
	ctx.lr = 0x823B3040;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b3070
	if (ctx.cr6.eq) goto loc_823B3070;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B305C;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3068;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3070:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x823B307C;
	sub_82370C48(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B3094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b30b4
	if (ctx.cr6.eq) goto loc_823B30B4;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B30B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B30B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B30E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b30f4
	if (ctx.cr6.eq) goto loc_823B30F4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B30F4;
	sub_823AC5B8(ctx, base);
loc_823B30F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823B30FC;
	sub_82372340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B3104"))) PPC_WEAK_FUNC(sub_823B3104);
PPC_FUNC_IMPL(__imp__sub_823B3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3108"))) PPC_WEAK_FUNC(sub_823B3108);
PPC_FUNC_IMPL(__imp__sub_823B3108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B3128;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b3180
	if (ctx.cr6.gt) goto loc_823B3180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b3160
	// bdzf 4*cr6+eq,0x823b316c
	// bne cr6,0x823b317c
	if (!ctx.cr6.eq) goto loc_823B317C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3150;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B315C;
	sub_823AC5B8(ctx, base);
	// b 0x823b3180
	goto loc_823B3180;
loc_823B3160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b2fd8
	ctx.lr = 0x823B3168;
	sub_823B2FD8(ctx, base);
	// b 0x823b3180
	goto loc_823B3180;
loc_823B316C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3178;
	sub_823AC5B8(ctx, base);
	// b 0x823b3180
	goto loc_823B3180;
loc_823B317C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B3180:
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

__attribute__((alias("__imp__sub_823B319C"))) PPC_WEAK_FUNC(sub_823B319C);
PPC_FUNC_IMPL(__imp__sub_823B319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B31A0"))) PPC_WEAK_FUNC(sub_823B31A0);
PPC_FUNC_IMPL(__imp__sub_823B31A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b3200
	if (ctx.cr6.eq) goto loc_823B3200;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B31CC;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b32ac
	if (ctx.cr6.eq) goto loc_823B32AC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b31f8
	if (ctx.cr6.eq) goto loc_823B31F8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B31F8;
	sub_823AC608(ctx, base);
loc_823B31F8:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b32a4
	goto loc_823B32A4;
loc_823B3200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B3208;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b3250
	if (ctx.cr6.eq) goto loc_823B3250;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3224;
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
	ctx.lr = 0x823B3238;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b32ac
	if (!ctx.cr6.eq) goto loc_823B32AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B3248;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b32a4
	goto loc_823B32A4;
loc_823B3250:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b32ac
	if (ctx.cr6.eq) goto loc_823B32AC;
	// bl 0x82256ce8
	ctx.lr = 0x823B3264;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b32a0
	if (ctx.cr6.eq) goto loc_823B32A0;
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
	ctx.lr = 0x823B3288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3298;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b32a4
	goto loc_823B32A4;
loc_823B32A0:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823B32A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B32AC;
	sub_823AC5B8(ctx, base);
loc_823B32AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B32C4"))) PPC_WEAK_FUNC(sub_823B32C4);
PPC_FUNC_IMPL(__imp__sub_823B32C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B32C8"))) PPC_WEAK_FUNC(sub_823B32C8);
PPC_FUNC_IMPL(__imp__sub_823B32C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b3328
	if (ctx.cr6.eq) goto loc_823B3328;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B32F4;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b33d4
	if (ctx.cr6.eq) goto loc_823B33D4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3320
	if (ctx.cr6.eq) goto loc_823B3320;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3320;
	sub_823AC608(ctx, base);
loc_823B3320:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b33cc
	goto loc_823B33CC;
loc_823B3328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B3330;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b3378
	if (ctx.cr6.eq) goto loc_823B3378;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B334C;
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
	ctx.lr = 0x823B3360;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b33d4
	if (!ctx.cr6.eq) goto loc_823B33D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B3370;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b33cc
	goto loc_823B33CC;
loc_823B3378:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b33d4
	if (ctx.cr6.eq) goto loc_823B33D4;
	// bl 0x82256ce8
	ctx.lr = 0x823B338C;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b33c8
	if (ctx.cr6.eq) goto loc_823B33C8;
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
	ctx.lr = 0x823B33B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B33C0;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b33cc
	goto loc_823B33CC;
loc_823B33C8:
	// li r4,6
	ctx.r4.s64 = 6;
loc_823B33CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B33D4;
	sub_823AC5B8(ctx, base);
loc_823B33D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B33EC"))) PPC_WEAK_FUNC(sub_823B33EC);
PPC_FUNC_IMPL(__imp__sub_823B33EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B33F0"))) PPC_WEAK_FUNC(sub_823B33F0);
PPC_FUNC_IMPL(__imp__sub_823B33F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b3450
	if (ctx.cr6.eq) goto loc_823B3450;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B341C;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b34fc
	if (ctx.cr6.eq) goto loc_823B34FC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3448
	if (ctx.cr6.eq) goto loc_823B3448;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3448;
	sub_823AC608(ctx, base);
loc_823B3448:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b34f4
	goto loc_823B34F4;
loc_823B3450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B3458;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b34a0
	if (ctx.cr6.eq) goto loc_823B34A0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3474;
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
	ctx.lr = 0x823B3488;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b34fc
	if (!ctx.cr6.eq) goto loc_823B34FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B3498;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b34f4
	goto loc_823B34F4;
loc_823B34A0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b34fc
	if (ctx.cr6.eq) goto loc_823B34FC;
	// bl 0x82256ce8
	ctx.lr = 0x823B34B4;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b34f0
	if (ctx.cr6.eq) goto loc_823B34F0;
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
	ctx.lr = 0x823B34D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B34E8;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b34f4
	goto loc_823B34F4;
loc_823B34F0:
	// li r4,9
	ctx.r4.s64 = 9;
loc_823B34F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B34FC;
	sub_823AC5B8(ctx, base);
loc_823B34FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3514"))) PPC_WEAK_FUNC(sub_823B3514);
PPC_FUNC_IMPL(__imp__sub_823B3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3518"))) PPC_WEAK_FUNC(sub_823B3518);
PPC_FUNC_IMPL(__imp__sub_823B3518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b3578
	if (ctx.cr6.eq) goto loc_823B3578;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B3544;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b3624
	if (ctx.cr6.eq) goto loc_823B3624;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3570
	if (ctx.cr6.eq) goto loc_823B3570;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3570;
	sub_823AC608(ctx, base);
loc_823B3570:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b361c
	goto loc_823B361C;
loc_823B3578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B3580;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b35c8
	if (ctx.cr6.eq) goto loc_823B35C8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B359C;
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
	ctx.lr = 0x823B35B0;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b3624
	if (!ctx.cr6.eq) goto loc_823B3624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B35C0;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b361c
	goto loc_823B361C;
loc_823B35C8:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b3624
	if (ctx.cr6.eq) goto loc_823B3624;
	// bl 0x82256ce8
	ctx.lr = 0x823B35DC;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3618
	if (ctx.cr6.eq) goto loc_823B3618;
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
	ctx.lr = 0x823B3600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3610;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b361c
	goto loc_823B361C;
loc_823B3618:
	// li r4,12
	ctx.r4.s64 = 12;
loc_823B361C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3624;
	sub_823AC5B8(ctx, base);
loc_823B3624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B363C"))) PPC_WEAK_FUNC(sub_823B363C);
PPC_FUNC_IMPL(__imp__sub_823B363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3640"))) PPC_WEAK_FUNC(sub_823B3640);
PPC_FUNC_IMPL(__imp__sub_823B3640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b36a0
	if (ctx.cr6.eq) goto loc_823B36A0;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B366C;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b374c
	if (ctx.cr6.eq) goto loc_823B374C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3698
	if (ctx.cr6.eq) goto loc_823B3698;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3698;
	sub_823AC608(ctx, base);
loc_823B3698:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b3744
	goto loc_823B3744;
loc_823B36A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B36A8;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b36f0
	if (ctx.cr6.eq) goto loc_823B36F0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B36C4;
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
	ctx.lr = 0x823B36D8;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b374c
	if (!ctx.cr6.eq) goto loc_823B374C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B36E8;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b3744
	goto loc_823B3744;
loc_823B36F0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b374c
	if (ctx.cr6.eq) goto loc_823B374C;
	// bl 0x82256ce8
	ctx.lr = 0x823B3704;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3740
	if (ctx.cr6.eq) goto loc_823B3740;
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
	ctx.lr = 0x823B3728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3738;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b3744
	goto loc_823B3744;
loc_823B3740:
	// li r4,15
	ctx.r4.s64 = 15;
loc_823B3744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B374C;
	sub_823AC5B8(ctx, base);
loc_823B374C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3764"))) PPC_WEAK_FUNC(sub_823B3764);
PPC_FUNC_IMPL(__imp__sub_823B3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3768"))) PPC_WEAK_FUNC(sub_823B3768);
PPC_FUNC_IMPL(__imp__sub_823B3768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26548
	ctx.r10.s64 = ctx.r11.s64 + -26548;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823B3798;
	sub_82356EB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b37b0
	if (ctx.cr6.eq) goto loc_823B37B0;
	// bl 0x82357128
	ctx.lr = 0x823B37AC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B37B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B37C8"))) PPC_WEAK_FUNC(sub_823B37C8);
PPC_FUNC_IMPL(__imp__sub_823B37C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B37E4;
	sub_823AC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3828
	if (ctx.cr6.eq) goto loc_823B3828;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x823b3828
	if (!ctx.cr6.eq) goto loc_823B3828;
	// bl 0x823a0f10
	ctx.lr = 0x823B3800;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b3814
	if (!ctx.cr6.eq) goto loc_823B3814;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b3830
	goto loc_823B3830;
loc_823B3814:
	// bl 0x823a43b0
	ctx.lr = 0x823B3818;
	sub_823A43B0(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x823a43c0
	ctx.lr = 0x823B3820;
	sub_823A43C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b3840
	goto loc_823B3840;
loc_823B3828:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B3830:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B383C;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3858"))) PPC_WEAK_FUNC(sub_823B3858);
PPC_FUNC_IMPL(__imp__sub_823B3858) {
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
	// beq cr6,0x823b388c
	if (ctx.cr6.eq) goto loc_823B388C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x823b388c
	if (!ctx.cr6.eq) goto loc_823B388C;
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
loc_823B388C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823B389C;
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

__attribute__((alias("__imp__sub_823B38B0"))) PPC_WEAK_FUNC(sub_823B38B0);
PPC_FUNC_IMPL(__imp__sub_823B38B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B38B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B38C4;
	sub_823A0F10(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b38e8
	if (!ctx.cr6.eq) goto loc_823B38E8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B38E0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B38E8:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B38F8;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240c9c8
	ctx.lr = 0x823B3910;
	sub_8240C9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b3960
	if (ctx.cr6.eq) goto loc_823B3960;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3960
	if (ctx.cr6.eq) goto loc_823B3960;
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
	ctx.lr = 0x823B393C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B394C;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3958;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3968;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3974;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B397C"))) PPC_WEAK_FUNC(sub_823B397C);
PPC_FUNC_IMPL(__imp__sub_823B397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3980"))) PPC_WEAK_FUNC(sub_823B3980);
PPC_FUNC_IMPL(__imp__sub_823B3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B3988;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B3994;
	sub_823A0F10(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b39b8
	if (!ctx.cr6.eq) goto loc_823B39B8;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B39B0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B39B8:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B39C8;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240ca78
	ctx.lr = 0x823B39E0;
	sub_8240CA78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b3a30
	if (ctx.cr6.eq) goto loc_823B3A30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3a30
	if (ctx.cr6.eq) goto loc_823B3A30;
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
	ctx.lr = 0x823B3A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3A1C;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3A28;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3A38;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3A44;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B3A4C"))) PPC_WEAK_FUNC(sub_823B3A4C);
PPC_FUNC_IMPL(__imp__sub_823B3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3A50"))) PPC_WEAK_FUNC(sub_823B3A50);
PPC_FUNC_IMPL(__imp__sub_823B3A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B3A58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B3A64;
	sub_823A0F10(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3a88
	if (!ctx.cr6.eq) goto loc_823B3A88;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3A80;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3A88:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B3A98;
	sub_823585A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r5,284(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x8240cb28
	ctx.lr = 0x823B3AAC;
	sub_8240CB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b3afc
	if (ctx.cr6.eq) goto loc_823B3AFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3afc
	if (ctx.cr6.eq) goto loc_823B3AFC;
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
	ctx.lr = 0x823B3AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3AE8;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3AF4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3B04;
	sub_823AC668(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3B10;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B3B18"))) PPC_WEAK_FUNC(sub_823B3B18);
PPC_FUNC_IMPL(__imp__sub_823B3B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B3B20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B3B2C;
	sub_823A0F10(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3b50
	if (!ctx.cr6.eq) goto loc_823B3B50;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3B48;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3B50:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B3B60;
	sub_823585A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240cbd0
	ctx.lr = 0x823B3B74;
	sub_8240CBD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b3bc4
	if (ctx.cr6.eq) goto loc_823B3BC4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3bc4
	if (ctx.cr6.eq) goto loc_823B3BC4;
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
	ctx.lr = 0x823B3BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3BB0;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3BBC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B3BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3BCC;
	sub_823AC668(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3BD8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B3BE0"))) PPC_WEAK_FUNC(sub_823B3BE0);
PPC_FUNC_IMPL(__imp__sub_823B3BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823B3BE8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B3BF4;
	sub_823AC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B3BFC;
	sub_823A0F10(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,24(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// beq cr6,0x823b3c20
	if (ctx.cr6.eq) goto loc_823B3C20;
	// ori r29,r29,512
	ctx.r29.u64 = ctx.r29.u64 | 512;
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
loc_823B3C20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b3c30
	if (ctx.cr6.eq) goto loc_823B3C30;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
loc_823B3C30:
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B3C40;
	sub_823585A0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240c858
	ctx.lr = 0x823B3C58;
	sub_8240C858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b3ca8
	if (ctx.cr6.eq) goto loc_823B3CA8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3ca8
	if (ctx.cr6.eq) goto loc_823B3CA8;
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
	ctx.lr = 0x823B3C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B3C94;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3CA0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B3CA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B3CB0;
	sub_823AC668(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3CBC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823B3CC4"))) PPC_WEAK_FUNC(sub_823B3CC4);
PPC_FUNC_IMPL(__imp__sub_823B3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3CC8"))) PPC_WEAK_FUNC(sub_823B3CC8);
PPC_FUNC_IMPL(__imp__sub_823B3CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B3CD0;
	sub_8224878C(ctx, base);
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
	// addi r9,r10,-26548
	ctx.r9.s64 = ctx.r10.s64 + -26548;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B3D04;
	sub_82356E70(ctx, base);
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x82357038
	ctx.lr = 0x823B3D28;
	sub_82357038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B3D34"))) PPC_WEAK_FUNC(sub_823B3D34);
PPC_FUNC_IMPL(__imp__sub_823B3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3D38"))) PPC_WEAK_FUNC(sub_823B3D38);
PPC_FUNC_IMPL(__imp__sub_823B3D38) {
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
	ctx.lr = 0x823B3D58;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26536
	ctx.r9.s64 = ctx.r10.s64 + -26536;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B3D6C;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r9,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// bl 0x823585a0
	ctx.lr = 0x823B3E24;
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

__attribute__((alias("__imp__sub_823B3E3C"))) PPC_WEAK_FUNC(sub_823B3E3C);
PPC_FUNC_IMPL(__imp__sub_823B3E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B3E40"))) PPC_WEAK_FUNC(sub_823B3E40);
PPC_FUNC_IMPL(__imp__sub_823B3E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B3E48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-26536
	ctx.r10.s64 = ctx.r11.s64 + -26536;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r29,r3,320
	ctx.r29.s64 = ctx.r3.s64 + 320;
	// lwz r3,324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// beq cr6,0x823b3e7c
	if (ctx.cr6.eq) goto loc_823B3E7C;
	// bl 0x82357240
	ctx.lr = 0x823B3E78;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B3E7C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,300
	ctx.r28.s64 = ctx.r30.s64 + 300;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r31.u32);
	// beq cr6,0x823b3ea0
	if (ctx.cr6.eq) goto loc_823B3EA0;
	// bl 0x82357240
	ctx.lr = 0x823B3E9C;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B3EA0:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r29,r30,280
	ctx.r29.s64 = ctx.r30.s64 + 280;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r31.u32);
	// beq cr6,0x823b3ec4
	if (ctx.cr6.eq) goto loc_823B3EC4;
	// bl 0x82357240
	ctx.lr = 0x823B3EC0;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B3EC4:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,260
	ctx.r28.s64 = ctx.r30.s64 + 260;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r31.u32);
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3ee8
	if (ctx.cr6.eq) goto loc_823B3EE8;
	// bl 0x82357240
	ctx.lr = 0x823B3EE4;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B3EE8:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r29,r30,240
	ctx.r29.s64 = ctx.r30.s64 + 240;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r31.u32);
	// lwz r3,244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3f0c
	if (ctx.cr6.eq) goto loc_823B3F0C;
	// bl 0x82357240
	ctx.lr = 0x823B3F08;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B3F0C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,220
	ctx.r28.s64 = ctx.r30.s64 + 220;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r31.u32);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3f30
	if (ctx.cr6.eq) goto loc_823B3F30;
	// bl 0x82357240
	ctx.lr = 0x823B3F2C;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B3F30:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r31.u32);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3f54
	if (ctx.cr6.eq) goto loc_823B3F54;
	// bl 0x82357240
	ctx.lr = 0x823B3F50;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B3F54:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,180
	ctx.r28.s64 = ctx.r30.s64 + 180;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3f78
	if (ctx.cr6.eq) goto loc_823B3F78;
	// bl 0x82357240
	ctx.lr = 0x823B3F74;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_823B3F78:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// bl 0x823c1100
	ctx.lr = 0x823B3F88;
	sub_823C1100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B3F90;
	sub_823C13B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B3F98"))) PPC_WEAK_FUNC(sub_823B3F98);
PPC_FUNC_IMPL(__imp__sub_823B3F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823B3FA0;
	sub_82248750(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B3FB4;
	sub_823AC5B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B3FBC;
	sub_823AC6B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x823a0f10
	ctx.lr = 0x823B3FC8;
	sub_823A0F10(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r21,r28,180
	ctx.r21.s64 = ctx.r28.s64 + 180;
	// stw r15,188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 188, ctx.r15.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3fec
	if (ctx.cr6.eq) goto loc_823B3FEC;
	// bl 0x82357240
	ctx.lr = 0x823B3FE8;
	sub_82357240(ctx, base);
	// stw r15,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r15.u32);
loc_823B3FEC:
	// stw r15,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r15.u32);
	// addi r23,r28,200
	ctx.r23.s64 = ctx.r28.s64 + 200;
	// stw r15,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r15.u32);
	// lwz r3,204(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r15,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r15.u32);
	// beq cr6,0x823b4010
	if (ctx.cr6.eq) goto loc_823B4010;
	// bl 0x82357240
	ctx.lr = 0x823B400C;
	sub_82357240(ctx, base);
	// stw r15,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r15.u32);
loc_823B4010:
	// stw r15,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r15.u32);
	// addi r29,r28,240
	ctx.r29.s64 = ctx.r28.s64 + 240;
	// stw r15,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r15.u32);
	// lwz r3,244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r15,248(r28)
	PPC_STORE_U32(ctx.r28.u32 + 248, ctx.r15.u32);
	// beq cr6,0x823b4034
	if (ctx.cr6.eq) goto loc_823B4034;
	// bl 0x82357240
	ctx.lr = 0x823B4030;
	sub_82357240(ctx, base);
	// stw r15,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r15.u32);
loc_823B4034:
	// stw r15,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r15.u32);
	// addi r18,r28,220
	ctx.r18.s64 = ctx.r28.s64 + 220;
	// stw r15,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r15.u32);
	// stw r15,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r15.u32);
	// lwz r3,224(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4058
	if (ctx.cr6.eq) goto loc_823B4058;
	// bl 0x82357240
	ctx.lr = 0x823B4054;
	sub_82357240(ctx, base);
	// stw r15,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r15.u32);
loc_823B4058:
	// stw r15,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r15.u32);
	// addi r24,r28,260
	ctx.r24.s64 = ctx.r28.s64 + 260;
	// stw r15,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r15.u32);
	// stw r15,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r15.u32);
	// lwz r3,264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b407c
	if (ctx.cr6.eq) goto loc_823B407C;
	// bl 0x82357240
	ctx.lr = 0x823B4078;
	sub_82357240(ctx, base);
	// stw r15,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r15.u32);
loc_823B407C:
	// stw r15,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r15.u32);
	// addi r20,r28,280
	ctx.r20.s64 = ctx.r28.s64 + 280;
	// stw r15,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r15.u32);
	// stw r15,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r15.u32);
	// lwz r3,284(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b40a0
	if (ctx.cr6.eq) goto loc_823B40A0;
	// bl 0x82357240
	ctx.lr = 0x823B409C;
	sub_82357240(ctx, base);
	// stw r15,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r15.u32);
loc_823B40A0:
	// stw r15,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r15.u32);
	// addi r16,r28,320
	ctx.r16.s64 = ctx.r28.s64 + 320;
	// stw r15,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r15.u32);
	// stw r15,328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 328, ctx.r15.u32);
	// lwz r3,324(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b40c4
	if (ctx.cr6.eq) goto loc_823B40C4;
	// bl 0x82357240
	ctx.lr = 0x823B40C0;
	sub_82357240(ctx, base);
	// stw r15,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r15.u32);
loc_823B40C4:
	// stw r15,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r15.u32);
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// stw r15,12(r16)
	PPC_STORE_U32(ctx.r16.u32 + 12, ctx.r15.u32);
	// lwz r17,32(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823b4254
	if (ctx.cr6.eq) goto loc_823B4254;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_823B40E0:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r25,72(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x823a1368
	ctx.lr = 0x823B4100;
	sub_823A1368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b4244
	if (!ctx.cr6.eq) goto loc_823B4244;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_823B410C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256578
	ctx.lr = 0x823B4118;
	sub_82256578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b4134
	if (!ctx.cr6.eq) goto loc_823B4134;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356f68
	ctx.lr = 0x823B412C;
	sub_82356F68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b43cc
	if (!ctx.cr6.eq) goto loc_823B43CC;
loc_823B4134:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x823b410c
	if (ctx.cr6.lt) goto loc_823B410C;
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// ld r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b41d8
	if (ctx.cr6.gt) goto loc_823B41D8;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823b4478
	if (ctx.cr0.eq) goto loc_823B4478;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B416C;
	sub_823570E0(ctx, base);
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823B417C;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B4188;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b4478
	if (ctx.cr6.eq) goto loc_823B4478;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B419C;
	sub_823585A0(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b41cc
	if (ctx.cr6.eq) goto loc_823B41CC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x823B41B8;
	sub_82358508(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b41cc
	if (ctx.cr6.eq) goto loc_823B41CC;
	// bl 0x82357240
	ctx.lr = 0x823B41C8;
	sub_82357240(ctx, base);
	// stw r15,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r15.u32);
loc_823B41CC:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B41D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r26,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u64);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x823b4220
	if (ctx.cr6.gt) goto loc_823B4220;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B4218;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
loc_823B4220:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
loc_823B4244:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r22,r22,80
	ctx.r22.s64 = ctx.r22.s64 + 80;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823b40e0
	if (ctx.cr6.lt) goto loc_823B40E0;
loc_823B4254:
	// lwz r24,52(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823b4564
	if (ctx.cr6.eq) goto loc_823B4564;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
loc_823B4268:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a1368
	ctx.lr = 0x823B4280;
	sub_823A1368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b4554
	if (ctx.cr6.eq) goto loc_823B4554;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823a13d8
	ctx.lr = 0x823B4294;
	sub_823A13D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823a11e8
	ctx.lr = 0x823B42A0;
	sub_823A11E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b449c
	if (ctx.cr6.eq) goto loc_823B449C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x823a1240
	ctx.lr = 0x823B42B4;
	sub_823A1240(ctx, base);
	// lwz r28,8(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b4348
	if (ctx.cr6.gt) goto loc_823B4348;
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823b4570
	if (ctx.cr0.eq) goto loc_823B4570;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B42E0;
	sub_823570E0(ctx, base);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823B42F0;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B42FC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b4570
	if (ctx.cr6.eq) goto loc_823B4570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B4310;
	sub_823585A0(ctx, base);
	// lwz r4,4(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b4340
	if (ctx.cr6.eq) goto loc_823B4340;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x823B432C;
	sub_82358508(ctx, base);
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4340
	if (ctx.cr6.eq) goto loc_823B4340;
	// bl 0x82357240
	ctx.lr = 0x823B433C;
	sub_82357240(ctx, base);
	// stw r15,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r15.u32);
loc_823B4340:
	// stw r31,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r31.u32);
	// stw r29,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r29.u32);
loc_823B4348:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4570
	if (ctx.cr6.eq) goto loc_823B4570;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r9.u32);
	// bl 0x823a1288
	ctx.lr = 0x823B4374;
	sub_823A1288(ctx, base);
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// ld r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r31,r28,300
	ctx.r31.s64 = ctx.r28.s64 + 300;
	// lwz r30,308(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// lwz r8,312(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x823b43a8
	if (ctx.cr6.gt) goto loc_823B43A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1130
	ctx.lr = 0x823B43A0;
	sub_823A1130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
loc_823B43A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r29,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x823b4550
	goto loc_823B4550;
loc_823B43CC:
	// lwz r31,8(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b43f4
	if (ctx.cr6.gt) goto loc_823B43F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B43EC;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
loc_823B43F4:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
	// lwz r31,8(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lwz r8,12(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x823b443c
	if (ctx.cr6.gt) goto loc_823B443C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823a1130
	ctx.lr = 0x823B4434;
	sub_823A1130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
loc_823B443C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stdx r10,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r8.u32);
	// bl 0x823ada98
	ctx.lr = 0x823B446C;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b447c
	if (ctx.cr6.eq) goto loc_823B447C;
	// b 0x823b4244
	goto loc_823B4244;
loc_823B4478:
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
loc_823B447C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4490;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_823B449C:
	// lwz r28,8(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// ld r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b4530
	if (ctx.cr6.gt) goto loc_823B4530;
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823b4570
	if (ctx.cr0.eq) goto loc_823B4570;
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B44C8;
	sub_823570E0(ctx, base);
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823B44D8;
	sub_82357208(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B44E4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b4570
	if (ctx.cr6.eq) goto loc_823B4570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B44F8;
	sub_823585A0(ctx, base);
	// lwz r4,4(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b4528
	if (ctx.cr6.eq) goto loc_823B4528;
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x823B4514;
	sub_82358508(ctx, base);
	// lwz r3,4(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4528
	if (ctx.cr6.eq) goto loc_823B4528;
	// bl 0x82357240
	ctx.lr = 0x823B4524;
	sub_82357240(ctx, base);
	// stw r15,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r15.u32);
loc_823B4528:
	// stw r31,4(r16)
	PPC_STORE_U32(ctx.r16.u32 + 4, ctx.r31.u32);
	// stw r29,12(r16)
	PPC_STORE_U32(ctx.r16.u32 + 12, ctx.r29.u32);
loc_823B4530:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4570
	if (ctx.cr6.eq) goto loc_823B4570;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r27,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u64);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r16)
	PPC_STORE_U32(ctx.r16.u32 + 8, ctx.r9.u32);
loc_823B4550:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B4554:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,80
	ctx.r25.s64 = ctx.r25.s64 + 80;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823b4268
	if (ctx.cr6.lt) goto loc_823B4268;
loc_823B4564:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_823B4570:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823B4584;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B4590"))) PPC_WEAK_FUNC(sub_823B4590);
PPC_FUNC_IMPL(__imp__sub_823B4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823B4598;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823b45b0
	if (!ctx.cr6.eq) goto loc_823B45B0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823B45B0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add. r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x823b45c8
	if (!ctx.cr0.eq) goto loc_823B45C8;
loc_823B45BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B45C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B45D0;
	sub_823570E0(ctx, base);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x823B45E8;
	sub_82357208(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B45F4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b45bc
	if (ctx.cr6.eq) goto loc_823B45BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B4608;
	sub_823585A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b46b8
	if (ctx.cr6.eq) goto loc_823B46B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b46a0
	if (!ctx.cr6.gt) goto loc_823B46A0;
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// subfic r27,r26,-12
	ctx.xer.ca = ctx.r26.u32 <= 4294967284;
	ctx.r27.s64 = -12 - ctx.r26.s64;
loc_823B462C:
	// addic. r11,r31,-12
	ctx.xer.ca = ctx.r31.u32 > 11;
	ctx.r11.s64 = ctx.r31.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b4640
	if (ctx.cr0.eq) goto loc_823B4640;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823b3cc8
	ctx.lr = 0x823B4640;
	sub_823B3CC8(ctx, base);
loc_823B4640:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r27,r31
	ctx.r29.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r10.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x82357038
	ctx.lr = 0x823B4670;
	sub_82357038(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r7,r29,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823B468C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823b462c
	if (ctx.cr6.lt) goto loc_823B462C;
loc_823B46A0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b46b8
	if (ctx.cr6.eq) goto loc_823B46B8;
	// bl 0x82357240
	ctx.lr = 0x823B46B0;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823B46B8:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823B46CC"))) PPC_WEAK_FUNC(sub_823B46CC);
PPC_FUNC_IMPL(__imp__sub_823B46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B46D0"))) PPC_WEAK_FUNC(sub_823B46D0);
PPC_FUNC_IMPL(__imp__sub_823B46D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3e40
	ctx.lr = 0x823B46F0;
	sub_823B3E40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b4708
	if (ctx.cr6.eq) goto loc_823B4708;
	// bl 0x82357128
	ctx.lr = 0x823B4704;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B4708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4720"))) PPC_WEAK_FUNC(sub_823B4720);
PPC_FUNC_IMPL(__imp__sub_823B4720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4628
	ctx.lr = 0x823B4740;
	sub_823A4628(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4758
	if (ctx.cr6.eq) goto loc_823B4758;
	// bl 0x82357240
	ctx.lr = 0x823B4754;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823B4758:
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

__attribute__((alias("__imp__sub_823B4778"))) PPC_WEAK_FUNC(sub_823B4778);
PPC_FUNC_IMPL(__imp__sub_823B4778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B4780;
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
	// addi r10,r11,-26468
	ctx.r10.s64 = ctx.r11.s64 + -26468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823a4628
	ctx.lr = 0x823B47A4;
	sub_823A4628(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b47bc
	if (ctx.cr6.eq) goto loc_823B47BC;
	// bl 0x82357240
	ctx.lr = 0x823B47B8;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_823B47BC:
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
	// beq cr6,0x823b47e8
	if (ctx.cr6.eq) goto loc_823B47E8;
	// bl 0x82357128
	ctx.lr = 0x823B47E4;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823B47E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B47F0"))) PPC_WEAK_FUNC(sub_823B47F0);
PPC_FUNC_IMPL(__imp__sub_823B47F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B47F8;
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
	// bgt cr6,0x823b4834
	if (ctx.cr6.gt) goto loc_823B4834;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b4590
	ctx.lr = 0x823B4820;
	sub_823B4590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b4834
	if (!ctx.cr6.eq) goto loc_823B4834;
loc_823B4828:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B4834:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b4828
	if (ctx.cr6.eq) goto loc_823B4828;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4860
	if (ctx.cr0.eq) goto loc_823B4860;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3cc8
	ctx.lr = 0x823B4860;
	sub_823B3CC8(ctx, base);
loc_823B4860:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82357038
	ctx.lr = 0x823B4884;
	sub_82357038(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B489C"))) PPC_WEAK_FUNC(sub_823B489C);
PPC_FUNC_IMPL(__imp__sub_823B489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B48A0"))) PPC_WEAK_FUNC(sub_823B48A0);
PPC_FUNC_IMPL(__imp__sub_823B48A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823B48A8;
	sub_8224876C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B48B4;
	sub_823A0F10(ctx, base);
	// lwz r25,208(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823b492c
	if (ctx.cr6.eq) goto loc_823B492C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823B48D4:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B48E4;
	sub_82356FE0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823a1d10
	ctx.lr = 0x823B4900;
	sub_823A1D10(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r24,r10,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82356eb8
	ctx.lr = 0x823B4910;
	sub_82356EB8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823b4a5c
	if (!ctx.cr6.eq) goto loc_823B4A5C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823b48d4
	if (ctx.cr6.lt) goto loc_823B48D4;
loc_823B492C:
	// bl 0x823a1e50
	ctx.lr = 0x823B4930;
	sub_823A1E50(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r24,208(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r23,r11,-26468
	ctx.r23.s64 = ctx.r11.s64 + -26468;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// beq cr6,0x823b4a14
	if (ctx.cr6.eq) goto loc_823B4A14;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r11,-26548
	ctx.r27.s64 = ctx.r11.s64 + -26548;
loc_823B498C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B499C;
	sub_82356FE0(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwzx r21,r28,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B49BC;
	sub_82356E70(ctx, base);
	// stb r21,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r21.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82357038
	ctx.lr = 0x823B49CC;
	sub_82357038(ctx, base);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823b47f0
	ctx.lr = 0x823B49E0;
	sub_823B47F0(ctx, base);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82356eb8
	ctx.lr = 0x823B49F0;
	sub_82356EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B49F8;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823b4a84
	if (ctx.cr6.eq) goto loc_823B4A84;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823b498c
	if (ctx.cr6.lt) goto loc_823B498C;
loc_823B4A14:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
loc_823B4A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4A38;
	sub_823AC5B8(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823a4628
	ctx.lr = 0x823B4A44;
	sub_823A4628(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4a54
	if (ctx.cr6.eq) goto loc_823B4A54;
	// bl 0x82357240
	ctx.lr = 0x823B4A54;
	sub_82357240(ctx, base);
loc_823B4A54:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823B4A5C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4A70;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4A7C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823B4A84:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4A98;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b4a30
	goto loc_823B4A30;
}

__attribute__((alias("__imp__sub_823B4AA0"))) PPC_WEAK_FUNC(sub_823B4AA0);
PPC_FUNC_IMPL(__imp__sub_823B4AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823B4AA8;
	sub_82248770(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B4AB4;
	sub_823A0F10(ctx, base);
	// lwz r27,248(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823b4b1c
	if (ctx.cr6.eq) goto loc_823B4B1C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_823B4AD0:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4AE0;
	sub_82356FE0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a1d10
	ctx.lr = 0x823B4AF4;
	sub_823A1D10(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82356eb8
	ctx.lr = 0x823B4B04;
	sub_82356EB8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x823b4c3c
	if (!ctx.cr6.eq) goto loc_823B4C3C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823b4ad0
	if (ctx.cr6.lt) goto loc_823B4AD0;
loc_823B4B1C:
	// bl 0x823a1e50
	ctx.lr = 0x823B4B20;
	sub_823A1E50(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r25,248(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r24,r11,-26468
	ctx.r24.s64 = ctx.r11.s64 + -26468;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// beq cr6,0x823b4bf4
	if (ctx.cr6.eq) goto loc_823B4BF4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r28,r11,-26548
	ctx.r28.s64 = ctx.r11.s64 + -26548;
loc_823B4B78:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4B88;
	sub_82356FE0(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B4BA0;
	sub_82356E70(ctx, base);
	// stb r26,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r26.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82357038
	ctx.lr = 0x823B4BB0;
	sub_82357038(ctx, base);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823b47f0
	ctx.lr = 0x823B4BC4;
	sub_823B47F0(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82356eb8
	ctx.lr = 0x823B4BD4;
	sub_82356EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B4BDC;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x823b4c64
	if (ctx.cr6.eq) goto loc_823B4C64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823b4b78
	if (ctx.cr6.lt) goto loc_823B4B78;
loc_823B4BF4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
loc_823B4C10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4C18;
	sub_823AC5B8(ctx, base);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823a4628
	ctx.lr = 0x823B4C24;
	sub_823A4628(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4c34
	if (ctx.cr6.eq) goto loc_823B4C34;
	// bl 0x82357240
	ctx.lr = 0x823B4C34;
	sub_82357240(ctx, base);
loc_823B4C34:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823B4C3C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4C50;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4C5C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823B4C64:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4C78;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b4c10
	goto loc_823B4C10;
}

__attribute__((alias("__imp__sub_823B4C80"))) PPC_WEAK_FUNC(sub_823B4C80);
PPC_FUNC_IMPL(__imp__sub_823B4C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823B4C88;
	sub_8224876C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B4C94;
	sub_823A0F10(ctx, base);
	// lwz r29,308(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b4cdc
	if (ctx.cr6.eq) goto loc_823B4CDC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823B4CAC:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4CBC;
	sub_82356FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a19e8
	ctx.lr = 0x823B4CC8;
	sub_823A19E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823B4CD0;
	sub_82356EB8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x823b4cac
	if (!ctx.cr0.eq) goto loc_823B4CAC;
loc_823B4CDC:
	// bl 0x823a1e50
	ctx.lr = 0x823B4CE0;
	sub_823A1E50(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r24,308(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r23,r11,-26468
	ctx.r23.s64 = ctx.r11.s64 + -26468;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// beq cr6,0x823b4dc4
	if (ctx.cr6.eq) goto loc_823B4DC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,-26548
	ctx.r27.s64 = ctx.r11.s64 + -26548;
loc_823B4D3C:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4D4C;
	sub_82356FE0(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwzx r21,r11,r28
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B4D6C;
	sub_82356E70(ctx, base);
	// stb r21,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r21.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82357038
	ctx.lr = 0x823B4D7C;
	sub_82357038(ctx, base);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823b47f0
	ctx.lr = 0x823B4D90;
	sub_823B47F0(ctx, base);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82356eb8
	ctx.lr = 0x823B4DA0;
	sub_82356EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B4DA8;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823b4e0c
	if (ctx.cr6.eq) goto loc_823B4E0C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823b4d3c
	if (ctx.cr6.lt) goto loc_823B4D3C;
loc_823B4DC4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,10
	ctx.r4.s64 = 10;
loc_823B4DE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4DE8;
	sub_823AC5B8(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823a4628
	ctx.lr = 0x823B4DF4;
	sub_823A4628(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4e04
	if (ctx.cr6.eq) goto loc_823B4E04;
	// bl 0x82357240
	ctx.lr = 0x823B4E04;
	sub_82357240(ctx, base);
loc_823B4E04:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823B4E0C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4E20;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b4de0
	goto loc_823B4DE0;
}

__attribute__((alias("__imp__sub_823B4E28"))) PPC_WEAK_FUNC(sub_823B4E28);
PPC_FUNC_IMPL(__imp__sub_823B4E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823B4E30;
	sub_8224876C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B4E3C;
	sub_823A0F10(ctx, base);
	// lwz r30,328(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b4e84
	if (ctx.cr6.eq) goto loc_823B4E84;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_823B4E54:
	// lwz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4E64;
	sub_82356FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a19e8
	ctx.lr = 0x823B4E70;
	sub_823A19E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823B4E78;
	sub_82356EB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x823b4e54
	if (!ctx.cr0.eq) goto loc_823B4E54;
loc_823B4E84:
	// bl 0x823a1e50
	ctx.lr = 0x823B4E88;
	sub_823A1E50(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r24,328(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r23,r11,-26468
	ctx.r23.s64 = ctx.r11.s64 + -26468;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// beq cr6,0x823b4f60
	if (ctx.cr6.eq) goto loc_823B4F60;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r11,-26548
	ctx.r30.s64 = ctx.r11.s64 + -26548;
loc_823B4EE4:
	// lwz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B4EF4;
	sub_82356FE0(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B4F0C;
	sub_82356E70(ctx, base);
	// stb r26,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r26.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82357038
	ctx.lr = 0x823B4F1C;
	sub_82357038(ctx, base);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823b47f0
	ctx.lr = 0x823B4F30;
	sub_823B47F0(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82356eb8
	ctx.lr = 0x823B4F40;
	sub_82356EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B4F48;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823b4fa8
	if (ctx.cr6.eq) goto loc_823B4FA8;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823b4ee4
	if (ctx.cr6.lt) goto loc_823B4EE4;
loc_823B4F60:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B4F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,13
	ctx.r4.s64 = 13;
loc_823B4F7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B4F84;
	sub_823AC5B8(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x823a4628
	ctx.lr = 0x823B4F90;
	sub_823A4628(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4fa0
	if (ctx.cr6.eq) goto loc_823B4FA0;
	// bl 0x82357240
	ctx.lr = 0x823B4FA0;
	sub_82357240(ctx, base);
loc_823B4FA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823B4FA8:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B4FBC;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823b4f7c
	goto loc_823B4F7C;
}

__attribute__((alias("__imp__sub_823B4FC4"))) PPC_WEAK_FUNC(sub_823B4FC4);
PPC_FUNC_IMPL(__imp__sub_823B4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B4FC8"))) PPC_WEAK_FUNC(sub_823B4FC8);
PPC_FUNC_IMPL(__imp__sub_823B4FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B4FE8;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x823b5108
	if (ctx.cr6.gt) goto loc_823B5108;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20492
	ctx.r12.s64 = ctx.r12.s64 + 20492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,20556(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20556);
	// lwz r17,20568(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20568);
	// lwz r17,20580(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20580);
	// lwz r17,20592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20592);
	// lwz r17,20604(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20604);
	// lwz r17,20616(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20616);
	// lwz r17,20628(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20628);
	// lwz r17,20640(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20640);
	// lwz r17,20652(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20652);
	// lwz r17,20664(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20664);
	// lwz r17,20676(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20676);
	// lwz r17,20688(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20688);
	// lwz r17,20700(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20700);
	// lwz r17,20712(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20712);
	// lwz r17,20724(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20724);
	// lwz r17,20740(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20740);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b38b0
	ctx.lr = 0x823B5054;
	sub_823B38B0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b31a0
	ctx.lr = 0x823B5060;
	sub_823B31A0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b48a0
	ctx.lr = 0x823B506C;
	sub_823B48A0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3980
	ctx.lr = 0x823B5078;
	sub_823B3980(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b32c8
	ctx.lr = 0x823B5084;
	sub_823B32C8(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b4aa0
	ctx.lr = 0x823B5090;
	sub_823B4AA0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3a50
	ctx.lr = 0x823B509C;
	sub_823B3A50(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b33f0
	ctx.lr = 0x823B50A8;
	sub_823B33F0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b4c80
	ctx.lr = 0x823B50B4;
	sub_823B4C80(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3b18
	ctx.lr = 0x823B50C0;
	sub_823B3B18(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3518
	ctx.lr = 0x823B50CC;
	sub_823B3518(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b4e28
	ctx.lr = 0x823B50D8;
	sub_823B4E28(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3be0
	ctx.lr = 0x823B50E4;
	sub_823B3BE0(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b3640
	ctx.lr = 0x823B50F0;
	sub_823B3640(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5100;
	sub_823AC5B8(ctx, base);
	// b 0x823b5108
	goto loc_823B5108;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B5108:
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

__attribute__((alias("__imp__sub_823B5124"))) PPC_WEAK_FUNC(sub_823B5124);
PPC_FUNC_IMPL(__imp__sub_823B5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5128"))) PPC_WEAK_FUNC(sub_823B5128);
PPC_FUNC_IMPL(__imp__sub_823B5128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b51a4
	if (ctx.cr6.eq) goto loc_823B51A4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B5154;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b518c
	if (ctx.cr6.eq) goto loc_823B518C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5180
	if (ctx.cr6.eq) goto loc_823B5180;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5180;
	sub_823AC608(ctx, base);
loc_823B5180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B5184:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823B5188:
	// bl 0x823ac5b8
	ctx.lr = 0x823B518C;
	sub_823AC5B8(ctx, base);
loc_823B518C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823B51A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B51AC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b51f0
	if (ctx.cr6.eq) goto loc_823B51F0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B51C8;
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
	ctx.lr = 0x823B51DC;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b518c
	if (!ctx.cr6.eq) goto loc_823B518C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B51EC;
	sub_82256CC0(ctx, base);
	// b 0x823b5180
	goto loc_823B5180;
loc_823B51F0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b518c
	if (ctx.cr6.eq) goto loc_823B518C;
	// bl 0x82256ce8
	ctx.lr = 0x823B5204;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5180
	if (ctx.cr6.eq) goto loc_823B5180;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b5184
	if (ctx.cr6.eq) goto loc_823B5184;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5248;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b5188
	goto loc_823B5188;
}

__attribute__((alias("__imp__sub_823B5254"))) PPC_WEAK_FUNC(sub_823B5254);
PPC_FUNC_IMPL(__imp__sub_823B5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5258"))) PPC_WEAK_FUNC(sub_823B5258);
PPC_FUNC_IMPL(__imp__sub_823B5258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b52d4
	if (ctx.cr6.eq) goto loc_823B52D4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B5284;
	sub_823C1170(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b52bc
	if (ctx.cr6.eq) goto loc_823B52BC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b52b0
	if (ctx.cr6.eq) goto loc_823B52B0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B52B0;
	sub_823AC608(ctx, base);
loc_823B52B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B52B4:
	// li r4,6
	ctx.r4.s64 = 6;
loc_823B52B8:
	// bl 0x823ac5b8
	ctx.lr = 0x823B52BC;
	sub_823AC5B8(ctx, base);
loc_823B52BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823B52D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B52DC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b5320
	if (ctx.cr6.eq) goto loc_823B5320;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B52F8;
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
	ctx.lr = 0x823B530C;
	sub_823C12C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b52bc
	if (!ctx.cr6.eq) goto loc_823B52BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B531C;
	sub_82256CC0(ctx, base);
	// b 0x823b52b0
	goto loc_823B52B0;
loc_823B5320:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b52bc
	if (ctx.cr6.eq) goto loc_823B52BC;
	// bl 0x82256ce8
	ctx.lr = 0x823B5334;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b52b0
	if (ctx.cr6.eq) goto loc_823B52B0;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b52b4
	if (ctx.cr6.eq) goto loc_823B52B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5378;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b52b8
	goto loc_823B52B8;
}

__attribute__((alias("__imp__sub_823B5384"))) PPC_WEAK_FUNC(sub_823B5384);
PPC_FUNC_IMPL(__imp__sub_823B5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5388"))) PPC_WEAK_FUNC(sub_823B5388);
PPC_FUNC_IMPL(__imp__sub_823B5388) {
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
	ctx.lr = 0x823B53A0;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b53e4
	if (ctx.cr6.eq) goto loc_823B53E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823b53e4
	if (!ctx.cr6.eq) goto loc_823B53E4;
	// bl 0x823a0f10
	ctx.lr = 0x823B53B8;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b53cc
	if (!ctx.cr6.eq) goto loc_823B53CC;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b53ec
	goto loc_823B53EC;
loc_823B53CC:
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
loc_823B53E4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B53EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B53F8;
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

__attribute__((alias("__imp__sub_823B5410"))) PPC_WEAK_FUNC(sub_823B5410);
PPC_FUNC_IMPL(__imp__sub_823B5410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B5418;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B5424;
	sub_823A0F10(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5448
	if (!ctx.cr6.eq) goto loc_823B5448;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5440;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B5448:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B5458;
	sub_823585A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x8240cbd0
	ctx.lr = 0x823B546C;
	sub_8240CBD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b54dc
	if (ctx.cr6.eq) goto loc_823B54DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b54dc
	if (ctx.cr6.eq) goto loc_823B54DC;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823b54a4
	if (!ctx.cr6.eq) goto loc_823B54A4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823ac5b8
	ctx.lr = 0x823B549C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B54A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B54B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B54C8;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B54D4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B54DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B54E4;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B54F0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B54F8"))) PPC_WEAK_FUNC(sub_823B54F8);
PPC_FUNC_IMPL(__imp__sub_823B54F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B5500;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B550C;
	sub_823A0F10(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5530
	if (!ctx.cr6.eq) goto loc_823B5530;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5528;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B5530:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B5540;
	sub_823585A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8240cb28
	ctx.lr = 0x823B5554;
	sub_8240CB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b55c4
	if (ctx.cr6.eq) goto loc_823B55C4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b55c4
	if (ctx.cr6.eq) goto loc_823B55C4;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823b558c
	if (!ctx.cr6.eq) goto loc_823B558C;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5584;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B558C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B55A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B55B0;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B55BC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B55C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B55CC;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B55D8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B55E0"))) PPC_WEAK_FUNC(sub_823B55E0);
PPC_FUNC_IMPL(__imp__sub_823B55E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B5600;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823b5698
	if (ctx.cr6.gt) goto loc_823B5698;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b5638
	// bdzf 4*cr6+eq,0x823b5644
	// bdzf 4*cr6+eq,0x823b5660
	// bdzf 4*cr6+eq,0x823b566c
	// bdzf 4*cr6+eq,0x823b5678
	// bne cr6,0x823b5694
	if (!ctx.cr6.eq) goto loc_823B5694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5410
	ctx.lr = 0x823B5634;
	sub_823B5410(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B5638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5128
	ctx.lr = 0x823B5640;
	sub_823B5128(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B5644:
	// bl 0x823a0f10
	ctx.lr = 0x823B5648;
	sub_823A0F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a1a78
	ctx.lr = 0x823B5650;
	sub_823A1A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B565C;
	sub_823AC5B8(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B5660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b54f8
	ctx.lr = 0x823B5668;
	sub_823B54F8(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B566C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5258
	ctx.lr = 0x823B5674;
	sub_823B5258(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B5678:
	// bl 0x823a0f10
	ctx.lr = 0x823B567C;
	sub_823A0F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a1a78
	ctx.lr = 0x823B5684;
	sub_823A1A78(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5690;
	sub_823AC5B8(ctx, base);
	// b 0x823b5698
	goto loc_823B5698;
loc_823B5694:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B5698:
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

__attribute__((alias("__imp__sub_823B56B4"))) PPC_WEAK_FUNC(sub_823B56B4);
PPC_FUNC_IMPL(__imp__sub_823B56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B56B8"))) PPC_WEAK_FUNC(sub_823B56B8);
PPC_FUNC_IMPL(__imp__sub_823B56B8) {
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
	ctx.lr = 0x823B56D8;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26456
	ctx.r9.s64 = ctx.r10.s64 + -26456;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B56EC;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bl 0x82381358
	ctx.lr = 0x823B5740;
	sub_82381358(ctx, base);
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

__attribute__((alias("__imp__sub_823B5758"))) PPC_WEAK_FUNC(sub_823B5758);
PPC_FUNC_IMPL(__imp__sub_823B5758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B5760;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-26456
	ctx.r10.s64 = ctx.r11.s64 + -26456;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r29,r3,220
	ctx.r29.s64 = ctx.r3.s64 + 220;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r31.u32);
	// beq cr6,0x823b5794
	if (ctx.cr6.eq) goto loc_823B5794;
	// bl 0x82357240
	ctx.lr = 0x823B5790;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B5794:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,200
	ctx.r30.s64 = ctx.r28.s64 + 200;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r3,204(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r31.u32);
	// beq cr6,0x823b57b8
	if (ctx.cr6.eq) goto loc_823B57B8;
	// bl 0x82357240
	ctx.lr = 0x823B57B4;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823B57B8:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r29,r28,180
	ctx.r29.s64 = ctx.r28.s64 + 180;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 188, ctx.r31.u32);
	// beq cr6,0x823b57dc
	if (ctx.cr6.eq) goto loc_823B57DC;
	// bl 0x82357240
	ctx.lr = 0x823B57D8;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B57DC:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x823c1100
	ctx.lr = 0x823B57EC;
	sub_823C1100(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B57F4;
	sub_823C13B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B57FC"))) PPC_WEAK_FUNC(sub_823B57FC);
PPC_FUNC_IMPL(__imp__sub_823B57FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5800"))) PPC_WEAK_FUNC(sub_823B5800);
PPC_FUNC_IMPL(__imp__sub_823B5800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823B5808;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B5814;
	sub_823A0F10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823a1028
	ctx.lr = 0x823B581C;
	sub_823A1028(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5920
	if (ctx.cr6.eq) goto loc_823B5920;
loc_823B582C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a11e8
	ctx.lr = 0x823B5838;
	sub_823A11E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x823b58c0
	if (ctx.cr6.eq) goto loc_823B58C0;
	// bl 0x823a1240
	ctx.lr = 0x823B584C;
	sub_823A1240(ctx, base);
	// lwz r30,188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r11,192(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// addi r31,r26,180
	ctx.r31.s64 = ctx.r26.s64 + 180;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsb r28,r3
	ctx.r28.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b587c
	if (ctx.cr6.gt) goto loc_823B587C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B5874;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b5938
	if (ctx.cr6.eq) goto loc_823B5938;
loc_823B587C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5938
	if (ctx.cr6.eq) goto loc_823B5938;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x823a1288
	ctx.lr = 0x823B58A8;
	sub_823A1288(ctx, base);
	// lwz r30,208(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// lwz r8,212(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	// addi r31,r26,200
	ctx.r31.s64 = ctx.r26.s64 + 200;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// b 0x823b58d8
	goto loc_823B58D8;
loc_823B58C0:
	// bl 0x823a1288
	ctx.lr = 0x823B58C4;
	sub_823A1288(ctx, base);
	// lwz r30,228(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// lwz r11,232(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	// addi r31,r26,220
	ctx.r31.s64 = ctx.r26.s64 + 220;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823B58D8:
	// ld r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// bgt cr6,0x823b58f4
	if (ctx.cr6.gt) goto loc_823B58F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1130
	ctx.lr = 0x823B58EC;
	sub_823A1130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b5938
	if (ctx.cr6.eq) goto loc_823B5938;
loc_823B58F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5938
	if (ctx.cr6.eq) goto loc_823B5938;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// stdx r28,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x823b582c
	if (ctx.cr6.lt) goto loc_823B582C;
loc_823B5920:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B592C;
	sub_823AC5B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B5938:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B594C;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823B5958"))) PPC_WEAK_FUNC(sub_823B5958);
PPC_FUNC_IMPL(__imp__sub_823B5958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5758
	ctx.lr = 0x823B5978;
	sub_823B5758(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5990
	if (ctx.cr6.eq) goto loc_823B5990;
	// bl 0x82357128
	ctx.lr = 0x823B598C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B5990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B59A8"))) PPC_WEAK_FUNC(sub_823B59A8);
PPC_FUNC_IMPL(__imp__sub_823B59A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823B59B0;
	sub_8224876C(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B59C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b5ba4
	if (!ctx.cr6.eq) goto loc_823B5BA4;
	// bl 0x823a1e50
	ctx.lr = 0x823B59D4;
	sub_823A1E50(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r24,r10,-26468
	ctx.r24.s64 = ctx.r10.s64 + -26468;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ori r22,r9,3
	ctx.r22.u64 = ctx.r9.u64 | 3;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,-26548
	ctx.r29.s64 = ctx.r10.s64 + -26548;
	// beq cr6,0x823b5ad0
	if (ctx.cr6.eq) goto loc_823B5AD0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_823B5A3C:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B5A4C;
	sub_82356FE0(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwzx r21,r27,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B5A6C;
	sub_82356E70(ctx, base);
	// stb r21,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r21.u8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82357038
	ctx.lr = 0x823B5A7C;
	sub_82357038(ctx, base);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823b47f0
	ctx.lr = 0x823B5A90;
	sub_823B47F0(ctx, base);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82356eb8
	ctx.lr = 0x823B5AA0;
	sub_82356EB8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82356eb8
	ctx.lr = 0x823B5AA8;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x823b5ac0
	if (!ctx.cr6.eq) goto loc_823B5AC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5AC0;
	sub_823AC608(ctx, base);
loc_823B5AC0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x823b5a3c
	if (!ctx.cr0.eq) goto loc_823B5A3C;
loc_823B5AD0:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b5b70
	if (ctx.cr6.eq) goto loc_823B5B70;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_823B5AE8:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82356fe0
	ctx.lr = 0x823B5AF8;
	sub_82356FE0(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82356e70
	ctx.lr = 0x823B5B10;
	sub_82356E70(ctx, base);
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82357038
	ctx.lr = 0x823B5B20;
	sub_82357038(ctx, base);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823b47f0
	ctx.lr = 0x823B5B34;
	sub_823B47F0(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82356eb8
	ctx.lr = 0x823B5B44;
	sub_82356EB8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82356eb8
	ctx.lr = 0x823B5B4C;
	sub_82356EB8(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x823b5b64
	if (!ctx.cr6.eq) goto loc_823B5B64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5B64;
	sub_823AC608(ctx, base);
loc_823B5B64:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x823b5ae8
	if (!ctx.cr0.eq) goto loc_823B5AE8;
loc_823B5B70:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B5B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823a4628
	ctx.lr = 0x823B5B94;
	sub_823A4628(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5ba4
	if (ctx.cr6.eq) goto loc_823B5BA4;
	// bl 0x82357240
	ctx.lr = 0x823B5BA4;
	sub_82357240(ctx, base);
loc_823B5BA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823B5BB0"))) PPC_WEAK_FUNC(sub_823B5BB0);
PPC_FUNC_IMPL(__imp__sub_823B5BB0) {
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
	ctx.lr = 0x823B5BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b5bf8
	if (ctx.cr6.eq) goto loc_823B5BF8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B5BF0;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823b5c00
	goto loc_823B5C00;
loc_823B5BF8:
	// bl 0x823ac668
	ctx.lr = 0x823B5BFC;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_823B5C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5C08;
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

__attribute__((alias("__imp__sub_823B5C1C"))) PPC_WEAK_FUNC(sub_823B5C1C);
PPC_FUNC_IMPL(__imp__sub_823B5C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5C20"))) PPC_WEAK_FUNC(sub_823B5C20);
PPC_FUNC_IMPL(__imp__sub_823B5C20) {
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
	ctx.lr = 0x823B5C40;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-26384
	ctx.r8.s64 = ctx.r10.s64 + -26384;
	// addi r7,r9,30604
	ctx.r7.s64 = ctx.r9.s64 + 30604;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x823B5C64;
	sub_82370088(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823B5C70;
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

__attribute__((alias("__imp__sub_823B5C88"))) PPC_WEAK_FUNC(sub_823B5C88);
PPC_FUNC_IMPL(__imp__sub_823B5C88) {
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
	ctx.lr = 0x823B5CA0;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5ccc
	if (ctx.cr6.eq) goto loc_823B5CCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x823b5ccc
	if (!ctx.cr6.eq) goto loc_823B5CCC;
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
loc_823B5CCC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5CE0;
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

__attribute__((alias("__imp__sub_823B5CF8"))) PPC_WEAK_FUNC(sub_823B5CF8);
PPC_FUNC_IMPL(__imp__sub_823B5CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	ctx.lr = 0x823B5D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b5d34
	if (ctx.cr6.eq) goto loc_823B5D34;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b5d9c
	goto loc_823B5D9C;
loc_823B5D34:
	// bl 0x823ac670
	ctx.lr = 0x823B5D38;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b5d4c
	if (ctx.cr6.eq) goto loc_823B5D4C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b5d98
	goto loc_823B5D98;
loc_823B5D4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6410
	ctx.lr = 0x823B5D54;
	sub_822D6410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5db0
	if (ctx.cr6.eq) goto loc_823B5DB0;
	// rlwinm r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b5d90
	if (!ctx.cr6.eq) goto loc_823B5D90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370310
	ctx.lr = 0x823B5D74;
	sub_82370310(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82370360
	ctx.lr = 0x823B5D80;
	sub_82370360(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823700d8
	ctx.lr = 0x823B5D88;
	sub_823700D8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823b5da8
	goto loc_823B5DA8;
loc_823B5D90:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_823B5D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B5D9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B5DA4;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_823B5DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5DB0;
	sub_823AC5B8(ctx, base);
loc_823B5DB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5DC4"))) PPC_WEAK_FUNC(sub_823B5DC4);
PPC_FUNC_IMPL(__imp__sub_823B5DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5DC8"))) PPC_WEAK_FUNC(sub_823B5DC8);
PPC_FUNC_IMPL(__imp__sub_823B5DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-26384
	ctx.r9.s64 = ctx.r11.s64 + -26384;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823700d8
	ctx.lr = 0x823B5E08;
	sub_823700D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B5E10;
	sub_823C13B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b5e28
	if (ctx.cr6.eq) goto loc_823B5E28;
	// bl 0x82357128
	ctx.lr = 0x823B5E24;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B5E28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5E40"))) PPC_WEAK_FUNC(sub_823B5E40);
PPC_FUNC_IMPL(__imp__sub_823B5E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B5E60;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b5eac
	if (ctx.cr6.gt) goto loc_823B5EAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b5e8c
	// bdzf 4*cr6+eq,0x823b5e98
	// bne cr6,0x823b5ea8
	if (!ctx.cr6.eq) goto loc_823B5EA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5bb0
	ctx.lr = 0x823B5E88;
	sub_823B5BB0(ctx, base);
	// b 0x823b5eac
	goto loc_823B5EAC;
loc_823B5E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5cf8
	ctx.lr = 0x823B5E94;
	sub_823B5CF8(ctx, base);
	// b 0x823b5eac
	goto loc_823B5EAC;
loc_823B5E98:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B5EA4;
	sub_823AC5B8(ctx, base);
	// b 0x823b5eac
	goto loc_823B5EAC;
loc_823B5EA8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B5EAC:
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

__attribute__((alias("__imp__sub_823B5EC8"))) PPC_WEAK_FUNC(sub_823B5EC8);
PPC_FUNC_IMPL(__imp__sub_823B5EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B5ED0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B5EE0;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B5EE8;
	sub_823A0F10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b5f2c
	if (ctx.cr6.eq) goto loc_823B5F2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x823b5f2c
	if (!ctx.cr6.eq) goto loc_823B5F2C;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82370360
	ctx.lr = 0x823B5F0C;
	sub_82370360(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82370360
	ctx.lr = 0x823B5F18;
	sub_82370360(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B5F2C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5F40;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B5F4C"))) PPC_WEAK_FUNC(sub_823B5F4C);
PPC_FUNC_IMPL(__imp__sub_823B5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B5F50"))) PPC_WEAK_FUNC(sub_823B5F50);
PPC_FUNC_IMPL(__imp__sub_823B5F50) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b5f7c
	if (ctx.cr6.eq) goto loc_823B5F7C;
	// bl 0x82357128
	ctx.lr = 0x823B5F74;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_823B5F7C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B5F90"))) PPC_WEAK_FUNC(sub_823B5F90);
PPC_FUNC_IMPL(__imp__sub_823B5F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b5fe4
	if (ctx.cr6.eq) goto loc_823B5FE4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B5FBC;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b60a4
	if (ctx.cr6.eq) goto loc_823B60A4;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b6098
	if (ctx.cr6.eq) goto loc_823B6098;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B5FE0;
	sub_823AC608(ctx, base);
	// b 0x823b6098
	goto loc_823B6098;
loc_823B5FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B5FEC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b6024
	if (!ctx.cr6.eq) goto loc_823B6024;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b6024
	if (!ctx.cr6.eq) goto loc_823B6024;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b60a4
	if (ctx.cr6.eq) goto loc_823B60A4;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823b609c
	goto loc_823B609C;
loc_823B6024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B602C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b6044
	if (ctx.cr6.eq) goto loc_823B6044;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b6068
	goto loc_823B6068;
loc_823B6044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6070
	if (ctx.cr6.eq) goto loc_823B6070;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B6068:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B6070;
	sub_823AC608(ctx, base);
loc_823B6070:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B6084;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b60a4
	if (!ctx.cr6.eq) goto loc_823B60A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B6098;
	sub_82256CC0(ctx, base);
loc_823B6098:
	// li r4,10
	ctx.r4.s64 = 10;
loc_823B609C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B60A4;
	sub_823AC5B8(ctx, base);
loc_823B60A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B60BC"))) PPC_WEAK_FUNC(sub_823B60BC);
PPC_FUNC_IMPL(__imp__sub_823B60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B60C0"))) PPC_WEAK_FUNC(sub_823B60C0);
PPC_FUNC_IMPL(__imp__sub_823B60C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B60E0;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b6118
	if (ctx.cr6.eq) goto loc_823B6118;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B6114;
	sub_823AC608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B6118:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823ac5b8
	ctx.lr = 0x823B6120;
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

__attribute__((alias("__imp__sub_823B6138"))) PPC_WEAK_FUNC(sub_823B6138);
PPC_FUNC_IMPL(__imp__sub_823B6138) {
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
	ctx.lr = 0x823B615C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6188
	if (ctx.cr6.eq) goto loc_823B6188;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82256cc0
	ctx.lr = 0x823B616C;
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
	ctx.lr = 0x823B6180;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b61cc
	goto loc_823B61CC;
loc_823B6188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B6190;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b61bc
	if (ctx.cr6.eq) goto loc_823B61BC;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82256cc0
	ctx.lr = 0x823B61A0;
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
	ctx.lr = 0x823B61B4;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b61cc
	goto loc_823B61CC;
loc_823B61BC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b61d4
	if (ctx.cr6.eq) goto loc_823B61D4;
	// li r4,6
	ctx.r4.s64 = 6;
loc_823B61CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B61D4;
	sub_823AC5B8(ctx, base);
loc_823B61D4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B61E8"))) PPC_WEAK_FUNC(sub_823B61E8);
PPC_FUNC_IMPL(__imp__sub_823B61E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B6208;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b6244
	if (ctx.cr6.eq) goto loc_823B6244;
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
	ctx.lr = 0x823B622C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B623C;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b625c
	goto loc_823B625C;
loc_823B6244:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b625c
	if (ctx.cr6.eq) goto loc_823B625C;
	// li r4,7
	ctx.r4.s64 = 7;
loc_823B625C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B6264;
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

__attribute__((alias("__imp__sub_823B627C"))) PPC_WEAK_FUNC(sub_823B627C);
PPC_FUNC_IMPL(__imp__sub_823B627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6280"))) PPC_WEAK_FUNC(sub_823B6280);
PPC_FUNC_IMPL(__imp__sub_823B6280) {
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
	ctx.lr = 0x823B62A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b62d0
	if (ctx.cr6.eq) goto loc_823B62D0;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x822d6400
	ctx.lr = 0x823B62B4;
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
	ctx.lr = 0x823B62C8;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b6314
	goto loc_823B6314;
loc_823B62D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B62D8;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b62fc
	if (ctx.cr6.eq) goto loc_823B62FC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x822d6400
	ctx.lr = 0x823B62E8;
	sub_822D6400(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823b6314
	goto loc_823B6314;
loc_823B62FC:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b631c
	if (ctx.cr6.eq) goto loc_823B631C;
	// li r4,9
	ctx.r4.s64 = 9;
loc_823B6314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B631C;
	sub_823AC5B8(ctx, base);
loc_823B631C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B6330"))) PPC_WEAK_FUNC(sub_823B6330);
PPC_FUNC_IMPL(__imp__sub_823B6330) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b63dc
	if (!ctx.cr6.eq) goto loc_823B63DC;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b63dc
	if (ctx.cr6.eq) goto loc_823B63DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b63dc
	if (ctx.cr6.eq) goto loc_823B63DC;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b63dc
	if (ctx.cr6.eq) goto loc_823B63DC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x823B6394;
	sub_82370C48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82372388
	ctx.lr = 0x823B63A4;
	sub_82372388(ctx, base);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371ca0
	ctx.lr = 0x823B63B0;
	sub_82371CA0(ctx, base);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371ca0
	ctx.lr = 0x823B63BC;
	sub_82371CA0(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x822d6400
	ctx.lr = 0x823B63C4;
	sub_822D6400(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B63D0;
	sub_823AC5B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x823B63D8;
	sub_82372340(ctx, base);
	// b 0x823b63f8
	goto loc_823B63F8;
loc_823B63DC:
	// bl 0x822d6400
	ctx.lr = 0x823B63E0;
	sub_822D6400(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x823ac5b8
	ctx.lr = 0x823B63F8;
	sub_823AC5B8(ctx, base);
loc_823B63F8:
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

__attribute__((alias("__imp__sub_823B6410"))) PPC_WEAK_FUNC(sub_823B6410);
PPC_FUNC_IMPL(__imp__sub_823B6410) {
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
	ctx.lr = 0x823B6428;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b646c
	if (ctx.cr6.eq) goto loc_823B646C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x823b646c
	if (!ctx.cr6.eq) goto loc_823B646C;
	// bl 0x823a0f10
	ctx.lr = 0x823B6440;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b6454
	if (!ctx.cr6.eq) goto loc_823B6454;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b6474
	goto loc_823B6474;
loc_823B6454:
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
loc_823B646C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B6474:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B6480;
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

__attribute__((alias("__imp__sub_823B6498"))) PPC_WEAK_FUNC(sub_823B6498);
PPC_FUNC_IMPL(__imp__sub_823B6498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B64B4;
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
	ctx.lr = 0x823B64CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b64f0
	if (ctx.cr6.eq) goto loc_823B64F0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B64E8;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b650c
	goto loc_823B650C;
loc_823B64F0:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b6504
	if (!ctx.cr6.eq) goto loc_823B6504;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823B6504:
	// bl 0x823ac5b8
	ctx.lr = 0x823B6508;
	sub_823AC5B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823B650C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6524"))) PPC_WEAK_FUNC(sub_823B6524);
PPC_FUNC_IMPL(__imp__sub_823B6524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6528"))) PPC_WEAK_FUNC(sub_823B6528);
PPC_FUNC_IMPL(__imp__sub_823B6528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B6530;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	ctx.lr = 0x823B6548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b6564
	if (ctx.cr6.eq) goto loc_823B6564;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b66d8
	goto loc_823B66D8;
loc_823B6564:
	// bl 0x823ac6b8
	ctx.lr = 0x823B6568;
	sub_823AC6B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256578
	ctx.lr = 0x823B6588;
	sub_82256578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b65b4
	if (ctx.cr6.eq) goto loc_823B65B4;
loc_823B6594:
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
	ctx.lr = 0x823B65AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x823b66d0
	goto loc_823B66D0;
loc_823B65B4:
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82248a40
	ctx.lr = 0x823B65C4;
	sub_82248A40(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x823b65e4
	if (ctx.cr6.eq) goto loc_823B65E4;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b66d4
	goto loc_823B66D4;
loc_823B65E4:
	// ld r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 116);
	// addi r30,r31,184
	ctx.r30.s64 = ctx.r31.s64 + 184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240cf90
	ctx.lr = 0x823B6604;
	sub_8240CF90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x823b66b4
	if (!ctx.cr6.eq) goto loc_823B66B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b66b4
	if (ctx.cr6.eq) goto loc_823B66B4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B6624;
	sub_823570E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823B662C;
	sub_823570F0(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B6638;
	sub_823570E0(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b6654
	if (!ctx.cr6.eq) goto loc_823B6654;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b66d4
	goto loc_823B66D4;
loc_823B6654:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823B665C;
	sub_823585A0(ctx, base);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B666C;
	sub_823585A0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,180(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240cf90
	ctx.lr = 0x823B6684;
	sub_8240CF90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b6698
	if (ctx.cr6.eq) goto loc_823B6698;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b6594
	if (!ctx.cr6.eq) goto loc_823B6594;
loc_823B6698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B66A0;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B66AC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B66B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B66CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823B66D0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823B66D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B66D8:
	// bl 0x823ac608
	ctx.lr = 0x823B66DC;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B66E8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B66F0"))) PPC_WEAK_FUNC(sub_823B66F0);
PPC_FUNC_IMPL(__imp__sub_823B66F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B66F8;
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
	// bne cr6,0x823b6710
	if (!ctx.cr6.eq) goto loc_823B6710;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823B6710:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823b6728
	if (!ctx.cr0.eq) goto loc_823B6728;
loc_823B671C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B6728:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B6730;
	sub_823570E0(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x823B6748;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B6754;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b671c
	if (ctx.cr6.eq) goto loc_823B671C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B6768;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b67a4
	if (ctx.cr6.eq) goto loc_823B67A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x823B678C;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b67a4
	if (ctx.cr6.eq) goto loc_823B67A4;
	// bl 0x82357240
	ctx.lr = 0x823B679C;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823B67A4:
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

__attribute__((alias("__imp__sub_823B67B8"))) PPC_WEAK_FUNC(sub_823B67B8);
PPC_FUNC_IMPL(__imp__sub_823B67B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B67C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b67fc
	if (ctx.cr6.gt) goto loc_823B67FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b66f0
	ctx.lr = 0x823B67E8;
	sub_823B66F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b67fc
	if (!ctx.cr6.eq) goto loc_823B67FC;
loc_823B67F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B67FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b67f0
	if (ctx.cr6.eq) goto loc_823B67F0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stdx r9,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// ld r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r5,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r5.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B6848"))) PPC_WEAK_FUNC(sub_823B6848);
PPC_FUNC_IMPL(__imp__sub_823B6848) {
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
	ctx.lr = 0x823B6868;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26312
	ctx.r9.s64 = ctx.r10.s64 + -26312;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B687C;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B68DC"))) PPC_WEAK_FUNC(sub_823B68DC);
PPC_FUNC_IMPL(__imp__sub_823B68DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B68E0"))) PPC_WEAK_FUNC(sub_823B68E0);
PPC_FUNC_IMPL(__imp__sub_823B68E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B68E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-26312
	ctx.r10.s64 = ctx.r11.s64 + -26312;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r30,r3,208
	ctx.r30.s64 = ctx.r3.s64 + 208;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r31.u32);
	// beq cr6,0x823b691c
	if (ctx.cr6.eq) goto loc_823B691C;
	// bl 0x82357240
	ctx.lr = 0x823B6918;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823B691C:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,188
	ctx.r29.s64 = ctx.r28.s64 + 188;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,192(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r31.u32);
	// beq cr6,0x823b6940
	if (ctx.cr6.eq) goto loc_823B6940;
	// bl 0x82357240
	ctx.lr = 0x823B693C;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823B6940:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x823c1100
	ctx.lr = 0x823B6950;
	sub_823C1100(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B6958;
	sub_823C13B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B6960"))) PPC_WEAK_FUNC(sub_823B6960);
PPC_FUNC_IMPL(__imp__sub_823B6960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B6968;
	sub_8224878C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b69b0
	if (ctx.cr6.eq) goto loc_823B69B0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B699C;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B69A8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B69B0:
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x823ada98
	ctx.lr = 0x823B6A14;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6a50
	if (ctx.cr6.eq) goto loc_823B6A50;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ada98
	ctx.lr = 0x823B6A2C;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6a50
	if (ctx.cr6.eq) goto loc_823B6A50;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823ada98
	ctx.lr = 0x823B6A48;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b6a6c
	if (!ctx.cr6.eq) goto loc_823B6A6C;
loc_823B6A50:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B6A64;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b6ae8
	goto loc_823B6AE8;
loc_823B6A6C:
	// addi r11,r30,228
	ctx.r11.s64 = ctx.r30.s64 + 228;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822d6388
	ctx.lr = 0x823B6AA4;
	sub_822D6388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823b6ae0
	if (ctx.cr6.eq) goto loc_823B6AE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B6AD8;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823b6ae8
	goto loc_823B6AE8;
loc_823B6AE0:
	// bl 0x823ac668
	ctx.lr = 0x823B6AE4;
	sub_823AC668(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
loc_823B6AE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B6AF0;
	sub_823AC5B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823826f8
	ctx.lr = 0x823B6AF8;
	sub_823826F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823826f8
	ctx.lr = 0x823B6B00;
	sub_823826F8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823826f8
	ctx.lr = 0x823B6B08;
	sub_823826F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B6B10"))) PPC_WEAK_FUNC(sub_823B6B10);
PPC_FUNC_IMPL(__imp__sub_823B6B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b68e0
	ctx.lr = 0x823B6B30;
	sub_823B68E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6b48
	if (ctx.cr6.eq) goto loc_823B6B48;
	// bl 0x82357128
	ctx.lr = 0x823B6B44;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B6B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6B60"))) PPC_WEAK_FUNC(sub_823B6B60);
PPC_FUNC_IMPL(__imp__sub_823B6B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x823B6B68;
	sub_82248754(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
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
	ctx.lr = 0x823B6B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b6b9c
	if (ctx.cr6.eq) goto loc_823B6B9C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b6e2c
	goto loc_823B6E2C;
loc_823B6B9C:
	// bl 0x823ac6b8
	ctx.lr = 0x823B6BA0;
	sub_823AC6B8(ctx, base);
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// lwz r17,88(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r16,84(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x823b6bcc
	if (!ctx.cr6.eq) goto loc_823B6BCC;
loc_823B6BBC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b6e28
	goto loc_823B6E28;
loc_823B6BCC:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,184
	ctx.r28.s64 = ctx.r31.s64 + 184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8240cea8
	ctx.lr = 0x823B6C08;
	sub_8240CEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x823b6e08
	if (!ctx.cr6.eq) goto loc_823B6E08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6e08
	if (ctx.cr6.eq) goto loc_823B6E08;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B6C28;
	sub_823570E0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823B6C30;
	sub_823570F0(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B6C3C;
	sub_823570E0(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b6c58
	if (!ctx.cr6.eq) goto loc_823B6C58;
loc_823B6C48:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b6e28
	goto loc_823B6E28;
loc_823B6C58:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823B6C60;
	sub_823585A0(ctx, base);
	// addi r24,r31,188
	ctx.r24.s64 = ctx.r31.s64 + 188;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823826f8
	ctx.lr = 0x823B6C6C;
	sub_823826F8(ctx, base);
	// addi r26,r31,208
	ctx.r26.s64 = ctx.r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823826f8
	ctx.lr = 0x823B6C78;
	sub_823826F8(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r25,20(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823b6d8c
	if (ctx.cr6.eq) goto loc_823B6D8C;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r22,5
	ctx.r22.s64 = 5;
	// li r23,6
	ctx.r23.s64 = 6;
loc_823B6CA0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b6cd4
	if (!ctx.cr6.eq) goto loc_823B6CD4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82359248
	ctx.lr = 0x823B6CD0;
	sub_82359248(ctx, base);
	// b 0x823b6d74
	goto loc_823B6D74;
loc_823B6CD4:
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r10,r9,-6
	ctx.r10.s64 = ctx.r9.s64 + -6;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x823b6bbc
	if (ctx.cr6.gt) goto loc_823B6BBC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b6bbc
	// bdzf 4*cr6+eq,0x823b6d1c
	// bdzf 4*cr6+eq,0x823b6bbc
	// bdzf 4*cr6+eq,0x823b6d44
	// bdzf 4*cr6+eq,0x823b6d2c
	// bdzf 4*cr6+eq,0x823b6d3c
	// bne cr6,0x823b6d54
	if (!ctx.cr6.eq) goto loc_823B6D54;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stb r18,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r18.u8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// b 0x823b6d68
	goto loc_823B6D68;
loc_823B6D1C:
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// stb r19,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r19.u8);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// b 0x823b6d68
	goto loc_823B6D68;
loc_823B6D2C:
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// stb r20,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r20.u8);
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// b 0x823b6d68
	goto loc_823B6D68;
loc_823B6D3C:
	// stb r21,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r21.u8);
	// b 0x823b6d58
	goto loc_823B6D58;
loc_823B6D44:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stb r22,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r22.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x823b6d68
	goto loc_823B6D68;
loc_823B6D54:
	// stb r23,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r23.u8);
loc_823B6D58:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_823B6D68:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823b67b8
	ctx.lr = 0x823B6D74;
	sub_823B67B8(ctx, base);
loc_823B6D74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b6c48
	if (ctx.cr6.eq) goto loc_823B6C48;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823b6ca0
	if (ctx.cr6.lt) goto loc_823B6CA0;
loc_823B6D8C:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B6D9C;
	sub_823585A0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8240cea8
	ctx.lr = 0x823B6DD8;
	sub_8240CEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b6dec
	if (ctx.cr6.eq) goto loc_823B6DEC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b6e08
	if (!ctx.cr6.eq) goto loc_823B6E08;
loc_823B6DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B6DF4;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B6E00;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823B6E08:
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
	ctx.lr = 0x823B6E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823B6E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B6E2C:
	// bl 0x823ac608
	ctx.lr = 0x823B6E30;
	sub_823AC608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B6E3C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_823B6E44"))) PPC_WEAK_FUNC(sub_823B6E44);
PPC_FUNC_IMPL(__imp__sub_823B6E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B6E48"))) PPC_WEAK_FUNC(sub_823B6E48);
PPC_FUNC_IMPL(__imp__sub_823B6E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B6E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823B6E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823B6E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393458
	ctx.lr = 0x823B6EBC;
	sub_82393458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b6ed0
	if (ctx.cr6.eq) goto loc_823B6ED0;
	// bl 0x82357240
	ctx.lr = 0x823B6ECC;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823B6ED0:
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

__attribute__((alias("__imp__sub_823B6EF0"))) PPC_WEAK_FUNC(sub_823B6EF0);
PPC_FUNC_IMPL(__imp__sub_823B6EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B6F10;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823b6fcc
	if (ctx.cr6.gt) goto loc_823B6FCC;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28468
	ctx.r12.s64 = ctx.r12.s64 + 28468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,28508(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28508);
	// lwz r17,28520(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28520);
	// lwz r17,28532(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28532);
	// lwz r17,28544(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28544);
	// lwz r17,28556(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28556);
	// lwz r17,28568(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28568);
	// lwz r17,28580(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28580);
	// lwz r17,28592(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28592);
	// lwz r17,28604(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28604);
	// lwz r17,28616(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28616);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6b60
	ctx.lr = 0x823B6F64;
	sub_823B6B60(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5f90
	ctx.lr = 0x823B6F70;
	sub_823B5F90(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b60c0
	ctx.lr = 0x823B6F7C;
	sub_823B60C0(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6528
	ctx.lr = 0x823B6F88;
	sub_823B6528(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6138
	ctx.lr = 0x823B6F94;
	sub_823B6138(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b61e8
	ctx.lr = 0x823B6FA0;
	sub_823B61E8(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6960
	ctx.lr = 0x823B6FAC;
	sub_823B6960(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6280
	ctx.lr = 0x823B6FB8;
	sub_823B6280(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6330
	ctx.lr = 0x823B6FC4;
	sub_823B6330(ctx, base);
	// b 0x823b6fcc
	goto loc_823B6FCC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B6FCC:
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

__attribute__((alias("__imp__sub_823B6FE8"))) PPC_WEAK_FUNC(sub_823B6FE8);
PPC_FUNC_IMPL(__imp__sub_823B6FE8) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r6,r10,-26244
	ctx.r6.s64 = ctx.r10.s64 + -26244;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r5,r9,30604
	ctx.r5.s64 = ctx.r9.s64 + 30604;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82370088
	ctx.lr = 0x823B7040;
	sub_82370088(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r3,r4,30588
	ctx.r3.s64 = ctx.r4.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823B705C;
	sub_823585A0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r9,r10,30596
	ctx.r9.s64 = ctx.r10.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823B7078;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6e48
	ctx.lr = 0x823B7080;
	sub_823B6E48(ctx, base);
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

__attribute__((alias("__imp__sub_823B7098"))) PPC_WEAK_FUNC(sub_823B7098);
PPC_FUNC_IMPL(__imp__sub_823B7098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-26244
	ctx.r7.s64 = ctx.r11.s64 + -26244;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x823B70EC;
	sub_823700D8(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r11,r3,-30368
	ctx.r11.s64 = ctx.r3.s64 + -30368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393458
	ctx.lr = 0x823B7104;
	sub_82393458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b711c
	if (ctx.cr6.eq) goto loc_823B711C;
	// bl 0x82357240
	ctx.lr = 0x823B7118;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823B711C:
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

__attribute__((alias("__imp__sub_823B713C"))) PPC_WEAK_FUNC(sub_823B713C);
PPC_FUNC_IMPL(__imp__sub_823B713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7140"))) PPC_WEAK_FUNC(sub_823B7140);
PPC_FUNC_IMPL(__imp__sub_823B7140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x823B7168;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,75
	ctx.r11.s64 = ctx.r30.s64 + 75;
	// addi r10,r31,75
	ctx.r10.s64 = ctx.r31.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B7178:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823b7178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B7178;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B7194;
	sub_82248A40(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// bl 0x82393c50
	ctx.lr = 0x823B71C0;
	sub_82393C50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B71D8"))) PPC_WEAK_FUNC(sub_823B71D8);
PPC_FUNC_IMPL(__imp__sub_823B71D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7098
	ctx.lr = 0x823B71F8;
	sub_823B7098(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b7210
	if (ctx.cr6.eq) goto loc_823B7210;
	// bl 0x82357128
	ctx.lr = 0x823B720C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B7210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7228"))) PPC_WEAK_FUNC(sub_823B7228);
PPC_FUNC_IMPL(__imp__sub_823B7228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r6,r10,-26244
	ctx.r6.s64 = ctx.r10.s64 + -26244;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r5,r9,30604
	ctx.r5.s64 = ctx.r9.s64 + 30604;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82370088
	ctx.lr = 0x823B7288;
	sub_82370088(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r3,r4,30588
	ctx.r3.s64 = ctx.r4.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823B72A4;
	sub_823585A0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r9,r10,30596
	ctx.r9.s64 = ctx.r10.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823B72C0;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b6e48
	ctx.lr = 0x823B72C8;
	sub_823B6E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823b7140
	ctx.lr = 0x823B72D4;
	sub_823B7140(ctx, base);
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

__attribute__((alias("__imp__sub_823B72F0"))) PPC_WEAK_FUNC(sub_823B72F0);
PPC_FUNC_IMPL(__imp__sub_823B72F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823B72F8;
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
	// bne cr6,0x823b7310
	if (!ctx.cr6.eq) goto loc_823B7310;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823B7310:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823b7328
	if (!ctx.cr0.eq) goto loc_823B7328;
loc_823B731C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B7328:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823B7330;
	sub_823570E0(ctx, base);
	// mulli r30,r26,120
	ctx.r30.s64 = ctx.r26.s64 * 120;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823B7340;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B734C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823b731c
	if (ctx.cr6.eq) goto loc_823B731C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B7360;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b73f4
	if (ctx.cr6.eq) goto loc_823B73F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b73dc
	if (!ctx.cr6.gt) goto loc_823B73DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823B7384:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b7398
	if (ctx.cr6.eq) goto loc_823B7398;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b7228
	ctx.lr = 0x823B7398;
	sub_823B7228(ctx, base);
loc_823B7398:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823b7140
	ctx.lr = 0x823B73A8;
	sub_823B7140(ctx, base);
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
	ctx.lr = 0x823B73C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b7384
	if (ctx.cr6.lt) goto loc_823B7384;
loc_823B73DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b73f4
	if (ctx.cr6.eq) goto loc_823B73F4;
	// bl 0x82357240
	ctx.lr = 0x823B73EC;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823B73F4:
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

__attribute__((alias("__imp__sub_823B7408"))) PPC_WEAK_FUNC(sub_823B7408);
PPC_FUNC_IMPL(__imp__sub_823B7408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x823B7410;
	sub_82248754(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b78b8
	if (ctx.cr6.eq) goto loc_823B78B8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x823b78b8
	if (!ctx.cr6.eq) goto loc_823B78B8;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823b7884
	if (ctx.cr6.eq) goto loc_823B7884;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// li r24,6
	ctx.r24.s64 = 6;
	// ori r21,r10,65001
	ctx.r21.u64 = ctx.r10.u64 | 65001;
	// li r18,12
	ctx.r18.s64 = 12;
	// addi r25,r11,30604
	ctx.r25.s64 = ctx.r11.s64 + 30604;
	// li r19,13
	ctx.r19.s64 = 13;
loc_823B7468:
	// lwz r11,180(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x823b6fe8
	ctx.lr = 0x823B747C;
	sub_823B6FE8(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82370310
	ctx.lr = 0x823B7488;
	sub_82370310(ctx, base);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82370088
	ctx.lr = 0x823B7494;
	sub_82370088(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82370360
	ctx.lr = 0x823B74A0;
	sub_82370360(ctx, base);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82370360
	ctx.lr = 0x823B74AC;
	sub_82370360(ctx, base);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x823700d8
	ctx.lr = 0x823B74B8;
	sub_823700D8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823700d8
	ctx.lr = 0x823B74C0;
	sub_823700D8(ctx, base);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r10,204(r1)
	PPC_STORE_U64(ctx.r1.u32 + 204, ctx.r10.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B74D8;
	sub_82248A40(ctx, base);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// bne 0x823b7514
	if (!ctx.cr0.eq) goto loc_823B7514;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b786c
	if (ctx.cr6.eq) goto loc_823B786C;
loc_823B7514:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b7524
	if (!ctx.cr6.eq) goto loc_823B7524;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b786c
	if (ctx.cr6.eq) goto loc_823B786C;
loc_823B7524:
	// lwz r11,232(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82393a58
	ctx.lr = 0x823B7548;
	sub_82393A58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
	// lwz r11,236(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 236);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82393a58
	ctx.lr = 0x823B7574;
	sub_82393A58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
	// lwz r28,80(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823b75d0
	if (ctx.cr6.eq) goto loc_823B75D0;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_823B7590:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82393a58
	ctx.lr = 0x823B75B8;
	sub_82393A58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823b7590
	if (ctx.cr6.lt) goto loc_823B7590;
loc_823B75D0:
	// lwz r26,76(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b7804
	if (ctx.cr6.eq) goto loc_823B7804;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_823B75E4:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B75F8;
	sub_823585A0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bgt cr6,0x823b7768
	if (ctx.cr6.gt) goto loc_823B7768;
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823b7768
	if (ctx.cr6.gt) goto loc_823B7768;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// bdz 0x823b7638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B7638;
	// bdz 0x823b7648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B7648;
	// bdz 0x823b765c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B765C;
	// bdz 0x823b7670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B7670;
	// bdz 0x823b7704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B7704;
	// bdz 0x823b772c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823B772C;
	// b 0x823b7718
	goto loc_823B7718;
loc_823B7638:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B7648:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B765C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B7670:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82257058
	ctx.lr = 0x823B7694;
	sub_82257058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B76A8;
	sub_823570E0(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x823570f0
	ctx.lr = 0x823B76B0;
	sub_823570F0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B76BC;
	sub_823570E0(ctx, base);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82257058
	ctx.lr = 0x823B76E8;
	sub_82257058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x823728a8
	ctx.lr = 0x823B76FC;
	sub_823728A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B7704:
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B7718:
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// b 0x823b7768
	goto loc_823B7768;
loc_823B772C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B7734;
	sub_823570E0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823570f0
	ctx.lr = 0x823B773C;
	sub_823570F0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B7748;
	sub_823570E0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b77f4
	if (ctx.cr6.eq) goto loc_823B77F4;
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82358508
	ctx.lr = 0x823B7768;
	sub_82358508(ctx, base);
loc_823B7768:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82372d50
	ctx.lr = 0x823B777C;
	sub_82372D50(ctx, base);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r29,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82373228
	ctx.lr = 0x823B7794;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x823732a8
	ctx.lr = 0x823B77A0;
	sub_823732A8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82373298
	ctx.lr = 0x823B77A8;
	sub_82373298(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82393558
	ctx.lr = 0x823B77B4;
	sub_82393558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82373298
	ctx.lr = 0x823B77C0;
	sub_82373298(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x823b77d8
	if (ctx.cr6.eq) goto loc_823B77D8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x823b77ec
	if (!ctx.cr6.eq) goto loc_823B77EC;
loc_823B77D8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b77ec
	if (ctx.cr6.eq) goto loc_823B77EC;
	// bl 0x82357128
	ctx.lr = 0x823B77E8;
	sub_82357128(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
loc_823B77EC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
loc_823B77F4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823b75e4
	if (ctx.cr6.lt) goto loc_823B75E4;
loc_823B7804:
	// lwz r31,16(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// addi r30,r15,8
	ctx.r30.s64 = ctx.r15.s64 + 8;
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b7830
	if (ctx.cr6.gt) goto loc_823B7830;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b72f0
	ctx.lr = 0x823B7828;
	sub_823B72F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
loc_823B7830:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b7890
	if (ctx.cr6.eq) goto loc_823B7890;
	// mulli r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 * 120;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b7854
	if (ctx.cr0.eq) goto loc_823B7854;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7228
	ctx.lr = 0x823B7854;
	sub_823B7228(ctx, base);
loc_823B7854:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7140
	ctx.lr = 0x823B7860;
	sub_823B7140(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823B786C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b7098
	ctx.lr = 0x823B7874;
	sub_823B7098(ctx, base);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r22,r22,92
	ctx.r22.s64 = ctx.r22.s64 + 92;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823b7468
	if (ctx.cr6.lt) goto loc_823B7468;
loc_823B7884:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823B7890:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B78A4;
	sub_823AC608(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b7098
	ctx.lr = 0x823B78AC;
	sub_823B7098(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823B78B8:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B78CC;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_823B78D8"))) PPC_WEAK_FUNC(sub_823B78D8);
PPC_FUNC_IMPL(__imp__sub_823B78D8) {
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
	ctx.lr = 0x823B78F8;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26232
	ctx.r9.s64 = ctx.r10.s64 + -26232;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B790C;
	sub_823C10A0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82381358
	ctx.lr = 0x823B7918;
	sub_82381358(ctx, base);
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

__attribute__((alias("__imp__sub_823B7930"))) PPC_WEAK_FUNC(sub_823B7930);
PPC_FUNC_IMPL(__imp__sub_823B7930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26232
	ctx.r10.s64 = ctx.r11.s64 + -26232;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c1100
	ctx.lr = 0x823B7960;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B7968;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b7980
	if (ctx.cr6.eq) goto loc_823B7980;
	// bl 0x82357128
	ctx.lr = 0x823B797C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B7980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7998"))) PPC_WEAK_FUNC(sub_823B7998);
PPC_FUNC_IMPL(__imp__sub_823B7998) {
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
	ctx.lr = 0x823B79B0;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b79f4
	if (ctx.cr6.eq) goto loc_823B79F4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823b79f4
	if (!ctx.cr6.eq) goto loc_823B79F4;
	// bl 0x823a0f10
	ctx.lr = 0x823B79C8;
	sub_823A0F10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b79dc
	if (!ctx.cr6.eq) goto loc_823B79DC;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823b79fc
	goto loc_823B79FC;
loc_823B79DC:
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
loc_823B79F4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823B79FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7A08;
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

__attribute__((alias("__imp__sub_823B7A20"))) PPC_WEAK_FUNC(sub_823B7A20);
PPC_FUNC_IMPL(__imp__sub_823B7A20) {
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
	// beq cr6,0x823b7a54
	if (ctx.cr6.eq) goto loc_823B7A54;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823b7a54
	if (!ctx.cr6.eq) goto loc_823B7A54;
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
loc_823B7A54:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823B7A64;
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

__attribute__((alias("__imp__sub_823B7A78"))) PPC_WEAK_FUNC(sub_823B7A78);
PPC_FUNC_IMPL(__imp__sub_823B7A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B7A80;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B7A8C;
	sub_823A0F10(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823b7b5c
	if (ctx.cr6.eq) goto loc_823B7B5C;
	// bl 0x823a1e50
	ctx.lr = 0x823B7AA0;
	sub_823A1E50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823abc48
	ctx.lr = 0x823B7AA8;
	sub_823ABC48(ctx, base);
	// bl 0x823abc78
	ctx.lr = 0x823B7AAC;
	sub_823ABC78(ctx, base);
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B7ABC;
	sub_823585A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8240c918
	ctx.lr = 0x823B7AC8;
	sub_8240C918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b7b70
	if (ctx.cr6.eq) goto loc_823B7B70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7b70
	if (ctx.cr6.eq) goto loc_823B7B70;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823B7AE8;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7b04
	if (ctx.cr6.eq) goto loc_823B7B04;
loc_823B7AF0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7AFC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B7B04:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b7af0
	if (ctx.cr6.eq) goto loc_823B7AF0;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b7b38
	if (!ctx.cr6.eq) goto loc_823B7B38;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7B30;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B7B38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B7B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7B5C;
	sub_823AC608(ctx, base);
loc_823B7B5C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7B68;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B7B70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B7B78;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7B84;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B7B8C"))) PPC_WEAK_FUNC(sub_823B7B8C);
PPC_FUNC_IMPL(__imp__sub_823B7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7B90"))) PPC_WEAK_FUNC(sub_823B7B90);
PPC_FUNC_IMPL(__imp__sub_823B7B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823B7B98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823B7BA4;
	sub_823A1E50(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b7bc0
	if (!ctx.cr6.eq) goto loc_823B7BC0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b7be4
	if (ctx.cr6.eq) goto loc_823B7BE4;
loc_823B7BC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac660
	ctx.lr = 0x823B7BC8;
	sub_823AC660(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823b7be4
	if (!ctx.cr6.gt) goto loc_823B7BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x823ac658
	ctx.lr = 0x823B7BE4;
	sub_823AC658(ctx, base);
loc_823B7BE4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b7c30
	if (ctx.cr6.eq) goto loc_823B7C30;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B7BF8;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7c28
	if (ctx.cr6.eq) goto loc_823B7C28;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b7c1c
	if (ctx.cr6.eq) goto loc_823B7C1C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7C1C;
	sub_823AC608(ctx, base);
loc_823B7C1C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7C28;
	sub_823AC5B8(ctx, base);
loc_823B7C28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B7C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B7C38;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7c7c
	if (ctx.cr6.eq) goto loc_823B7C7C;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B7C54;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b7c28
	if (!ctx.cr6.eq) goto loc_823B7C28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B7C68;
	sub_82256CC0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7C74;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823B7C7C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b7c28
	if (ctx.cr6.eq) goto loc_823B7C28;
	// bl 0x82256ce8
	ctx.lr = 0x823B7C90;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7c1c
	if (ctx.cr6.eq) goto loc_823B7C1C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a1eb8
	ctx.lr = 0x823B7CA8;
	sub_823A1EB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7c1c
	if (!ctx.cr6.eq) goto loc_823B7C1C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b7c1c
	if (ctx.cr6.eq) goto loc_823B7C1C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b7c1c
	if (ctx.cr6.eq) goto loc_823B7C1C;
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
	ctx.lr = 0x823B7CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7CF8;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7D04;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823B7D0C"))) PPC_WEAK_FUNC(sub_823B7D0C);
PPC_FUNC_IMPL(__imp__sub_823B7D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7D10"))) PPC_WEAK_FUNC(sub_823B7D10);
PPC_FUNC_IMPL(__imp__sub_823B7D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a0f10
	ctx.lr = 0x823B7D2C;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82256f70
	ctx.lr = 0x823B7D38;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x823a43b0
	ctx.lr = 0x823B7D44;
	sub_823A43B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a43c0
	ctx.lr = 0x823B7D4C;
	sub_823A43C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B7D58;
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

__attribute__((alias("__imp__sub_823B7D70"))) PPC_WEAK_FUNC(sub_823B7D70);
PPC_FUNC_IMPL(__imp__sub_823B7D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823B7D90;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b7dd8
	if (ctx.cr6.gt) goto loc_823B7DD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b7dbc
	// bdzf 4*cr6+eq,0x823b7dc8
	// bne cr6,0x823b7dd4
	if (!ctx.cr6.eq) goto loc_823B7DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7a78
	ctx.lr = 0x823B7DB8;
	sub_823B7A78(ctx, base);
	// b 0x823b7dd8
	goto loc_823B7DD8;
loc_823B7DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7b90
	ctx.lr = 0x823B7DC4;
	sub_823B7B90(ctx, base);
	// b 0x823b7dd8
	goto loc_823B7DD8;
loc_823B7DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b7d10
	ctx.lr = 0x823B7DD0;
	sub_823B7D10(ctx, base);
	// b 0x823b7dd8
	goto loc_823B7DD8;
loc_823B7DD4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B7DD8:
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

__attribute__((alias("__imp__sub_823B7DF4"))) PPC_WEAK_FUNC(sub_823B7DF4);
PPC_FUNC_IMPL(__imp__sub_823B7DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B7DF8"))) PPC_WEAK_FUNC(sub_823B7DF8);
PPC_FUNC_IMPL(__imp__sub_823B7DF8) {
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
	ctx.lr = 0x823B7E18;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-26160
	ctx.r9.s64 = ctx.r10.s64 + -26160;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B7E2C;
	sub_823C10A0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x823585a0
	ctx.lr = 0x823B7E38;
	sub_823585A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823B7E44;
	sub_823585A0(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823585a0
	ctx.lr = 0x823B7E50;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B7E88"))) PPC_WEAK_FUNC(sub_823B7E88);
PPC_FUNC_IMPL(__imp__sub_823B7E88) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B7EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7eb8
	if (ctx.cr6.eq) goto loc_823B7EB8;
	// bl 0x823a43b0
	ctx.lr = 0x823B7EB0;
	sub_823A43B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a43c0
	ctx.lr = 0x823B7EB8;
	sub_823A43C0(ctx, base);
loc_823B7EB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7EC8"))) PPC_WEAK_FUNC(sub_823B7EC8);
PPC_FUNC_IMPL(__imp__sub_823B7EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823b7f24
	if (ctx.cr6.eq) goto loc_823B7F24;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B7EF4;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b7f04
	if (!ctx.cr6.eq) goto loc_823B7F04;
loc_823B7EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b801c
	goto loc_823B801C;
loc_823B7F04:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b8018
	if (ctx.cr6.eq) goto loc_823B8018;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7F20;
	sub_823AC608(ctx, base);
	// b 0x823b8018
	goto loc_823B8018;
loc_823B7F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B7F2C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7fa4
	if (!ctx.cr6.eq) goto loc_823B7FA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B7F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b7fa4
	if (!ctx.cr6.eq) goto loc_823B7FA4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b7efc
	if (ctx.cr6.eq) goto loc_823B7EFC;
	// bl 0x82256ce8
	ctx.lr = 0x823B7F64;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7f9c
	if (ctx.cr6.eq) goto loc_823B7F9C;
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
	ctx.lr = 0x823B7F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B7F98;
	sub_823AC608(ctx, base);
	// b 0x823b8018
	goto loc_823B8018;
loc_823B7F9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b801c
	goto loc_823B801C;
loc_823B7FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B7FAC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b7fc4
	if (ctx.cr6.eq) goto loc_823B7FC4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b7fe8
	goto loc_823B7FE8;
loc_823B7FC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B7FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b7ff0
	if (ctx.cr6.eq) goto loc_823B7FF0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B7FE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B7FF0;
	sub_823AC608(ctx, base);
loc_823B7FF0:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B8004;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b7efc
	if (!ctx.cr6.eq) goto loc_823B7EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B8018;
	sub_82256CC0(ctx, base);
loc_823B8018:
	// li r3,2
	ctx.r3.s64 = 2;
loc_823B801C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8034"))) PPC_WEAK_FUNC(sub_823B8034);
PPC_FUNC_IMPL(__imp__sub_823B8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8038"))) PPC_WEAK_FUNC(sub_823B8038);
PPC_FUNC_IMPL(__imp__sub_823B8038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-26160
	ctx.r10.s64 = ctx.r11.s64 + -26160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c1100
	ctx.lr = 0x823B8068;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B8070;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b8088
	if (ctx.cr6.eq) goto loc_823B8088;
	// bl 0x82357128
	ctx.lr = 0x823B8084;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B8088:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B80A0"))) PPC_WEAK_FUNC(sub_823B80A0);
PPC_FUNC_IMPL(__imp__sub_823B80A0) {
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
	ctx.lr = 0x823B80B8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b8128
	if (ctx.cr6.eq) goto loc_823B8128;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823b8128
	if (!ctx.cr6.eq) goto loc_823B8128;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x823585a0
	ctx.lr = 0x823B80D8;
	sub_823585A0(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823585a0
	ctx.lr = 0x823B80E4;
	sub_823585A0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x823585a0
	ctx.lr = 0x823B80F0;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823B8128:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B813C;
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

__attribute__((alias("__imp__sub_823B8154"))) PPC_WEAK_FUNC(sub_823B8154);
PPC_FUNC_IMPL(__imp__sub_823B8154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

