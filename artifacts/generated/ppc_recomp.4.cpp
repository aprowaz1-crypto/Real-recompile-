#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820A1050"))) PPC_WEAK_FUNC(sub_820A1050);
PPC_FUNC_IMPL(__imp__sub_820A1050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x820A1094;
	sub_82081590(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// li r10,-14336
	ctx.r10.s64 = -14336;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820A114C:
	// sthu r10,2(r11)
	// bdnz 0x820a114c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A114C;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x822aa648
	ctx.lr = 0x820A1160;
	sub_822AA648(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r7,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x820A11B4;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x822aa648
	ctx.lr = 0x820A11C0;
	sub_822AA648(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A11E4"))) PPC_WEAK_FUNC(sub_820A11E4);
PPC_FUNC_IMPL(__imp__sub_820A11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A11E8"))) PPC_WEAK_FUNC(sub_820A11E8);
PPC_FUNC_IMPL(__imp__sub_820A11E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A11F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A1204;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1220
	if (ctx.cr6.eq) goto loc_820A1220;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820A1220;
	sub_82183E40(ctx, base);
loc_820A1220:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x820A1230;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a124c
	if (ctx.cr6.eq) goto loc_820A124C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A1248;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_820A124C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a125c
	if (ctx.cr6.eq) goto loc_820A125C;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_820A125C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a0eb8
	ctx.lr = 0x820A1264;
	sub_820A0EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A126C"))) PPC_WEAK_FUNC(sub_820A126C);
PPC_FUNC_IMPL(__imp__sub_820A126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A1270"))) PPC_WEAK_FUNC(sub_820A1270);
PPC_FUNC_IMPL(__imp__sub_820A1270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x820A1278;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lwz r29,16(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x821a2590
	ctx.lr = 0x820A12A4;
	sub_821A2590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lfs f1,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a2588
	ctx.lr = 0x820A12B8;
	sub_821A2588(ctx, base);
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x820A12C0;
	sub_821A2CE8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lbz r10,6(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfe r24,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r24.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r26,r6,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r9,-4984(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4984);
	// lwz r31,20(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r9,-5
	ctx.r5.s64 = ctx.r9.s64 + -5;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r25,r4,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820A12F8;
	sub_82183078(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A1304;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820A1308;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1320
	if (ctx.cr6.eq) goto loc_820A1320;
	// li r3,3024
	ctx.r3.s64 = 3024;
	// bl 0x82183448
	ctx.lr = 0x820A131C;
	sub_82183448(ctx, base);
	// b 0x820a1328
	goto loc_820A1328;
loc_820A1320:
	// li r3,189
	ctx.r3.s64 = 189;
	// bl 0x821845a0
	ctx.lr = 0x820A1328;
	sub_821845A0(ctx, base);
loc_820A1328:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1348
	if (ctx.cr6.eq) goto loc_820A1348;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820be9c8
	ctx.lr = 0x820A1340;
	sub_820BE9C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820a134c
	goto loc_820A134C;
loc_820A1348:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_820A134C:
	// lbz r11,9(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r10.u32);
	// bl 0x8209eda0
	ctx.lr = 0x820A1360;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1c40
	ctx.lr = 0x820A1368;
	sub_820F1C40(ctx, base);
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// stw r9,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r9.u32);
	// lbz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r7.u32);
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x820a138c
	if (!ctx.cr6.eq) goto loc_820A138C;
	// lbz r11,5(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
loc_820A138C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// lbz r10,68(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 68);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r9.u32);
	// lbz r8,69(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 69);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r7.u32);
	// lbz r6,70(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 70);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stw r5,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r5.u32);
	// lbz r4,71(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 71);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stw r3,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x820A13C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a13e0
	if (ctx.cr6.eq) goto loc_820A13E0;
	// li r3,928
	ctx.r3.s64 = 928;
	// bl 0x82183448
	ctx.lr = 0x820A13DC;
	sub_82183448(ctx, base);
	// b 0x820a13e8
	goto loc_820A13E8;
loc_820A13E0:
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x821845a0
	ctx.lr = 0x820A13E8;
	sub_821845A0(ctx, base);
loc_820A13E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a13fc
	if (ctx.cr6.eq) goto loc_820A13FC;
	// bl 0x820bd628
	ctx.lr = 0x820A13F4;
	sub_820BD628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1400
	goto loc_820A1400;
loc_820A13FC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1400:
	// lwz r11,816(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// addi r28,r31,1248
	ctx.r28.s64 = ctx.r31.s64 + 1248;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 816, ctx.r10.u32);
	// lwz r9,1248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A1428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x820A1430;
	sub_821A3138(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820a1718
	if (!ctx.cr6.eq) goto loc_820A1718;
	// lwz r3,48(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a144c
	if (ctx.cr6.eq) goto loc_820A144C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82233c08
	ctx.lr = 0x820A144C;
	sub_82233C08(ctx, base);
loc_820A144C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x820A1454;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1470
	if (ctx.cr6.eq) goto loc_820A1470;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bd4c8
	ctx.lr = 0x820A1464;
	sub_820BD4C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x820a1474
	if (!ctx.cr6.eq) goto loc_820A1474;
loc_820A1470:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1474:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x820A1494;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a14ac
	if (ctx.cr6.eq) goto loc_820A14AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f2170
	ctx.lr = 0x820A14A4;
	sub_820F2170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a14b0
	goto loc_820A14B0;
loc_820A14AC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A14B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A14C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82080000
	ctx.lr = 0x820A14D0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a14e8
	if (ctx.cr6.eq) goto loc_820A14E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bc290
	ctx.lr = 0x820A14E0;
	sub_820BC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a14ec
	goto loc_820A14EC;
loc_820A14E8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A14EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82080000
	ctx.lr = 0x820A150C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1534
	if (ctx.cr6.eq) goto loc_820A1534;
	// lis r7,21061
	ctx.r7.s64 = 1380253696;
	// li r6,21
	ctx.r6.s64 = 21;
	// ori r7,r7,17996
	ctx.r7.u64 = ctx.r7.u64 | 17996;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82100288
	ctx.lr = 0x820A152C;
	sub_82100288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1538
	goto loc_820A1538;
loc_820A1534:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1538:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820a154c
	if (ctx.cr6.eq) goto loc_820A154C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a154c
	if (ctx.cr6.eq) goto loc_820A154C;
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
loc_820A154C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10784
	ctx.r3.s64 = 10784;
	// bl 0x82080000
	ctx.lr = 0x820A156C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1584
	if (ctx.cr6.eq) goto loc_820A1584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bbcc0
	ctx.lr = 0x820A157C;
	sub_820BBCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1588
	goto loc_820A1588;
loc_820A1584:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1588:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A15A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f688
	ctx.lr = 0x820A15AC;
	sub_8209F688(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82080000
	ctx.lr = 0x820A15B4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a15cc
	if (ctx.cr6.eq) goto loc_820A15CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ba748
	ctx.lr = 0x820A15C4;
	sub_820BA748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a15d0
	goto loc_820A15D0;
loc_820A15CC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A15D0:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x820A15DC;
	sub_820F12B0(ctx, base);
	// li r3,820
	ctx.r3.s64 = 820;
	// bl 0x82080000
	ctx.lr = 0x820A15E4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1600
	if (ctx.cr6.eq) goto loc_820A1600;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a8780
	ctx.lr = 0x820A15F8;
	sub_820A8780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1604
	goto loc_820A1604;
loc_820A1600:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1604:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x820A1610;
	sub_820F12B0(ctx, base);
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82080000
	ctx.lr = 0x820A1618;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1630
	if (ctx.cr6.eq) goto loc_820A1630;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ba120
	ctx.lr = 0x820A1628;
	sub_820BA120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1634
	goto loc_820A1634;
loc_820A1630:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1634:
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x820A1640;
	sub_820F12B0(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x820A1648;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1660
	if (ctx.cr6.eq) goto loc_820A1660;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9aa0
	ctx.lr = 0x820A1658;
	sub_820B9AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1664
	goto loc_820A1664;
loc_820A1660:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1664:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x820A1670;
	sub_820F12B0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x820A1678;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1690
	if (ctx.cr6.eq) goto loc_820A1690;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9668
	ctx.lr = 0x820A1688;
	sub_820B9668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1694
	goto loc_820A1694;
loc_820A1690:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1694:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A16A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x820A16B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a16c8
	if (ctx.cr6.eq) goto loc_820A16C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9608
	ctx.lr = 0x820A16C0;
	sub_820B9608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a16cc
	goto loc_820A16CC;
loc_820A16C8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A16CC:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A16E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x820A16E8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1700
	if (ctx.cr6.eq) goto loc_820A1700;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9588
	ctx.lr = 0x820A16F8;
	sub_820B9588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1704
	goto loc_820A1704;
loc_820A1700:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1704:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A1718:
	// bl 0x82183850
	ctx.lr = 0x820A171C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1734
	if (ctx.cr6.eq) goto loc_820A1734;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82183448
	ctx.lr = 0x820A1730;
	sub_82183448(ctx, base);
	// b 0x820a173c
	goto loc_820A173C;
loc_820A1734:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x820A173C;
	sub_821845A0(ctx, base);
loc_820A173C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1754
	if (ctx.cr6.eq) goto loc_820A1754;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820e7cb0
	ctx.lr = 0x820A174C;
	sub_820E7CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a1758
	goto loc_820A1758;
loc_820A1754:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_820A1758:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A1778;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1790
	if (ctx.cr6.eq) goto loc_820A1790;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82183448
	ctx.lr = 0x820A178C;
	sub_82183448(ctx, base);
	// b 0x820a1798
	goto loc_820A1798;
loc_820A1790:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821845a0
	ctx.lr = 0x820A1798;
	sub_821845A0(ctx, base);
loc_820A1798:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a17b4
	if (ctx.cr6.eq) goto loc_820A17B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e8178
	ctx.lr = 0x820A17AC;
	sub_820E8178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a17b8
	goto loc_820A17B8;
loc_820A17B4:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_820A17B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A17D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x820A17DC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a17f4
	if (ctx.cr6.eq) goto loc_820A17F4;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82183448
	ctx.lr = 0x820A17F0;
	sub_82183448(ctx, base);
	// b 0x820a17fc
	goto loc_820A17FC;
loc_820A17F4:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821845a0
	ctx.lr = 0x820A17FC;
	sub_821845A0(ctx, base);
loc_820A17FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1814
	if (ctx.cr6.eq) goto loc_820A1814;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820feb78
	ctx.lr = 0x820A180C;
	sub_820FEB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1818
	goto loc_820A1818;
loc_820A1814:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1818:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A1834;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a184c
	if (ctx.cr6.eq) goto loc_820A184C;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x820A1848;
	sub_82183448(ctx, base);
	// b 0x820a1854
	goto loc_820A1854;
loc_820A184C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A1854;
	sub_821845A0(ctx, base);
loc_820A1854:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1870
	if (ctx.cr6.eq) goto loc_820A1870;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820ff8a0
	ctx.lr = 0x820A1868;
	sub_820FF8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1874
	goto loc_820A1874;
loc_820A1870:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1874:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A188C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A1890;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a18a8
	if (ctx.cr6.eq) goto loc_820A18A8;
	// li r3,2384
	ctx.r3.s64 = 2384;
	// bl 0x82183448
	ctx.lr = 0x820A18A4;
	sub_82183448(ctx, base);
	// b 0x820a18b0
	goto loc_820A18B0;
loc_820A18A8:
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x821845a0
	ctx.lr = 0x820A18B0;
	sub_821845A0(ctx, base);
loc_820A18B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a18d0
	if (ctx.cr6.eq) goto loc_820A18D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820ec368
	ctx.lr = 0x820A18C8;
	sub_820EC368(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a18d4
	goto loc_820A18D4;
loc_820A18D0:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_820A18D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A18F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,1820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1820, ctx.r21.u32);
	// bl 0x82183850
	ctx.lr = 0x820A18F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1910
	if (ctx.cr6.eq) goto loc_820A1910;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82183448
	ctx.lr = 0x820A190C;
	sub_82183448(ctx, base);
	// b 0x820a1918
	goto loc_820A1918;
loc_820A1910:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820A1918;
	sub_821845A0(ctx, base);
loc_820A1918:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1930
	if (ctx.cr6.eq) goto loc_820A1930;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820ff430
	ctx.lr = 0x820A1928;
	sub_820FF430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1934
	goto loc_820A1934;
loc_820A1930:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1934:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A194C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f738
	ctx.lr = 0x820A1958;
	sub_8209F738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x820A1960;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1978
	if (ctx.cr6.eq) goto loc_820A1978;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x820A1974;
	sub_82183448(ctx, base);
	// b 0x820a1980
	goto loc_820A1980;
loc_820A1978:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820A1980;
	sub_821845A0(ctx, base);
loc_820A1980:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a199c
	if (ctx.cr6.eq) goto loc_820A199C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ef9d8
	ctx.lr = 0x820A1994;
	sub_820EF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a19a0
	goto loc_820A19A0;
loc_820A199C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A19A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820a19b4
	if (ctx.cr6.eq) goto loc_820A19B4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a19b4
	if (ctx.cr6.eq) goto loc_820A19B4;
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r21.u32);
loc_820A19B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A19CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A19D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a19e8
	if (ctx.cr6.eq) goto loc_820A19E8;
	// li r3,15104
	ctx.r3.s64 = 15104;
	// bl 0x82183448
	ctx.lr = 0x820A19E4;
	sub_82183448(ctx, base);
	// b 0x820a19f0
	goto loc_820A19F0;
loc_820A19E8:
	// li r3,944
	ctx.r3.s64 = 944;
	// bl 0x821845a0
	ctx.lr = 0x820A19F0;
	sub_821845A0(ctx, base);
loc_820A19F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1a0c
	if (ctx.cr6.eq) goto loc_820A1A0C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820fd1a0
	ctx.lr = 0x820A1A04;
	sub_820FD1A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820a1a10
	goto loc_820A1A10;
loc_820A1A0C:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_820A1A10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820a1a6c
	if (!ctx.cr6.eq) goto loc_820A1A6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8c20
	ctx.lr = 0x820A1A3C;
	sub_820B8C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820a1a54
	if (ctx.cr6.eq) goto loc_820A1A54;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1a54
	if (ctx.cr6.eq) goto loc_820A1A54;
	// stw r21,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r21.u32);
loc_820A1A54:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A1A6C:
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x820A1A74;
	sub_821A3138(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x820a1b7c
	if (ctx.cr6.eq) goto loc_820A1B7C;
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82080000
	ctx.lr = 0x820A1A84;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1aa0
	if (ctx.cr6.eq) goto loc_820A1AA0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f95b8
	ctx.lr = 0x820A1A98;
	sub_820F95B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a1aa4
	goto loc_820A1AA4;
loc_820A1AA0:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_820A1AA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82080000
	ctx.lr = 0x820A1AC8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1ae4
	if (ctx.cr6.eq) goto loc_820A1AE4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f71e8
	ctx.lr = 0x820A1ADC;
	sub_820F71E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1ae8
	goto loc_820A1AE8;
loc_820A1AE4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1AE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82080000
	ctx.lr = 0x820A1B08;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1b28
	if (ctx.cr6.eq) goto loc_820A1B28;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f7190
	ctx.lr = 0x820A1B20;
	sub_820F7190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1b2c
	goto loc_820A1B2C;
loc_820A1B28:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1B2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x820A1B4C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1b64
	if (ctx.cr6.eq) goto loc_820A1B64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f6e00
	ctx.lr = 0x820A1B5C;
	sub_820F6E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1b68
	goto loc_820A1B68;
loc_820A1B64:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1B68:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A1B7C:
	// bl 0x82183850
	ctx.lr = 0x820A1B80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1b98
	if (ctx.cr6.eq) goto loc_820A1B98;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82183448
	ctx.lr = 0x820A1B94;
	sub_82183448(ctx, base);
	// b 0x820a1ba0
	goto loc_820A1BA0;
loc_820A1B98:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x820A1BA0;
	sub_821845A0(ctx, base);
loc_820A1BA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1bb8
	if (ctx.cr6.eq) goto loc_820A1BB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820aedf0
	ctx.lr = 0x820A1BB0;
	sub_820AEDF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1bbc
	goto loc_820A1BBC;
loc_820A1BB8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1BBC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A1BD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1bf0
	if (ctx.cr6.eq) goto loc_820A1BF0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x820A1BEC;
	sub_82183448(ctx, base);
	// b 0x820a1bf8
	goto loc_820A1BF8;
loc_820A1BF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820A1BF8;
	sub_821845A0(ctx, base);
loc_820A1BF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1c10
	if (ctx.cr6.eq) goto loc_820A1C10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a6170
	ctx.lr = 0x820A1C08;
	sub_820A6170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1c14
	goto loc_820A1C14;
loc_820A1C10:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1C14:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x820A1C34;
	sub_821A3138(ctx, base);
	// ld r7,32(r27)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r27.u32 + 32);
	// addi r9,r27,32
	ctx.r9.s64 = ctx.r27.s64 + 32;
	// addi r8,r31,416
	ctx.r8.s64 = ctx.r31.s64 + 416;
	// std r7,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r7.u64);
	// ld r6,40(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 40);
	// std r6,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r6.u64);
	// ld r5,48(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 48);
	// std r5,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r5.u64);
	// ld r4,56(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 56);
	// std r4,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r4.u64);
	// bl 0x82183850
	ctx.lr = 0x820A1C60;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1c78
	if (ctx.cr6.eq) goto loc_820A1C78;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82183448
	ctx.lr = 0x820A1C74;
	sub_82183448(ctx, base);
	// b 0x820a1c80
	goto loc_820A1C80;
loc_820A1C78:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A1C80;
	sub_821845A0(ctx, base);
loc_820A1C80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1ca4
	if (ctx.cr6.eq) goto loc_820A1CA4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820be6d0
	ctx.lr = 0x820A1C98;
	sub_820BE6D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x820a1ca8
	if (!ctx.cr6.eq) goto loc_820A1CA8;
loc_820A1CA4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1CA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a1cd0
	if (ctx.cr6.eq) goto loc_820A1CD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82234398
	ctx.lr = 0x820A1CD0;
	sub_82234398(ctx, base);
loc_820A1CD0:
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x820A1CD8;
	sub_821A2D30(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820A1CDC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1cf4
	if (ctx.cr6.eq) goto loc_820A1CF4;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82183448
	ctx.lr = 0x820A1CF0;
	sub_82183448(ctx, base);
	// b 0x820a1cfc
	goto loc_820A1CFC;
loc_820A1CF4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821845a0
	ctx.lr = 0x820A1CFC;
	sub_821845A0(ctx, base);
loc_820A1CFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1d14
	if (ctx.cr6.eq) goto loc_820A1D14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b0798
	ctx.lr = 0x820A1D0C;
	sub_820B0798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1d18
	goto loc_820A1D18;
loc_820A1D14:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1D18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A1D30;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a1d48
	if (ctx.cr6.eq) goto loc_820A1D48;
	// li r3,332
	ctx.r3.s64 = 332;
	// bl 0x82183448
	ctx.lr = 0x820A1D44;
	sub_82183448(ctx, base);
	// b 0x820a1d50
	goto loc_820A1D50;
loc_820A1D48:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x820A1D50;
	sub_821845A0(ctx, base);
loc_820A1D50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a1d68
	if (ctx.cr6.eq) goto loc_820A1D68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b7bd0
	ctx.lr = 0x820A1D60;
	sub_820B7BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a1d6c
	goto loc_820A1D6C;
loc_820A1D68:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_820A1D6C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A1D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f7e8
	ctx.lr = 0x820A1D8C;
	sub_8209F7E8(ctx, base);
	// lbz r9,9(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// stb r8,1549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1549, ctx.r8.u8);
	// bl 0x821a2588
	ctx.lr = 0x820A1DA4;
	sub_821A2588(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-8956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8956, ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x820a1dc8
	if (!ctx.cr6.gt) goto loc_820A1DC8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-8956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8956, ctx.r29.u32);
loc_820A1DC8:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// addi r30,r23,32
	ctx.r30.s64 = ctx.r23.s64 + 32;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r6,12(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x8241dd2c
	ctx.lr = 0x820A1DF4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r29,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r29.u32);
	// rlwinm r10,r19,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-8960(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8960);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x820A1E18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r21,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r21.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// bl 0x820f18a8
	ctx.lr = 0x820A1E28;
	sub_820F18A8(ctx, base);
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// addi r9,r11,42
	ctx.r9.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwx r29,r8,r23
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, ctx.r29.u32);
	// bl 0x821837d0
	ctx.lr = 0x820A1E54;
	sub_821837D0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_820A1E60"))) PPC_WEAK_FUNC(sub_820A1E60);
PPC_FUNC_IMPL(__imp__sub_820A1E60) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x820a1270
	ctx.lr = 0x820A1E90;
	sub_820A1270(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
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
}

__attribute__((alias("__imp__sub_820A1EB0"))) PPC_WEAK_FUNC(sub_820A1EB0);
PPC_FUNC_IMPL(__imp__sub_820A1EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820A1EB8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A1ED8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r9.u32);
	// addi r7,r30,36
	ctx.r7.s64 = ctx.r30.s64 + 36;
	// lwz r11,-8960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8960);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r11,-8960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8960);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,-8960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8960);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// sthx r5,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r3,384(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a1f4c
	if (ctx.cr6.eq) goto loc_820A1F4C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,7776
	ctx.r4.s64 = ctx.r10.s64 + 7776;
	// lwz r3,21792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21792);
	// bl 0x8218e518
	ctx.lr = 0x820A1F48;
	sub_8218E518(ctx, base);
	// b 0x820a1fa4
	goto loc_820A1FA4;
loc_820A1F4C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r25,-19048(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x82088650
	ctx.lr = 0x820A1F64;
	sub_82088650(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821a2578
	ctx.lr = 0x820A1F78;
	sub_821A2578(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820a1270
	ctx.lr = 0x820A1F8C;
	sub_820A1270(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a2578
	ctx.lr = 0x820A1F9C;
	sub_821A2578(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_820A1FA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A1FAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820A1FBC"))) PPC_WEAK_FUNC(sub_820A1FBC);
PPC_FUNC_IMPL(__imp__sub_820A1FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A1FC0"))) PPC_WEAK_FUNC(sub_820A1FC0);
PPC_FUNC_IMPL(__imp__sub_820A1FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820A1FC8;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x820A1FEC;
	sub_8218B1E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r10,9976
	ctx.r9.s64 = ctx.r10.s64 + 9976;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addi r29,r11,9964
	ctx.r29.s64 = ctx.r11.s64 + 9964;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// bl 0x82248910
	ctx.lr = 0x820A202C;
	sub_82248910(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820a20b4
	if (!ctx.cr6.eq) goto loc_820A20B4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x820a2090
	if (!ctx.cr6.lt) goto loc_820A2090;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,9952
	ctx.r30.s64 = ctx.r11.s64 + 9952;
loc_820A204C:
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820a2078
	if (ctx.cr6.lt) goto loc_820A2078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820A2064;
	sub_82248910(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x820A2070;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a20a8
	if (!ctx.cr6.eq) goto loc_820A20A8;
loc_820A2078:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x820a204c
	if (ctx.cr6.lt) goto loc_820A204C;
loc_820A2090:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820A20A0;
	sub_82248910(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_820A20A8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_820A20B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x820A20C4;
	sub_8218B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820A20D0"))) PPC_WEAK_FUNC(sub_820A20D0);
PPC_FUNC_IMPL(__imp__sub_820A20D0) {
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
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A20EC;
	sub_822AA648(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820A20F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a2108
	if (ctx.cr6.eq) goto loc_820A2108;
	// li r3,6952
	ctx.r3.s64 = 6952;
	// bl 0x82183448
	ctx.lr = 0x820A2104;
	sub_82183448(ctx, base);
	// b 0x820a2110
	goto loc_820A2110;
loc_820A2108:
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x821845a0
	ctx.lr = 0x820A2110;
	sub_821845A0(ctx, base);
loc_820A2110:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a212c
	if (ctx.cr6.eq) goto loc_820A212C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f03c8
	ctx.lr = 0x820A2120;
	sub_820F03C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-5072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5072, ctx.r3.u32);
	// b 0x820a2138
	goto loc_820A2138;
loc_820A212C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5072, ctx.r11.u32);
loc_820A2138:
	// bl 0x82183850
	ctx.lr = 0x820A213C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a2154
	if (ctx.cr6.eq) goto loc_820A2154;
	// li r3,6952
	ctx.r3.s64 = 6952;
	// bl 0x82183448
	ctx.lr = 0x820A2150;
	sub_82183448(ctx, base);
	// b 0x820a215c
	goto loc_820A215C;
loc_820A2154:
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x821845a0
	ctx.lr = 0x820A215C;
	sub_821845A0(ctx, base);
loc_820A215C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2178
	if (ctx.cr6.eq) goto loc_820A2178;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f03c8
	ctx.lr = 0x820A216C;
	sub_820F03C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-5068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5068, ctx.r3.u32);
	// b 0x820a2184
	goto loc_820A2184;
loc_820A2178:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5068, ctx.r11.u32);
loc_820A2184:
	// bl 0x82183850
	ctx.lr = 0x820A2188;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a21a0
	if (ctx.cr6.eq) goto loc_820A21A0;
	// li r3,4472
	ctx.r3.s64 = 4472;
	// bl 0x82183448
	ctx.lr = 0x820A219C;
	sub_82183448(ctx, base);
	// b 0x820a21a8
	goto loc_820A21A8;
loc_820A21A0:
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x821845a0
	ctx.lr = 0x820A21A8;
	sub_821845A0(ctx, base);
loc_820A21A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a21c0
	if (ctx.cr6.eq) goto loc_820A21C0;
	// bl 0x820ed560
	ctx.lr = 0x820A21B4;
	sub_820ED560(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-5056(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5056, ctx.r3.u32);
	// b 0x820a21cc
	goto loc_820A21CC;
loc_820A21C0:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5056, ctx.r11.u32);
loc_820A21CC:
	// bl 0x82183850
	ctx.lr = 0x820A21D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a21e8
	if (ctx.cr6.eq) goto loc_820A21E8;
	// li r3,6952
	ctx.r3.s64 = 6952;
	// bl 0x82183448
	ctx.lr = 0x820A21E4;
	sub_82183448(ctx, base);
	// b 0x820a21f0
	goto loc_820A21F0;
loc_820A21E8:
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x821845a0
	ctx.lr = 0x820A21F0;
	sub_821845A0(ctx, base);
loc_820A21F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2208
	if (ctx.cr6.eq) goto loc_820A2208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f03c8
	ctx.lr = 0x820A2200;
	sub_820F03C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820a220c
	goto loc_820A220C;
loc_820A2208:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A220C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-5060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A222C"))) PPC_WEAK_FUNC(sub_820A222C);
PPC_FUNC_IMPL(__imp__sub_820A222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2230"))) PPC_WEAK_FUNC(sub_820A2230);
PPC_FUNC_IMPL(__imp__sub_820A2230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A2238;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_820A2250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a227c
	if (ctx.cr6.eq) goto loc_820A227C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-5056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5056);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ed638
	ctx.lr = 0x820A226C;
	sub_820ED638(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x820A2278;
	sub_82183E40(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_820A227C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a22a8
	if (ctx.cr6.eq) goto loc_820A22A8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-5056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5056);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ed698
	ctx.lr = 0x820A2298;
	sub_820ED698(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82183e40
	ctx.lr = 0x820A22A4;
	sub_82183E40(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_820A22A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x820a2250
	if (ctx.cr6.lt) goto loc_820A2250;
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a22d0
	if (ctx.cr6.eq) goto loc_820A22D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820A22CC;
	sub_82183E40(ctx, base);
	// stw r29,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r29.u32);
loc_820A22D0:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a22ec
	if (ctx.cr6.eq) goto loc_820A22EC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r29.u32);
	// lwz r11,-5068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5068);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_820A22EC:
	// stw r29,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A22F8"))) PPC_WEAK_FUNC(sub_820A22F8);
PPC_FUNC_IMPL(__imp__sub_820A22F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,9976
	ctx.r10.s64 = ctx.r11.s64 + 9976;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x820A2324;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a2340
	if (ctx.cr6.eq) goto loc_820A2340;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A233C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A2340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2358"))) PPC_WEAK_FUNC(sub_820A2358);
PPC_FUNC_IMPL(__imp__sub_820A2358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820A2360;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820A2374;
	sub_8218AA18(ctx, base);
	// bl 0x8215c058
	ctx.lr = 0x820A2378;
	sub_8215C058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820A2380;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A238C;
	sub_821837D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
loc_820A2398:
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820A23A8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a2408
	if (ctx.cr6.eq) goto loc_820A2408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x820A23BC;
	sub_8218AC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820a2408
	if (!ctx.cr6.gt) goto loc_820A2408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820A23D0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a23ec
	if (ctx.cr6.eq) goto loc_820A23EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820A23E4;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820a23f0
	goto loc_820A23F0;
loc_820A23EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820A23F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-5056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5056);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ed5e8
	ctx.lr = 0x820A2400;
	sub_820ED5E8(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stwx r31,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
loc_820A2408:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// blt cr6,0x820a2398
	if (ctx.cr6.lt) goto loc_820A2398;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820A2424;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a2484
	if (ctx.cr6.eq) goto loc_820A2484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x820A2438;
	sub_8218AC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820a2484
	if (!ctx.cr6.gt) goto loc_820A2484;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820A244C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a2468
	if (ctx.cr6.eq) goto loc_820A2468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820A2460;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820a246c
	goto loc_820A246C;
loc_820A2468:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820A246C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-5056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5056);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ed648
	ctx.lr = 0x820A247C;
	sub_820ED648(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_820A2484:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a2538
	if (ctx.cr6.eq) goto loc_820A2538;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a24ec
	if (ctx.cr6.eq) goto loc_820A24EC;
	// bl 0x82183850
	ctx.lr = 0x820A24A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a24bc
	if (ctx.cr6.eq) goto loc_820A24BC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x820A24B8;
	sub_82183448(ctx, base);
	// b 0x820a24c4
	goto loc_820A24C4;
loc_820A24BC:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A24C4;
	sub_821845A0(ctx, base);
loc_820A24C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2544
	if (ctx.cr6.eq) goto loc_820A2544;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r8,60(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r7,72(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r6,68(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x820a1fc0
	ctx.lr = 0x820A24E8;
	sub_820A1FC0(ctx, base);
	// b 0x820a2544
	goto loc_820A2544;
loc_820A24EC:
	// bl 0x82183850
	ctx.lr = 0x820A24F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a2508
	if (ctx.cr6.eq) goto loc_820A2508;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x820A2504;
	sub_82183448(ctx, base);
	// b 0x820a2510
	goto loc_820A2510;
loc_820A2508:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A2510;
	sub_821845A0(ctx, base);
loc_820A2510:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2544
	if (ctx.cr6.eq) goto loc_820A2544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,72(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,68(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x820a1fc0
	ctx.lr = 0x820A2534;
	sub_820A1FC0(ctx, base);
	// b 0x820a2544
	goto loc_820A2544;
loc_820A2538:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_820A2544:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A254C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820A2554;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820A2560"))) PPC_WEAK_FUNC(sub_820A2560);
PPC_FUNC_IMPL(__imp__sub_820A2560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A2568;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
loc_820A257C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a25b4
	if (ctx.cr6.eq) goto loc_820A25B4;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x820A2598;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a25b4
	if (ctx.cr6.eq) goto loc_820A25B4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a25b4
	if (ctx.cr6.eq) goto loc_820A25B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820fbe08
	ctx.lr = 0x820A25B4;
	sub_820FBE08(ctx, base);
loc_820A25B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820a257c
	if (!ctx.cr0.eq) goto loc_820A257C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a25e0
	if (ctx.cr6.eq) goto loc_820A25E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A25E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A25E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A25EC"))) PPC_WEAK_FUNC(sub_820A25EC);
PPC_FUNC_IMPL(__imp__sub_820A25EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A25F0"))) PPC_WEAK_FUNC(sub_820A25F0);
PPC_FUNC_IMPL(__imp__sub_820A25F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A25F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x820a2230
	ctx.lr = 0x820A2600;
	sub_820A2230(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r31,-5056(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5056);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a2624
	if (ctx.cr6.eq) goto loc_820A2624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820A2618;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820A2624;
	sub_82183E40(ctx, base);
loc_820A2624:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5056(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5056, ctx.r11.u32);
	// lwz r30,-5072(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5072);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a2650
	if (ctx.cr6.eq) goto loc_820A2650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820A2644;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820A2650;
	sub_82183E40(ctx, base);
loc_820A2650:
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5072, ctx.r11.u32);
	// lwz r31,-5068(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5068);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a267c
	if (ctx.cr6.eq) goto loc_820A267C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820A2670;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820A267C;
	sub_82183E40(ctx, base);
loc_820A267C:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5068(r29)
	PPC_STORE_U32(ctx.r29.u32 + -5068, ctx.r11.u32);
	// lwz r31,-5060(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5060);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a26a8
	if (ctx.cr6.eq) goto loc_820A26A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820A269C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820A26A8;
	sub_82183E40(ctx, base);
loc_820A26A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5060(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5060, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A26B8"))) PPC_WEAK_FUNC(sub_820A26B8);
PPC_FUNC_IMPL(__imp__sub_820A26B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820A26C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a2784
	if (!ctx.cr6.eq) goto loc_820A2784;
	// bl 0x82183078
	ctx.lr = 0x820A26E4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A26F0;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8952);
	// bl 0x820a2230
	ctx.lr = 0x820A26FC;
	sub_820A2230(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x820A2700;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820A2708;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A2714;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820A2718;
	sub_82183850(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820A2724;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820A272C;
	sub_821830F8(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x820A2734;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2758
	if (ctx.cr6.eq) goto loc_820A2758;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820a1fc0
	ctx.lr = 0x820A2758;
	sub_820A1FC0(ctx, base);
loc_820A2758:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x820a276c
	if (ctx.cr6.lt) goto loc_820A276C;
	// bne cr6,0x820a2774
	if (!ctx.cr6.eq) goto loc_820A2774;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820a2770
	goto loc_820A2770;
loc_820A276C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A2770:
	// bl 0x821830f8
	ctx.lr = 0x820A2774;
	sub_821830F8(ctx, base);
loc_820A2774:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A277C;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A2784;
	sub_821837D0(ctx, base);
loc_820A2784:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820A278C"))) PPC_WEAK_FUNC(sub_820A278C);
PPC_FUNC_IMPL(__imp__sub_820A278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2790"))) PPC_WEAK_FUNC(sub_820A2790);
PPC_FUNC_IMPL(__imp__sub_820A2790) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-31860(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31860, ctx.r11.u32);
	// stw r10,-31856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31856, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A27AC"))) PPC_WEAK_FUNC(sub_820A27AC);
PPC_FUNC_IMPL(__imp__sub_820A27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A27B0"))) PPC_WEAK_FUNC(sub_820A27B0);
PPC_FUNC_IMPL(__imp__sub_820A27B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820a27d8
	if (!ctx.cr6.eq) goto loc_820A27D8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-31856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31856);
	// b 0x820a27e8
	goto loc_820A27E8;
loc_820A27D8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820a27f4
	if (!ctx.cr6.eq) goto loc_820A27F4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-31860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31860);
loc_820A27E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820a27f4
	if (ctx.cr6.lt) goto loc_820A27F4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_820A27F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820a283c
	if (ctx.cr6.lt) goto loc_820A283C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// bl 0x82161060
	ctx.lr = 0x820A280C;
	sub_82161060(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a282c
	if (ctx.cr6.eq) goto loc_820A282C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820a2828
	if (ctx.cr6.eq) goto loc_820A2828;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
loc_820A2828:
	// bl 0x820bd838
	ctx.lr = 0x820A282C;
	sub_820BD838(ctx, base);
loc_820A282C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// bl 0x821af2d0
	ctx.lr = 0x820A283C;
	sub_821AF2D0(ctx, base);
loc_820A283C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2850"))) PPC_WEAK_FUNC(sub_820A2850);
PPC_FUNC_IMPL(__imp__sub_820A2850) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820a2894
	if (!ctx.cr6.eq) goto loc_820A2894;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-31856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820a28cc
	if (ctx.cr6.lt) goto loc_820A28CC;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x820a27b0
	ctx.lr = 0x820A2884;
	sub_820A27B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A2894:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820a28cc
	if (!ctx.cr6.eq) goto loc_820A28CC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-31860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820a28cc
	if (ctx.cr6.lt) goto loc_820A28CC;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x820a27b0
	ctx.lr = 0x820A28BC;
	sub_820A27B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820A28CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2900
	if (ctx.cr6.eq) goto loc_820A2900;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a28ec
	if (ctx.cr6.eq) goto loc_820A28EC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r11.u32);
loc_820A28EC:
	// bl 0x820bd838
	ctx.lr = 0x820A28F0;
	sub_820BD838(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// bl 0x821af2d0
	ctx.lr = 0x820A2900;
	sub_821AF2D0(ctx, base);
loc_820A2900:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2910"))) PPC_WEAK_FUNC(sub_820A2910);
PPC_FUNC_IMPL(__imp__sub_820A2910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A2918;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820A2928:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2948
	if (ctx.cr6.eq) goto loc_820A2948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A2948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2948:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820a2928
	if (!ctx.cr0.eq) goto loc_820A2928;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A295C"))) PPC_WEAK_FUNC(sub_820A295C);
PPC_FUNC_IMPL(__imp__sub_820A295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2960"))) PPC_WEAK_FUNC(sub_820A2960);
PPC_FUNC_IMPL(__imp__sub_820A2960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A2968;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,10012
	ctx.r8.s64 = ctx.r9.s64 + 10012;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r30.u32);
	// stw r30,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r30.u32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// stw r30,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r30.u32);
	// stw r30,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r30.u32);
	// stw r30,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r30.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_820A29C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820a29c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A29C4;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r28,r31,104
	ctx.r28.s64 = ctx.r31.s64 + 104;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x820A2A00;
	sub_822AA648(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A2A0C;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A2A18;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A2A24;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,-8848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8848, ctx.r30.u32);
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r11,-31808(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31808, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A2A5C"))) PPC_WEAK_FUNC(sub_820A2A5C);
PPC_FUNC_IMPL(__imp__sub_820A2A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2A60"))) PPC_WEAK_FUNC(sub_820A2A60);
PPC_FUNC_IMPL(__imp__sub_820A2A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// stw r10,-8848(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8848, ctx.r10.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r11,-31808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2A8C"))) PPC_WEAK_FUNC(sub_820A2A8C);
PPC_FUNC_IMPL(__imp__sub_820A2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2A90"))) PPC_WEAK_FUNC(sub_820A2A90);
PPC_FUNC_IMPL(__imp__sub_820A2A90) {
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
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a2ae4
	if (ctx.cr6.eq) goto loc_820A2AE4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-31840(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31840);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A2ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820A2AE4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2B00"))) PPC_WEAK_FUNC(sub_820A2B00);
PPC_FUNC_IMPL(__imp__sub_820A2B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f1,-8796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8796);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2B0C"))) PPC_WEAK_FUNC(sub_820A2B0C);
PPC_FUNC_IMPL(__imp__sub_820A2B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2B10"))) PPC_WEAK_FUNC(sub_820A2B10);
PPC_FUNC_IMPL(__imp__sub_820A2B10) {
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
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A2B50;
	sub_82187400(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2B60"))) PPC_WEAK_FUNC(sub_820A2B60);
PPC_FUNC_IMPL(__imp__sub_820A2B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820a2b80
	if (ctx.cr6.eq) goto loc_820A2B80;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820A2B80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2B88"))) PPC_WEAK_FUNC(sub_820A2B88);
PPC_FUNC_IMPL(__imp__sub_820A2B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A2B90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r11,10064
	ctx.r7.s64 = ctx.r11.s64 + 10064;
	// addi r6,r10,10056
	ctx.r6.s64 = ctx.r10.s64 + 10056;
	// addi r5,r9,10024
	ctx.r5.s64 = ctx.r9.s64 + 10024;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r11,-8852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8852, ctx.r11.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2be4
	if (ctx.cr6.eq) goto loc_820A2BE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A2BE4;
	sub_82183E40(ctx, base);
loc_820A2BE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820A2BF4;
	sub_821883B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x820A2BFC;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820A2C04;
	sub_821857F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A2C0C"))) PPC_WEAK_FUNC(sub_820A2C0C);
PPC_FUNC_IMPL(__imp__sub_820A2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2C10"))) PPC_WEAK_FUNC(sub_820A2C10);
PPC_FUNC_IMPL(__imp__sub_820A2C10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820a4458
	sub_820A4458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2C18"))) PPC_WEAK_FUNC(sub_820A2C18);
PPC_FUNC_IMPL(__imp__sub_820A2C18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820a4458
	sub_820A4458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2C20"))) PPC_WEAK_FUNC(sub_820A2C20);
PPC_FUNC_IMPL(__imp__sub_820A2C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lfs f0,-31812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8832);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// b 0x820c0268
	sub_820C0268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2C44"))) PPC_WEAK_FUNC(sub_820A2C44);
PPC_FUNC_IMPL(__imp__sub_820A2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2C48"))) PPC_WEAK_FUNC(sub_820A2C48);
PPC_FUNC_IMPL(__imp__sub_820A2C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x820a2c68
	if (ctx.cr6.eq) goto loc_820A2C68;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820a2c6c
	if (!ctx.cr6.eq) goto loc_820A2C6C;
loc_820A2C68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A2C6C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x8209eda0
	sub_8209EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2C78"))) PPC_WEAK_FUNC(sub_820A2C78);
PPC_FUNC_IMPL(__imp__sub_820A2C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8209eda0
	sub_8209EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A2C9C"))) PPC_WEAK_FUNC(sub_820A2C9C);
PPC_FUNC_IMPL(__imp__sub_820A2C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2CA0"))) PPC_WEAK_FUNC(sub_820A2CA0);
PPC_FUNC_IMPL(__imp__sub_820A2CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820A2CA8;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x820A2CBC;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,-8856(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a2d38
	if (ctx.cr6.eq) goto loc_820A2D38;
	// bl 0x8215bec8
	ctx.lr = 0x820A2CD4;
	sub_8215BEC8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bne cr6,0x820a2d10
	if (!ctx.cr6.eq) goto loc_820A2D10;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// b 0x820a2d38
	goto loc_820A2D38;
loc_820A2D10:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_820A2D38:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r27,r29,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r28,4
	ctx.r28.s64 = 4;
loc_820A2D48:
	// lwzx r30,r27,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a2d9c
	if (ctx.cr6.eq) goto loc_820A2D9C;
	// bl 0x82183850
	ctx.lr = 0x820A2D5C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a2d74
	if (ctx.cr6.eq) goto loc_820A2D74;
	// li r3,13552
	ctx.r3.s64 = 13552;
	// bl 0x82183448
	ctx.lr = 0x820A2D70;
	sub_82183448(ctx, base);
	// b 0x820a2d7c
	goto loc_820A2D7C;
loc_820A2D74:
	// li r3,847
	ctx.r3.s64 = 847;
	// bl 0x821845a0
	ctx.lr = 0x820A2D7C;
	sub_821845A0(ctx, base);
loc_820A2D7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2d94
	if (ctx.cr6.eq) goto loc_820A2D94;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821039f0
	ctx.lr = 0x820A2D90;
	sub_821039F0(ctx, base);
	// b 0x820a2d98
	goto loc_820A2D98;
loc_820A2D94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820A2D98:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_820A2D9C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820a2d48
	if (!ctx.cr0.eq) goto loc_820A2D48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820A2DB4"))) PPC_WEAK_FUNC(sub_820A2DB4);
PPC_FUNC_IMPL(__imp__sub_820A2DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2DB8"))) PPC_WEAK_FUNC(sub_820A2DB8);
PPC_FUNC_IMPL(__imp__sub_820A2DB8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_820A2DEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2e24
	if (ctx.cr6.eq) goto loc_820A2E24;
	// lhz r11,644(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2e24
	if (ctx.cr6.eq) goto loc_820A2E24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,596(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
	// stfs f30,632(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 632, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A2E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A2E24:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820a2dec
	if (!ctx.cr0.eq) goto loc_820A2DEC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2E50"))) PPC_WEAK_FUNC(sub_820A2E50);
PPC_FUNC_IMPL(__imp__sub_820A2E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A2E58;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x820a2ed4
	if (ctx.cr6.gt) goto loc_820A2ED4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820a2ec0
	// bdzf 4*cr6+eq,0x820a2ec8
	// bdzf 4*cr6+eq,0x820a2ec8
	// bdzf 4*cr6+eq,0x820a2ec8
	// bne cr6,0x820a2ec8
	if (!ctx.cr6.eq) goto loc_820A2EC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// b 0x820a2ed4
	goto loc_820A2ED4;
loc_820A2EC0:
	// lbz r10,568(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 568);
	// b 0x820a2ecc
	goto loc_820A2ECC;
loc_820A2EC8:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_820A2ECC:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A2ED4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a2f34
	if (!ctx.cr6.gt) goto loc_820A2F34;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820A2EEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a2f28
	if (ctx.cr6.eq) goto loc_820A2F28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82102418
	ctx.lr = 0x820A2F1C;
	sub_82102418(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// stfs f30,772(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// stfs f31,808(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 808, temp.u32);
loc_820A2F28:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820a2eec
	if (!ctx.cr0.eq) goto loc_820A2EEC;
loc_820A2F34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A2F44"))) PPC_WEAK_FUNC(sub_820A2F44);
PPC_FUNC_IMPL(__imp__sub_820A2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A2F48"))) PPC_WEAK_FUNC(sub_820A2F48);
PPC_FUNC_IMPL(__imp__sub_820A2F48) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,10012
	ctx.r9.s64 = ctx.r11.s64 + 10012;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,-8856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8856, ctx.r11.u32);
	// beq cr6,0x820a2f8c
	if (ctx.cr6.eq) goto loc_820A2F8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A2F88;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A2F8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A2FA0"))) PPC_WEAK_FUNC(sub_820A2FA0);
PPC_FUNC_IMPL(__imp__sub_820A2FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A2FA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,-27876
	ctx.r30.s64 = ctx.r30.s64 + -27876;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,10120
	ctx.r7.s64 = ctx.r11.s64 + 10120;
	// addi r6,r10,10112
	ctx.r6.s64 = ctx.r10.s64 + 10112;
	// addi r5,r9,10104
	ctx.r5.s64 = ctx.r9.s64 + 10104;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,10072
	ctx.r4.s64 = ctx.r8.s64 + 10072;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// addi r27,r31,56
	ctx.r27.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3014
	if (ctx.cr6.eq) goto loc_820A3014;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A3014:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820A3024;
	sub_821883B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821857f0
	ctx.lr = 0x820A302C;
	sub_821857F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x820A3034;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821863b8
	ctx.lr = 0x820A303C;
	sub_821863B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A3044"))) PPC_WEAK_FUNC(sub_820A3044);
PPC_FUNC_IMPL(__imp__sub_820A3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3048"))) PPC_WEAK_FUNC(sub_820A3048);
PPC_FUNC_IMPL(__imp__sub_820A3048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x820a4b40
	sub_820A4B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3050"))) PPC_WEAK_FUNC(sub_820A3050);
PPC_FUNC_IMPL(__imp__sub_820A3050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x820a4b40
	sub_820A4B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3058"))) PPC_WEAK_FUNC(sub_820A3058);
PPC_FUNC_IMPL(__imp__sub_820A3058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x820a4b40
	sub_820A4B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3060"))) PPC_WEAK_FUNC(sub_820A3060);
PPC_FUNC_IMPL(__imp__sub_820A3060) {
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
	// addi r11,r3,-56
	ctx.r11.s64 = ctx.r3.s64 + -56;
	// lis r4,16978
	ctx.r4.s64 = 1112670208;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r4,17200
	ctx.r4.u64 = ctx.r4.u64 | 17200;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// bl 0x821882d0
	ctx.lr = 0x820A3090;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a30b8
	if (ctx.cr6.eq) goto loc_820A30B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a30b8
	if (ctx.cr6.eq) goto loc_820A30B8;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A30B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A30B8:
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
loc_820A30DC:
	// stfs f13,-80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -80, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f13,16(r11)
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820a30dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A30DC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A310C"))) PPC_WEAK_FUNC(sub_820A310C);
PPC_FUNC_IMPL(__imp__sub_820A310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3110"))) PPC_WEAK_FUNC(sub_820A3110);
PPC_FUNC_IMPL(__imp__sub_820A3110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bne cr6,0x820a313c
	if (!ctx.cr6.eq) goto loc_820A313C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A313C:
	// lis r4,16978
	ctx.r4.s64 = 1112670208;
	// ori r4,r4,17200
	ctx.r4.u64 = ctx.r4.u64 | 17200;
	// bl 0x821882d0
	ctx.lr = 0x820A3148;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3160
	if (ctx.cr6.eq) goto loc_820A3160;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3160
	if (ctx.cr6.eq) goto loc_820A3160;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_820A3160:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A317C"))) PPC_WEAK_FUNC(sub_820A317C);
PPC_FUNC_IMPL(__imp__sub_820A317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3180"))) PPC_WEAK_FUNC(sub_820A3180);
PPC_FUNC_IMPL(__imp__sub_820A3180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bne cr6,0x820a31ac
	if (!ctx.cr6.eq) goto loc_820A31AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A31AC:
	// lis r4,16978
	ctx.r4.s64 = 1112670208;
	// ori r4,r4,17200
	ctx.r4.u64 = ctx.r4.u64 | 17200;
	// bl 0x821882d0
	ctx.lr = 0x820A31B8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a31d0
	if (ctx.cr6.eq) goto loc_820A31D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a31d0
	if (ctx.cr6.eq) goto loc_820A31D0;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
loc_820A31D0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37660
	ctx.r10.u64 = ctx.r11.u64 | 37660;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a31e8
	if (ctx.cr6.eq) goto loc_820A31E8;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_820A31E8:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A3204"))) PPC_WEAK_FUNC(sub_820A3204);
PPC_FUNC_IMPL(__imp__sub_820A3204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3208"))) PPC_WEAK_FUNC(sub_820A3208);
PPC_FUNC_IMPL(__imp__sub_820A3208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820A3210;
	sub_82248780(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a25b8
	ctx.lr = 0x820A3234;
	sub_821A25B8(ctx, base);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// ori r9,r10,27992
	ctx.r9.u64 = ctx.r10.u64 | 27992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r29,r30,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r31,-27872
	ctx.r31.s64 = ctx.r31.s64 + -27872;
	// lfs f29,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// lfs f30,10128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10128);
	ctx.f30.f64 = double(temp.f32);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_820A3270:
	// lwz r10,-8856(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8856);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a32c0
	if (ctx.cr6.eq) goto loc_820A32C0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x820a3298
	if (!ctx.cr6.eq) goto loc_820A3298;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820a32c0
	if (!ctx.cr6.eq) goto loc_820A32C0;
	// b 0x820a32a8
	goto loc_820A32A8;
loc_820A3298:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a32c0
	if (ctx.cr6.eq) goto loc_820A32C0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x820a32c0
	if (ctx.cr6.lt) goto loc_820A32C0;
loc_820A32A8:
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A32C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A32C0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bne 0x820a3270
	if (!ctx.cr0.eq) goto loc_820A3270;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,324(r26)
	PPC_STORE_U32(ctx.r26.u32 + 324, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820A32EC"))) PPC_WEAK_FUNC(sub_820A32EC);
PPC_FUNC_IMPL(__imp__sub_820A32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A32F0"))) PPC_WEAK_FUNC(sub_820A32F0);
PPC_FUNC_IMPL(__imp__sub_820A32F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x820A32F8;
	sub_82248758(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a3a08
	if (ctx.cr6.eq) goto loc_820A3A08;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820A3324;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a3a08
	if (!ctx.cr6.eq) goto loc_820A3A08;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x820a3a08
	if (ctx.cr6.eq) goto loc_820A3A08;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a3a08
	if (ctx.cr6.eq) goto loc_820A3A08;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a3a08
	if (ctx.cr6.eq) goto loc_820A3A08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3a08
	if (ctx.cr6.eq) goto loc_820A3A08;
	// lwz r31,-19048(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x821a2b58
	ctx.lr = 0x820A3384;
	sub_821A2B58(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2b00
	ctx.lr = 0x820A3394;
	sub_821A2B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r19,-7488(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ade68
	ctx.lr = 0x820A33A4;
	sub_821ADE68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x821adca8
	ctx.lr = 0x820A33B4;
	sub_821ADCA8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821adc30
	ctx.lr = 0x820A33BC;
	sub_821ADC30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820A33C8;
	sub_821AD1F8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820a33dc
	if (ctx.cr6.eq) goto loc_820A33DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A33DC;
	sub_821AD6F8(ctx, base);
loc_820A33DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad570
	ctx.lr = 0x820A33E8;
	sub_821AD570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad600
	ctx.lr = 0x820A33F4;
	sub_821AD600(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad318
	ctx.lr = 0x820A3400;
	sub_821AD318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad360
	ctx.lr = 0x820A340C;
	sub_821AD360(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad450
	ctx.lr = 0x820A3418;
	sub_821AD450(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad3a8
	ctx.lr = 0x820A3428;
	sub_821AD3A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad400
	ctx.lr = 0x820A3440;
	sub_821AD400(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad3a8
	ctx.lr = 0x820A3450;
	sub_821AD3A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ad400
	ctx.lr = 0x820A3468;
	sub_821AD400(ctx, base);
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r10,-28056
	ctx.r10.s64 = ctx.r10.s64 + -28056;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r11,-31408
	ctx.r30.s64 = ctx.r11.s64 + -31408;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f30,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lfs f29,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f29.f64 = double(temp.f32);
	// subfic r20,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r20.s64 = 64 - ctx.r30.s64;
	// lfs f31,10132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10132);
	ctx.f31.f64 = double(temp.f32);
	// lis r21,-32182
	ctx.r21.s64 = -2109079552;
	// addi r18,r11,-31472
	ctx.r18.s64 = ctx.r11.s64 + -31472;
loc_820A34A8:
	// lwz r22,108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
loc_820A34B8:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r24,0(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x820a3760
	if (ctx.cr6.lt) goto loc_820A3760;
	// lwz r11,-8852(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8852);
	// add r8,r20,r30
	ctx.r8.u64 = ctx.r20.u64 + ctx.r30.u64;
	// lwz r10,176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 176);
	// addi r27,r25,-3
	ctx.r27.s64 = ctx.r25.s64 + -3;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_820A34E0:
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r11,r28,r9
	ctx.r11.u64 = ctx.r28.u64 + ctx.r9.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r29,r5,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// li r4,96
	ctx.r4.s64 = 96;
	// rlwinm r17,r4,1,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// lwz r8,620(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r3,624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,616(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r16,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subfc r5,r5,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfe r5,r3,r29
	temp.u8 = (~ctx.r3.u32 + ctx.r29.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f9,848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 848);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,856(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 856);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f7,48(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// fadds f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f31,52(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// stfs f6,56(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f30,60(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lwz r8,616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f29,20(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r5,636(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,632(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r3,628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// rlwinm r3,r3,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// subfc r5,r4,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r4.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r4.s64;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subfe r3,r4,r17
	temp.u8 = (~ctx.r4.u32 + ctx.r17.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,96
	ctx.r5.s64 = 96;
	// and r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 & ctx.r6.u64;
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f0,856(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 848);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,48(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f31,52(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// stfs f11,56(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f30,60(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lwz r4,628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// rlwinm r8,r4,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f29,20(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r8,644(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// rlwinm r17,r5,1,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lwz r29,640(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// li r4,96
	ctx.r4.s64 = 96;
	// ld r16,8(r31)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// std r16,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r16.u64);
	// rlwinm r16,r4,1,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r29,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// subfc r5,r5,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfe r5,r3,r17
	temp.u8 = (~ctx.r3.u32 + ctx.r17.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f5,856(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 856);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 848);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f3,48(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f31,52(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// fadds f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,56(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f30,60(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lwz r8,640(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f29,20(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r8,656(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r5,652(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r8,660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// subfc r5,r4,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r4.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r4.s64;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// subfe r3,r4,r16
	temp.u8 = (~ctx.r4.u32 + ctx.r16.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r16.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 & ctx.r6.u64;
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f10,856(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 856);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 848);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f8,48(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f31,52(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// fadds f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f7,56(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f30,60(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lwz r5,652(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f29,20(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blt cr6,0x820a34e0
	if (ctx.cr6.lt) goto loc_820A34E0;
loc_820A3760:
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x820a3834
	if (!ctx.cr6.lt) goto loc_820A3834;
	// lwz r11,-8852(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8852);
	// add r10,r20,r30
	ctx.r10.u64 = ctx.r20.u64 + ctx.r30.u64;
	// subf r8,r9,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r9.s64;
	// lwz r6,176(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 176);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820A3780:
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r28,r9
	ctx.r11.u64 = ctx.r28.u64 + ctx.r9.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r7,96
	ctx.r7.s64 = 96;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r5,624(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,616(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subfc r7,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfe r3,r5,r3
	temp.u8 = (~ctx.r5.u32 + ctx.r3.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f9,856(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 856);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 848);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f6,48(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f31,52(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f7,56(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f30,60(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwz r7,616(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stfs f29,20(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// bdnz 0x820a3780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A3780;
loc_820A3834:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A385C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r7,r18,64
	ctx.r7.s64 = ctx.r18.s64 + 64;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820a34b8
	if (ctx.cr6.lt) goto loc_820A34B8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820a34a8
	if (ctx.cr6.lt) goto loc_820A34A8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad318
	ctx.lr = 0x820A3898;
	sub_821AD318(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x821ad6f8
	ctx.lr = 0x820A38A4;
	sub_821AD6F8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad570
	ctx.lr = 0x820A38B0;
	sub_821AD570(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad600
	ctx.lr = 0x820A38BC;
	sub_821AD600(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821b2118
	ctx.lr = 0x820A38C4;
	sub_821B2118(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820A38D4;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820A38E0;
	sub_821ADC30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x820A38EC;
	sub_821ADE68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x820A38FC;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820A3908;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad318
	ctx.lr = 0x820A3914;
	sub_821AD318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad360
	ctx.lr = 0x820A3920;
	sub_821AD360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad450
	ctx.lr = 0x820A392C;
	sub_821AD450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad3a8
	ctx.lr = 0x820A393C;
	sub_821AD3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad400
	ctx.lr = 0x820A3954;
	sub_821AD400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821ad3a8
	ctx.lr = 0x820A3964;
	sub_821AD3A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad400
	ctx.lr = 0x820A397C;
	sub_821AD400(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820a3990
	if (ctx.cr6.eq) goto loc_820A3990;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A3990;
	sub_821AD6F8(ctx, base);
loc_820A3990:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r29,168(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820a39c4
	if (ctx.cr6.eq) goto loc_820A39C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820A39B0;
	sub_821AD288(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A39C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A39C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820A39D0;
	sub_821AD498(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820A39DC;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad318
	ctx.lr = 0x820A39E8;
	sub_821AD318(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A39F4;
	sub_821AD6F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821b1d48
	ctx.lr = 0x820A39FC;
	sub_821B1D48(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x821a2b00
	ctx.lr = 0x820A3A08;
	sub_821A2B00(ctx, base);
loc_820A3A08:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_820A3A1C"))) PPC_WEAK_FUNC(sub_820A3A1C);
PPC_FUNC_IMPL(__imp__sub_820A3A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3A20"))) PPC_WEAK_FUNC(sub_820A3A20);
PPC_FUNC_IMPL(__imp__sub_820A3A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820A3A28;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a25b8
	ctx.lr = 0x820A3A44;
	sub_821A25B8(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a3b80
	if (ctx.cr6.eq) goto loc_820A3B80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A3A64;
	sub_820A27B0(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,-7460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A3A70;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820A3A84;
	sub_821AF5E0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x820a3b80
	if (ctx.cr6.eq) goto loc_820A3B80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a3b80
	if (ctx.cr6.eq) goto loc_820A3B80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a3b80
	if (ctx.cr6.eq) goto loc_820A3B80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3b80
	if (ctx.cr6.eq) goto loc_820A3B80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r29,-28004
	ctx.r29.s64 = ctx.r29.s64 + -28004;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-31328
	ctx.r26.s64 = ctx.r11.s64 + -31328;
	// addi r25,r10,-31392
	ctx.r25.s64 = ctx.r10.s64 + -31392;
loc_820A3AF4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x820a3b0c
	if (!ctx.cr6.eq) goto loc_820A3B0C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820a3b58
	if (!ctx.cr6.eq) goto loc_820A3B58;
	// b 0x820a3b14
	goto loc_820A3B14;
loc_820A3B0C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a3b58
	if (ctx.cr6.eq) goto loc_820A3B58;
loc_820A3B14:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a3b58
	if (ctx.cr6.eq) goto loc_820A3B58;
	// add r5,r30,r25
	ctx.r5.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82187c20
	ctx.lr = 0x820A3B30;
	sub_82187C20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A3B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A3B58:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x820a3af4
	if (ctx.cr6.lt) goto loc_820A3AF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,324(r23)
	PPC_STORE_U32(ctx.r23.u32 + 324, ctx.r11.u32);
	// lwz r3,-7460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A3B80;
	sub_821AF5E0(ctx, base);
loc_820A3B80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820A3B8C"))) PPC_WEAK_FUNC(sub_820A3B8C);
PPC_FUNC_IMPL(__imp__sub_820A3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3B90"))) PPC_WEAK_FUNC(sub_820A3B90);
PPC_FUNC_IMPL(__imp__sub_820A3B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820A3B98;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a25b8
	ctx.lr = 0x820A3BB4;
	sub_821A25B8(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a3cf0
	if (ctx.cr6.eq) goto loc_820A3CF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A3BD4;
	sub_820A27B0(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,-7460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A3BE0;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820A3BF4;
	sub_821AF5E0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x820a3cf0
	if (ctx.cr6.eq) goto loc_820A3CF0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a3cf0
	if (ctx.cr6.eq) goto loc_820A3CF0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a3cf0
	if (ctx.cr6.eq) goto loc_820A3CF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3cf0
	if (ctx.cr6.eq) goto loc_820A3CF0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r29,-27908
	ctx.r29.s64 = ctx.r29.s64 + -27908;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-31200
	ctx.r26.s64 = ctx.r11.s64 + -31200;
	// addi r25,r10,-31264
	ctx.r25.s64 = ctx.r10.s64 + -31264;
loc_820A3C64:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x820a3c7c
	if (!ctx.cr6.eq) goto loc_820A3C7C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820a3cc8
	if (!ctx.cr6.eq) goto loc_820A3CC8;
	// b 0x820a3c84
	goto loc_820A3C84;
loc_820A3C7C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a3cc8
	if (ctx.cr6.eq) goto loc_820A3CC8;
loc_820A3C84:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a3cc8
	if (ctx.cr6.eq) goto loc_820A3CC8;
	// add r5,r30,r25
	ctx.r5.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82187c20
	ctx.lr = 0x820A3CA0;
	sub_82187C20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820A3CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A3CC8:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x820a3c64
	if (ctx.cr6.lt) goto loc_820A3C64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,324(r23)
	PPC_STORE_U32(ctx.r23.u32 + 324, ctx.r11.u32);
	// lwz r3,-7460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A3CF0;
	sub_821AF5E0(ctx, base);
loc_820A3CF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820A3CFC"))) PPC_WEAK_FUNC(sub_820A3CFC);
PPC_FUNC_IMPL(__imp__sub_820A3CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3D00"))) PPC_WEAK_FUNC(sub_820A3D00);
PPC_FUNC_IMPL(__imp__sub_820A3D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,10016
	ctx.r10.s64 = ctx.r11.s64 + 10016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185a50
	ctx.lr = 0x820A3D2C;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a3d48
	if (ctx.cr6.eq) goto loc_820A3D48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A3D44;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A3D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A3D60"))) PPC_WEAK_FUNC(sub_820A3D60);
PPC_FUNC_IMPL(__imp__sub_820A3D60) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820A3D80;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820A3D8C;
	sub_82188338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,10168
	ctx.r9.s64 = ctx.r11.s64 + 10168;
	// addi r8,r10,10136
	ctx.r8.s64 = ctx.r10.s64 + 10136;
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

__attribute__((alias("__imp__sub_820A3DBC"))) PPC_WEAK_FUNC(sub_820A3DBC);
PPC_FUNC_IMPL(__imp__sub_820A3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3DC0"))) PPC_WEAK_FUNC(sub_820A3DC0);
PPC_FUNC_IMPL(__imp__sub_820A3DC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820a3dc8
	sub_820A3DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A3DC8"))) PPC_WEAK_FUNC(sub_820A3DC8);
PPC_FUNC_IMPL(__imp__sub_820A3DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820A3DEC;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820A3DF4;
	sub_821857F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3e10
	if (ctx.cr6.eq) goto loc_820A3E10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A3E0C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A3E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A3E28"))) PPC_WEAK_FUNC(sub_820A3E28);
PPC_FUNC_IMPL(__imp__sub_820A3E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820A3E3C"))) PPC_WEAK_FUNC(sub_820A3E3C);
PPC_FUNC_IMPL(__imp__sub_820A3E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3E40"))) PPC_WEAK_FUNC(sub_820A3E40);
PPC_FUNC_IMPL(__imp__sub_820A3E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A3E48;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-31828(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8796(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8796, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,-8840(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8840, ctx.r10.u32);
	// beq cr6,0x820a3e8c
	if (ctx.cr6.eq) goto loc_820A3E8C;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
loc_820A3E8C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82184800
	ctx.lr = 0x820A3E9C;
	sub_82184800(ctx, base);
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a3f40
	if (ctx.cr6.eq) goto loc_820A3F40;
	// bl 0x8215c068
	ctx.lr = 0x820A3EAC;
	sub_8215C068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820A3EB4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A3EC0;
	sub_821837D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820A3ED4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a3f2c
	if (ctx.cr6.eq) goto loc_820A3F2C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A3EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r28.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// bl 0x82102b98
	ctx.lr = 0x820A3F20;
	sub_82102B98(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,948(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 948, temp.u32);
	// stfs f31,984(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 984, temp.u32);
loc_820A3F2C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820a3ed4
	if (!ctx.cr0.eq) goto loc_820A3ED4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A3F40;
	sub_821837D0(ctx, base);
loc_820A3F40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A3F4C"))) PPC_WEAK_FUNC(sub_820A3F4C);
PPC_FUNC_IMPL(__imp__sub_820A3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A3F50"))) PPC_WEAK_FUNC(sub_820A3F50);
PPC_FUNC_IMPL(__imp__sub_820A3F50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1224, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A3F58"))) PPC_WEAK_FUNC(sub_820A3F58);
PPC_FUNC_IMPL(__imp__sub_820A3F58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A3F60"))) PPC_WEAK_FUNC(sub_820A3F60);
PPC_FUNC_IMPL(__imp__sub_820A3F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A3F68;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r31,140(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r28,148(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820a3f94
	if (!ctx.cr6.eq) goto loc_820A3F94;
	// lwz r31,136(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r28,144(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a40d0
	if (ctx.cr6.eq) goto loc_820A40D0;
loc_820A3F94:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820a40d0
	if (ctx.cr6.eq) goto loc_820A40D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,1296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A3FAC;
	sub_820A27B0(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A3FB8;
	sub_821AF640(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820a3fe8
	if (!ctx.cr6.eq) goto loc_820A3FE8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// bl 0x82161df8
	ctx.lr = 0x820A3FDC;
	sub_82161DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a3fe8
	if (ctx.cr6.eq) goto loc_820A3FE8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820A3FE8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A3FF4;
	sub_821AF5E0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,-7488(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad910
	ctx.lr = 0x820A4018;
	sub_821AD910(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f13,10176(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10176);
	ctx.f13.f64 = double(temp.f32);
	// std r9,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r9.u64);
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// lfs f0,-8796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8796);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A4088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// bne cr6,0x820a40a0
	if (!ctx.cr6.eq) goto loc_820A40A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x820a40b0
	if (ctx.cr6.eq) goto loc_820A40B0;
loc_820A40A0:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad8c8
	ctx.lr = 0x820A40B0;
	sub_821AD8C8(ctx, base);
loc_820A40B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A40C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A40D0;
	sub_821AF5E0(ctx, base);
loc_820A40D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A40D8"))) PPC_WEAK_FUNC(sub_820A40D8);
PPC_FUNC_IMPL(__imp__sub_820A40D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820A40E0;
	sub_82248778(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x820a42c8
	if (ctx.cr6.eq) goto loc_820A42C8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a42c8
	if (ctx.cr6.eq) goto loc_820A42C8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a42c8
	if (ctx.cr6.eq) goto loc_820A42C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a42c8
	if (ctx.cr6.eq) goto loc_820A42C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,1300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A414C;
	sub_820A27B0(ctx, base);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r3,-7460(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A4158;
	sub_821AF640(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820a4188
	if (!ctx.cr6.eq) goto loc_820A4188;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// bl 0x82161df8
	ctx.lr = 0x820A417C;
	sub_82161DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a4188
	if (ctx.cr6.eq) goto loc_820A4188;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820A4188:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-7460(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A4194;
	sub_821AF5E0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,-7488(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad910
	ctx.lr = 0x820A41B8;
	sub_821AD910(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x820a41d0
	if (!ctx.cr6.eq) goto loc_820A41D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x820a41e0
	if (ctx.cr6.eq) goto loc_820A41E0;
loc_820A41D0:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad8c8
	ctx.lr = 0x820A41E0;
	sub_821AD8C8(ctx, base);
loc_820A41E0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,-8792
	ctx.r26.s64 = ctx.r11.s64 + -8792;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// lfs f29,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f29.f64 = double(temp.f32);
	// addi r27,r30,1280
	ctx.r27.s64 = ctx.r30.s64 + 1280;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820A4210:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820a42a0
	if (ctx.cr6.eq) goto loc_820A42A0;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82096ec8
	ctx.lr = 0x820A4264;
	sub_82096EC8(ctx, base);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82187c20
	ctx.lr = 0x820A4278;
	sub_82187C20(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A428C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820A42A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A42A0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r26,36
	ctx.r11.s64 = ctx.r26.s64 + 36;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820a4210
	if (ctx.cr6.lt) goto loc_820A4210;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-7460(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A42C8;
	sub_821AF5E0(ctx, base);
loc_820A42C8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820A42DC"))) PPC_WEAK_FUNC(sub_820A42DC);
PPC_FUNC_IMPL(__imp__sub_820A42DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A42E0"))) PPC_WEAK_FUNC(sub_820A42E0);
PPC_FUNC_IMPL(__imp__sub_820A42E0) {
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
	// bl 0x82187200
	ctx.lr = 0x820A42F8;
	sub_82187200(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x820a4318
	if (!ctx.cr6.gt) goto loc_820A4318;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// b 0x820a431c
	goto loc_820A431C;
loc_820A4318:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820A431C:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A4358"))) PPC_WEAK_FUNC(sub_820A4358);
PPC_FUNC_IMPL(__imp__sub_820A4358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A4360;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820A4378;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x821859a0
	ctx.lr = 0x820A438C;
	sub_821859A0(ctx, base);
	// lis r4,16978
	ctx.r4.s64 = 1112670208;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17200
	ctx.r4.u64 = ctx.r4.u64 | 17200;
	// bl 0x82188378
	ctx.lr = 0x820A43A0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r11,10064
	ctx.r7.s64 = ctx.r11.s64 + 10064;
	// addi r6,r10,10056
	ctx.r6.s64 = ctx.r10.s64 + 10056;
	// addi r5,r9,10024
	ctx.r5.s64 = ctx.r9.s64 + 10024;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r31,-8852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8852, ctx.r31.u32);
	// bl 0x82183850
	ctx.lr = 0x820A43D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a43ec
	if (ctx.cr6.eq) goto loc_820A43EC;
	// li r3,7264
	ctx.r3.s64 = 7264;
	// bl 0x82183448
	ctx.lr = 0x820A43E8;
	sub_82183448(ctx, base);
	// b 0x820a43f4
	goto loc_820A43F4;
loc_820A43EC:
	// li r3,454
	ctx.r3.s64 = 454;
	// bl 0x821845a0
	ctx.lr = 0x820A43F4;
	sub_821845A0(ctx, base);
loc_820A43F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820a4424
	if (ctx.cr6.eq) goto loc_820A4424;
	// lfs f0,-31812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -31812);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-8832(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8832);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f0,f31,f13
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// bl 0x820c0618
	ctx.lr = 0x820A4420;
	sub_820C0618(ctx, base);
	// b 0x820a4428
	goto loc_820A4428;
loc_820A4424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A4428:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lfs f0,-31812(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -31812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8832(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8832);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// fnmsubs f1,f0,f31,f13
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// bl 0x820c0268
	ctx.lr = 0x820A4448;
	sub_820C0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A4458"))) PPC_WEAK_FUNC(sub_820A4458);
PPC_FUNC_IMPL(__imp__sub_820A4458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820a2b88
	ctx.lr = 0x820A4478;
	sub_820A2B88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4494
	if (ctx.cr6.eq) goto loc_820A4494;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A4490;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A4494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A44AC"))) PPC_WEAK_FUNC(sub_820A44AC);
PPC_FUNC_IMPL(__imp__sub_820A44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A44B0"))) PPC_WEAK_FUNC(sub_820A44B0);
PPC_FUNC_IMPL(__imp__sub_820A44B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x820A44B8;
	sub_82248750(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185698
	ctx.lr = 0x820A44D4;
	sub_82185698(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x821859a0
	ctx.lr = 0x820A44E8;
	sub_821859A0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82185740
	ctx.lr = 0x820A44F8;
	sub_82185740(ctx, base);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lis r4,21071
	ctx.r4.s64 = 1380909056;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188378
	ctx.lr = 0x820A4510;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r6,r10,10120
	ctx.r6.s64 = ctx.r10.s64 + 10120;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r9,10112
	ctx.r5.s64 = ctx.r9.s64 + 10112;
	// addi r4,r8,10104
	ctx.r4.s64 = ctx.r8.s64 + 10104;
	// addi r3,r7,10072
	ctx.r3.s64 = ctx.r7.s64 + 10072;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r21,r21,-28008
	ctx.r21.s64 = ctx.r21.s64 + -28008;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lfs f30,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// li r19,0
	ctx.r19.s64 = 0;
loc_820A4560:
	// stw r19,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// stfsu f30,8(r11)
	// bdnz 0x820a4560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A4560;
	// addis r14,r31,1
	ctx.r14.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r14,r14,-27912
	ctx.r14.s64 = ctx.r14.s64 + -27912;
	// addi r29,r29,-27876
	ctx.r29.s64 = ctx.r29.s64 + -27876;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stfs f30,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r14.u32 + 4, temp.u32);
	// stw r19,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r19.u32);
	// stfs f30,12(r14)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r14.u32 + 12, temp.u32);
	// stw r19,8(r14)
	PPC_STORE_U32(ctx.r14.u32 + 8, ctx.r19.u32);
	// stfs f30,20(r14)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r14.u32 + 20, temp.u32);
	// stw r19,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r19.u32);
	// stfs f30,28(r14)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r14.u32 + 28, temp.u32);
	// stw r19,24(r14)
	PPC_STORE_U32(ctx.r14.u32 + 24, ctx.r19.u32);
	// stw r31,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r31.u32);
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// bl 0x82183850
	ctx.lr = 0x820A45AC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a45c4
	if (ctx.cr6.eq) goto loc_820A45C4;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x820A45C0;
	sub_82183448(ctx, base);
	// b 0x820a45cc
	goto loc_820A45CC;
loc_820A45C4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A45CC;
	sub_821845A0(ctx, base);
loc_820A45CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a45e4
	if (ctx.cr6.eq) goto loc_820A45E4;
	// bl 0x820a4358
	ctx.lr = 0x820A45D8;
	sub_820A4358(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// bne cr6,0x820a45e8
	if (!ctx.cr6.eq) goto loc_820A45E8;
loc_820A45E4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_820A45E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188450
	ctx.lr = 0x820A45F0;
	sub_82188450(ctx, base);
	// li r4,18432
	ctx.r4.s64 = 18432;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x822aa648
	ctx.lr = 0x820A45FC;
	sub_822AA648(ctx, base);
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r23,r23,-28056
	ctx.r23.s64 = ctx.r23.s64 + -28056;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A4610;
	sub_822AA648(ctx, base);
	// addis r15,r31,1
	ctx.r15.s64 = ctx.r31.s64 + 65536;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r15,r15,-27880
	ctx.r15.s64 = ctx.r15.s64 + -27880;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r1,87
	ctx.r9.s64 = ctx.r1.s64 + 87;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r7,10004
	ctx.r10.s64 = ctx.r7.s64 + 10004;
	// stw r19,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r19.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,-5000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5000);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r11,-5000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5000);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_820A4648:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x820a4648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A4648;
	// lis r16,-32182
	ctx.r16.s64 = -2109079552;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,-8856(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8856);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_820A467C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x820a467c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A467C;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r18,-32187
	ctx.r18.s64 = -2109407232;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lis r17,-32182
	ctx.r17.s64 = -2109079552;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// beq cr6,0x820a49b8
	if (ctx.cr6.eq) goto loc_820A49B8;
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a49b8
	if (ctx.cr6.eq) goto loc_820A49B8;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a49b8
	if (ctx.cr6.eq) goto loc_820A49B8;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a49b8
	if (ctx.cr6.eq) goto loc_820A49B8;
	// lwz r11,-4984(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4984);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// li r22,10
	ctx.r22.s64 = 10;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,-31808(r18)
	PPC_STORE_U32(ctx.r18.u32 + -31808, ctx.r11.u32);
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r24,r11,26215
	ctx.r24.u64 = ctx.r11.u64 | 26215;
loc_820A4708:
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mulhw r11,r26,r24
	ctx.r11.s64 = (int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32)) >> 32;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// divw r10,r26,r22
	ctx.r10.s32 = ctx.r26.s32 / ctx.r22.s32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r25,r1,160
	ctx.r25.s64 = ctx.r1.s64 + 160;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// subf r11,r7,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r7.s64;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// stb r6,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r6.u8);
loc_820A4754:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a47b0
	if (ctx.cr6.eq) goto loc_820A47B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A4774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a47b0
	if (ctx.cr6.eq) goto loc_820A47B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,616
	ctx.r10.s64 = ctx.r11.s64 + 616;
	// stw r3,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r3.u32);
	// stw r28,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820A47B0:
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,1536
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1536, ctx.xer);
	// blt cr6,0x820a4754
	if (ctx.cr6.lt) goto loc_820A4754;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820a47dc
	if (ctx.cr6.eq) goto loc_820A47DC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,128
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 128, ctx.xer);
	// blt cr6,0x820a4708
	if (ctx.cr6.lt) goto loc_820A4708;
	// b 0x820a47e8
	goto loc_820A47E8;
loc_820A47DC:
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_820A47E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lfs f29,10184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10184);
	ctx.f29.f64 = double(temp.f32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
loc_820A4810:
	// lwzx r27,r26,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a498c
	if (ctx.cr6.eq) goto loc_820A498C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820a48b0
	if (!ctx.cr6.gt) goto loc_820A48B0;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
loc_820A4830:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r5,0
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// divw r4,r7,r5
	ctx.r4.s32 = ctx.r7.s32 / ctx.r5.s32;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r4,620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 620, ctx.r4.u32);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// divw r4,r7,r3
	ctx.r4.s32 = ctx.r7.s32 / ctx.r3.s32;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// andc r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// andc r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// twllei r3,0
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// twlgei r5,-1
	// twlgei r4,-1
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820a4830
	if (ctx.cr6.lt) goto loc_820A4830;
loc_820A48B0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r27,80
	ctx.r10.s64 = ctx.r27.s64 + 80;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,80(r27)
	PPC_STORE_U64(ctx.r27.u32 + 80, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,88(r27)
	PPC_STORE_U64(ctx.r27.u32 + 88, ctx.r8.u64);
	// bge cr6,0x820a4908
	if (!ctx.cr6.lt) goto loc_820A4908;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4908
	if (ctx.cr6.eq) goto loc_820A4908;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
loc_820A4908:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// addi r9,r27,80
	ctx.r9.s64 = ctx.r27.s64 + 80;
	// ld r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 88);
	// ld r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x82187c20
	ctx.lr = 0x820A4940;
	sub_82187C20(ctx, base);
	// stfs f29,212(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 212, temp.u32);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bge cr6,0x820a4988
	if (!ctx.cr6.lt) goto loc_820A4988;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r28,r26,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a4988
	if (ctx.cr6.eq) goto loc_820A4988;
	// ld r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 80);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,88(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 88);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// addi r8,r28,80
	ctx.r8.s64 = ctx.r28.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x82187c20
	ctx.lr = 0x820A4984;
	sub_82187C20(ctx, base);
	// stfs f29,212(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 212, temp.u32);
loc_820A4988:
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_820A498C:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r30,1536
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1536, ctx.xer);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// blt cr6,0x820a4810
	if (ctx.cr6.lt) goto loc_820A4810;
	// stw r20,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r20.u32);
	// lwz r11,-8856(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8856);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820A49B8:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r7,108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// beq cr6,0x820a4a28
	if (ctx.cr6.eq) goto loc_820A4A28;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a4a28
	if (ctx.cr6.eq) goto loc_820A4A28;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820a4a28
	if (ctx.cr6.eq) goto loc_820A4A28;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820a4a28
	if (ctx.cr6.eq) goto loc_820A4A28;
	// lwz r11,-4984(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4984);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lis r3,0
	ctx.r3.s64 = 0;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r6,r6,37632
	ctx.r6.u64 = ctx.r6.u64 | 37632;
	// ori r5,r5,37640
	ctx.r5.u64 = ctx.r5.u64 | 37640;
	// ori r4,r3,37648
	ctx.r4.u64 = ctx.r3.u64 | 37648;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,-31808(r18)
	PPC_STORE_U32(ctx.r18.u32 + -31808, ctx.r11.u32);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r8,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// stwx r9,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r20,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r20.u32);
loc_820A4A28:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r5,320
	ctx.r5.s64 = 320;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-31836(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31836);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lfs f13,10180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,88(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82184800
	ctx.lr = 0x820A4A6C;
	sub_82184800(ctx, base);
	// stw r20,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r20.u32);
	// stw r19,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// stw r19,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r19.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820A4A88;
	sub_82161148(ctx, base);
	// stw r3,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r3.u32);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,-444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820A4A98;
	sub_82161148(ctx, base);
	// stw r3,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x820A4AA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a4ab8
	if (ctx.cr6.eq) goto loc_820A4AB8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x820A4AB4;
	sub_82183448(ctx, base);
	// b 0x820a4ac0
	goto loc_820A4AC0;
loc_820A4AB8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820A4AC0;
	sub_821845A0(ctx, base);
loc_820A4AC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a4af4
	if (ctx.cr6.eq) goto loc_820A4AF4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x821859a0
	ctx.lr = 0x820A4ADC;
	sub_821859A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,10016
	ctx.r9.s64 = ctx.r10.s64 + 10016;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x820a4af8
	goto loc_820A4AF8;
loc_820A4AF4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_820A4AF8:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// ori r8,r9,37680
	ctx.r8.u64 = ctx.r9.u64 | 37680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwx r20,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r20.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A4B40"))) PPC_WEAK_FUNC(sub_820A4B40);
PPC_FUNC_IMPL(__imp__sub_820A4B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820a2fa0
	ctx.lr = 0x820A4B60;
	sub_820A2FA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a4b7c
	if (ctx.cr6.eq) goto loc_820A4B7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A4B78;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A4B7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A4B94"))) PPC_WEAK_FUNC(sub_820A4B94);
PPC_FUNC_IMPL(__imp__sub_820A4B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A4B98"))) PPC_WEAK_FUNC(sub_820A4B98);
PPC_FUNC_IMPL(__imp__sub_820A4B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A4BA0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820A4BB8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a4c18
	if (!ctx.cr6.eq) goto loc_820A4C18;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A4BD0;
	sub_820A27B0(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-7460(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A4BDC;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7460);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820A4BF0;
	sub_821AF5E0(ctx, base);
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a25b8
	ctx.lr = 0x820A4BF8;
	sub_821A25B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a3208
	ctx.lr = 0x820A4C0C;
	sub_820A3208(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7460(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A4C18;
	sub_821AF5E0(ctx, base);
loc_820A4C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A4C20"))) PPC_WEAK_FUNC(sub_820A4C20);
PPC_FUNC_IMPL(__imp__sub_820A4C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x820A4C28;
	sub_82248754(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82249918
	ctx.lr = 0x820A4C30;
	sub_82249918(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r16,-32178
	ctx.r16.s64 = -2108817408;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r3,-19048(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -19048);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x821a2a18
	ctx.lr = 0x820A4C48;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a59d4
	if (!ctx.cr6.eq) goto loc_820A59D4;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r24,192(r20)
	PPC_STORE_U32(ctx.r20.u32 + 192, ctx.r24.u32);
	// addi r29,r20,192
	ctx.r29.s64 = ctx.r20.s64 + 192;
	// stw r24,196(r20)
	PPC_STORE_U32(ctx.r20.u32 + 196, ctx.r24.u32);
	// addi r23,r20,208
	ctx.r23.s64 = ctx.r20.s64 + 208;
	// stw r24,200(r20)
	PPC_STORE_U32(ctx.r20.u32 + 200, ctx.r24.u32);
	// stw r24,204(r20)
	PPC_STORE_U32(ctx.r20.u32 + 204, ctx.r24.u32);
	// stw r24,208(r20)
	PPC_STORE_U32(ctx.r20.u32 + 208, ctx.r24.u32);
	// stw r24,212(r20)
	PPC_STORE_U32(ctx.r20.u32 + 212, ctx.r24.u32);
	// stw r24,216(r20)
	PPC_STORE_U32(ctx.r20.u32 + 216, ctx.r24.u32);
	// stw r24,220(r20)
	PPC_STORE_U32(ctx.r20.u32 + 220, ctx.r24.u32);
	// bl 0x821a29d0
	ctx.lr = 0x820A4C84;
	sub_821A29D0(ctx, base);
	// lis r22,-32182
	ctx.r22.s64 = -2109079552;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,-5000(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5000);
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f24.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820a524c
	if (!ctx.cr6.eq) goto loc_820A524C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f28,-8836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8836);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x820804f8
	ctx.lr = 0x820A4CBC;
	sub_820804F8(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820a4cec
	if (ctx.cr6.eq) goto loc_820A4CEC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821a2a60
	ctx.lr = 0x820A4CCC;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a4cec
	if (ctx.cr6.eq) goto loc_820A4CEC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821a2a60
	ctx.lr = 0x820A4CDC;
	sub_821A2A60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82096f18
	ctx.lr = 0x820A4CEC;
	sub_82096F18(ctx, base);
loc_820A4CEC:
	// lfs f2,440(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82249c38
	ctx.lr = 0x820A4CF8;
	sub_82249C38(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x821875f8
	ctx.lr = 0x820A4D04;
	sub_821875F8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f24,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// stfs f24,100(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A4D40;
	sub_82187400(ctx, base);
	// fneg f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lfs f29,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f29.f64 = double(temp.f32);
	// lis r25,1
	ctx.r25.s64 = 65536;
	// fsubs f27,f29,f28
	ctx.f27.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// lfs f28,10192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10192);
	ctx.f28.f64 = double(temp.f32);
	// lfs f25,10188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10188);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f26,f30,f29
	ctx.f26.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
loc_820A4D70:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82187a50
	ctx.lr = 0x820A4D7C;
	sub_82187A50(ctx, base);
	// stfs f28,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stfs f28,212(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stfs f26,208(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stfs f25,180(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r30,r1,176
	ctx.r30.s64 = ctx.r1.s64 + 176;
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r31,6
	ctx.r31.s64 = 6;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r3,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r3.u64);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,256(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
loc_820A4E24:
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208ea90
	ctx.lr = 0x820A4E30;
	sub_8208EA90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x820a4e24
	if (!ctx.cr0.eq) goto loc_820A4E24;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r18,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r18.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// bl 0x821901a0
	ctx.lr = 0x820A4E94;
	sub_821901A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a4ea0
	if (ctx.cr6.eq) goto loc_820A4EA0;
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
loc_820A4EA0:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// bl 0x821901a0
	ctx.lr = 0x820A4EF4;
	sub_821901A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a4f00
	if (ctx.cr6.eq) goto loc_820A4F00;
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
loc_820A4F00:
	// addi r27,r27,16384
	ctx.r27.s64 = ctx.r27.s64 + 16384;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x820a4d70
	if (ctx.cr6.lt) goto loc_820A4D70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// lfs f29,8064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f29.f64 = double(temp.f32);
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// lfs f30,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f30.f64 = double(temp.f32);
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// lfs f28,3316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3316);
	ctx.f28.f64 = double(temp.f32);
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
loc_820A4F3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a5060
	if (ctx.cr6.eq) goto loc_820A5060;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x821875f8
	ctx.lr = 0x820A4F68;
	sub_821875F8(ctx, base);
	// stfs f24,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// stfs f31,316(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A4FA4;
	sub_82187400(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f8,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f0,f5,f6,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820a4fd8
	if (!ctx.cr6.lt) goto loc_820A4FD8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x820a4fe4
	goto loc_820A4FE4;
loc_820A4FD8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820a4fe4
	if (!ctx.cr6.gt) goto loc_820A4FE4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820A4FE4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82249b48
	ctx.lr = 0x820A4FEC;
	sub_82249B48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-31124(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820a5060
	if (ctx.cr6.lt) goto loc_820A5060;
	// lfs f0,-31828(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -31828);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lfs f0,-31836(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -31836);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f24,144(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A5044;
	sub_82187400(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821871a0
	ctx.lr = 0x820A5050;
	sub_821871A0(ctx, base);
	// lfs f0,-31120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -31120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820a5060
	if (!ctx.cr6.lt) goto loc_820A5060;
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
loc_820A5060:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820a4f3c
	if (ctx.cr6.lt) goto loc_820A4F3C;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820A5080:
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820a50b0
	if (!ctx.cr6.eq) goto loc_820A50B0;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r20
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820a50b0
	if (!ctx.cr6.eq) goto loc_820A50B0;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// b 0x820a50b4
	goto loc_820A50B4;
loc_820A50B0:
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_820A50B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820a5080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A5080;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lis r29,-32187
	ctx.r29.s64 = -2109407232;
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
loc_820A50D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a5238
	if (ctx.cr6.eq) goto loc_820A5238;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x821875f8
	ctx.lr = 0x820A50FC;
	sub_821875F8(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820A5114;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// ble cr6,0x820a5124
	if (!ctx.cr6.gt) goto loc_820A5124;
	// fdivs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// b 0x820a5128
	goto loc_820A5128;
loc_820A5124:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
loc_820A5128:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A517C;
	sub_82187400(ctx, base);
	// lfs f7,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f3,f4,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f0,f1,f2,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820a51b0
	if (!ctx.cr6.lt) goto loc_820A51B0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x820a51bc
	goto loc_820A51BC;
loc_820A51B0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820a51bc
	if (!ctx.cr6.gt) goto loc_820A51BC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820A51BC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82249b48
	ctx.lr = 0x820A51C4;
	sub_82249B48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-31132(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -31132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820a5238
	if (ctx.cr6.lt) goto loc_820A5238;
	// lfs f0,-31836(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -31836);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lfs f13,-31828(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -31828);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820A521C;
	sub_82187400(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821871a0
	ctx.lr = 0x820A5228;
	sub_821871A0(ctx, base);
	// lfs f0,-31128(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -31128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820a5238
	if (!ctx.cr6.lt) goto loc_820A5238;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_820A5238:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820a50d0
	if (ctx.cr6.lt) goto loc_820A50D0;
	// lwz r10,-5000(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5000);
loc_820A524C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r19,-32182
	ctx.r19.s64 = -2109079552;
	// ori r9,r11,37632
	ctx.r9.u64 = ctx.r11.u64 | 37632;
	// lwzx r8,r20,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820a57d8
	if (!ctx.cr6.eq) goto loc_820A57D8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,37656
	ctx.r9.u64 = ctx.r11.u64 | 37656;
	// lwzx r8,r20,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820a5544
	if (!ctx.cr6.eq) goto loc_820A5544;
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-28032
	ctx.r11.s64 = ctx.r11.s64 + -28032;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a52a0
	if (ctx.cr6.eq) goto loc_820A52A0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a52a0
	if (ctx.cr6.eq) goto loc_820A52A0;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A52A0:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-28000
	ctx.r11.s64 = ctx.r11.s64 + -28000;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a52c8
	if (ctx.cr6.eq) goto loc_820A52C8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a52c8
	if (ctx.cr6.eq) goto loc_820A52C8;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A52C8:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27968
	ctx.r11.s64 = ctx.r11.s64 + -27968;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a52f0
	if (ctx.cr6.eq) goto loc_820A52F0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a52f0
	if (ctx.cr6.eq) goto loc_820A52F0;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A52F0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// ori r9,r10,37640
	ctx.r9.u64 = ctx.r10.u64 | 37640;
	// addi r11,r11,-28024
	ctx.r11.s64 = ctx.r11.s64 + -28024;
	// stfsx f31,r20,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5324
	if (ctx.cr6.eq) goto loc_820A5324;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a5324
	if (ctx.cr6.eq) goto loc_820A5324;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A5324:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27992
	ctx.r11.s64 = ctx.r11.s64 + -27992;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a534c
	if (ctx.cr6.eq) goto loc_820A534C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a534c
	if (ctx.cr6.eq) goto loc_820A534C;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A534C:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27960
	ctx.r11.s64 = ctx.r11.s64 + -27960;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5374
	if (ctx.cr6.eq) goto loc_820A5374;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a5374
	if (ctx.cr6.eq) goto loc_820A5374;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A5374:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// ori r9,r10,37644
	ctx.r9.u64 = ctx.r10.u64 | 37644;
	// addi r11,r11,-28016
	ctx.r11.s64 = ctx.r11.s64 + -28016;
	// stfsx f31,r20,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a53a8
	if (ctx.cr6.eq) goto loc_820A53A8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a53a8
	if (ctx.cr6.eq) goto loc_820A53A8;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A53A8:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27984
	ctx.r11.s64 = ctx.r11.s64 + -27984;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a53d0
	if (ctx.cr6.eq) goto loc_820A53D0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a53d0
	if (ctx.cr6.eq) goto loc_820A53D0;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A53D0:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27952
	ctx.r11.s64 = ctx.r11.s64 + -27952;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a53f8
	if (ctx.cr6.eq) goto loc_820A53F8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a53f8
	if (ctx.cr6.eq) goto loc_820A53F8;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A53F8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// ori r9,r10,37648
	ctx.r9.u64 = ctx.r10.u64 | 37648;
	// addi r11,r11,-28008
	ctx.r11.s64 = ctx.r11.s64 + -28008;
	// stfsx f31,r20,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a542c
	if (ctx.cr6.eq) goto loc_820A542C;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a542c
	if (ctx.cr6.eq) goto loc_820A542C;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A542C:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27976
	ctx.r11.s64 = ctx.r11.s64 + -27976;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5454
	if (ctx.cr6.eq) goto loc_820A5454;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a5454
	if (ctx.cr6.eq) goto loc_820A5454;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A5454:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27944
	ctx.r11.s64 = ctx.r11.s64 + -27944;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a547c
	if (ctx.cr6.eq) goto loc_820A547C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a547c
	if (ctx.cr6.eq) goto loc_820A547C;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A547C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-8976(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -8976);
	// ori r9,r10,37652
	ctx.r9.u64 = ctx.r10.u64 | 37652;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfsx f31,r20,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, temp.u32);
	// beq cr6,0x820a57d8
	if (ctx.cr6.eq) goto loc_820A57D8;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a57d8
	if (!ctx.cr6.eq) goto loc_820A57D8;
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27936
	ctx.r11.s64 = ctx.r11.s64 + -27936;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a54c8
	if (ctx.cr6.eq) goto loc_820A54C8;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a54c8
	if (ctx.cr6.eq) goto loc_820A54C8;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A54C8:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27928
	ctx.r11.s64 = ctx.r11.s64 + -27928;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a54f0
	if (ctx.cr6.eq) goto loc_820A54F0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a54f0
	if (ctx.cr6.eq) goto loc_820A54F0;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A54F0:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27920
	ctx.r11.s64 = ctx.r11.s64 + -27920;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a5518
	if (ctx.cr6.eq) goto loc_820A5518;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a5518
	if (ctx.cr6.eq) goto loc_820A5518;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820A5518:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r11,r11,-27912
	ctx.r11.s64 = ctx.r11.s64 + -27912;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a57d8
	if (ctx.cr6.eq) goto loc_820A57D8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820a57d8
	if (ctx.cr6.eq) goto loc_820A57D8;
	// stfs f31,220(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x820a57d8
	goto loc_820A57D8;
loc_820A5544:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// addi r11,r20,184
	ctx.r11.s64 = ctx.r20.s64 + 184;
loc_820A554C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820a5600
	if (!ctx.cr6.eq) goto loc_820A5600;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x820a554c
	if (ctx.cr6.lt) goto loc_820A554C;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_820A556C:
	// lwz r10,184(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 184);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r20,-24
	ctx.r11.s64 = ctx.r20.s64 + -24;
	// stw r10,188(r20)
	PPC_STORE_U32(ctx.r20.u32 + 188, ctx.r10.u32);
	// lwz r10,-5000(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -5000);
	// stw r10,184(r20)
	PPC_STORE_U32(ctx.r20.u32 + 184, ctx.r10.u32);
	// lwz r11,-8848(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a5594
	if (ctx.cr6.eq) goto loc_820A5594;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_820A5594:
	// lwz r11,-8976(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a56c4
	if (ctx.cr6.eq) goto loc_820A56C4;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a56c4
	if (!ctx.cr6.eq) goto loc_820A56C4;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r10,r20,1
	ctx.r10.s64 = ctx.r20.s64 + 65536;
	// ori r8,r11,37428
	ctx.r8.u64 = ctx.r11.u64 | 37428;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r10,r10,-27932
	ctx.r10.s64 = ctx.r10.s64 + -27932;
	// add r11,r23,r8
	ctx.r11.u64 = ctx.r23.u64 + ctx.r8.u64;
	// ori r7,r7,37444
	ctx.r7.u64 = ctx.r7.u64 | 37444;
	// lfs f12,-31136(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31136);
	ctx.f12.f64 = double(temp.f32);
loc_820A55D8:
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x820a562c
	if (ctx.cr6.eq) goto loc_820A562C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5608
	if (ctx.cr6.eq) goto loc_820A5608;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820a560c
	goto loc_820A560C;
loc_820A5600:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// b 0x820a556c
	goto loc_820A556C;
loc_820A5608:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
loc_820A560C:
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5624
	if (ctx.cr6.eq) goto loc_820A5624;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x820a565c
	goto loc_820A565C;
loc_820A5624:
	// fmr f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f24.f64;
	// b 0x820a565c
	goto loc_820A565C;
loc_820A562C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a563c
	if (ctx.cr6.eq) goto loc_820A563C;
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x820a5640
	goto loc_820A5640;
loc_820A563C:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_820A5640:
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5658
	if (ctx.cr6.eq) goto loc_820A5658;
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x820a565c
	goto loc_820A565C;
loc_820A5658:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_820A565C:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x820a566c
	if (!ctx.cr6.lt) goto loc_820A566C;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x820a5678
	goto loc_820A5678;
loc_820A566C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820a5678
	if (!ctx.cr6.gt) goto loc_820A5678;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820A5678:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a5698
	if (ctx.cr6.eq) goto loc_820A5698;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x820a5698
	if (ctx.cr6.eq) goto loc_820A5698;
	// stfs f0,220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_820A5698:
	// fcmpu cr6,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x820a56a8
	if (!ctx.cr6.lt) goto loc_820A56A8;
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
	// b 0x820a56b4
	goto loc_820A56B4;
loc_820A56A8:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x820a56b4
	if (!ctx.cr6.gt) goto loc_820A56B4;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_820A56B4:
	// stfsu f13,4(r11)
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820a55d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A55D8;
	// b 0x820a57d8
	goto loc_820A57D8;
loc_820A56C4:
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// addis r10,r20,1
	ctx.r10.s64 = ctx.r20.s64 + 65536;
	// ori r8,r11,37428
	ctx.r8.u64 = ctx.r11.u64 | 37428;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f12,-31136(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31136);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-28028
	ctx.r10.s64 = ctx.r10.s64 + -28028;
	// add r11,r23,r8
	ctx.r11.u64 = ctx.r23.u64 + ctx.r8.u64;
	// ori r7,r4,37444
	ctx.r7.u64 = ctx.r4.u64 | 37444;
	// lfs f11,9064(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9064);
	ctx.f11.f64 = double(temp.f32);
loc_820A56F8:
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x820a5744
	if (ctx.cr6.eq) goto loc_820A5744;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5720
	if (ctx.cr6.eq) goto loc_820A5720;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820a5724
	goto loc_820A5724;
loc_820A5720:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
loc_820A5724:
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a573c
	if (ctx.cr6.eq) goto loc_820A573C;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x820a5774
	goto loc_820A5774;
loc_820A573C:
	// fmr f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f24.f64;
	// b 0x820a5774
	goto loc_820A5774;
loc_820A5744:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5754
	if (ctx.cr6.eq) goto loc_820A5754;
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x820a5758
	goto loc_820A5758;
loc_820A5754:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_820A5758:
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a5770
	if (ctx.cr6.eq) goto loc_820A5770;
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x820a5774
	goto loc_820A5774;
loc_820A5770:
	// fsubs f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
loc_820A5774:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x820a5784
	if (!ctx.cr6.lt) goto loc_820A5784;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x820a5790
	goto loc_820A5790;
loc_820A5784:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820a5790
	if (!ctx.cr6.gt) goto loc_820A5790;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820A5790:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a57b0
	if (ctx.cr6.eq) goto loc_820A57B0;
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x820a57b0
	if (ctx.cr6.eq) goto loc_820A57B0;
	// stfs f0,220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_820A57B0:
	// fcmpu cr6,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x820a57c0
	if (!ctx.cr6.lt) goto loc_820A57C0;
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
	// b 0x820a57cc
	goto loc_820A57CC;
loc_820A57C0:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x820a57cc
	if (!ctx.cr6.gt) goto loc_820A57CC;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_820A57CC:
	// stfsu f13,4(r11)
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820a56f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A56F8;
loc_820A57D8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x820A57E8;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820A57F4;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820A5800;
	sub_821ADC30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x820A580C;
	sub_821ADC58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x820A5818;
	sub_821ADCA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820A5824;
	sub_821ADCD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x820A5830;
	sub_821ADD70(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x820A583C;
	sub_821ADE68(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821a2b58
	ctx.lr = 0x820A5848;
	sub_821A2B58(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad600
	ctx.lr = 0x820A5858;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad498
	ctx.lr = 0x820A5864;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x820A5870;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x820A587C;
	sub_821AD2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad528
	ctx.lr = 0x820A5888;
	sub_821AD528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x820A5894;
	sub_821AD288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A58A0;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821a2b00
	ctx.lr = 0x820A58AC;
	sub_821A2B00(ctx, base);
	// lwz r3,-19048(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -19048);
	// addi r30,r20,-24
	ctx.r30.s64 = ctx.r20.s64 + -24;
	// bl 0x821a2a18
	ctx.lr = 0x820A58B8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a5914
	if (!ctx.cr6.eq) goto loc_820A5914;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a27b0
	ctx.lr = 0x820A58D0;
	sub_820A27B0(ctx, base);
	// lis r20,-32178
	ctx.r20.s64 = -2108817408;
	// lwz r3,-7460(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820A58DC;
	sub_821AF640(ctx, base);
	// lwz r11,-7460(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7460);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af5e0
	ctx.lr = 0x820A58F0;
	sub_821AF5E0(ctx, base);
	// lwz r3,-19048(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -19048);
	// bl 0x821a25b8
	ctx.lr = 0x820A58F8;
	sub_821A25B8(ctx, base);
	// stw r18,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r18.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a3208
	ctx.lr = 0x820A5908;
	sub_820A3208(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,-7460(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820A5914;
	sub_821AF5E0(ctx, base);
loc_820A5914:
	// lwz r11,-8976(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5948
	if (ctx.cr6.eq) goto loc_820A5948;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a5948
	if (!ctx.cr6.eq) goto loc_820A5948;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820A5938;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a3b90
	ctx.lr = 0x820A5944;
	sub_820A3B90(ctx, base);
	// b 0x820a5960
	goto loc_820A5960;
loc_820A5948:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820A5954;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a3a20
	ctx.lr = 0x820A5960;
	sub_820A3A20(ctx, base);
loc_820A5960:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821a2b00
	ctx.lr = 0x820A596C;
	sub_821A2B00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820A5978;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820A5984;
	sub_821AD498(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820A5990;
	sub_821AD288(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820A599C;
	sub_821AD1F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820A59A8;
	sub_821AD240(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820A59B4;
	sub_821AD2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820A59C0;
	sub_821AD528(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A59CC;
	sub_821AD6F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a32f0
	ctx.lr = 0x820A59D4;
	sub_820A32F0(ctx, base);
loc_820A59D4:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82249964
	ctx.lr = 0x820A59E0;
	sub_82249964(ctx, base);
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_820A59E4"))) PPC_WEAK_FUNC(sub_820A59E4);
PPC_FUNC_IMPL(__imp__sub_820A59E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A59E8"))) PPC_WEAK_FUNC(sub_820A59E8);
PPC_FUNC_IMPL(__imp__sub_820A59E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820A59F0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820A5A04;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a5b88
	if (!ctx.cr6.eq) goto loc_820A5B88;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a5b88
	if (ctx.cr6.eq) goto loc_820A5B88;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x820A5A2C;
	sub_821ADDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820A5A38;
	sub_821ADD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820A5A44;
	sub_821ADC30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x820A5A50;
	sub_821ADC58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x820A5A5C;
	sub_821ADCA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820A5A68;
	sub_821ADCD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x820A5A74;
	sub_821ADD70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x820A5A80;
	sub_821ADE68(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad600
	ctx.lr = 0x820A5A90;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad498
	ctx.lr = 0x820A5A9C;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820A5AA8;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x820A5AB4;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x820A5AC0;
	sub_821AD2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad528
	ctx.lr = 0x820A5ACC;
	sub_821AD528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6f8
	ctx.lr = 0x820A5AD8;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820A5AE4;
	sub_821AD288(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// bl 0x820a4b98
	ctx.lr = 0x820A5AF0;
	sub_820A4B98(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-8976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a5b1c
	if (ctx.cr6.eq) goto loc_820A5B1C;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a5b1c
	if (!ctx.cr6.eq) goto loc_820A5B1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// bl 0x820a3b90
	ctx.lr = 0x820A5B18;
	sub_820A3B90(ctx, base);
	// b 0x820a5b28
	goto loc_820A5B28;
loc_820A5B1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// bl 0x820a3a20
	ctx.lr = 0x820A5B28;
	sub_820A3A20(ctx, base);
loc_820A5B28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820A5B34;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820A5B40;
	sub_821AD498(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820A5B4C;
	sub_821AD288(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820A5B58;
	sub_821AD1F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820A5B64;
	sub_821AD240(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820A5B70;
	sub_821AD2D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820A5B7C;
	sub_821AD528(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x820A5B88;
	sub_821AD6F8(ctx, base);
loc_820A5B88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820A5B90"))) PPC_WEAK_FUNC(sub_820A5B90);
PPC_FUNC_IMPL(__imp__sub_820A5B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A5B98;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820f0320
	ctx.lr = 0x820A5BA4;
	sub_820F0320(ctx, base);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82185740
	ctx.lr = 0x820A5BB4;
	sub_82185740(ctx, base);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x821859a0
	ctx.lr = 0x820A5BC8;
	sub_821859A0(ctx, base);
	// addi r29,r31,1248
	ctx.r29.s64 = ctx.r31.s64 + 1248;
	// lis r4,21065
	ctx.r4.s64 = 1380515840;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20039
	ctx.r4.u64 = ctx.r4.u64 | 20039;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82188378
	ctx.lr = 0x820A5BE0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// addi r6,r11,10244
	ctx.r6.s64 = ctx.r11.s64 + 10244;
	// addi r5,r10,10236
	ctx.r5.s64 = ctx.r10.s64 + 10236;
	// addi r4,r9,10228
	ctx.r4.s64 = ctx.r9.s64 + 10228;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r8,10196
	ctx.r3.s64 = ctx.r8.s64 + 10196;
	// stw r5,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r5.u32);
	// stw r4,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// lwz r11,-8856(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8856);
	// stw r30,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r30.u32);
	// lwz r11,-8856(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8856);
	// stw r30,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r30.u32);
	// bl 0x82184800
	ctx.lr = 0x820A5C3C;
	sub_82184800(ctx, base);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,-444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820A5C4C;
	sub_82161148(ctx, base);
	// stw r3,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r3.u32);
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,-444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820A5C5C;
	sub_82161148(ctx, base);
	// stw r3,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r3.u32);
	// stw r30,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r30.u32);
	// stw r30,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x820A5C6C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a5c84
	if (ctx.cr6.eq) goto loc_820A5C84;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x820A5C80;
	sub_82183448(ctx, base);
	// b 0x820a5c8c
	goto loc_820A5C8C;
loc_820A5C84:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820A5C8C;
	sub_821845A0(ctx, base);
loc_820A5C8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5c9c
	if (ctx.cr6.eq) goto loc_820A5C9C;
	// bl 0x820a2ca0
	ctx.lr = 0x820A5C98;
	sub_820A2CA0(ctx, base);
	// b 0x820a5ca0
	goto loc_820A5CA0;
loc_820A5C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820A5CA0:
	// stw r3,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a3e40
	ctx.lr = 0x820A5CAC;
	sub_820A3E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A5CB8"))) PPC_WEAK_FUNC(sub_820A5CB8);
PPC_FUNC_IMPL(__imp__sub_820A5CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1232
	ctx.r3.s64 = ctx.r3.s64 + -1232;
	// b 0x820a5ff8
	sub_820A5FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5CC0"))) PPC_WEAK_FUNC(sub_820A5CC0);
PPC_FUNC_IMPL(__imp__sub_820A5CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x820a5ff8
	sub_820A5FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5CC8"))) PPC_WEAK_FUNC(sub_820A5CC8);
PPC_FUNC_IMPL(__imp__sub_820A5CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1248
	ctx.r3.s64 = ctx.r3.s64 + -1248;
	// b 0x820a5ff8
	sub_820A5FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5CD0"))) PPC_WEAK_FUNC(sub_820A5CD0);
PPC_FUNC_IMPL(__imp__sub_820A5CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A5CD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,1304(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,10244
	ctx.r7.s64 = ctx.r11.s64 + 10244;
	// addi r6,r10,10236
	ctx.r6.s64 = ctx.r10.s64 + 10236;
	// addi r5,r9,10228
	ctx.r5.s64 = ctx.r9.s64 + 10228;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,10196
	ctx.r4.s64 = ctx.r8.s64 + 10196;
	// stw r6,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,1232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1232, ctx.r5.u32);
	// addi r30,r3,1216
	ctx.r30.s64 = ctx.r3.s64 + 1216;
	// stw r4,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r4.u32);
	// addi r29,r3,1232
	ctx.r29.s64 = ctx.r3.s64 + 1232;
	// addi r28,r3,1248
	ctx.r28.s64 = ctx.r3.s64 + 1248;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a5d3c
	if (ctx.cr6.eq) goto loc_820A5D3C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a2910
	ctx.lr = 0x820A5D30;
	sub_820A2910(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820A5D3C;
	sub_82183E40(ctx, base);
loc_820A5D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820A5D4C;
	sub_821883B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x820A5D54;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820A5D5C;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef340
	ctx.lr = 0x820A5D64;
	sub_820EF340(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A5D6C"))) PPC_WEAK_FUNC(sub_820A5D6C);
PPC_FUNC_IMPL(__imp__sub_820A5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5D70"))) PPC_WEAK_FUNC(sub_820A5D70);
PPC_FUNC_IMPL(__imp__sub_820A5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820a5da0
	if (ctx.cr6.lt) goto loc_820A5DA0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lfs f0,-31828(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8796(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8796, temp.u32);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
loc_820A5DA0:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820a2db8
	sub_820A2DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A5DB0"))) PPC_WEAK_FUNC(sub_820A5DB0);
PPC_FUNC_IMPL(__imp__sub_820A5DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5DB4"))) PPC_WEAK_FUNC(sub_820A5DB4);
PPC_FUNC_IMPL(__imp__sub_820A5DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5DB8"))) PPC_WEAK_FUNC(sub_820A5DB8);
PPC_FUNC_IMPL(__imp__sub_820A5DB8) {
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
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820A5DD8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a5df4
	if (!ctx.cr6.eq) goto loc_820A5DF4;
	// addi r31,r31,-1232
	ctx.r31.s64 = ctx.r31.s64 + -1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a3f60
	ctx.lr = 0x820A5DEC;
	sub_820A3F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a40d8
	ctx.lr = 0x820A5DF4;
	sub_820A40D8(ctx, base);
loc_820A5DF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5E08"))) PPC_WEAK_FUNC(sub_820A5E08);
PPC_FUNC_IMPL(__imp__sub_820A5E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820a5e60
	if (ctx.cr6.eq) goto loc_820A5E60;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x820a5e60
	if (ctx.cr6.eq) goto loc_820A5E60;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x820a5e50
	if (ctx.cr6.eq) goto loc_820A5E50;
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// beq cr6,0x820a5e50
	if (ctx.cr6.eq) goto loc_820A5E50;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x820a5e40
	if (ctx.cr6.eq) goto loc_820A5E40;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820a5e70
	if (!ctx.cr6.eq) goto loc_820A5E70;
loc_820A5E40:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x820a5e70
	goto loc_820A5E70;
loc_820A5E50:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x820a5e70
	goto loc_820A5E70;
loc_820A5E60:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_820A5E70:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f0,3316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,2132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f7,f0,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820a5ec0
	if (!ctx.cr6.gt) goto loc_820A5EC0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820a5ecc
	goto loc_820A5ECC;
loc_820A5EC0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820a5ed0
	if (!ctx.cr6.lt) goto loc_820A5ED0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820A5ECC:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_820A5ED0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820a5ee8
	if (!ctx.cr6.gt) goto loc_820A5EE8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_820A5EE8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5EFC"))) PPC_WEAK_FUNC(sub_820A5EFC);
PPC_FUNC_IMPL(__imp__sub_820A5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5F00"))) PPC_WEAK_FUNC(sub_820A5F00);
PPC_FUNC_IMPL(__imp__sub_820A5F00) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f12,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lfs f0,-31836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31836);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f10,f11,f13,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fdivs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x820a5f54
	if (!ctx.cr6.lt) goto loc_820A5F54;
	// li r5,1
	ctx.r5.s64 = 1;
loc_820A5F54:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820a5f68
	if (ctx.cr6.lt) goto loc_820A5F68;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
loc_820A5F68:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fmuls f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,-8836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8836);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f6,f8,f11,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f12.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820a5e08
	ctx.lr = 0x820A5FBC;
	sub_820A5E08(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// stfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,-8852(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8852);
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820c04f0
	ctx.lr = 0x820A5FE4;
	sub_820C04F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A5FF4"))) PPC_WEAK_FUNC(sub_820A5FF4);
PPC_FUNC_IMPL(__imp__sub_820A5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A5FF8"))) PPC_WEAK_FUNC(sub_820A5FF8);
PPC_FUNC_IMPL(__imp__sub_820A5FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820a5cd0
	ctx.lr = 0x820A6018;
	sub_820A5CD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6034
	if (ctx.cr6.eq) goto loc_820A6034;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A6030;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A6034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A604C"))) PPC_WEAK_FUNC(sub_820A604C);
PPC_FUNC_IMPL(__imp__sub_820A604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6050"))) PPC_WEAK_FUNC(sub_820A6050);
PPC_FUNC_IMPL(__imp__sub_820A6050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,876
	ctx.r3.s64 = ctx.r3.s64 + 876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A6058"))) PPC_WEAK_FUNC(sub_820A6058);
PPC_FUNC_IMPL(__imp__sub_820A6058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A6060;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82188378
	ctx.lr = 0x820A6084;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r10,r11,10264
	ctx.r10.s64 = ctx.r11.s64 + 10264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,420
	ctx.r5.s64 = 420;
	// bl 0x82248a40
	ctx.lr = 0x820A60A8;
	sub_82248A40(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x820A60B8;
	sub_82248A40(ctx, base);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x820A60C8;
	sub_82248A40(ctx, base);
	// lbz r9,858(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 858);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A60DC"))) PPC_WEAK_FUNC(sub_820A60DC);
PPC_FUNC_IMPL(__imp__sub_820A60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A60E0"))) PPC_WEAK_FUNC(sub_820A60E0);
PPC_FUNC_IMPL(__imp__sub_820A60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A60E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6164
	if (ctx.cr6.eq) goto loc_820A6164;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r29,1284(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,1088(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1088);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230668
	ctx.lr = 0x820A6114;
	sub_82230668(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230678
	ctx.lr = 0x820A6124;
	sub_82230678(ctx, base);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x820A613C;
	sub_82248A40(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x820A614C;
	sub_82248A40(ctx, base);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x820A615C;
	sub_82248A40(ctx, base);
	// lbz r9,858(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 858);
	// stw r9,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r9.u32);
loc_820A6164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A616C"))) PPC_WEAK_FUNC(sub_820A616C);
PPC_FUNC_IMPL(__imp__sub_820A616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6170"))) PPC_WEAK_FUNC(sub_820A6170);
PPC_FUNC_IMPL(__imp__sub_820A6170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16716
	ctx.r4.u64 = ctx.r4.u64 | 16716;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820A619C;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82185740
	ctx.lr = 0x820A61AC;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r11,10304
	ctx.r9.s64 = ctx.r11.s64 + 10304;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r8,r10,10296
	ctx.r8.s64 = ctx.r10.s64 + 10296;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A61E8"))) PPC_WEAK_FUNC(sub_820A61E8);
PPC_FUNC_IMPL(__imp__sub_820A61E8) {
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
	// bl 0x8215bd60
	ctx.lr = 0x820A6200;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a6248
	if (!ctx.cr6.eq) goto loc_820A6248;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a622c
	if (!ctx.cr6.eq) goto loc_820A622C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a6270
	if (!ctx.cr6.eq) goto loc_820A6270;
loc_820A622C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,1224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a6270
	if (ctx.cr6.eq) goto loc_820A6270;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6270
	if (ctx.cr6.eq) goto loc_820A6270;
loc_820A6248:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,1424
	ctx.r10.s64 = ctx.r11.s64 + 1424;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// ld r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r8,1424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1424, ctx.r8.u64);
	// ld r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r7,1432(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1432, ctx.r7.u64);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82097210
	ctx.lr = 0x820A6270;
	sub_82097210(ctx, base);
loc_820A6270:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A6284"))) PPC_WEAK_FUNC(sub_820A6284);
PPC_FUNC_IMPL(__imp__sub_820A6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6288"))) PPC_WEAK_FUNC(sub_820A6288);
PPC_FUNC_IMPL(__imp__sub_820A6288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A629C"))) PPC_WEAK_FUNC(sub_820A629C);
PPC_FUNC_IMPL(__imp__sub_820A629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A62A0"))) PPC_WEAK_FUNC(sub_820A62A0);
PPC_FUNC_IMPL(__imp__sub_820A62A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820a62b8
	if (ctx.cr6.gt) goto loc_820A62B8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_820A62B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820a62d0
	if (ctx.cr6.gt) goto loc_820A62D0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_820A62D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A62EC"))) PPC_WEAK_FUNC(sub_820A62EC);
PPC_FUNC_IMPL(__imp__sub_820A62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A62F0"))) PPC_WEAK_FUNC(sub_820A62F0);
PPC_FUNC_IMPL(__imp__sub_820A62F0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-8540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r11,1560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge cr6,0x820a6330
	if (!ctx.cr6.lt) goto loc_820A6330;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a633c
	goto loc_820A633C;
loc_820A6330:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820a633c
	if (!ctx.cr6.gt) goto loc_820A633C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820A633C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x820c0730
	ctx.lr = 0x820A6344;
	sub_820C0730(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_820A6390"))) PPC_WEAK_FUNC(sub_820A6390);
PPC_FUNC_IMPL(__imp__sub_820A6390) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,-8540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r11,1560(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,1624(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1624);
	// bge cr6,0x820a63c8
	if (!ctx.cr6.lt) goto loc_820A63C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820a63dc
	goto loc_820A63DC;
loc_820A63C8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820a63dc
	if (ctx.cr6.gt) goto loc_820A63DC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820A63DC:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8215bec8
	ctx.lr = 0x820A63F0;
	sub_8215BEC8(ctx, base);
	// lbz r11,610(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 610);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820a64b0
	if (ctx.cr6.gt) goto loc_820A64B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820a6434
	// bdzf 4*cr6+eq,0x820a6454
	// bdzf 4*cr6+eq,0x820a6474
	// bne cr6,0x820a6494
	if (!ctx.cr6.eq) goto loc_820A6494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820a64b0
	goto loc_820A64B0;
loc_820A6434:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820a64b0
	goto loc_820A64B0;
loc_820A6454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820a64b0
	goto loc_820A64B0;
loc_820A6474:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820a64b0
	goto loc_820A64B0;
loc_820A6494:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820A64B0:
	// bl 0x8218fba8
	ctx.lr = 0x820A64B4;
	sub_8218FBA8(ctx, base);
	// lis r11,-11849
	ctx.r11.s64 = -776536064;
	// ori r10,r11,5977
	ctx.r10.u64 = ctx.r11.u64 | 5977;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// mulli r7,r8,10000
	ctx.r7.s64 = ctx.r8.s64 * 10000;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820a6554
	if (!ctx.cr6.lt) goto loc_820A6554;
	// bl 0x8218fba8
	ctx.lr = 0x820A64D8;
	sub_8218FBA8(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulhwu r8,r3,r10
	ctx.r8.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820a6510
	if (!ctx.cr6.lt) goto loc_820A6510;
	// li r3,100
	ctx.r3.s64 = 100;
	// b 0x820a655c
	goto loc_820A655C;
loc_820A6510:
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// addi r5,r7,29344
	ctx.r5.s64 = ctx.r7.s64 + 29344;
	// addi r4,r6,-7560
	ctx.r4.s64 = ctx.r6.s64 + -7560;
	// lbz r11,24332(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24332);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,24332(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24332, ctx.r3.u8);
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// b 0x820a655c
	goto loc_820A655C;
loc_820A6554:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34464
	ctx.r3.u64 = ctx.r3.u64 | 34464;
loc_820A655C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A6574"))) PPC_WEAK_FUNC(sub_820A6574);
PPC_FUNC_IMPL(__imp__sub_820A6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6578"))) PPC_WEAK_FUNC(sub_820A6578);
PPC_FUNC_IMPL(__imp__sub_820A6578) {
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
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a66b4
	if (ctx.cr6.eq) goto loc_820A66B4;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x820a66b4
	if (ctx.cr6.gt) goto loc_820A66B4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26064
	ctx.r12.s64 = ctx.r12.s64 + 26064;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,26104(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26104);
	// lwz r16,26132(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26132);
	// lwz r16,26160(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26160);
	// lwz r16,26168(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26168);
	// lwz r16,26180(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26180);
	// lwz r16,26192(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26192);
	// lwz r16,26204(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26204);
	// lwz r16,26216(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26216);
	// lwz r16,26228(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26228);
	// lwz r16,26240(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26240);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820a66a8
	if (ctx.cr6.eq) goto loc_820A66A8;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820a66a8
	if (ctx.cr6.eq) goto loc_820A66A8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x820a66a8
	if (ctx.cr6.eq) goto loc_820A66A8;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x820a66a8
	if (ctx.cr6.eq) goto loc_820A66A8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x820a66a8
	if (ctx.cr6.eq) goto loc_820A66A8;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// b 0x820a66a8
	goto loc_820A66A8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x820a66b4
	if (ctx.cr6.lt) goto loc_820A66B4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a66b4
	if (!ctx.cr6.eq) goto loc_820A66B4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8608);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// blt cr6,0x820a66b4
	if (ctx.cr6.lt) goto loc_820A66B4;
loc_820A66A8:
	// bl 0x821280e0
	ctx.lr = 0x820A66AC;
	sub_821280E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
loc_820A66B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A66C8"))) PPC_WEAK_FUNC(sub_820A66C8);
PPC_FUNC_IMPL(__imp__sub_820A66C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A66D0;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r11,-7560
	ctx.r30.s64 = ctx.r11.s64 + -7560;
	// lwz r29,1936(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lfs f31,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8208dc50
	ctx.lr = 0x820A66F8;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a67d4
	if (ctx.cr6.eq) goto loc_820A67D4;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820c3328
	ctx.lr = 0x820A670C;
	sub_820C3328(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a6728
	if (ctx.cr6.eq) goto loc_820A6728;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6728
	if (!ctx.cr6.eq) goto loc_820A6728;
	// lfs f31,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820a6814
	goto loc_820A6814;
loc_820A6728:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208dcb8
	ctx.lr = 0x820A6730;
	sub_8208DCB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820a6750
	if (ctx.cr6.eq) goto loc_820A6750;
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x820a6798
	goto loc_820A6798;
loc_820A6750:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208dcf0
	ctx.lr = 0x820A6758;
	sub_8208DCF0(ctx, base);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6770
	if (ctx.cr6.eq) goto loc_820A6770;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x820a6798
	goto loc_820A6798;
loc_820A6770:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820c3350
	ctx.lr = 0x820A6784;
	sub_820C3350(ctx, base);
	// fadds f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x820a6578
	ctx.lr = 0x820A6798;
	sub_820A6578(ctx, base);
loc_820A6798:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820a67b4
	if (ctx.cr6.eq) goto loc_820A67B4;
	// lwz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a6814
	if (!ctx.cr6.eq) goto loc_820A6814;
loc_820A67B4:
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x820c3350
	ctx.lr = 0x820A67BC;
	sub_820C3350(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x820a6578
	ctx.lr = 0x820A67D0;
	sub_820A6578(ctx, base);
	// b 0x820a6814
	goto loc_820A6814;
loc_820A67D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820A67E0;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a67f8
	if (ctx.cr6.eq) goto loc_820A67F8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e820
	ctx.lr = 0x820A67F0;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6808
	if (ctx.cr6.eq) goto loc_820A6808;
loc_820A67F8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208de18
	ctx.lr = 0x820A6800;
	sub_8208DE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6814
	if (ctx.cr6.eq) goto loc_820A6814;
loc_820A6808:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820A6814:
	// stfs f31,876(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 876, temp.u32);
	// stfs f31,880(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 880, temp.u32);
	// stfs f31,1052(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1052, temp.u32);
	// stfs f31,1056(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1056, temp.u32);
	// stfs f31,1228(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1228, temp.u32);
	// stfs f31,1232(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1232, temp.u32);
	// stfs f31,1404(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1404, temp.u32);
	// stfs f31,1408(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1408, temp.u32);
	// stfs f31,1580(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1580, temp.u32);
	// stfs f31,1584(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1584, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A684C"))) PPC_WEAK_FUNC(sub_820A684C);
PPC_FUNC_IMPL(__imp__sub_820A684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A6850"))) PPC_WEAK_FUNC(sub_820A6850);
PPC_FUNC_IMPL(__imp__sub_820A6850) {
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
	// bl 0x8215bec8
	ctx.lr = 0x820A686C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,1920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// bl 0x820c57e8
	ctx.lr = 0x820A6884;
	sub_820C57E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208dc50
	ctx.lr = 0x820A6894;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208de68
	ctx.lr = 0x820A68A4;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208ddc0
	ctx.lr = 0x820A68B4;
	sub_8208DDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e058
	ctx.lr = 0x820A68C4;
	sub_8208E058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e078
	ctx.lr = 0x820A68D4;
	sub_8208E078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,573(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 573);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a6950
	if (!ctx.cr6.eq) goto loc_820A6950;
	// lfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8208e5b8
	ctx.lr = 0x820A68F4;
	sub_8208E5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6908
	if (ctx.cr6.eq) goto loc_820A6908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_820A6908:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f31,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820a6948
	if (ctx.cr6.lt) goto loc_820A6948;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a694c
	if (!ctx.cr6.gt) goto loc_820A694C;
loc_820A6948:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820A694C:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_820A6950:
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

__attribute__((alias("__imp__sub_820A6968"))) PPC_WEAK_FUNC(sub_820A6968);
PPC_FUNC_IMPL(__imp__sub_820A6968) {
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
	// lhz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,22(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f11,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfs f12,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x820a6a04
	if (!ctx.cr6.gt) goto loc_820A6A04;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820a69d4
	if (!ctx.cr6.eq) goto loc_820A69D4;
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// b 0x820a6a04
	goto loc_820A6A04;
loc_820A69D4:
	// lfs f13,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820a69f0
	if (!ctx.cr6.lt) goto loc_820A69F0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820a6a00
	goto loc_820A6A00;
loc_820A69F0:
	// lfs f13,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a6a00
	if (!ctx.cr6.gt) goto loc_820A6A00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A6A00:
	// stfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
loc_820A6A04:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x820a6a54
	if (!ctx.cr6.gt) goto loc_820A6A54;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820a6a24
	if (!ctx.cr6.eq) goto loc_820A6A24;
	// stfs f11,288(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// b 0x820a6a54
	goto loc_820A6A54;
loc_820A6A24:
	// lfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820a6a40
	if (!ctx.cr6.lt) goto loc_820A6A40;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820a6a50
	goto loc_820A6A50;
loc_820A6A40:
	// lfs f13,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a6a50
	if (!ctx.cr6.gt) goto loc_820A6A50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A6A50:
	// stfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
loc_820A6A54:
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r3,r3,704
	ctx.r3.s64 = ctx.r3.s64 + 704;
	// bl 0x821847a8
	ctx.lr = 0x820A6A60;
	sub_821847A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A6A70"))) PPC_WEAK_FUNC(sub_820A6A70);
PPC_FUNC_IMPL(__imp__sub_820A6A70) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// lfs f13,8616(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8616);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,1620(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1620);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820a6ae0
	if (ctx.cr6.lt) goto loc_820A6AE0;
	// li r3,20
	ctx.r3.s64 = 20;
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
loc_820A6AE0:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820a6b18
	if (ctx.cr6.lt) goto loc_820A6B18;
	// li r3,10
	ctx.r3.s64 = 10;
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
loc_820A6B18:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820a6b74
	if (ctx.cr6.lt) goto loc_820A6B74;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820c3328
	ctx.lr = 0x820A6B44;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6b70
	if (ctx.cr6.eq) goto loc_820A6B70;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a6578
	ctx.lr = 0x820A6B58;
	sub_820A6578(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_820A6B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A6B74:
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

__attribute__((alias("__imp__sub_820A6B88"))) PPC_WEAK_FUNC(sub_820A6B88);
PPC_FUNC_IMPL(__imp__sub_820A6B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A6B90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r30,r5,16
	ctx.r30.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f13,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820a6be8
	if (ctx.cr6.lt) goto loc_820A6BE8;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x820a6c4c
	goto loc_820A6C4C;
loc_820A6BE8:
	// lfs f12,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820a6c10
	if (ctx.cr6.lt) goto loc_820A6C10;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x820a6c4c
	goto loc_820A6C4C;
loc_820A6C10:
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a6c4c
	if (ctx.cr6.lt) goto loc_820A6C4C;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x820c3328
	ctx.lr = 0x820A6C40;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6c4c
	if (ctx.cr6.eq) goto loc_820A6C4C;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_820A6C4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x820A6C54;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6c68
	if (ctx.cr6.eq) goto loc_820A6C68;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820A6C68:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e0b0
	ctx.lr = 0x820A6C70;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a6ca8
	if (!ctx.cr6.eq) goto loc_820A6CA8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a6ca8
	if (!ctx.cr6.eq) goto loc_820A6CA8;
	// bl 0x8208e6c0
	ctx.lr = 0x820A6C8C;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6cb4
	if (ctx.cr6.eq) goto loc_820A6CB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820a6cb4
	if (!ctx.cr6.eq) goto loc_820A6CB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820A6CA8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820A6CB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A6CC0"))) PPC_WEAK_FUNC(sub_820A6CC0);
PPC_FUNC_IMPL(__imp__sub_820A6CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A6CC8;
	sub_82248788(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249908
	ctx.lr = 0x820A6CD0;
	sub_82249908(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,1908(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f28.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f26,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f26.f64 = double(temp.f32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// lfs f23,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f23.f64 = double(temp.f32);
	// lfs f21,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f21.f64 = double(temp.f32);
	// lfs f27,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f22.f64 = double(temp.f32);
	// lfs f20,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f20.f64 = double(temp.f32);
	// bl 0x8208dbb0
	ctx.lr = 0x820A6D1C;
	sub_8208DBB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820a6d90
	if (ctx.cr6.eq) goto loc_820A6D90;
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820a6d40
	if (ctx.cr6.gt) goto loc_820A6D40;
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
loc_820A6D40:
	// lfs f0,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820a6d54
	if (ctx.cr6.gt) goto loc_820A6D54;
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
loc_820A6D54:
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820a6d68
	if (ctx.cr6.gt) goto loc_820A6D68;
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
loc_820A6D68:
	// lfs f10,384(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bgt cr6,0x820a6d7c
	if (ctx.cr6.gt) goto loc_820A6D7C;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820A6D7C:
	// fadds f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f29,f10,f30
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// b 0x820a6dfc
	goto loc_820A6DFC;
loc_820A6D90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dcb8
	ctx.lr = 0x820A6D98;
	sub_8208DCB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6dc0
	if (ctx.cr6.eq) goto loc_820A6DC0;
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820a6db4
	if (ctx.cr6.gt) goto loc_820A6DB4;
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
loc_820A6DB4:
	// lfs f12,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820a6dec
	goto loc_820A6DEC;
loc_820A6DC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dcf0
	ctx.lr = 0x820A6DC8;
	sub_8208DCF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a6dfc
	if (ctx.cr6.eq) goto loc_820A6DFC;
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820a6de4
	if (ctx.cr6.gt) goto loc_820A6DE4;
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
loc_820A6DE4:
	// lfs f12,384(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
loc_820A6DEC:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x820a6df8
	if (ctx.cr6.gt) goto loc_820A6DF8;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820A6DF8:
	// fadds f29,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820A6DFC:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a6e24
	if (ctx.cr6.eq) goto loc_820A6E24;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bgt cr6,0x820a6e1c
	if (ctx.cr6.gt) goto loc_820A6E1C;
	// fmuls f0,f28,f30
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
loc_820A6E1C:
	// fmr f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f0.f64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820A6E24:
	// rlwinm r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a6e48
	if (ctx.cr6.eq) goto loc_820A6E48;
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// fcmpu cr6,f25,f31
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// bgt cr6,0x820a6e40
	if (ctx.cr6.gt) goto loc_820A6E40;
	// fmuls f0,f26,f30
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
loc_820A6E40:
	// fadds f24,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820A6E48:
	// rlwinm r10,r28,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a6e6c
	if (ctx.cr6.eq) goto loc_820A6E6C;
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f23.f64;
	// fcmpu cr6,f22,f31
	ctx.cr6.compare(ctx.f22.f64, ctx.f31.f64);
	// bgt cr6,0x820a6e64
	if (ctx.cr6.gt) goto loc_820A6E64;
	// fmuls f0,f23,f30
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f30.f64));
loc_820A6E64:
	// fadds f24,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820A6E6C:
	// rlwinm r10,r28,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a6e90
	if (ctx.cr6.eq) goto loc_820A6E90;
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f21.f64;
	// fcmpu cr6,f20,f31
	ctx.cr6.compare(ctx.f20.f64, ctx.f31.f64);
	// bgt cr6,0x820a6e88
	if (ctx.cr6.gt) goto loc_820A6E88;
	// fmuls f0,f21,f30
	ctx.f0.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
loc_820A6E88:
	// fadds f24,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820A6E90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a6eb0
	if (!ctx.cr6.gt) goto loc_820A6EB0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f24,f24,f12
	ctx.f24.f64 = double(float(ctx.f24.f64 / ctx.f12.f64));
loc_820A6EB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x820a6ed4
	if (!ctx.cr6.lt) goto loc_820A6ED4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249954
	ctx.lr = 0x820A6ED0;
	sub_82249954(ctx, base);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820A6ED4:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lfs f31,688(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820a6ef0
	if (ctx.cr6.eq) goto loc_820A6EF0;
	// lwz r11,1364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a6f18
	if (!ctx.cr6.eq) goto loc_820A6F18;
loc_820A6EF0:
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c3350
	ctx.lr = 0x820A6EFC;
	sub_820C3350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x820a6578
	ctx.lr = 0x820A6F18;
	sub_820A6578(ctx, base);
loc_820A6F18:
	// lfs f0,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// lfs f0,10380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10380);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f12,f31,f29,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 - ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249954
	ctx.lr = 0x820A6F3C;
	sub_82249954(ctx, base);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A6F40"))) PPC_WEAK_FUNC(sub_820A6F40);
PPC_FUNC_IMPL(__imp__sub_820A6F40) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// lfs f1,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a6fb4
	if (ctx.cr6.eq) goto loc_820A6FB4;
	// lwz r11,1376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a6fb4
	if (!ctx.cr6.gt) goto loc_820A6FB4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,-8540(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x820a6f9c
	if (!ctx.cr0.lt) goto loc_820A6F9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820a6fa8
	goto loc_820A6FA8;
loc_820A6F9C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820a6fa8
	if (!ctx.cr6.gt) goto loc_820A6FA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820A6FA8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x820c0730
	ctx.lr = 0x820A6FB0;
	sub_820C0730(ctx, base);
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
loc_820A6FB4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1372);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a6fd0
	if (!ctx.cr6.eq) goto loc_820A6FD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8332);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820a6fe0
	goto loc_820A6FE0;
loc_820A6FD0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820a6fe4
	if (!ctx.cr6.eq) goto loc_820A6FE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10384);
	ctx.f0.f64 = double(temp.f32);
loc_820A6FE0:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_820A6FE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A6FF8"))) PPC_WEAK_FUNC(sub_820A6FF8);
PPC_FUNC_IMPL(__imp__sub_820A6FF8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x820a7024
	if (!ctx.cr6.eq) goto loc_820A7024;
	// lfs f1,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820a70d4
	goto loc_820A70D4;
loc_820A7024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8208dbb0
	ctx.lr = 0x820A7030;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a7050
	if (ctx.cr6.eq) goto loc_820A7050;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a7050
	if (ctx.cr6.eq) goto loc_820A7050;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820a70d4
	goto loc_820A70D4;
loc_820A7050:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,1650(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1650);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820a708c
	if (ctx.cr6.gt) goto loc_820A708C;
	// lhz r10,1652(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1652);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820a708c
	if (ctx.cr6.gt) goto loc_820A708C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820a70d0
	goto loc_820A70D0;
loc_820A708C:
	// lhz r10,1646(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1646);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820a70b0
	if (ctx.cr6.gt) goto loc_820A70B0;
	// lhz r10,1648(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1648);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820a70b0
	if (ctx.cr6.gt) goto loc_820A70B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,10388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10388);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820a70d0
	goto loc_820A70D0;
loc_820A70B0:
	// lhz r10,1642(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1642);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820a70d0
	if (ctx.cr6.gt) goto loc_820A70D0;
	// lhz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1644);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820a70d0
	if (ctx.cr6.gt) goto loc_820A70D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
loc_820A70D0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_820A70D4:
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

__attribute__((alias("__imp__sub_820A70EC"))) PPC_WEAK_FUNC(sub_820A70EC);
PPC_FUNC_IMPL(__imp__sub_820A70EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A70F0"))) PPC_WEAK_FUNC(sub_820A70F0);
PPC_FUNC_IMPL(__imp__sub_820A70F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820A70F8;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249928
	ctx.lr = 0x820A7100;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lhz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r6,18(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// addi r30,r3,628
	ctx.r30.s64 = ctx.r3.s64 + 628;
	// lhz r27,20(r4)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// addi r7,r3,192
	ctx.r7.s64 = ctx.r3.s64 + 192;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lwz r26,1732(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// stfs f31,660(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// addi r5,r3,96
	ctx.r5.s64 = ctx.r3.s64 + 96;
	// stfs f31,664(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 664, temp.u32);
	// addi r25,r3,240
	ctx.r25.s64 = ctx.r3.s64 + 240;
	// stfs f31,668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// addi r11,r3,288
	ctx.r11.s64 = ctx.r3.s64 + 288;
	// stfs f31,672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f11,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// sth r8,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r8.u16);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// sth r6,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r6.u16);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// sth r27,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r27.u16);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820A71A8;
	sub_822AA648(ctx, base);
	// addi r3,r31,644
	ctx.r3.s64 = ctx.r31.s64 + 644;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x820A71B4;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r27,10
	ctx.r27.s64 = 10;
	// bl 0x820a6ff8
	ctx.lr = 0x820A71C4;
	sub_820A6FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x820a6f40
	ctx.lr = 0x820A71D0;
	sub_820A6F40(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r11,10392
	ctx.r7.s64 = ctx.r11.s64 + 10392;
	// lfs f9,10408(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10408);
	ctx.f9.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,8060(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8060);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r6,r9,10336
	ctx.r6.s64 = ctx.r9.s64 + 10336;
loc_820A720C:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lbzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// and r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 & ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820a72b8
	if (ctx.cr6.eq) goto loc_820A72B8;
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a72b8
	if (ctx.cr6.eq) goto loc_820A72B8;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f0,f7,f30
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820a7268
	if (!ctx.cr6.lt) goto loc_820A7268;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820a7274
	goto loc_820A7274;
loc_820A7268:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820a7274
	if (!ctx.cr6.gt) goto loc_820A7274;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_820A7274:
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x820a72a0
	if (!ctx.cr6.lt) goto loc_820A72A0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x820a72b4
	goto loc_820A72B4;
loc_820A72A0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a72b4
	if (!ctx.cr6.gt) goto loc_820A72B4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A72B4:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_820A72B8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820a720c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A720C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1372);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820a7428
	if (ctx.cr6.eq) goto loc_820A7428;
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a737c
	if (ctx.cr6.eq) goto loc_820A737C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f28,f8,f30
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x820a731c
	if (!ctx.cr6.lt) goto loc_820A731C;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x820a7328
	goto loc_820A7328;
loc_820A731C:
	// fcmpu cr6,f28,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f9.f64);
	// ble cr6,0x820a7328
	if (!ctx.cr6.gt) goto loc_820A7328;
	// fmr f28,f9
	ctx.f28.f64 = ctx.f9.f64;
loc_820A7328:
	// stfs f28,660(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fdivs f8,f28,f10
	ctx.f8.f64 = double(float(ctx.f28.f64 / ctx.f10.f64));
	// stfs f8,664(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// bge cr6,0x820a7368
	if (!ctx.cr6.lt) goto loc_820A7368;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820a7378
	goto loc_820A7378;
loc_820A7368:
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a7378
	if (!ctx.cr6.gt) goto loc_820A7378;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A7378:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_820A737C:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7428
	if (ctx.cr6.eq) goto loc_820A7428;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820a73bc
	if (!ctx.cr6.lt) goto loc_820A73BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820a73c8
	goto loc_820A73C8;
loc_820A73BC:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820a73c8
	if (!ctx.cr6.gt) goto loc_820A73C8;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_820A73C8:
	// stfs f0,668(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,8344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f7,672(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bge cr6,0x820a7418
	if (!ctx.cr6.lt) goto loc_820A7418;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x820a7424
	goto loc_820A7424;
loc_820A7418:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x820a7424
	if (!ctx.cr6.gt) goto loc_820A7424;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_820A7424:
	// stfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_820A7428:
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r11,-7560
	ctx.r30.s64 = ctx.r11.s64 + -7560;
	// beq cr6,0x820a7490
	if (ctx.cr6.eq) goto loc_820A7490;
	// lwz r11,1936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 876, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,880(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 880, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1052(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1052, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1056, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1228, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1232, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1404(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1404, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1408(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1408, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1580(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1580, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1584, temp.u32);
loc_820A7490:
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x821847a8
	ctx.lr = 0x820A74A0;
	sub_821847A8(ctx, base);
	// stw r27,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r27.u32);
	// lfs f13,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,620
	ctx.r11.s64 = 620;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f12.u32);
	// fctiwz f0,f28
	ctx.f0.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfs f29,616(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249974
	ctx.lr = 0x820A74E0;
	sub_82249974(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820A74E4"))) PPC_WEAK_FUNC(sub_820A74E4);
PPC_FUNC_IMPL(__imp__sub_820A74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A74E8"))) PPC_WEAK_FUNC(sub_820A74E8);
PPC_FUNC_IMPL(__imp__sub_820A74E8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-8540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// bl 0x820c0730
	ctx.lr = 0x820A750C;
	sub_820C0730(ctx, base);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,7952(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7952);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_820A7550"))) PPC_WEAK_FUNC(sub_820A7550);
PPC_FUNC_IMPL(__imp__sub_820A7550) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r10,1572(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1572);
	// lwz r11,1568(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1568);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820c0730
	ctx.lr = 0x820A7588;
	sub_820C0730(ctx, base);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,7952(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7952);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820a75d4
	if (ctx.cr6.lt) goto loc_820A75D4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r10,1576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1576, ctx.r10.u32);
	// b 0x820a75d8
	goto loc_820A75D8;
loc_820A75D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820A75D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A75F0"))) PPC_WEAK_FUNC(sub_820A75F0);
PPC_FUNC_IMPL(__imp__sub_820A75F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,10340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820a7640
	if (!ctx.cr6.gt) goto loc_820A7640;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820a7648
	if (ctx.cr6.gt) goto loc_820A7648;
loc_820A7640:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_820A7648:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820a7660
	if (ctx.cr6.gt) goto loc_820A7660;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_820A7660:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A767C"))) PPC_WEAK_FUNC(sub_820A767C);
PPC_FUNC_IMPL(__imp__sub_820A767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7680"))) PPC_WEAK_FUNC(sub_820A7680);
PPC_FUNC_IMPL(__imp__sub_820A7680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lfs f12,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,1616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820a76c4
	if (!ctx.cr6.lt) goto loc_820A76C4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_820A76C4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a76d0
	if (!ctx.cr6.gt) goto loc_820A76D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A76D0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A76E0"))) PPC_WEAK_FUNC(sub_820A76E0);
PPC_FUNC_IMPL(__imp__sub_820A76E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,1360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// lfs f10,400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f30,f9,f10
	ctx.f30.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// beq cr6,0x820a7738
	if (ctx.cr6.eq) goto loc_820A7738;
	// lwz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a7744
	if (!ctx.cr6.eq) goto loc_820A7744;
loc_820A7738:
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x820c3350
	ctx.lr = 0x820A7740;
	sub_820C3350(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
loc_820A7744:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A776C"))) PPC_WEAK_FUNC(sub_820A776C);
PPC_FUNC_IMPL(__imp__sub_820A776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7770"))) PPC_WEAK_FUNC(sub_820A7770);
PPC_FUNC_IMPL(__imp__sub_820A7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A779C"))) PPC_WEAK_FUNC(sub_820A779C);
PPC_FUNC_IMPL(__imp__sub_820A779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A77A0"))) PPC_WEAK_FUNC(sub_820A77A0);
PPC_FUNC_IMPL(__imp__sub_820A77A0) {
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
	// bl 0x820a76e0
	ctx.lr = 0x820A77B0;
	sub_820A76E0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,1616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f11,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
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

__attribute__((alias("__imp__sub_820A7804"))) PPC_WEAK_FUNC(sub_820A7804);
PPC_FUNC_IMPL(__imp__sub_820A7804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A7808"))) PPC_WEAK_FUNC(sub_820A7808);
PPC_FUNC_IMPL(__imp__sub_820A7808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f8,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A7878"))) PPC_WEAK_FUNC(sub_820A7878);
PPC_FUNC_IMPL(__imp__sub_820A7878) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249920
	ctx.lr = 0x820A7890;
	sub_82249920(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,1616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f29,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// stfs f30,688(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f30,692(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// bl 0x820c33c0
	ctx.lr = 0x820A78DC;
	sub_820C33C0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fadds f26,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// bl 0x820c33c0
	ctx.lr = 0x820A78F0;
	sub_820C33C0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fadds f29,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// bl 0x820c33c0
	ctx.lr = 0x820A7904;
	sub_820C33C0(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmadds f13,f12,f26,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 + ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fadds f11,f1,f27
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820a7930
	if (!ctx.cr6.lt) goto loc_820A7930;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x820a793c
	goto loc_820A793C;
loc_820A7930:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x820a793c
	if (!ctx.cr6.gt) goto loc_820A793C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_820A793C:
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f10,f31,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820a7960
	if (!ctx.cr6.lt) goto loc_820A7960;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820a796c
	goto loc_820A796C;
loc_820A7960:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x820a796c
	if (!ctx.cr6.gt) goto loc_820A796C;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
loc_820A796C:
	// stfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x820a7ad8
	if (ctx.cr6.gt) goto loc_820A7AD8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820a79c4
	// bdzf 4*cr6+eq,0x820a79f8
	// bdzf 4*cr6+eq,0x820a7a64
	// bne cr6,0x820a7ad0
	if (!ctx.cr6.eq) goto loc_820A7AD0;
	// lfs f12,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f29,f11,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x820a79bc
	if (ctx.cr6.lt) goto loc_820A79BC;
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x820a79bc
	if (ctx.cr6.gt) goto loc_820A79BC;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_820A79BC:
	// stfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// b 0x820a7ad8
	goto loc_820A7AD8;
loc_820A79C4:
	// lfs f12,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f29,f11,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,96(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x820a79f0
	if (ctx.cr6.lt) goto loc_820A79F0;
	// lfs f0,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x820a79f0
	if (ctx.cr6.gt) goto loc_820A79F0;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_820A79F0:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x820a7ad8
	goto loc_820A7AD8;
loc_820A79F8:
	// lfs f12,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f29,f11,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,288(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x820a7a1c
	if (!ctx.cr6.lt) goto loc_820A7A1C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820a7a2c
	goto loc_820A7A2C;
loc_820A7A1C:
	// lfs f11,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820a7a2c
	if (!ctx.cr6.gt) goto loc_820A7A2C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_820A7A2C:
	// lfs f11,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f9,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f29,f9,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,384(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x820a7a5c
	if (ctx.cr6.lt) goto loc_820A7A5C;
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x820a7a5c
	if (ctx.cr6.gt) goto loc_820A7A5C;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
loc_820A7A5C:
	// stfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// b 0x820a7ad8
	goto loc_820A7AD8;
loc_820A7A64:
	// lfs f12,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f29,f11,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,240(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x820a7a88
	if (!ctx.cr6.lt) goto loc_820A7A88;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820a7a98
	goto loc_820A7A98;
loc_820A7A88:
	// lfs f11,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820a7a98
	if (!ctx.cr6.gt) goto loc_820A7A98;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_820A7A98:
	// lfs f11,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f9,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f29,f9,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,336(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x820a7ac8
	if (ctx.cr6.lt) goto loc_820A7AC8;
	// lfs f0,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x820a7ac8
	if (ctx.cr6.gt) goto loc_820A7AC8;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
loc_820A7AC8:
	// stfs f0,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// b 0x820a7ad8
	goto loc_820A7AD8;
loc_820A7AD0:
	// fadds f0,f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
loc_820A7AD8:
	// stfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8224996c
	ctx.lr = 0x820A7AEC;
	sub_8224996C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A7B00"))) PPC_WEAK_FUNC(sub_820A7B00);
PPC_FUNC_IMPL(__imp__sub_820A7B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A7B08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r3,580
	ctx.r30.s64 = ctx.r3.s64 + 580;
	// addi r10,r11,10344
	ctx.r10.s64 = ctx.r11.s64 + 10344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82188260
	ctx.lr = 0x820A7B2C;
	sub_82188260(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821883b8
	ctx.lr = 0x820A7B34;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820A7B3C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a7b58
	if (ctx.cr6.eq) goto loc_820A7B58;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820A7B54;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A7B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A7B60"))) PPC_WEAK_FUNC(sub_820A7B60);
PPC_FUNC_IMPL(__imp__sub_820A7B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820A7B68;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820a7b94
	if (!ctx.cr6.eq) goto loc_820A7B94;
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x820A7B94;
	sub_821882D0(ctx, base);
loc_820A7B94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r11,1380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1380, ctx.r11.u32);
	// stw r11,1384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1384, ctx.r11.u32);
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,1388(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1388, ctx.r30.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stfs f31,208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stfs f31,240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f31,296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f31,340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f31,344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stfs f31,352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stfs f31,384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f31,388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// lfs f0,10416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10416);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// lfs f13,8620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8620);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stfs f31,432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f31,436(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stfs f31,440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stfs f31,448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// lfs f12,10376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10376);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// lfs f30,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// addi r7,r31,76
	ctx.r7.s64 = ctx.r31.s64 + 76;
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f31,532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lfs f0,10412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,256(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f12,212(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f12,260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// stfs f30,68(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r26,r31,88
	ctx.r26.s64 = ctx.r31.s64 + 88;
	// stfs f30,76(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// stfs f30,80(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r27,-8540(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8540);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a80e4
	if (ctx.cr6.eq) goto loc_820A80E4;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r27,1696
	ctx.r3.s64 = ctx.r27.s64 + 1696;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820ca3c0
	ctx.lr = 0x820A7EA8;
	sub_820CA3C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820c0730
	ctx.lr = 0x820A7EB4;
	sub_820C0730(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f5,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f3,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f1,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f11,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f2,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f7,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// lfs f3,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f2,44(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f1,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fadds f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f9,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// li r10,10
	ctx.r10.s64 = 10;
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// lfs f6,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// lfs f2,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lfs f11,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f8,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f8.f64 = double(temp.f32);
	// fadds f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// lfs f5,432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f1,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f9,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lfs f7,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f4,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// stfs f31,616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stfs f31,660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stfs f31,664(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stfs f31,668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stfs f31,672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f31,676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f30,688(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f30,692(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x820A80D8;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,644
	ctx.r3.s64 = ctx.r31.s64 + 644;
	// bl 0x822aa648
	ctx.lr = 0x820A80E4;
	sub_822AA648(ctx, base);
loc_820A80E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820A80F4"))) PPC_WEAK_FUNC(sub_820A80F4);
PPC_FUNC_IMPL(__imp__sub_820A80F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A80F8"))) PPC_WEAK_FUNC(sub_820A80F8);
PPC_FUNC_IMPL(__imp__sub_820A80F8) {
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
	// lbz r11,1680(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1680);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a812c
	if (!ctx.cr6.eq) goto loc_820A812C;
loc_820A8124:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820a821c
	goto loc_820A821C;
loc_820A812C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a6ff8
	ctx.lr = 0x820A8134;
	sub_820A6FF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820a8124
	if (ctx.cr6.lt) goto loc_820A8124;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a81a8
	if (!ctx.cr6.eq) goto loc_820A81A8;
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a81a8
	if (!ctx.cr6.eq) goto loc_820A81A8;
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a81a8
	if (!ctx.cr6.eq) goto loc_820A81A8;
	// rlwinm r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a81a8
	if (!ctx.cr6.eq) goto loc_820A81A8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8124
	if (ctx.cr6.eq) goto loc_820A8124;
	// lbz r11,866(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 866);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8124
	if (ctx.cr6.eq) goto loc_820A8124;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a81a8
	if (!ctx.cr6.eq) goto loc_820A81A8;
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a8124
	if (ctx.cr6.eq) goto loc_820A8124;
loc_820A81A8:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f10,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fnmsubs f8,f9,f0,f0
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fnmsubs f31,f8,f13,f8
	ctx.f31.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x820a8124
	if (!ctx.cr6.gt) goto loc_820A8124;
	// bl 0x8218fba8
	ctx.lr = 0x820A81E8;
	sub_8218FBA8(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// mulhwu r7,r3,r10
	ctx.r7.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r11,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// adde r3,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820A821C:
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

__attribute__((alias("__imp__sub_820A8238"))) PPC_WEAK_FUNC(sub_820A8238);
PPC_FUNC_IMPL(__imp__sub_820A8238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A8240;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x820a826c
	if (!ctx.cr6.lt) goto loc_820A826C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a6578
	ctx.lr = 0x820A826C;
	sub_820A6578(ctx, base);
loc_820A826C:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820a8288
	if (!ctx.cr6.lt) goto loc_820A8288;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x820a8298
	goto loc_820A8298;
loc_820A8288:
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a8298
	if (!ctx.cr6.gt) goto loc_820A8298;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820A8298:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x820a832c
	if (ctx.cr6.gt) goto loc_820A832C;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a82f0
	if (!ctx.cr6.eq) goto loc_820A82F0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820a82c8
	if (!ctx.cr6.eq) goto loc_820A82C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820A82C8:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820A82D4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a82f0
	if (ctx.cr6.eq) goto loc_820A82F0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a82f0
	if (ctx.cr6.eq) goto loc_820A82F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820afa08
	ctx.lr = 0x820A82F0;
	sub_820AFA08(ctx, base);
loc_820A82F0:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a8320
	if (!ctx.cr6.eq) goto loc_820A8320;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r30.u32);
	// bl 0x820a6578
	ctx.lr = 0x820A8314;
	sub_820A6578(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820cb9f8
	ctx.lr = 0x820A8320;
	sub_820CB9F8(ctx, base);
loc_820A8320:
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a66c8
	ctx.lr = 0x820A832C;
	sub_820A66C8(ctx, base);
loc_820A832C:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820a8398
	if (ctx.cr6.lt) goto loc_820A8398;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a8384
	if (ctx.cr6.eq) goto loc_820A8384;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820a835c
	if (!ctx.cr6.eq) goto loc_820A835C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820A835C:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820A8368;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8384
	if (ctx.cr6.eq) goto loc_820A8384;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8384
	if (ctx.cr6.eq) goto loc_820A8384;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820afa08
	ctx.lr = 0x820A8384;
	sub_820AFA08(ctx, base);
loc_820A8384:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r29.u32);
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// bl 0x820a66c8
	ctx.lr = 0x820A8398;
	sub_820A66C8(ctx, base);
loc_820A8398:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A83A8"))) PPC_WEAK_FUNC(sub_820A83A8);
PPC_FUNC_IMPL(__imp__sub_820A83A8) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8208dc50
	ctx.lr = 0x820A83C8;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a8438
	if (!ctx.cr6.eq) goto loc_820A8438;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208de68
	ctx.lr = 0x820A83D8;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a8438
	if (!ctx.cr6.eq) goto loc_820A8438;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e058
	ctx.lr = 0x820A83E8;
	sub_8208E058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a8438
	if (!ctx.cr6.eq) goto loc_820A8438;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e078
	ctx.lr = 0x820A83F8;
	sub_8208E078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a8438
	if (!ctx.cr6.eq) goto loc_820A8438;
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f31,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820c3350
	ctx.lr = 0x820A8410;
	sub_820C3350(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f12,f1,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f31.f64));
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// bl 0x820a8238
	ctx.lr = 0x820A8438;
	sub_820A8238(ctx, base);
loc_820A8438:
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

__attribute__((alias("__imp__sub_820A8450"))) PPC_WEAK_FUNC(sub_820A8450);
PPC_FUNC_IMPL(__imp__sub_820A8450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A8458;
	sub_8224878C(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820a6cc0
	ctx.lr = 0x820A8478;
	sub_820A6CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820a6ff8
	ctx.lr = 0x820A8488;
	sub_820A6FF8(ctx, base);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// bl 0x820a6f40
	ctx.lr = 0x820A84A8;
	sub_820A6F40(ctx, base);
	// fmuls f12,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820a84d8
	if (ctx.cr6.lt) goto loc_820A84D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10408);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820a84dc
	if (!ctx.cr6.gt) goto loc_820A84DC;
loc_820A84D8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820A84DC:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A84FC"))) PPC_WEAK_FUNC(sub_820A84FC);
PPC_FUNC_IMPL(__imp__sub_820A84FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8500"))) PPC_WEAK_FUNC(sub_820A8500);
PPC_FUNC_IMPL(__imp__sub_820A8500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A8508;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820a8530
	if (!ctx.cr6.eq) goto loc_820A8530;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820A8530:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_820A853C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a75f0
	ctx.lr = 0x820A8544;
	sub_820A75F0(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwu r3,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// blt cr6,0x820a853c
	if (ctx.cr6.lt) goto loc_820A853C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820a6cc0
	ctx.lr = 0x820A8570;
	sub_820A6CC0(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a70f0
	ctx.lr = 0x820A8588;
	sub_820A70F0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r4,20548
	ctx.r4.s64 = 1346633728;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,21332
	ctx.r4.u64 = ctx.r4.u64 | 21332;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bl 0x821882d0
	ctx.lr = 0x820A85A0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a85b8
	if (ctx.cr6.eq) goto loc_820A85B8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a85b8
	if (ctx.cr6.eq) goto loc_820A85B8;
	// bl 0x820af430
	ctx.lr = 0x820A85B8;
	sub_820AF430(ctx, base);
loc_820A85B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,8308(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8308);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r29,100
	ctx.r10.s64 = ctx.r29.s64 + 100;
	// lfs f13,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,10340(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10340);
	ctx.f10.f64 = double(temp.f32);
loc_820A85E4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820a8600
	if (!ctx.cr6.gt) goto loc_820A8600;
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820a8608
	if (ctx.cr6.gt) goto loc_820A8608;
loc_820A8600:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820a8628
	goto loc_820A8628;
loc_820A8608:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820a8618
	if (ctx.cr6.gt) goto loc_820A8618;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820a8628
	goto loc_820A8628;
loc_820A8618:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820a8628
	if (!ctx.cr6.gt) goto loc_820A8628;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820A8628:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x820a8654
	if (ctx.cr6.gt) goto loc_820A8654;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// blt cr6,0x820a85e4
	if (ctx.cr6.lt) goto loc_820A85E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820A8654:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a8688
	if (!ctx.cr6.eq) goto loc_820A8688;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x820a866c
	if (!ctx.cr6.eq) goto loc_820A866C;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x820a8680
	goto loc_820A8680;
loc_820A866C:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x820a867c
	if (ctx.cr6.eq) goto loc_820A867C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x820a8688
	if (!ctx.cr6.eq) goto loc_820A8688;
loc_820A867C:
	// li r4,3
	ctx.r4.s64 = 3;
loc_820A8680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a6578
	ctx.lr = 0x820A8688;
	sub_820A6578(ctx, base);
loc_820A8688:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1401, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A86A0"))) PPC_WEAK_FUNC(sub_820A86A0);
PPC_FUNC_IMPL(__imp__sub_820A86A0) {
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
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820a7b60
	ctx.lr = 0x820A86C0;
	sub_820A7B60(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x822aa648
	ctx.lr = 0x820A86CC;
	sub_822AA648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A86E0"))) PPC_WEAK_FUNC(sub_820A86E0);
PPC_FUNC_IMPL(__imp__sub_820A86E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a8768
	if (ctx.cr6.eq) goto loc_820A8768;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x820a8724
	if (!ctx.cr6.gt) goto loc_820A8724;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x820a8724
	if (!ctx.cr6.lt) goto loc_820A8724;
	// bl 0x820981b8
	ctx.lr = 0x820A8724;
	sub_820981B8(ctx, base);
loc_820A8724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a6850
	ctx.lr = 0x820A872C;
	sub_820A6850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a83a8
	ctx.lr = 0x820A8734;
	sub_820A83A8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a6578
	ctx.lr = 0x820A8740;
	sub_820A6578(ctx, base);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a8754
	if (!ctx.cr6.gt) goto loc_820A8754;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
loc_820A8754:
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a8768
	if (!ctx.cr6.gt) goto loc_820A8768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
loc_820A8768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A877C"))) PPC_WEAK_FUNC(sub_820A877C);
PPC_FUNC_IMPL(__imp__sub_820A877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8780"))) PPC_WEAK_FUNC(sub_820A8780);
PPC_FUNC_IMPL(__imp__sub_820A8780) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20512
	ctx.r4.u64 = ctx.r4.u64 | 20512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820A87B0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,10344
	ctx.r9.s64 = ctx.r11.s64 + 10344;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stw r8,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r8.u32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stw r5,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r5.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// bl 0x82188338
	ctx.lr = 0x820A89D0;
	sub_82188338(ctx, base);
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820a7b60
	ctx.lr = 0x820A89E4;
	sub_820A7B60(ctx, base);
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

__attribute__((alias("__imp__sub_820A8A00"))) PPC_WEAK_FUNC(sub_820A8A00);
PPC_FUNC_IMPL(__imp__sub_820A8A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A8A08;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,1924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lbz r9,866(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 866);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820a8b48
	if (!ctx.cr6.eq) goto loc_820A8B48;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bgt cr6,0x820a8a70
	if (ctx.cr6.gt) goto loc_820A8A70;
	// beq cr6,0x820a8a64
	if (ctx.cr6.eq) goto loc_820A8A64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x820a8a64
	if (ctx.cr6.eq) goto loc_820A8A64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x820a8a58
	if (ctx.cr6.eq) goto loc_820A8A58;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// b 0x820a8a7c
	goto loc_820A8A7C;
loc_820A8A58:
	// li r11,20
	ctx.r11.s64 = 20;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x820a8a88
	goto loc_820A8A88;
loc_820A8A64:
	// li r11,22
	ctx.r11.s64 = 22;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x820a8a88
	goto loc_820A8A88;
loc_820A8A70:
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 512, ctx.xer);
	// beq cr6,0x820a8a58
	if (ctx.cr6.eq) goto loc_820A8A58;
	// cmplwi cr6,r28,1024
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1024, ctx.xer);
loc_820A8A7C:
	// bne cr6,0x820a8b48
	if (!ctx.cr6.eq) goto loc_820A8B48;
	// li r31,4
	ctx.r31.s64 = 4;
	// li r11,21
	ctx.r11.s64 = 21;
loc_820A8A88:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r9,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// lfsx f0,r29,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x820a8ac8
	if (ctx.cr6.eq) goto loc_820A8AC8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x820a8af0
	if (!ctx.cr6.eq) goto loc_820A8AF0;
loc_820A8AC8:
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x820c3328
	ctx.lr = 0x820A8AD4;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a8af0
	if (ctx.cr6.eq) goto loc_820A8AF0;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x820c3350
	ctx.lr = 0x820A8AE8;
	sub_820C3350(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x820a8b48
	if (!ctx.cr6.lt) goto loc_820A8B48;
loc_820A8AF0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x820a8b20
	if (!ctx.cr6.eq) goto loc_820A8B20;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x820c3328
	ctx.lr = 0x820A8B04;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a8b20
	if (ctx.cr6.eq) goto loc_820A8B20;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x820c3350
	ctx.lr = 0x820A8B18;
	sub_820C3350(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x820a8b48
	if (!ctx.cr6.lt) goto loc_820A8B48;
loc_820A8B20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x820A8B28;
	sub_8208DBB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820a8b5c
	if (ctx.cr6.eq) goto loc_820A8B5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820a8b7c
	if (!ctx.cr6.gt) goto loc_820A8B7C;
loc_820A8B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820A8B5C:
	// lfsx f0,r29,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820a8b7c
	if (!ctx.cr6.gt) goto loc_820A8B7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820A8B7C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lhz r6,1610(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1610);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a8450
	ctx.lr = 0x820A8B90;
	sub_820A8450(ctx, base);
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfs f0,10376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfs f13,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fnmsubs f7,f12,f0,f0
	ctx.f7.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f31,f3,f6
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820a8b48
	if (!ctx.cr6.gt) goto loc_820A8B48;
	// bl 0x8218fba8
	ctx.lr = 0x820A8BFC;
	sub_8218FBA8(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// mulhwu r7,r3,r10
	ctx.r7.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r11,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// adde r3,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A8C40"))) PPC_WEAK_FUNC(sub_820A8C40);
PPC_FUNC_IMPL(__imp__sub_820A8C40) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249924
	ctx.lr = 0x820A8C58;
	sub_82249924(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f27,f13
	ctx.f27.f64 = double(float(ctx.f13.f64));
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// bl 0x8208dc50
	ctx.lr = 0x820A8C84;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a8da8
	if (ctx.cr6.eq) goto loc_820A8DA8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,-8540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// lwz r11,1376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge cr6,0x820a8cb8
	if (!ctx.cr6.lt) goto loc_820A8CB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820a8cc8
	goto loc_820A8CC8;
loc_820A8CB8:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820a8cc4
	if (!ctx.cr6.gt) goto loc_820A8CC4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820A8CC4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_820A8CC8:
	// bl 0x820c0730
	ctx.lr = 0x820A8CCC;
	sub_820C0730(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r10,1376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x820a8d04
	if (!ctx.cr6.gt) goto loc_820A8D04;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820c3350
	ctx.lr = 0x820A8CF0;
	sub_820C3350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2144
	ctx.r11.s64 = ctx.r11.s64 + 2144;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f29,f31,f1
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// b 0x820a8d14
	goto loc_820A8D14;
loc_820A8D04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2144
	ctx.r11.s64 = ctx.r11.s64 + 2144;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_820A8D14:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208dbb0
	ctx.lr = 0x820A8D1C;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a8d28
	if (ctx.cr6.eq) goto loc_820A8D28;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_820A8D28:
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x820c33c0
	ctx.lr = 0x820A8D38;
	sub_820C33C0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fsubs f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820a8d58
	if (ctx.cr6.eq) goto loc_820A8D58;
	// lwz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a8d70
	if (!ctx.cr6.eq) goto loc_820A8D70;
loc_820A8D58:
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x820c3350
	ctx.lr = 0x820A8D60;
	sub_820C3350(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// bl 0x820a6578
	ctx.lr = 0x820A8D70;
	sub_820A6578(ctx, base);
loc_820A8D70:
	// fmuls f13,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820a8dd8
	if (!ctx.cr6.gt) goto loc_820A8DD8;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a8dd8
	if (ctx.cr6.eq) goto loc_820A8DD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// b 0x820a8dd8
	goto loc_820A8DD8;
loc_820A8DA8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208de18
	ctx.lr = 0x820A8DB0;
	sub_8208DE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820a8dd8
	if (ctx.cr6.eq) goto loc_820A8DD8;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x820c33c0
	ctx.lr = 0x820A8DC8;
	sub_820C33C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_820A8DD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a8e04
	if (ctx.cr6.eq) goto loc_820A8E04;
	// fdivs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f27.f64));
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f31,676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r9.u32);
loc_820A8E04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// bl 0x820a8238
	ctx.lr = 0x820A8E10;
	sub_820A8238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a66c8
	ctx.lr = 0x820A8E18;
	sub_820A66C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249970
	ctx.lr = 0x820A8E24;
	sub_82249970(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A8E38"))) PPC_WEAK_FUNC(sub_820A8E38);
PPC_FUNC_IMPL(__imp__sub_820A8E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10424
	ctx.r9.s64 = ctx.r11.s64 + 10424;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A8E4C"))) PPC_WEAK_FUNC(sub_820A8E4C);
PPC_FUNC_IMPL(__imp__sub_820A8E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8E50"))) PPC_WEAK_FUNC(sub_820A8E50);
PPC_FUNC_IMPL(__imp__sub_820A8E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,10512
	ctx.r9.s64 = ctx.r11.s64 + 10512;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A8E64"))) PPC_WEAK_FUNC(sub_820A8E64);
PPC_FUNC_IMPL(__imp__sub_820A8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8E68"))) PPC_WEAK_FUNC(sub_820A8E68);
PPC_FUNC_IMPL(__imp__sub_820A8E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f0938
	sub_820F0938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820A8E6C"))) PPC_WEAK_FUNC(sub_820A8E6C);
PPC_FUNC_IMPL(__imp__sub_820A8E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8E70"))) PPC_WEAK_FUNC(sub_820A8E70);
PPC_FUNC_IMPL(__imp__sub_820A8E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r3,1076
	ctx.r11.s64 = ctx.r3.s64 + 1076;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820A8E80:
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f13,32(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f12,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,-4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stfs f12,32(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// stfs f11,32(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f10,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f10,32(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f9,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f9,32(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfs f8,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f8,32(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsu f0,256(r11)
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x820a8e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A8E80;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r3,1588
	ctx.r10.s64 = ctx.r3.s64 + 1588;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820A8F54:
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsu f0,32(r10)
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// bdnz 0x820a8f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A8F54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A8F74"))) PPC_WEAK_FUNC(sub_820A8F74);
PPC_FUNC_IMPL(__imp__sub_820A8F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A8F78"))) PPC_WEAK_FUNC(sub_820A8F78);
PPC_FUNC_IMPL(__imp__sub_820A8F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820A8F80;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,440(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r30,r11,1696
	ctx.r30.s64 = ctx.r11.s64 + 1696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c81b8
	ctx.lr = 0x820A8FA4;
	sub_820C81B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820c81b8
	ctx.lr = 0x820A8FB8;
	sub_820C81B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x820c81b8
	ctx.lr = 0x820A8FCC;
	sub_820C81B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x820c81b8
	ctx.lr = 0x820A8FE0;
	sub_820C81B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x820c81b8
	ctx.lr = 0x820A8FF4;
	sub_820C81B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x820c81b8
	ctx.lr = 0x820A9008;
	sub_820C81B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c81b8
	ctx.lr = 0x820A901C;
	sub_820C81B8(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-30464
	ctx.r4.s64 = ctx.r10.s64 + -30464;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x821847a8
	ctx.lr = 0x820A9034;
	sub_821847A8(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r4,r9,-31104
	ctx.r4.s64 = ctx.r9.s64 + -31104;
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// bl 0x821847a8
	ctx.lr = 0x820A9048;
	sub_821847A8(ctx, base);
	// lhz r7,52(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r6.u32);
	// lhz r5,54(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,9852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,596(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// lhz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 56);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,608(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// lhz r8,58(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 58);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,612(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// lhz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 60);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,616(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// lhz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 52);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// lhz r9,54(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 54);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,628(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lhz r6,56(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 56);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,640(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// lhz r3,58(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 58);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,644(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lhz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,648(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// lhz r6,64(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 64);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r5.u32);
	// lhz r4,66(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 66);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,660(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lhz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 68);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,672(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// lhz r7,70(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 70);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,676(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// lhz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 72);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,680(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// lhz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 76);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// lhz r8,78(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 78);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,884(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// lhz r5,80(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 80);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,896(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// lhz r11,82(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 82);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,900(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// lhz r8,84(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 84);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,904(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// lhz r5,88(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r4.u32);
	// lhz r3,90(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 90);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,980(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// lhz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,992(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// lhz r6,94(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 94);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,996(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// lhz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 96);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// lhz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 52);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r8.u32);
	// lhz r7,54(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 54);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,692(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// lhz r4,56(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 56);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,704(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// lhz r10,58(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 58);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,708(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// lhz r7,60(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 60);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,712(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 712, temp.u32);
	// lhz r4,64(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 64);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// lhz r11,66(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 66);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,724(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// lhz r8,68(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 68);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,736(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// lhz r5,70(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 70);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,740(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// lhz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 72);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,744(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// lhz r8,52(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 52);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r7.u32);
	// lhz r6,54(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 54);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
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
	// stfs f2,756(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
	// lhz r3,56(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 56);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,768(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 768, temp.u32);
	// lhz r9,58(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 58);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,772(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// lhz r6,60(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 60);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,776(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lhz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 52);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lhz r10,54(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 54);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,788(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// lhz r7,56(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 56);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,800(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// lhz r4,58(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 58);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,804(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// lhz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 60);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,808(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
	// lhz r7,64(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 64);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r6.u32);
	// lhz r5,66(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 66);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,820(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
	// lhz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 68);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,832(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lhz r8,70(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 70);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,836(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lhz r5,72(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 72);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,840(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lhz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 52);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// lhz r9,54(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 54);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,852(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lhz r6,56(r24)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r24.u32 + 56);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
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
	// stfs f2,864(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// lhz r3,58(r24)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r24.u32 + 58);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,868(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// lhz r9,60(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 60);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,872(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// lhz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 52);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r5.u32);
	// lhz r4,54(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 54);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,916(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// lhz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,928(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// lhz r7,58(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 58);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,932(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// lhz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,936(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// lhz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// lhz r8,66(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,948(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// lhz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 68);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,960(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// lhz r11,70(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,964(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lhz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,968(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lhz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 76);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r4.u32);
	// lhz r3,78(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 78);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1012(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// lhz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1024(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// lhz r6,82(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
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
	// stfs f2,1028(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lhz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 84);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1032(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// lhz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r8.u32);
	// lhz r7,90(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 90);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,1044(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// lhz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 92);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,1056(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// lhz r10,94(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 94);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1060(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// lhz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 96);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1064(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// lhz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 100);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r3.u32);
	// lhz r11,102(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 102);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1236(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// lhz r8,104(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 104);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// lhz r5,106(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 106);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,1252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// lhz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 108);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,1256(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// lhz r8,100(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 100);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r7.u32);
	// lhz r6,102(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 102);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,1268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// lhz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 104);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1280(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// lhz r9,106(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 106);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1284(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// lhz r6,108(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 108);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
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
	// stfs f2,1288(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// lhz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 112);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// lhz r10,114(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 114);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1300(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// lhz r7,116(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 116);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,1312(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// lhz r4,118(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 118);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,1316(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// lhz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1320(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// lhz r7,124(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 124);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r6.u32);
	// lhz r5,126(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1524(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// lhz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 128);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1536(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// lhz r8,130(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 130);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// lhz r5,132(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 132);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,1544(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lhz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 136);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// lhz r9,138(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 138);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,1620(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lhz r6,140(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 140);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,1632(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// lhz r3,142(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 142);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1636(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lhz r9,144(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 144);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1640(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// lhz r6,100(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 100);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r5.u32);
	// lhz r4,102(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 102);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,1332(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
	// lhz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 104);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1344(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// lhz r7,106(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 106);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,1348(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1348, temp.u32);
	// lhz r4,108(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 108);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,1352(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// lhz r10,112(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 112);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r9.u32);
	// lhz r8,114(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 114);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1364(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// lhz r5,116(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 116);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1376(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// lhz r11,118(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1380(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// lhz r8,120(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 120);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// lhz r5,124(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 124);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r4.u32);
	// lhz r3,126(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,1396(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// lhz r9,128(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 128);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,1408(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// lhz r6,130(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 130);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,1412(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// lhz r3,132(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 132);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// lhz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 100);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
	// lhz r7,102(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 102);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1428(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1428, temp.u32);
	// lhz r4,104(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 104);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,1440(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lhz r10,106(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 106);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1444(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
	// lhz r7,108(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 108);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,1448(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// lhz r4,112(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 112);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// lhz r11,114(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 114);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,1460(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// lhz r8,116(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 116);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1472(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lhz r5,118(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 118);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1476(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// lhz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 120);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1480(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lhz r8,124(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 124);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r7.u32);
	// lhz r6,126(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// lhz r3,128(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 128);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,1504(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// lhz r9,130(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 130);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,1508(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// lhz r6,132(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 132);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,1512(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lhz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 100);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lhz r10,102(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 102);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1556(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// lhz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 104);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1568(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// lhz r4,106(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 106);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,1572(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1572, temp.u32);
	// lhz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 108);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1576(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// lhz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 112);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r6.u32);
	// lhz r5,114(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 114);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,1588(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// lhz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 116);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,1600(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// lhz r8,118(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1604(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lhz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1608(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// lhz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
	// lhz r9,126(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1652(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// lhz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 128);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1664(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1664, temp.u32);
	// lhz r3,130(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 130);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,1668(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// lhz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,1672(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
	// lhz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 136);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r5.u32);
	// lhz r4,138(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 138);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,1684(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1684, temp.u32);
	// lhz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 140);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1696(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// lhz r7,142(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 142);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1700(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// lhz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 144);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,1704(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820AA0C0"))) PPC_WEAK_FUNC(sub_820AA0C0);
PPC_FUNC_IMPL(__imp__sub_820AA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820AA0C8;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820f0a80
	ctx.lr = 0x820AA0D8;
	sub_820F0A80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,10596
	ctx.r10.s64 = ctx.r11.s64 + 10596;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820a8f78
	ctx.lr = 0x820AA0F0;
	sub_820A8F78(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r23.u32);
	// stw r23,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r23.u32);
	// bl 0x82183850
	ctx.lr = 0x820AA100;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820aa118
	if (ctx.cr6.eq) goto loc_820AA118;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x820AA114;
	sub_82183448(ctx, base);
	// b 0x820aa120
	goto loc_820AA120;
loc_820AA118:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820AA120;
	sub_821845A0(ctx, base);
loc_820AA120:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa144
	if (ctx.cr6.eq) goto loc_820AA144;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82190520
	ctx.lr = 0x820AA134;
	sub_82190520(ctx, base);
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r23.u32);
	// b 0x820aa148
	goto loc_820AA148;
loc_820AA144:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820AA148:
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r23,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r23.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x82190a98
	ctx.lr = 0x820AA15C;
	sub_82190A98(ctx, base);
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82080d68
	ctx.lr = 0x820AA164;
	sub_82080D68(ctx, base);
	// subfic r5,r31,-112
	ctx.xer.ca = ctx.r31.u32 <= 4294967184;
	ctx.r5.s64 = -112 - ctx.r31.s64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// subfic r4,r31,-108
	ctx.xer.ca = ctx.r31.u32 <= 4294967188;
	ctx.r4.s64 = -108 - ctx.r31.s64;
	// subfic r3,r31,-104
	ctx.xer.ca = ctx.r31.u32 <= 4294967192;
	ctx.r3.s64 = -104 - ctx.r31.s64;
	// subfic r29,r31,-100
	ctx.xer.ca = ctx.r31.u32 <= 4294967196;
	ctx.r29.s64 = -100 - ctx.r31.s64;
	// subfic r28,r31,-96
	ctx.xer.ca = ctx.r31.u32 <= 4294967200;
	ctx.r28.s64 = -96 - ctx.r31.s64;
	// subfic r27,r31,-92
	ctx.xer.ca = ctx.r31.u32 <= 4294967204;
	ctx.r27.s64 = -92 - ctx.r31.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subfic r26,r31,-88
	ctx.xer.ca = ctx.r31.u32 <= 4294967208;
	ctx.r26.s64 = -88 - ctx.r31.s64;
	// subfic r25,r31,-84
	ctx.xer.ca = ctx.r31.u32 <= 4294967212;
	ctx.r25.s64 = -84 - ctx.r31.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// addi r11,r31,456
	ctx.r11.s64 = ctx.r31.s64 + 456;
	// subfic r24,r31,-120
	ctx.xer.ca = ctx.r31.u32 <= 4294967176;
	ctx.r24.s64 = -120 - ctx.r31.s64;
loc_820AA1A0:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,-48
	ctx.r6.s64 = ctx.r9.s64 + -48;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r8,53
	ctx.r8.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r8,-84(r10)
	PPC_STORE_U32(ctx.r10.u32 + -84, ctx.r8.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// ld r22,24(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r22,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r22.u64);
	// ld r22,32(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r22,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r22.u64);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f13,32(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r7,r8,53
	ctx.r7.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-80(r10)
	PPC_STORE_U32(ctx.r10.u32 + -80, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// ld r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r7,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f12,32(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// ld r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r6,-16(r8)
	PPC_STORE_U64(ctx.r8.u32 + -16, ctx.r6.u64);
	// ld r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r7,-8(r8)
	PPC_STORE_U64(ctx.r8.u32 + -8, ctx.r7.u64);
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f11,32(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-72(r10)
	PPC_STORE_U32(ctx.r10.u32 + -72, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// ld r6,120(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// ld r7,128(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f10,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f10,32(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-68(r10)
	PPC_STORE_U32(ctx.r10.u32 + -68, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// ld r6,152(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 152);
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// ld r7,160(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 160);
	// std r7,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// lfs f9,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f9,32(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// ld r6,184(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 184);
	// std r6,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, ctx.r6.u64);
	// ld r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// std r7,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r7.u64);
	// lfs f8,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f8,32(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-60(r10)
	PPC_STORE_U32(ctx.r10.u32 + -60, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,48
	ctx.r7.s64 = ctx.r8.s64 + 48;
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// ld r6,216(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 216);
	// std r6,48(r8)
	PPC_STORE_U64(ctx.r8.u32 + 48, ctx.r6.u64);
	// ld r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 224);
	// std r7,56(r8)
	PPC_STORE_U64(ctx.r8.u32 + 56, ctx.r7.u64);
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f7,32(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-56(r10)
	PPC_STORE_U32(ctx.r10.u32 + -56, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,64
	ctx.r7.s64 = ctx.r8.s64 + 64;
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// ld r6,248(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// std r6,64(r8)
	PPC_STORE_U64(ctx.r8.u32 + 64, ctx.r6.u64);
	// ld r7,256(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// std r7,72(r8)
	PPC_STORE_U64(ctx.r8.u32 + 72, ctx.r7.u64);
	// lfs f6,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f6,32(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,264(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-52(r10)
	PPC_STORE_U32(ctx.r10.u32 + -52, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,80
	ctx.r7.s64 = ctx.r8.s64 + 80;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// ld r6,280(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// std r6,80(r8)
	PPC_STORE_U64(ctx.r8.u32 + 80, ctx.r6.u64);
	// ld r7,288(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// std r7,88(r8)
	PPC_STORE_U64(ctx.r8.u32 + 88, ctx.r7.u64);
	// lfs f5,300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f5.f64 = double(temp.f32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + ctx.r25.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f5,32(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-48(r10)
	PPC_STORE_U32(ctx.r10.u32 + -48, ctx.r7.u32);
	// lwz r8,448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r8,96
	ctx.r7.s64 = ctx.r8.s64 + 96;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// ld r6,312(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 312);
	// std r6,96(r8)
	PPC_STORE_U64(ctx.r8.u32 + 96, ctx.r6.u64);
	// ldu r7,320(r11)
	ea = 320 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// std r7,104(r8)
	PPC_STORE_U64(ctx.r8.u32 + 104, ctx.r7.u64);
	// bdnz 0x820aa1a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AA1A0;
	// bl 0x82183850
	ctx.lr = 0x820AA4A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820aa4bc
	if (ctx.cr6.eq) goto loc_820AA4BC;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x820AA4B8;
	sub_82183448(ctx, base);
	// b 0x820aa4c4
	goto loc_820AA4C4;
loc_820AA4BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820AA4C4;
	sub_821845A0(ctx, base);
loc_820AA4C4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa4e8
	if (ctx.cr6.eq) goto loc_820AA4E8;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82190520
	ctx.lr = 0x820AA4D8;
	sub_82190520(ctx, base);
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r23.u32);
	// b 0x820aa4ec
	goto loc_820AA4EC;
loc_820AA4E8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820AA4EC:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82190a98
	ctx.lr = 0x820AA4F8;
	sub_82190A98(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820AA4FC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820aa514
	if (ctx.cr6.eq) goto loc_820AA514;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82183448
	ctx.lr = 0x820AA510;
	sub_82183448(ctx, base);
	// b 0x820aa51c
	goto loc_820AA51C;
loc_820AA514:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821845a0
	ctx.lr = 0x820AA51C;
	sub_821845A0(ctx, base);
loc_820AA51C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
	// subfic r4,r31,-280
	ctx.xer.ca = ctx.r31.u32 <= 4294967016;
	ctx.r4.s64 = -280 - ctx.r31.s64;
	// subfic r29,r31,-276
	ctx.xer.ca = ctx.r31.u32 <= 4294967020;
	ctx.r29.s64 = -276 - ctx.r31.s64;
	// subfic r28,r31,-272
	ctx.xer.ca = ctx.r31.u32 <= 4294967024;
	ctx.r28.s64 = -272 - ctx.r31.s64;
	// subfic r27,r31,-268
	ctx.xer.ca = ctx.r31.u32 <= 4294967028;
	ctx.r27.s64 = -268 - ctx.r31.s64;
	// subfic r3,r31,-264
	ctx.xer.ca = ctx.r31.u32 <= 4294967032;
	ctx.r3.s64 = -264 - ctx.r31.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subfic r26,r31,-260
	ctx.xer.ca = ctx.r31.u32 <= 4294967036;
	ctx.r26.s64 = -260 - ctx.r31.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r31,288
	ctx.r10.s64 = ctx.r31.s64 + 288;
	// addi r11,r31,1096
	ctx.r11.s64 = ctx.r31.s64 + 1096;
	// subfic r5,r31,-288
	ctx.xer.ca = ctx.r31.u32 <= 4294967008;
	ctx.r5.s64 = -288 - ctx.r31.s64;
loc_820AA550:
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,-48
	ctx.r6.s64 = ctx.r9.s64 + -48;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r8,53
	ctx.r8.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r8,-80(r10)
	PPC_STORE_U32(ctx.r10.u32 + -80, ctx.r8.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// ld r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r25,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r25.u64);
	// ld r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r25,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r25.u64);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f13,32(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r7,r8,53
	ctx.r7.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// ld r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r7,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f12,32(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-72(r10)
	PPC_STORE_U32(ctx.r10.u32 + -72, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// ld r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r6,-16(r8)
	PPC_STORE_U64(ctx.r8.u32 + -16, ctx.r6.u64);
	// ld r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r7,-8(r8)
	PPC_STORE_U64(ctx.r8.u32 + -8, ctx.r7.u64);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f11,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f11,32(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-68(r10)
	PPC_STORE_U32(ctx.r10.u32 + -68, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// ld r6,120(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// ld r7,128(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f10,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f10,32(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-64(r10)
	PPC_STORE_U32(ctx.r10.u32 + -64, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// ld r6,152(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 152);
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// ld r7,160(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 160);
	// std r7,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f9,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f9,32(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-60(r10)
	PPC_STORE_U32(ctx.r10.u32 + -60, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// ld r6,184(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 184);
	// std r6,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, ctx.r6.u64);
	// ld r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// std r7,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r7.u64);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f8,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f8,32(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-56(r10)
	PPC_STORE_U32(ctx.r10.u32 + -56, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r8,48
	ctx.r7.s64 = ctx.r8.s64 + 48;
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// ld r6,216(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 216);
	// std r6,48(r8)
	PPC_STORE_U64(ctx.r8.u32 + 48, ctx.r6.u64);
	// ld r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 224);
	// std r7,56(r8)
	PPC_STORE_U64(ctx.r8.u32 + 56, ctx.r7.u64);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stfs f7,32(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// addi r6,r8,53
	ctx.r6.s64 = ctx.r8.s64 + 53;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,-52(r10)
	PPC_STORE_U32(ctx.r10.u32 + -52, ctx.r7.u32);
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r7,r8,64
	ctx.r7.s64 = ctx.r8.s64 + 64;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ld r6,248(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// std r6,64(r8)
	PPC_STORE_U64(ctx.r8.u32 + 64, ctx.r6.u64);
	// ldu r7,256(r11)
	ea = 256 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// std r7,72(r8)
	PPC_STORE_U64(ctx.r8.u32 + 72, ctx.r7.u64);
	// bdnz 0x820aa550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AA550;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// addi r10,r31,1608
	ctx.r10.s64 = ctx.r31.s64 + 1608;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820AA7CC:
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r9,53
	ctx.r4.s64 = ctx.r9.s64 + 53;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// stw r9,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r9.u32);
	// lwz r9,452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ldu r7,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bdnz 0x820aa7cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AA7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0938
	ctx.lr = 0x820AA828;
	sub_820F0938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820AA834"))) PPC_WEAK_FUNC(sub_820AA834);
PPC_FUNC_IMPL(__imp__sub_820AA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AA838"))) PPC_WEAK_FUNC(sub_820AA838);
PPC_FUNC_IMPL(__imp__sub_820AA838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r10,1908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lwz r9,1328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x820aa8a4
	if (!ctx.cr6.gt) goto loc_820AA8A4;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// b 0x820aa8cc
	goto loc_820AA8CC;
loc_820AA8A4:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// ble cr6,0x820aa8cc
	if (!ctx.cr6.gt) goto loc_820AA8CC;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
loc_820AA8CC:
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r10,1336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820aa990
	if (ctx.cr6.eq) goto loc_820AA990;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// stfs f0,32(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r6,204(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// b 0x820aab70
	goto loc_820AAB70;
loc_820AA990:
	// lfs f13,1340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820aaac8
	if (!ctx.cr6.gt) goto loc_820AAAC8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29784
	ctx.r11.s64 = ctx.r11.s64 + -29784;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f11,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,32(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lfsx f9,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,204(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f8,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f5,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f3,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,32(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f1,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,32(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r5,204(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lfs f8,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,32(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f6,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lfs f5,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,32(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r6,204(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f2,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lfs f10,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,32(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f5,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,32(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_820AAAC8:
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,-29824
	ctx.r10.s64 = ctx.r6.s64 + -29824;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f12,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,10928(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10928);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,32(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lfsx f9,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,32(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,440(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// addi r8,r10,10640
	ctx.r8.s64 = ctx.r10.s64 + 10640;
loc_820AAB2C:
	// lwz r10,1332(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1332);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820aab70
	if (ctx.cr6.eq) goto loc_820AAB70;
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lfs f13,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,32(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// blt cr6,0x820aab2c
	if (ctx.cr6.lt) goto loc_820AAB2C;
loc_820AAB70:
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r10,1336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,1336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1336, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AAB90"))) PPC_WEAK_FUNC(sub_820AAB90);
PPC_FUNC_IMPL(__imp__sub_820AAB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,1360(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1360);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x820aac34
	if (!ctx.cr6.eq) goto loc_820AAC34;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r4,r4,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r4,r4,0,25,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFC7F;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// stfs f0,32(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r6,204(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r3,36(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
loc_820AAC34:
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// lwz r9,1364(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1364);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820aacd0
	if (!ctx.cr6.eq) goto loc_820AACD0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r3,r4,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r3,r3,0,22,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stfs f0,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stfs f0,32(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r6,204(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// blr 
	return;
loc_820AACD0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AACD8"))) PPC_WEAK_FUNC(sub_820AACD8);
PPC_FUNC_IMPL(__imp__sub_820AACD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820AACE0;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,440(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f13,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f11,724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stfs f11,32(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f10,756(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stfs f10,32(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f9,820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f8,852(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f8,32(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f7,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,60(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// stfs f7,32(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f6,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f6.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f5,1044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f5.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stfs f5,32(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f4,1012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// stfs f4,32(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f3,884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f3.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f2,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stfs f2,32(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f1,32(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aaed0
	if (ctx.cr6.eq) goto loc_820AAED0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,716(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 716);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r11,10424
	ctx.r11.s64 = ctx.r11.s64 + 10424;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820AAE50:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820aae64
	if (ctx.cr6.eq) goto loc_820AAE64;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_820AAE64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820aae7c
	if (ctx.cr6.eq) goto loc_820AAE7C;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_820AAE7C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820aae94
	if (ctx.cr6.eq) goto loc_820AAE94;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_820AAE94:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820aaeac
	if (ctx.cr6.eq) goto loc_820AAEAC;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_820AAEAC:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820aaec4
	if (ctx.cr6.eq) goto loc_820AAEC4;
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_820AAEC4:
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x820aae50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AAE50;
loc_820AAED0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r30,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f12,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x820aaf34
	if (ctx.cr6.eq) goto loc_820AAF34;
	// lhz r11,1660(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1660);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820aaf1c
	if (!ctx.cr6.lt) goto loc_820AAF1C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820AAF1C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f11,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f10,32(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_820AAF34:
	// rlwinm r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aaf80
	if (ctx.cr6.eq) goto loc_820AAF80;
	// lhz r11,1662(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1662);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820aaf68
	if (!ctx.cr6.lt) goto loc_820AAF68;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820AAF68:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f11,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f10,32(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_820AAF80:
	// rlwinm r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aafcc
	if (ctx.cr6.eq) goto loc_820AAFCC;
	// lhz r11,1664(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1664);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820aafb4
	if (!ctx.cr6.lt) goto loc_820AAFB4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820AAFB4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f11,916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stfs f10,32(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_820AAFCC:
	// rlwinm r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab018
	if (ctx.cr6.eq) goto loc_820AB018;
	// lhz r11,1666(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1666);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820ab000
	if (!ctx.cr6.lt) goto loc_820AB000;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820AB000:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f13,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stfs f12,32(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
loc_820AB018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a8e70
	ctx.lr = 0x820AB020;
	sub_820A8E70(ctx, base);
	// bl 0x820aa838
	ctx.lr = 0x820AB024;
	sub_820AA838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820aab90
	ctx.lr = 0x820AB02C;
	sub_820AAB90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x820ab04c
	if (!ctx.cr6.eq) goto loc_820AB04C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0948
	ctx.lr = 0x820AB048;
	sub_820F0948(ctx, base);
	// b 0x820ab0d0
	goto loc_820AB0D0;
loc_820AB04C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
loc_820AB058:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// and r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 & ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stfs f30,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// beq cr6,0x820ab0a8
	if (ctx.cr6.eq) goto loc_820AB0A8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82187400
	ctx.lr = 0x820AB094;
	sub_82187400(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stfs f30,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// b 0x820ab0b8
	goto loc_820AB0B8;
loc_820AB0A8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stfs f31,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_820AB0B8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x820ab058
	if (ctx.cr6.lt) goto loc_820AB058;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821906b8
	ctx.lr = 0x820AB0D0;
	sub_821906B8(ctx, base);
loc_820AB0D0:
	// lwz r11,604(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab104
	if (ctx.cr6.eq) goto loc_820AB104;
	// lwz r11,836(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ab104
	if (!ctx.cr6.eq) goto loc_820AB104;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r27,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820AB104:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
loc_820AB10C:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82187400
	ctx.lr = 0x820AB12C;
	sub_82187400(ctx, base);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// stfs f30,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// blt cr6,0x820ab10c
	if (ctx.cr6.lt) goto loc_820AB10C;
	// lbz r11,1945(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1945);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab1b4
	if (ctx.cr6.eq) goto loc_820AB1B4;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,1945(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1945, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r11,10932
	ctx.r8.s64 = ctx.r11.s64 + 10932;
loc_820AB170:
	// stb r25,1945(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1945, ctx.r25.u8);
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// slw r7,r25,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lbz r6,1944(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1944);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// bne cr6,0x820ab1a4
	if (!ctx.cr6.eq) goto loc_820AB1A4;
	// rlwinm r5,r6,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_820AB1A4:
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820ab170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AB170;
loc_820AB1B4:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x821906b8
	ctx.lr = 0x820AB1BC;
	sub_821906B8(ctx, base);
	// stw r27,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820AB1D0"))) PPC_WEAK_FUNC(sub_820AB1D0);
PPC_FUNC_IMPL(__imp__sub_820AB1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820AB1D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,10596
	ctx.r10.s64 = ctx.r11.s64 + 10596;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820ab200
	if (ctx.cr6.eq) goto loc_820AB200;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820AB200;
	sub_82183E40(ctx, base);
loc_820AB200:
	// lwz r3,452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab21c
	if (ctx.cr6.eq) goto loc_820AB21C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820AB21C;
	sub_82183E40(ctx, base);
loc_820AB21C:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ab240
	if (ctx.cr6.eq) goto loc_820AB240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190648
	ctx.lr = 0x820AB234;
	sub_82190648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820AB240;
	sub_82183E40(ctx, base);
loc_820AB240:
	// lwz r30,204(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ab264
	if (ctx.cr6.eq) goto loc_820AB264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190648
	ctx.lr = 0x820AB258;
	sub_82190648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820AB264;
	sub_82183E40(ctx, base);
loc_820AB264:
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f10a8
	ctx.lr = 0x820AB270;
	sub_820F10A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820AB278"))) PPC_WEAK_FUNC(sub_820AB278);
PPC_FUNC_IMPL(__imp__sub_820AB278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820ab1d0
	ctx.lr = 0x820AB298;
	sub_820AB1D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab2b4
	if (ctx.cr6.eq) goto loc_820AB2B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AB2B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AB2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB2CC"))) PPC_WEAK_FUNC(sub_820AB2CC);
PPC_FUNC_IMPL(__imp__sub_820AB2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB2D0"))) PPC_WEAK_FUNC(sub_820AB2D0);
PPC_FUNC_IMPL(__imp__sub_820AB2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820AB2D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,10960
	ctx.r9.s64 = ctx.r11.s64 + 10960;
	// addi r8,r10,10952
	ctx.r8.s64 = ctx.r10.s64 + 10952;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab31c
	if (ctx.cr6.eq) goto loc_820AB31C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AB31C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab344
	if (ctx.cr6.eq) goto loc_820AB344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AB344:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x820AB350;
	sub_821857F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,28120
	ctx.r10.s64 = ctx.r11.s64 + 28120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820AB364"))) PPC_WEAK_FUNC(sub_820AB364);
PPC_FUNC_IMPL(__imp__sub_820AB364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB368"))) PPC_WEAK_FUNC(sub_820AB368);
PPC_FUNC_IMPL(__imp__sub_820AB368) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab3c8
	if (!ctx.cr6.eq) goto loc_820AB3C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab410
	if (!ctx.cr6.eq) goto loc_820AB410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab690
	ctx.lr = 0x820AB3B0;
	sub_820AB690(ctx, base);
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
loc_820AB3C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x820ab410
	if (!ctx.cr6.eq) goto loc_820AB410;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x820ab690
	ctx.lr = 0x820AB3F8;
	sub_820AB690(ctx, base);
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
loc_820AB410:
	// bl 0x820cc490
	ctx.lr = 0x820AB414;
	sub_820CC490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB428"))) PPC_WEAK_FUNC(sub_820AB428);
PPC_FUNC_IMPL(__imp__sub_820AB428) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab488
	if (!ctx.cr6.eq) goto loc_820AB488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ab4d0
	if (!ctx.cr6.eq) goto loc_820AB4D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab690
	ctx.lr = 0x820AB470;
	sub_820AB690(ctx, base);
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
loc_820AB488:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820ab4d0
	if (!ctx.cr6.eq) goto loc_820AB4D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x820ab690
	ctx.lr = 0x820AB4B8;
	sub_820AB690(ctx, base);
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
loc_820AB4D0:
	// bl 0x820cc590
	ctx.lr = 0x820AB4D4;
	sub_820CC590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB4E8"))) PPC_WEAK_FUNC(sub_820AB4E8);
PPC_FUNC_IMPL(__imp__sub_820AB4E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x820ab548
	sub_820AB548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB4F0"))) PPC_WEAK_FUNC(sub_820AB4F0);
PPC_FUNC_IMPL(__imp__sub_820AB4F0) {
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
	// bl 0x820ab6b0
	ctx.lr = 0x820AB508;
	sub_820AB6B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,10960
	ctx.r8.s64 = ctx.r10.s64 + 10960;
	// addi r7,r9,10952
	ctx.r7.s64 = ctx.r9.s64 + 10952;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB544"))) PPC_WEAK_FUNC(sub_820AB544);
PPC_FUNC_IMPL(__imp__sub_820AB544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB548"))) PPC_WEAK_FUNC(sub_820AB548);
PPC_FUNC_IMPL(__imp__sub_820AB548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820ab2d0
	ctx.lr = 0x820AB568;
	sub_820AB2D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab584
	if (ctx.cr6.eq) goto loc_820AB584;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AB580;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AB584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB59C"))) PPC_WEAK_FUNC(sub_820AB59C);
PPC_FUNC_IMPL(__imp__sub_820AB59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB5A0"))) PPC_WEAK_FUNC(sub_820AB5A0);
PPC_FUNC_IMPL(__imp__sub_820AB5A0) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ab678
	if (ctx.cr6.eq) goto loc_820AB678;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ab678
	if (ctx.cr6.eq) goto loc_820AB678;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820ab608
	if (!ctx.cr6.eq) goto loc_820AB608;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820ab670
	goto loc_820AB670;
loc_820AB608:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820ab62c
	if (!ctx.cr6.eq) goto loc_820AB62C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x820ab670
	goto loc_820AB670;
loc_820AB62C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820ab650
	if (!ctx.cr6.eq) goto loc_820AB650;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x820ab670
	goto loc_820AB670;
loc_820AB650:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x820ab678
	if (!ctx.cr6.eq) goto loc_820AB678;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_820AB670:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AB678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AB678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB68C"))) PPC_WEAK_FUNC(sub_820AB68C);
PPC_FUNC_IMPL(__imp__sub_820AB68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB690"))) PPC_WEAK_FUNC(sub_820AB690);
PPC_FUNC_IMPL(__imp__sub_820AB690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB6A0"))) PPC_WEAK_FUNC(sub_820AB6A0);
PPC_FUNC_IMPL(__imp__sub_820AB6A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB6AC"))) PPC_WEAK_FUNC(sub_820AB6AC);
PPC_FUNC_IMPL(__imp__sub_820AB6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB6B0"))) PPC_WEAK_FUNC(sub_820AB6B0);
PPC_FUNC_IMPL(__imp__sub_820AB6B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,28120
	ctx.r10.s64 = ctx.r11.s64 + 28120;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82185740
	ctx.lr = 0x820AB6DC;
	sub_82185740(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,11028
	ctx.r7.s64 = ctx.r9.s64 + 11028;
	// addi r6,r8,11020
	ctx.r6.s64 = ctx.r8.s64 + 11020;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_820AB718"))) PPC_WEAK_FUNC(sub_820AB718);
PPC_FUNC_IMPL(__imp__sub_820AB718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x820ab720
	sub_820AB720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AB720"))) PPC_WEAK_FUNC(sub_820AB720);
PPC_FUNC_IMPL(__imp__sub_820AB720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821857f0
	ctx.lr = 0x820AB744;
	sub_821857F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,28120
	ctx.r9.s64 = ctx.r11.s64 + 28120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x820ab76c
	if (ctx.cr6.eq) goto loc_820AB76C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AB768;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AB76C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB784"))) PPC_WEAK_FUNC(sub_820AB784);
PPC_FUNC_IMPL(__imp__sub_820AB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB788"))) PPC_WEAK_FUNC(sub_820AB788);
PPC_FUNC_IMPL(__imp__sub_820AB788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ab7b0
	if (!ctx.cr6.lt) goto loc_820AB7B0;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_820AB7B0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB7C0"))) PPC_WEAK_FUNC(sub_820AB7C0);
PPC_FUNC_IMPL(__imp__sub_820AB7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ab7e8
	if (!ctx.cr6.lt) goto loc_820AB7E8;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_820AB7E8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB7F8"))) PPC_WEAK_FUNC(sub_820AB7F8);
PPC_FUNC_IMPL(__imp__sub_820AB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,11072
	ctx.r10.s64 = ctx.r11.s64 + 11072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x820AB824;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ab840
	if (ctx.cr6.eq) goto loc_820AB840;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AB83C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AB840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB858"))) PPC_WEAK_FUNC(sub_820AB858);
PPC_FUNC_IMPL(__imp__sub_820AB858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r7,-5052
	ctx.r10.s64 = ctx.r7.s64 + -5052;
	// lfs f11,11092(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11092);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,11088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11088);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820AB87C:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab8c0
	if (ctx.cr6.eq) goto loc_820AB8C0;
	// lbz r9,573(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ab8c0
	if (!ctx.cr6.eq) goto loc_820AB8C0;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820ab8c0
	if (ctx.cr6.eq) goto loc_820AB8C0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820ab8b4
	if (!ctx.cr6.gt) goto loc_820AB8B4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820AB8B4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820ab8c0
	if (!ctx.cr6.lt) goto loc_820AB8C0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820AB8C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab904
	if (ctx.cr6.eq) goto loc_820AB904;
	// lbz r9,573(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ab904
	if (!ctx.cr6.eq) goto loc_820AB904;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820ab904
	if (ctx.cr6.eq) goto loc_820AB904;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820ab8f8
	if (!ctx.cr6.gt) goto loc_820AB8F8;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820AB8F8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820ab904
	if (!ctx.cr6.lt) goto loc_820AB904;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820AB904:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab948
	if (ctx.cr6.eq) goto loc_820AB948;
	// lbz r9,573(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ab948
	if (!ctx.cr6.eq) goto loc_820AB948;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820ab948
	if (ctx.cr6.eq) goto loc_820AB948;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820ab93c
	if (!ctx.cr6.gt) goto loc_820AB93C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820AB93C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820ab948
	if (!ctx.cr6.lt) goto loc_820AB948;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820AB948:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x820ab87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AB87C;
	// fadds f10,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ab980
	if (!ctx.cr6.lt) goto loc_820AB980;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// b 0x820ab998
	goto loc_820AB998;
loc_820AB980:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fsubs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_820AB998:
	// lfs f11,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AB9BC"))) PPC_WEAK_FUNC(sub_820AB9BC);
PPC_FUNC_IMPL(__imp__sub_820AB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AB9C0"))) PPC_WEAK_FUNC(sub_820AB9C0);
PPC_FUNC_IMPL(__imp__sub_820AB9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r7,-5052
	ctx.r10.s64 = ctx.r7.s64 + -5052;
	// lfs f11,11092(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11092);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,11088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11088);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820AB9E4:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aba1c
	if (ctx.cr6.eq) goto loc_820ABA1C;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820aba1c
	if (ctx.cr6.eq) goto loc_820ABA1C;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820aba10
	if (!ctx.cr6.gt) goto loc_820ABA10;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820ABA10:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820aba1c
	if (!ctx.cr6.lt) goto loc_820ABA1C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820ABA1C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aba54
	if (ctx.cr6.eq) goto loc_820ABA54;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820aba54
	if (ctx.cr6.eq) goto loc_820ABA54;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820aba48
	if (!ctx.cr6.gt) goto loc_820ABA48;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820ABA48:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820aba54
	if (!ctx.cr6.lt) goto loc_820ABA54;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820ABA54:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820aba8c
	if (ctx.cr6.eq) goto loc_820ABA8C;
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820aba8c
	if (ctx.cr6.eq) goto loc_820ABA8C;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820aba80
	if (!ctx.cr6.gt) goto loc_820ABA80;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_820ABA80:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820aba8c
	if (!ctx.cr6.lt) goto loc_820ABA8C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820ABA8C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x820ab9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AB9E4;
	// fadds f10,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820abac4
	if (!ctx.cr6.lt) goto loc_820ABAC4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// b 0x820abadc
	goto loc_820ABADC;
loc_820ABAC4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fsubs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_820ABADC:
	// lfs f11,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABB00"))) PPC_WEAK_FUNC(sub_820ABB00);
PPC_FUNC_IMPL(__imp__sub_820ABB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820abb40
	if (!ctx.cr6.eq) goto loc_820ABB40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-8752
	ctx.r8.s64 = ctx.r11.s64 + -8752;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,-8752(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8752, temp.u32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// blr 
	return;
loc_820ABB40:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABB48"))) PPC_WEAK_FUNC(sub_820ABB48);
PPC_FUNC_IMPL(__imp__sub_820ABB48) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820ABB68;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,11072
	ctx.r6.s64 = ctx.r11.s64 + 11072;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lfs f0,11084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lfs f13,11080(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11080);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABBF0"))) PPC_WEAK_FUNC(sub_820ABBF0);
PPC_FUNC_IMPL(__imp__sub_820ABBF0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820abc28
	if (!ctx.cr6.eq) goto loc_820ABC28;
	// bl 0x820ab858
	ctx.lr = 0x820ABC10;
	sub_820AB858(ctx, base);
	// bl 0x820ab9c0
	ctx.lr = 0x820ABC14;
	sub_820AB9C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_820ABC28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABC38"))) PPC_WEAK_FUNC(sub_820ABC38);
PPC_FUNC_IMPL(__imp__sub_820ABC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x820ab368
	sub_820AB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ABC3C"))) PPC_WEAK_FUNC(sub_820ABC3C);
PPC_FUNC_IMPL(__imp__sub_820ABC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABC40"))) PPC_WEAK_FUNC(sub_820ABC40);
PPC_FUNC_IMPL(__imp__sub_820ABC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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

__attribute__((alias("__imp__sub_820ABC54"))) PPC_WEAK_FUNC(sub_820ABC54);
PPC_FUNC_IMPL(__imp__sub_820ABC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABC58"))) PPC_WEAK_FUNC(sub_820ABC58);
PPC_FUNC_IMPL(__imp__sub_820ABC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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

__attribute__((alias("__imp__sub_820ABC6C"))) PPC_WEAK_FUNC(sub_820ABC6C);
PPC_FUNC_IMPL(__imp__sub_820ABC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABC70"))) PPC_WEAK_FUNC(sub_820ABC70);
PPC_FUNC_IMPL(__imp__sub_820ABC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8736);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820abc90
	if (ctx.cr6.eq) goto loc_820ABC90;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820ABC90:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABC98"))) PPC_WEAK_FUNC(sub_820ABC98);
PPC_FUNC_IMPL(__imp__sub_820ABC98) {
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
	ctx.lr = 0x820ABCA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820abcc0
	if (ctx.cr6.eq) goto loc_820ABCC0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x820ABCBC;
	sub_82183448(ctx, base);
	// b 0x820abcc8
	goto loc_820ABCC8;
loc_820ABCC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820ABCC8;
	sub_821845A0(ctx, base);
loc_820ABCC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abcec
	if (ctx.cr6.eq) goto loc_820ABCEC;
	// bl 0x820cc658
	ctx.lr = 0x820ABCD4;
	sub_820CC658(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8532(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820ABCEC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8532, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ABD08"))) PPC_WEAK_FUNC(sub_820ABD08);
PPC_FUNC_IMPL(__imp__sub_820ABD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820ABD10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r11,11112
	ctx.r7.s64 = ctx.r11.s64 + 11112;
	// addi r6,r10,11104
	ctx.r6.s64 = ctx.r10.s64 + 11104;
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,240
	ctx.r10.s64 = 240;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-8532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-23620(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23620, ctx.r11.u32);
	// stw r10,-23616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23616, ctx.r10.u32);
	// beq cr6,0x820abd7c
	if (ctx.cr6.eq) goto loc_820ABD7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ABD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-8532(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8532, ctx.r29.u32);
	// b 0x820abda0
	goto loc_820ABDA0;
loc_820ABD7C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abd9c
	if (ctx.cr6.eq) goto loc_820ABD9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ABD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820ABD9C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820ABDA0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820abdb8
	if (ctx.cr6.eq) goto loc_820ABDB8;
	// bl 0x820b31b8
	ctx.lr = 0x820ABDB8;
	sub_820B31B8(ctx, base);
loc_820ABDB8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820abdcc
	if (ctx.cr6.eq) goto loc_820ABDCC;
	// bl 0x820b26e0
	ctx.lr = 0x820ABDCC;
	sub_820B26E0(ctx, base);
loc_820ABDCC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abdec
	if (ctx.cr6.eq) goto loc_820ABDEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ABDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820ABDEC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abe10
	if (ctx.cr6.eq) goto loc_820ABE10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ABE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820ABE10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13940
	ctx.r9.s64 = ctx.r11.s64 + 13940;
	// addi r8,r10,14000
	ctx.r8.s64 = ctx.r10.s64 + 14000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x820ab2d0
	ctx.lr = 0x820ABE34;
	sub_820AB2D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820ABE3C"))) PPC_WEAK_FUNC(sub_820ABE3C);
PPC_FUNC_IMPL(__imp__sub_820ABE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABE40"))) PPC_WEAK_FUNC(sub_820ABE40);
PPC_FUNC_IMPL(__imp__sub_820ABE40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x820ac1a0
	sub_820AC1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ABE48"))) PPC_WEAK_FUNC(sub_820ABE48);
PPC_FUNC_IMPL(__imp__sub_820ABE48) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ABE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820ABE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820abe94
	if (ctx.cr6.eq) goto loc_820ABE94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab690
	ctx.lr = 0x820ABE94;
	sub_820AB690(ctx, base);
loc_820ABE94:
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

__attribute__((alias("__imp__sub_820ABEAC"))) PPC_WEAK_FUNC(sub_820ABEAC);
PPC_FUNC_IMPL(__imp__sub_820ABEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABEB0"))) PPC_WEAK_FUNC(sub_820ABEB0);
PPC_FUNC_IMPL(__imp__sub_820ABEB0) {
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
	ctx.lr = 0x820ABEC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820abed8
	if (ctx.cr6.eq) goto loc_820ABED8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820ABED4;
	sub_82183448(ctx, base);
	// b 0x820abee0
	goto loc_820ABEE0;
loc_820ABED8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820ABEE0;
	sub_821845A0(ctx, base);
loc_820ABEE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abefc
	if (ctx.cr6.eq) goto loc_820ABEFC;
	// bl 0x820cd400
	ctx.lr = 0x820ABEEC;
	sub_820CD400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820ABEFC:
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

__attribute__((alias("__imp__sub_820ABF10"))) PPC_WEAK_FUNC(sub_820ABF10);
PPC_FUNC_IMPL(__imp__sub_820ABF10) {
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
	ctx.lr = 0x820ABF20;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820abf38
	if (ctx.cr6.eq) goto loc_820ABF38;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x820ABF34;
	sub_82183448(ctx, base);
	// b 0x820abf40
	goto loc_820ABF40;
loc_820ABF38:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820ABF40;
	sub_821845A0(ctx, base);
loc_820ABF40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abf5c
	if (ctx.cr6.eq) goto loc_820ABF5C;
	// bl 0x820cdb10
	ctx.lr = 0x820ABF4C;
	sub_820CDB10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820ABF5C:
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

__attribute__((alias("__imp__sub_820ABF70"))) PPC_WEAK_FUNC(sub_820ABF70);
PPC_FUNC_IMPL(__imp__sub_820ABF70) {
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
	// bl 0x82183850
	ctx.lr = 0x820ABF88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820abfa0
	if (ctx.cr6.eq) goto loc_820ABFA0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x820ABF9C;
	sub_82183448(ctx, base);
	// b 0x820abfa8
	goto loc_820ABFA8;
loc_820ABFA0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820ABFA8;
	sub_821845A0(ctx, base);
loc_820ABFA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820abfcc
	if (ctx.cr6.eq) goto loc_820ABFCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820cdc60
	ctx.lr = 0x820ABFB8;
	sub_820CDC60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820ABFCC:
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

__attribute__((alias("__imp__sub_820ABFE4"))) PPC_WEAK_FUNC(sub_820ABFE4);
PPC_FUNC_IMPL(__imp__sub_820ABFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ABFE8"))) PPC_WEAK_FUNC(sub_820ABFE8);
PPC_FUNC_IMPL(__imp__sub_820ABFE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,11096
	ctx.r9.s64 = ctx.r11.s64 + 11096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820ac020
	if (ctx.cr6.eq) goto loc_820AC020;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AC01C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AC020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC034"))) PPC_WEAK_FUNC(sub_820AC034);
PPC_FUNC_IMPL(__imp__sub_820AC034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC038"))) PPC_WEAK_FUNC(sub_820AC038);
PPC_FUNC_IMPL(__imp__sub_820AC038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820ab4f0
	ctx.lr = 0x820AC054;
	sub_820AB4F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// addi r9,r11,11112
	ctx.r9.s64 = ctx.r11.s64 + 11112;
	// addi r8,r10,11104
	ctx.r8.s64 = ctx.r10.s64 + 11104;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r11,-8532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ac084
	if (!ctx.cr6.eq) goto loc_820AC084;
	// bl 0x820abc98
	ctx.lr = 0x820AC080;
	sub_820ABC98(ctx, base);
	// lwz r11,-8532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8532);
loc_820AC084:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AC0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820AC0A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ac0bc
	if (ctx.cr6.eq) goto loc_820AC0BC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x820AC0B8;
	sub_82183448(ctx, base);
	// b 0x820ac0c4
	goto loc_820AC0C4;
loc_820AC0BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820AC0C4;
	sub_821845A0(ctx, base);
loc_820AC0C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac0e0
	if (ctx.cr6.eq) goto loc_820AC0E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,11176
	ctx.r9.s64 = ctx.r10.s64 + 11176;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x820ac0e4
	goto loc_820AC0E4;
loc_820AC0E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AC0E4:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820AC0EC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ac104
	if (ctx.cr6.eq) goto loc_820AC104;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x820AC100;
	sub_82183448(ctx, base);
	// b 0x820ac10c
	goto loc_820AC10C;
loc_820AC104:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820AC10C;
	sub_821845A0(ctx, base);
loc_820AC10C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac128
	if (ctx.cr6.eq) goto loc_820AC128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,11184
	ctx.r9.s64 = ctx.r10.s64 + 11184;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x820ac12c
	goto loc_820AC12C;
loc_820AC128:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AC12C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,-4984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820ac144
	if (ctx.cr6.eq) goto loc_820AC144;
	// bl 0x820b3c40
	ctx.lr = 0x820AC144;
	sub_820B3C40(ctx, base);
loc_820AC144:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// stw r11,-8736(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8736, ctx.r11.u32);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// stw r10,-8732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8732, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,600
	ctx.r11.s64 = 600;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r9,-8524(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8524, ctx.r9.u32);
	// stw r11,-23620(r6)
	PPC_STORE_U32(ctx.r6.u32 + -23620, ctx.r11.u32);
	// stw r10,-23616(r5)
	PPC_STORE_U32(ctx.r5.u32 + -23616, ctx.r10.u32);
	// bl 0x822135f8
	ctx.lr = 0x820AC184;
	sub_822135F8(ctx, base);
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

__attribute__((alias("__imp__sub_820AC1A0"))) PPC_WEAK_FUNC(sub_820AC1A0);
PPC_FUNC_IMPL(__imp__sub_820AC1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820abd08
	ctx.lr = 0x820AC1C0;
	sub_820ABD08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac1dc
	if (ctx.cr6.eq) goto loc_820AC1DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AC1D8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AC1DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC1F4"))) PPC_WEAK_FUNC(sub_820AC1F4);
PPC_FUNC_IMPL(__imp__sub_820AC1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC1F8"))) PPC_WEAK_FUNC(sub_820AC1F8);
PPC_FUNC_IMPL(__imp__sub_820AC1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82183078
	ctx.lr = 0x820AC214;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820AC220;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820AC224;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ac23c
	if (ctx.cr6.eq) goto loc_820AC23C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x820AC238;
	sub_82183448(ctx, base);
	// b 0x820ac244
	goto loc_820AC244;
loc_820AC23C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820AC244;
	sub_821845A0(ctx, base);
loc_820AC244:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac260
	if (ctx.cr6.eq) goto loc_820AC260;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,11172
	ctx.r10.s64 = ctx.r11.s64 + 11172;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x820ac264
	goto loc_820AC264;
loc_820AC260:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820AC264:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x820ef488
	ctx.lr = 0x820AC270;
	sub_820EF488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab690
	ctx.lr = 0x820AC278;
	sub_820AB690(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820AC280;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_820AC29C"))) PPC_WEAK_FUNC(sub_820AC29C);
PPC_FUNC_IMPL(__imp__sub_820AC29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC2A0"))) PPC_WEAK_FUNC(sub_820AC2A0);
PPC_FUNC_IMPL(__imp__sub_820AC2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r3,-8728(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8728, ctx.r3.u32);
	// stw r11,-8724(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC2C0"))) PPC_WEAK_FUNC(sub_820AC2C0);
PPC_FUNC_IMPL(__imp__sub_820AC2C0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820ac2f4
	if (!ctx.cr6.eq) goto loc_820AC2F4;
loc_820AC2DC:
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
loc_820AC2F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd88
	ctx.lr = 0x820AC2FC;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ac328
	if (!ctx.cr6.eq) goto loc_820AC328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e7f0
	ctx.lr = 0x820AC30C;
	sub_8208E7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ac2dc
	if (ctx.cr6.eq) goto loc_820AC2DC;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,2155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2155, ctx.xer);
	// beq cr6,0x820ac2dc
	if (ctx.cr6.eq) goto loc_820AC2DC;
	// cmpwi cr6,r11,2157
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2157, ctx.xer);
	// beq cr6,0x820ac2dc
	if (ctx.cr6.eq) goto loc_820AC2DC;
loc_820AC328:
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

__attribute__((alias("__imp__sub_820AC340"))) PPC_WEAK_FUNC(sub_820AC340);
PPC_FUNC_IMPL(__imp__sub_820AC340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820ac354
	if (!ctx.cr6.gt) goto loc_820AC354;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x820ac358
	goto loc_820AC358;
loc_820AC354:
	// fsubs f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_820AC358:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC38C"))) PPC_WEAK_FUNC(sub_820AC38C);
PPC_FUNC_IMPL(__imp__sub_820AC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC390"))) PPC_WEAK_FUNC(sub_820AC390);
PPC_FUNC_IMPL(__imp__sub_820AC390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r4,128
	ctx.r11.s64 = ctx.r4.s64 + 128;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// ld r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// ld r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r5,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r5.u64);
	// ld r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// ld r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r10,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r10.u64);
	// ld r9,104(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r9,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r9.u64);
	// lwz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// lwz r7,116(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// ld r6,128(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 128);
	// std r6,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r6.u64);
	// ld r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// std r5,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r5.u64);
	// ld r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 144);
	// std r11,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r11.u64);
	// ld r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 152);
	// std r10,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r10.u64);
	// ld r9,160(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// std r9,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r9.u64);
	// ld r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// std r8,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r8.u64);
	// ld r7,176(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// std r7,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r7.u64);
	// ld r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// std r6,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r6.u64);
	// lfs f13,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f12,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f11,200(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f10,204(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,204(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC480"))) PPC_WEAK_FUNC(sub_820AC480);
PPC_FUNC_IMPL(__imp__sub_820AC480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r10,r11,11200
	ctx.r10.s64 = ctx.r11.s64 + 11200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821a9520
	ctx.lr = 0x820AC4B0;
	sub_821A9520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103e60
	ctx.lr = 0x820AC4B8;
	sub_82103E60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ac4d4
	if (ctx.cr6.eq) goto loc_820AC4D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AC4D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AC4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC4EC"))) PPC_WEAK_FUNC(sub_820AC4EC);
PPC_FUNC_IMPL(__imp__sub_820AC4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC4F0"))) PPC_WEAK_FUNC(sub_820AC4F0);
PPC_FUNC_IMPL(__imp__sub_820AC4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-8728(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8728, ctx.r11.u32);
	// stw r10,-8724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8724, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC50C"))) PPC_WEAK_FUNC(sub_820AC50C);
PPC_FUNC_IMPL(__imp__sub_820AC50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC510"))) PPC_WEAK_FUNC(sub_820AC510);
PPC_FUNC_IMPL(__imp__sub_820AC510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820AC518;
	sub_82248770(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82249908
	ctx.lr = 0x820AC520;
	sub_82249908(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r25,r11,29604
	ctx.r25.s64 = ctx.r11.s64 + 29604;
	// addi r28,r9,-8720
	ctx.r28.s64 = ctx.r9.s64 + -8720;
	// lwz r11,-8672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8672);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ac558
	if (!ctx.cr6.eq) goto loc_820AC558;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// stw r11,-8672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8672, ctx.r11.u32);
loc_820AC558:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r23,r10,-5052
	ctx.r23.s64 = ctx.r10.s64 + -5052;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f20,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f20.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,10412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f21,3688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3688);
	ctx.f21.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f24,11264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11264);
	ctx.f24.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f20,24(r28)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f20,20(r28)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f20,16(r28)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfs f29,28(r28)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// stfs f0,248(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 248, temp.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stfs f20,244(r26)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r26.u32 + 244, temp.u32);
	// addi r27,r26,1220
	ctx.r27.s64 = ctx.r26.s64 + 1220;
	// lfs f25,8332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8332);
	ctx.f25.f64 = double(temp.f32);
	// addi r22,r11,-29648
	ctx.r22.s64 = ctx.r11.s64 + -29648;
	// lfs f26,7888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7888);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,8324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8324);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,11260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11260);
	ctx.f27.f64 = double(temp.f32);
	// lfs f22,10192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10192);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,7896(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7896);
	ctx.f23.f64 = double(temp.f32);
	// lfs f28,8328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8328);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// stfs f20,32(r28)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
loc_820AC600:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ac8cc
	if (ctx.cr6.eq) goto loc_820AC8CC;
	// lwz r11,988(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ac644
	if (ctx.cr6.eq) goto loc_820AC644;
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lwz r8,432(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// b 0x820ac6bc
	goto loc_820AC6BC;
loc_820AC644:
	// lwz r10,172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lwz r8,432(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmuls f13,f8,f31
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_820AC6BC:
	// addi r31,r27,-4
	ctx.r31.s64 = ctx.r27.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821871a0
	ctx.lr = 0x820AC6CC;
	sub_821871A0(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x820ac6ec
	if (ctx.cr6.gt) goto loc_820AC6EC;
	// addi r29,r27,28
	ctx.r29.s64 = ctx.r27.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821871a0
	ctx.lr = 0x820AC6E4;
	sub_821871A0(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x820ac730
	if (!ctx.cr6.gt) goto loc_820AC730;
loc_820AC6EC:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r29,r27,28
	ctx.r29.s64 = ctx.r27.s64 + 28;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,4(r27)
	PPC_STORE_U64(ctx.r27.u32 + 4, ctx.r10.u64);
	// std r9,36(r27)
	PPC_STORE_U64(ctx.r27.u32 + 36, ctx.r9.u64);
	// std r8,28(r27)
	PPC_STORE_U64(ctx.r27.u32 + 28, ctx.r8.u64);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x820ac720
	if (!ctx.cr6.gt) goto loc_820AC720;
	// stfs f23,0(r27)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_820AC720:
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x820ac730
	if (!ctx.cr6.gt) goto loc_820AC730;
	// stfs f22,32(r27)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
loc_820AC730:
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac8cc
	if (ctx.cr6.eq) goto loc_820AC8CC;
	// lwz r11,612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac8cc
	if (ctx.cr6.eq) goto loc_820AC8CC;
	// lbz r11,573(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 573);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ac8cc
	if (!ctx.cr6.eq) goto loc_820AC8CC;
	// lwz r11,1956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820ac8cc
	if (ctx.cr6.eq) goto loc_820AC8CC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820ac8cc
	if (ctx.cr6.eq) goto loc_820AC8CC;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820ac77c
	if (!ctx.cr6.gt) goto loc_820AC77C;
	// stfs f0,244(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 244, temp.u32);
loc_820AC77C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bl 0x820ac2c0
	ctx.lr = 0x820AC7DC;
	sub_820AC2C0(ctx, base);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// bgt cr6,0x820ac7f4
	if (ctx.cr6.gt) goto loc_820AC7F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AC7F4:
	// lwz r10,988(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 988);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ac808
	if (ctx.cr6.eq) goto loc_820AC808;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AC808:
	// stfs f25,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f21,304(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// beq cr6,0x820ac834
	if (ctx.cr6.eq) goto loc_820AC834;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820ac834
	if (!ctx.cr6.gt) goto loc_820AC834;
	// stfs f30,304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
loc_820AC834:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ac848
	if (ctx.cr6.eq) goto loc_820AC848;
	// lfs f13,28(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// b 0x820ac84c
	goto loc_820AC84C;
loc_820AC848:
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
loc_820AC84C:
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bne cr6,0x820ac8a8
	if (!ctx.cr6.eq) goto loc_820AC8A8;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f13,32(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r9.u32);
	// std r11,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r11.u64);
	// std r10,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r10.u64);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ac888
	if (!ctx.cr6.eq) goto loc_820AC888;
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f0,32(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
loc_820AC888:
	// ld r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stfs f25,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// ld r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// b 0x820ac8c0
	goto loc_820AC8C0;
loc_820AC8A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82190098
	ctx.lr = 0x820AC8B4;
	sub_82190098(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82190098
	ctx.lr = 0x820AC8C0;
	sub_82190098(ctx, base);
loc_820AC8C0:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82190098
	ctx.lr = 0x820AC8CC;
	sub_82190098(ctx, base);
loc_820AC8CC:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ac600
	if (ctx.cr6.lt) goto loc_820AC600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82249954
	ctx.lr = 0x820AC8F0;
	sub_82249954(ctx, base);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820AC8F4"))) PPC_WEAK_FUNC(sub_820AC8F4);
PPC_FUNC_IMPL(__imp__sub_820AC8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC8F8"))) PPC_WEAK_FUNC(sub_820AC8F8);
PPC_FUNC_IMPL(__imp__sub_820AC8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-5052
	ctx.r10.s64 = ctx.r11.s64 + -5052;
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac958
	if (ctx.cr6.eq) goto loc_820AC958;
	// lwz r9,596(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ac958
	if (ctx.cr6.eq) goto loc_820AC958;
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ac958
	if (ctx.cr6.eq) goto loc_820AC958;
	// lbz r9,573(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ac958
	if (!ctx.cr6.eq) goto loc_820AC958;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820ac958
	if (ctx.cr6.eq) goto loc_820AC958;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820ac958
	if (ctx.cr6.eq) goto loc_820AC958;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
loc_820AC958:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,573(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AC9AC"))) PPC_WEAK_FUNC(sub_820AC9AC);
PPC_FUNC_IMPL(__imp__sub_820AC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AC9B0"))) PPC_WEAK_FUNC(sub_820AC9B0);
PPC_FUNC_IMPL(__imp__sub_820AC9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820AC9B8;
	sub_82248788(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,11268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11268);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r28,-8728(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8728, ctx.r28.u32);
	// lfs f13,10412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10412);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,1312(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1312, temp.u32);
	// stw r28,988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 988, ctx.r28.u32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stw r30,1300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1300, ctx.r30.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stw r30,1288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1288, ctx.r30.u32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stw r30,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r30.u32);
	// stfs f31,244(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f30,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// stfs f31,264(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// addi r29,r10,-29724
	ctx.r29.s64 = ctx.r10.s64 + -29724;
	// stfs f31,260(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f31,256(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// addi r11,r5,-29744
	ctx.r11.s64 = ctx.r5.s64 + -29744;
	// stfs f30,268(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f30,284(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f31,1216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stfs f30,1228(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1228, temp.u32);
	// stfs f31,1240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1232, temp.u32);
	// stfs f30,1244(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1244, temp.u32);
	// stfs f31,1256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// stfs f31,1252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// stfs f31,1248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// stfs f30,1260(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f30,1276(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f0,-4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// lfs f29,7884(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7884);
	ctx.f29.f64 = double(temp.f32);
	// lfs f13,3688(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3688);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stfs f12,288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stw r30,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r30.u32);
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// stfs f31,960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// stfs f31,964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// stfs f13,968(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// stfs f31,972(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f31,976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stfs f31,1284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// stfs f29,1304(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// stfs f29,1308(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820acb70
	if (ctx.cr6.eq) goto loc_820ACB70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820acb70
	if (ctx.cr6.eq) goto loc_820ACB70;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x821871d8
	ctx.lr = 0x820ACB18;
	sub_821871D8(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820acb64
	if (!ctx.cr6.gt) goto loc_820ACB64;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-29680
	ctx.r10.s64 = ctx.r11.s64 + -29680;
	// lfs f0,-29680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29680);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// stfs f0,1308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x820acb70
	if (!ctx.cr6.lt) goto loc_820ACB70;
	// b 0x820acb6c
	goto loc_820ACB6C;
loc_820ACB64:
	// lfs f0,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,1308(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
loc_820ACB6C:
	// stfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
loc_820ACB70:
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// stw r30,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r30.u32);
	// bl 0x820804f8
	ctx.lr = 0x820ACB7C;
	sub_820804F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,1088(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f30,1092(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// stfs f31,1100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// addi r11,r31,1072
	ctx.r11.s64 = ctx.r31.s64 + 1072;
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// stfs f0,1096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stw r30,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r30.u32);
	// stfs f31,1128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f31,1124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f31,1120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f30,1132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1132, temp.u32);
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// stfs f31,1136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// stw r28,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r28.u32);
	// lfs f0,11192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11192);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// lfs f13,9048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// stfs f31,1176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r28.u32);
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f13,1184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// stfs f30,1188(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f31,1192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stfs f31,1200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1200, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820ACC10"))) PPC_WEAK_FUNC(sub_820ACC10);
PPC_FUNC_IMPL(__imp__sub_820ACC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820acc38
	if (!ctx.cr6.gt) goto loc_820ACC38;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-8540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820acc38
	if (ctx.cr6.eq) goto loc_820ACC38;
	// mulli r11,r5,400
	ctx.r11.s64 = ctx.r5.s64 * 400;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-396
	ctx.r11.s64 = ctx.r11.s64 + -396;
	// stw r11,1288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1288, ctx.r11.u32);
loc_820ACC38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,1284(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1284, temp.u32);
	// stw r5,1300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1300, ctx.r5.u32);
	// stw r11,1292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1292, ctx.r11.u32);
	// stw r6,1296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1296, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ACC50"))) PPC_WEAK_FUNC(sub_820ACC50);
PPC_FUNC_IMPL(__imp__sub_820ACC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820ACC58;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-8976(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820acdc0
	if (ctx.cr6.eq) goto loc_820ACDC0;
	// lfs f2,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82249c38
	ctx.lr = 0x820ACC84;
	sub_82249C38(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820accac
	if (ctx.cr6.eq) goto loc_820ACCAC;
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820accac
	if (ctx.cr6.eq) goto loc_820ACCAC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820ACCAC:
	// lwz r11,-8976(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8976);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,22740
	ctx.r29.s64 = ctx.r11.s64 + 22740;
	// lwz r11,22744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820acd00
	if (ctx.cr6.eq) goto loc_820ACD00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820ACCC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,-8976(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8976);
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x820ce010
	ctx.lr = 0x820ACCDC;
	sub_820CE010(ctx, base);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820accc8
	if (ctx.cr6.lt) goto loc_820ACCC8;
loc_820ACD00:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r10,-5000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5000);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820acdc0
	if (!ctx.cr6.eq) goto loc_820ACDC0;
	// lwz r10,228(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820acdc0
	if (ctx.cr6.eq) goto loc_820ACDC0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820acdc0
	if (!ctx.cr6.eq) goto loc_820ACDC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820acdc0
	if (ctx.cr6.eq) goto loc_820ACDC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,8608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f31.f64 = double(temp.f32);
loc_820ACD3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bgt cr6,0x820acdac
	if (ctx.cr6.gt) goto loc_820ACDAC;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f30,f11
	ctx.cr6.compare(ctx.f30.f64, ctx.f11.f64);
	// bgt cr6,0x820acdac
	if (ctx.cr6.gt) goto loc_820ACDAC;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r3,-8976(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8976);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x820ce010
	ctx.lr = 0x820ACD9C;
	sub_820CE010(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
loc_820ACDAC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820acd3c
	if (ctx.cr6.lt) goto loc_820ACD3C;
loc_820ACDC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820ACDD0"))) PPC_WEAK_FUNC(sub_820ACDD0);
PPC_FUNC_IMPL(__imp__sub_820ACDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820ACDD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ace50
	if (ctx.cr6.eq) goto loc_820ACE50;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ace50
	if (ctx.cr6.eq) goto loc_820ACE50;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820ACE00:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ace40
	if (ctx.cr6.eq) goto loc_820ACE40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dd88
	ctx.lr = 0x820ACE14;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ace5c
	if (!ctx.cr6.eq) goto loc_820ACE5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e7f0
	ctx.lr = 0x820ACE24;
	sub_8208E7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ace40
	if (ctx.cr6.eq) goto loc_820ACE40;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,2155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2155, ctx.xer);
	// beq cr6,0x820ace40
	if (ctx.cr6.eq) goto loc_820ACE40;
	// cmpwi cr6,r11,2157
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2157, ctx.xer);
	// bne cr6,0x820ace5c
	if (!ctx.cr6.eq) goto loc_820ACE5C;
loc_820ACE40:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ace00
	if (ctx.cr6.lt) goto loc_820ACE00;
loc_820ACE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820ACE5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820ACE68"))) PPC_WEAK_FUNC(sub_820ACE68);
PPC_FUNC_IMPL(__imp__sub_820ACE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f13,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820aceac
	if (ctx.cr6.eq) goto loc_820ACEAC;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r3,1168
	ctx.r9.s64 = ctx.r3.s64 + 1168;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820ACE9C:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820ace9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820ACE9C;
	// b 0x820acedc
	goto loc_820ACEDC;
loc_820ACEAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,1176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,1188(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1188, temp.u32);
	// stfs f0,1192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1192, temp.u32);
	// stw r10,1168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1168, ctx.r10.u32);
	// stw r10,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, ctx.r10.u32);
	// stw r7,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r7.u32);
	// lfs f12,11192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,9048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9048);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,1180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// stfs f11,1184(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1184, temp.u32);
loc_820ACEDC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r11,r3,1072
	ctx.r11.s64 = ctx.r3.s64 + 1072;
	// beq cr6,0x820acf54
	if (ctx.cr6.eq) goto loc_820ACF54;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,1076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1076, ctx.r9.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r8.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,1084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1084, ctx.r7.u32);
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1088(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1088, temp.u32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1092(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1092, temp.u32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1096(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// lfs f11,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1100(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1100, temp.u32);
	// ld r6,48(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// std r6,1120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1120, ctx.r6.u64);
	// ld r4,56(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 56);
	// std r4,1128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1128, ctx.r4.u64);
	// lfs f10,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1136(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1136, temp.u32);
	// lwz r11,68(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// stw r11,1140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1140, ctx.r11.u32);
	// lwz r10,80(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// blr 
	return;
loc_820ACF54:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,1088(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1088, temp.u32);
	// stfs f13,1092(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1092, temp.u32);
	// stw r10,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r10.u32);
	// stfs f0,1100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1100, temp.u32);
	// stw r10,1076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1076, ctx.r10.u32);
	// stw r10,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r10.u32);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r10,1084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1084, ctx.r10.u32);
	// lfs f12,9852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1096(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// stfs f0,1128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// stfs f0,1124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// stfs f13,1132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1132, temp.u32);
	// stw r10,1140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1140, ctx.r10.u32);
	// stfs f0,1136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1136, temp.u32);
	// stw r7,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ACFA0"))) PPC_WEAK_FUNC(sub_820ACFA0);
PPC_FUNC_IMPL(__imp__sub_820ACFA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820ac2c0
	ctx.lr = 0x820ACFC0;
	sub_820AC2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ad054
	if (ctx.cr6.eq) goto loc_820AD054;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ad054
	if (!ctx.cr6.eq) goto loc_820AD054;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,1284(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,29604
	ctx.r4.s64 = ctx.r5.s64 + 29604;
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f12,9852(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ace68
	ctx.lr = 0x820AD054;
	sub_820ACE68(ctx, base);
loc_820AD054:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AD06C"))) PPC_WEAK_FUNC(sub_820AD06C);
PPC_FUNC_IMPL(__imp__sub_820AD06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD070"))) PPC_WEAK_FUNC(sub_820AD070);
PPC_FUNC_IMPL(__imp__sub_820AD070) {
	PPC_FUNC_PROLOGUE();
	// b 0x820acc50
	sub_820ACC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AD074"))) PPC_WEAK_FUNC(sub_820AD074);
PPC_FUNC_IMPL(__imp__sub_820AD074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD078"))) PPC_WEAK_FUNC(sub_820AD078);
PPC_FUNC_IMPL(__imp__sub_820AD078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820AD080;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820804f8
	ctx.lr = 0x820AD0A0;
	sub_820804F8(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f5,f13,f0,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f4,f8,f12,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f3,f10,f11,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820AD108;
	sub_820A42E0(ctx, base);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820AD124;
	sub_820A42E0(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmsubs f7,f10,f11,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f2.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f6,f0,f9,f1
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f1.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f5,f12,f13,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// std r8,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r8.u64);
	// std r5,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r5.u64);
	// bl 0x82096f18
	ctx.lr = 0x820AD1F4;
	sub_82096F18(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

