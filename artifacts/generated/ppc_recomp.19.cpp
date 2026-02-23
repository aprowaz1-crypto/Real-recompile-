#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8212DCA8"))) PPC_WEAK_FUNC(sub_8212DCA8);
PPC_FUNC_IMPL(__imp__sub_8212DCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212DCB0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,31000
	ctx.r9.s64 = ctx.r11.s64 + 31000;
	// addi r8,r10,30992
	ctx.r8.s64 = ctx.r10.s64 + 30992;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// li r30,9
	ctx.r30.s64 = 9;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8212DCE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dd00
	if (ctx.cr6.eq) goto loc_8212DD00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DD00:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212dce0
	if (!ctx.cr0.eq) goto loc_8212DCE0;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8212DD14:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dd34
	if (ctx.cr6.eq) goto loc_8212DD34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DD34:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212dd14
	if (!ctx.cr0.eq) goto loc_8212DD14;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dd60
	if (ctx.cr6.eq) goto loc_8212DD60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DD60:
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823c3048
	ctx.lr = 0x8212DD6C;
	sub_823C3048(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82185a50
	ctx.lr = 0x8212DD74;
	sub_82185A50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x8212DD7C;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212DD84"))) PPC_WEAK_FUNC(sub_8212DD84);
PPC_FUNC_IMPL(__imp__sub_8212DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212DD88"))) PPC_WEAK_FUNC(sub_8212DD88);
PPC_FUNC_IMPL(__imp__sub_8212DD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8212ddb8
	if (ctx.cr6.lt) goto loc_8212DDB8;
	// bne cr6,0x8212ddbc
	if (!ctx.cr6.eq) goto loc_8212DDBC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8212ddbc
	goto loc_8212DDBC;
loc_8212DDB8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8212DDBC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8212DDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r8,176(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8212DDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lfs f13,14876(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x8212DE34;
	sub_823C3320(ctx, base);
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

__attribute__((alias("__imp__sub_8212DE48"))) PPC_WEAK_FUNC(sub_8212DE48);
PPC_FUNC_IMPL(__imp__sub_8212DE48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8212e138
	sub_8212E138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212DE50"))) PPC_WEAK_FUNC(sub_8212DE50);
PPC_FUNC_IMPL(__imp__sub_8212DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8212DE58;
	sub_82248770(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8212DE74;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821859a0
	ctx.lr = 0x8212DE88;
	sub_821859A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r9,r11,31000
	ctx.r9.s64 = ctx.r11.s64 + 31000;
	// addi r8,r10,30992
	ctx.r8.s64 = ctx.r10.s64 + 30992;
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x8212DEC8;
	sub_823C2FF0(ctx, base);
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// bl 0x8215c080
	ctx.lr = 0x8212DED0;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212DED8;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212DEE4;
	sub_821837D0(ctx, base);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x8212DEF4;
	sub_822AA648(ctx, base);
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822aa648
	ctx.lr = 0x8212DF04;
	sub_822AA648(ctx, base);
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x8212DF14;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212df24
	if (ctx.cr6.eq) goto loc_8212DF24;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8212df28
	goto loc_8212DF28;
loc_8212DF24:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8212DF28:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,-1512(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8212DF40;
	sub_8212D0B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212d0b0
	ctx.lr = 0x8212DF50;
	sub_8212D0B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8212DF60;
	sub_8212D0B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lwz r11,32616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32616);
	// addi r28,r9,-8
	ctx.r28.s64 = ctx.r9.s64 + -8;
	// lwz r10,32612(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32612);
	// li r29,4
	ctx.r29.s64 = 4;
	// lwz r9,32620(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32620);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
loc_8212DFF0:
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82183850
	ctx.lr = 0x8212DFF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212e010
	if (ctx.cr6.eq) goto loc_8212E010;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8212E00C;
	sub_82183448(ctx, base);
	// b 0x8212e018
	goto loc_8212E018;
loc_8212E010:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8212E018;
	sub_821845A0(ctx, base);
loc_8212E018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212e028
	if (ctx.cr6.eq) goto loc_8212E028;
	// bl 0x8213bbc0
	ctx.lr = 0x8212E024;
	sub_8213BBC0(ctx, base);
	// b 0x8212e02c
	goto loc_8212E02C;
loc_8212E028:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8212E02C:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8212E03C;
	sub_821D9300(ctx, base);
	// lwzu r11,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// bne 0x8212dff0
	if (!ctx.cr0.eq) goto loc_8212DFF0;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r30,r25,-4
	ctx.r30.s64 = ctx.r25.s64 + -4;
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
	// li r29,9
	ctx.r29.s64 = 9;
loc_8212E060:
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82183850
	ctx.lr = 0x8212E068;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212e080
	if (ctx.cr6.eq) goto loc_8212E080;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8212E07C;
	sub_82183448(ctx, base);
	// b 0x8212e088
	goto loc_8212E088;
loc_8212E080:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8212E088;
	sub_821845A0(ctx, base);
loc_8212E088:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212e098
	if (ctx.cr6.eq) goto loc_8212E098;
	// bl 0x8213bbc0
	ctx.lr = 0x8212E094;
	sub_8213BBC0(ctx, base);
	// b 0x8212e09c
	goto loc_8212E09C;
loc_8212E098:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8212E09C:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r5,r27,12
	ctx.r5.s64 = ctx.r27.s64 + 12;
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8212E0AC;
	sub_821D9300(ctx, base);
	// lwzu r11,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// bne 0x8212e060
	if (!ctx.cr0.eq) goto loc_8212E060;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212d148
	ctx.lr = 0x8212E0D0;
	sub_8212D148(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8216c098
	ctx.lr = 0x8212E0FC;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212E100;
	sub_8215BD28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// addi r4,r10,4393
	ctx.r4.s64 = ctx.r10.s64 + 4393;
	// bl 0x8218a360
	ctx.lr = 0x8212E110;
	sub_8218A360(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// bl 0x821837d0
	ctx.lr = 0x8212E128;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8212E134"))) PPC_WEAK_FUNC(sub_8212E134);
PPC_FUNC_IMPL(__imp__sub_8212E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E138"))) PPC_WEAK_FUNC(sub_8212E138);
PPC_FUNC_IMPL(__imp__sub_8212E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8212dca8
	ctx.lr = 0x8212E158;
	sub_8212DCA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e174
	if (ctx.cr6.eq) goto loc_8212E174;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212E170;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212E174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E18C"))) PPC_WEAK_FUNC(sub_8212E18C);
PPC_FUNC_IMPL(__imp__sub_8212E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E190"))) PPC_WEAK_FUNC(sub_8212E190);
PPC_FUNC_IMPL(__imp__sub_8212E190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// blt cr6,0x8212e1cc
	if (ctx.cr6.lt) goto loc_8212E1CC;
	// bne cr6,0x8212e1d0
	if (!ctx.cr6.eq) goto loc_8212E1D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8212e1d0
	goto loc_8212E1D0;
loc_8212E1CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212E1D0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8212E1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r8,176(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8212E208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f13,14876(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f12,8324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x8212E250;
	sub_823C3320(ctx, base);
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

__attribute__((alias("__imp__sub_8212E264"))) PPC_WEAK_FUNC(sub_8212E264);
PPC_FUNC_IMPL(__imp__sub_8212E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E268"))) PPC_WEAK_FUNC(sub_8212E268);
PPC_FUNC_IMPL(__imp__sub_8212E268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8212E270;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82134510
	ctx.lr = 0x8212E280;
	sub_82134510(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r23,r11,456
	ctx.r23.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x8212E290;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212E294;
	sub_8215BD28(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8212e3dc
	if (ctx.cr6.lt) goto loc_8212E3DC;
	// bne cr6,0x8212e558
	if (!ctx.cr6.eq) goto loc_8212E558;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82134078
	ctx.lr = 0x8212E2B0;
	sub_82134078(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// beq cr6,0x8212e300
	if (ctx.cr6.eq) goto loc_8212E300;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212E300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E300:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,60
	ctx.r24.s64 = 60;
	// addi r28,r11,30984
	ctx.r28.s64 = ctx.r11.s64 + 30984;
	// addi r27,r10,-19280
	ctx.r27.s64 = ctx.r10.s64 + -19280;
loc_8212E318:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8212e32c
	if (!ctx.cr6.eq) goto loc_8212E32C;
	// addi r7,r23,30
	ctx.r7.s64 = ctx.r23.s64 + 30;
	// b 0x8212e37c
	goto loc_8212E37C;
loc_8212E32C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8212e350
	if (!ctx.cr6.eq) goto loc_8212E350;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212e348
	if (ctx.cr6.eq) goto loc_8212E348;
	// addi r7,r22,45
	ctx.r7.s64 = ctx.r22.s64 + 45;
	// b 0x8212e37c
	goto loc_8212E37C;
loc_8212E348:
	// addi r7,r23,292
	ctx.r7.s64 = ctx.r23.s64 + 292;
	// b 0x8212e37c
	goto loc_8212E37C;
loc_8212E350:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x8212e360
	if (!ctx.cr6.eq) goto loc_8212E360;
	// addi r7,r22,249
	ctx.r7.s64 = ctx.r22.s64 + 249;
	// b 0x8212e37c
	goto loc_8212E37C;
loc_8212E360:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x8212e370
	if (!ctx.cr6.eq) goto loc_8212E370;
	// addi r7,r22,257
	ctx.r7.s64 = ctx.r22.s64 + 257;
	// b 0x8212e37c
	goto loc_8212E37C;
loc_8212E370:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x8212e37c
	if (!ctx.cr6.eq) goto loc_8212E37C;
	// addi r7,r22,265
	ctx.r7.s64 = ctx.r22.s64 + 265;
loc_8212E37C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r30,15
	ctx.r8.s64 = ctx.r30.s64 + 15;
	// addi r9,r27,512
	ctx.r9.s64 = ctx.r27.s64 + 512;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212E3B0;
	sub_82134848(ctx, base);
	// lwzx r5,r29,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// stfiwx f13,r5,r24
	PPC_STORE_U32(ctx.r5.u32 + ctx.r24.u32, ctx.f13.u32);
	// blt cr6,0x8212e318
	if (ctx.cr6.lt) goto loc_8212E318;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82134578
	ctx.lr = 0x8212E3D4;
	sub_82134578(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8212E3DC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82133fd8
	ctx.lr = 0x8212E3E4;
	sub_82133FD8(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// beq cr6,0x8212e434
	if (ctx.cr6.eq) goto loc_8212E434;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212E434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E434:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,60
	ctx.r24.s64 = 60;
	// addi r27,r9,30984
	ctx.r27.s64 = ctx.r9.s64 + 30984;
	// addi r26,r10,-19280
	ctx.r26.s64 = ctx.r10.s64 + -19280;
	// addi r25,r11,4393
	ctx.r25.s64 = ctx.r11.s64 + 4393;
loc_8212E454:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8212e4e0
	if (!ctx.cr6.eq) goto loc_8212E4E0;
	// lhz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 28);
	// addi r28,r23,98
	ctx.r28.s64 = ctx.r23.s64 + 98;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// bl 0x8215bec8
	ctx.lr = 0x8212E470;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x8212e4a4
	if (!ctx.cr6.eq) goto loc_8212E4A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c00
	ctx.lr = 0x8212E484;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212e49c
	if (!ctx.cr6.eq) goto loc_8212E49C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230ce8
	ctx.lr = 0x8212E494;
	sub_82230CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212e4c8
	if (ctx.cr6.eq) goto loc_8212E4C8;
loc_8212E49C:
	// addi r28,r22,142
	ctx.r28.s64 = ctx.r22.s64 + 142;
	// b 0x8212e4c8
	goto loc_8212E4C8;
loc_8212E4A4:
	// bl 0x8215bec8
	ctx.lr = 0x8212E4A8;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8212e4c8
	if (!ctx.cr6.eq) goto loc_8212E4C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c00
	ctx.lr = 0x8212E4BC;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212e4c8
	if (ctx.cr6.eq) goto loc_8212E4C8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8212E4C8:
	// bl 0x8215bd60
	ctx.lr = 0x8212E4CC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212e50c
	if (ctx.cr6.eq) goto loc_8212E50C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// b 0x8212e50c
	goto loc_8212E50C;
loc_8212E4E0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8212e4f0
	if (!ctx.cr6.eq) goto loc_8212E4F0;
	// addi r28,r23,30
	ctx.r28.s64 = ctx.r23.s64 + 30;
	// b 0x8212e50c
	goto loc_8212E50C;
loc_8212E4F0:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8212e50c
	if (!ctx.cr6.eq) goto loc_8212E50C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r28,r22,45
	ctx.r28.s64 = ctx.r22.s64 + 45;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e50c
	if (!ctx.cr6.eq) goto loc_8212E50C;
	// addi r28,r23,292
	ctx.r28.s64 = ctx.r23.s64 + 292;
loc_8212E50C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r30,11
	ctx.r10.s64 = ctx.r30.s64 + 11;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82134848
	ctx.lr = 0x8212E53C;
	sub_82134848(ctx, base);
	// lwzx r8,r29,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stfiwx f13,r8,r24
	PPC_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.f13.u32);
	// blt cr6,0x8212e454
	if (ctx.cr6.lt) goto loc_8212E454;
loc_8212E558:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82134578
	ctx.lr = 0x8212E560;
	sub_82134578(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8212E568"))) PPC_WEAK_FUNC(sub_8212E568);
PPC_FUNC_IMPL(__imp__sub_8212E568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212E570;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134510
	ctx.lr = 0x8212E580;
	sub_82134510(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r28,-7488(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821add20
	ctx.lr = 0x8212E590;
	sub_821ADD20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad498
	ctx.lr = 0x8212E5A0;
	sub_821AD498(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212e5c4
	if (ctx.cr6.eq) goto loc_8212E5C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E5C4:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e5f4
	if (!ctx.cr6.eq) goto loc_8212E5F4;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8212E5D8:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8212e5d8
	if (!ctx.cr0.eq) goto loc_8212E5D8;
loc_8212E5F4:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212e624
	if (!ctx.cr6.eq) goto loc_8212E624;
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// li r31,9
	ctx.r31.s64 = 9;
loc_8212E608:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8212e608
	if (!ctx.cr0.eq) goto loc_8212E608;
loc_8212E624:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad498
	ctx.lr = 0x8212E630;
	sub_821AD498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134578
	ctx.lr = 0x8212E638;
	sub_82134578(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212E640"))) PPC_WEAK_FUNC(sub_8212E640);
PPC_FUNC_IMPL(__imp__sub_8212E640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82183850
	ctx.lr = 0x8212E660;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212e678
	if (ctx.cr6.eq) goto loc_8212E678;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82183448
	ctx.lr = 0x8212E674;
	sub_82183448(ctx, base);
	// b 0x8212e680
	goto loc_8212E680;
loc_8212E678:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821845a0
	ctx.lr = 0x8212E680;
	sub_821845A0(ctx, base);
loc_8212E680:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212e698
	if (ctx.cr6.eq) goto loc_8212E698;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8212de50
	ctx.lr = 0x8212E694;
	sub_8212DE50(ctx, base);
	// b 0x8212e69c
	goto loc_8212E69C;
loc_8212E698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212E69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E6B4"))) PPC_WEAK_FUNC(sub_8212E6B4);
PPC_FUNC_IMPL(__imp__sub_8212E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E6B8"))) PPC_WEAK_FUNC(sub_8212E6B8);
PPC_FUNC_IMPL(__imp__sub_8212E6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8212E6E0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8212e6e0
	if (ctx.cr6.gt) goto loc_8212E6E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E710"))) PPC_WEAK_FUNC(sub_8212E710);
PPC_FUNC_IMPL(__imp__sub_8212E710) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,-1496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212e7a0
	if (ctx.cr6.eq) goto loc_8212E7A0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8212e7a0
	if (ctx.cr6.lt) goto loc_8212E7A0;
	// bl 0x8212e6b8
	ctx.lr = 0x8212E740;
	sub_8212E6B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lfs f13,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,32(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f13,48(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// stfs f13,64(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// stfs f0,76(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// stfs f0,72(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 72, temp.u32);
	// stfs f0,68(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 68, temp.u32);
	// stfs f13,80(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// stfs f0,92(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// stfs f0,88(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 88, temp.u32);
	// stfs f0,84(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// stw r7,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r7.u32);
loc_8212E7A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E7B0"))) PPC_WEAK_FUNC(sub_8212E7B0);
PPC_FUNC_IMPL(__imp__sub_8212E7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E7D0"))) PPC_WEAK_FUNC(sub_8212E7D0);
PPC_FUNC_IMPL(__imp__sub_8212E7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,212(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E880"))) PPC_WEAK_FUNC(sub_8212E880);
PPC_FUNC_IMPL(__imp__sub_8212E880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,31024
	ctx.r10.s64 = ctx.r11.s64 + 31024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c30b8
	ctx.lr = 0x8212E8B0;
	sub_823C30B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212e8cc
	if (ctx.cr6.eq) goto loc_8212E8CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212E8C8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212E8CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E8E4"))) PPC_WEAK_FUNC(sub_8212E8E4);
PPC_FUNC_IMPL(__imp__sub_8212E8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E8E8"))) PPC_WEAK_FUNC(sub_8212E8E8);
PPC_FUNC_IMPL(__imp__sub_8212E8E8) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,54724
	ctx.r7.u64 = ctx.r9.u64 | 54724;
	// ori r6,r8,54980
	ctx.r6.u64 = ctx.r8.u64 | 54980;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r4,55236
	ctx.r9.u64 = ctx.r4.u64 | 55236;
	// li r4,214
	ctx.r4.s64 = 214;
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82106eb0
	ctx.lr = 0x8212E944;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x8212E948;
	sub_821D38E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E958"))) PPC_WEAK_FUNC(sub_8212E958);
PPC_FUNC_IMPL(__imp__sub_8212E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212E960;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r8,r10,55492
	ctx.r8.u64 = ctx.r10.u64 | 55492;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8212e9a8
	if (!ctx.cr6.eq) goto loc_8212E9A8;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r30,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r7,r9,55748
	ctx.r7.u64 = ctx.r9.u64 | 55748;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r5,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x8212e9c4
	goto loc_8212E9C4;
loc_8212E9A8:
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// ori r5,r7,55748
	ctx.r5.u64 = ctx.r7.u64 | 55748;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
loc_8212E9C4:
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,1924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1924);
	// addi r28,r11,456
	ctx.r28.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x8212E9E4;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212E9E8;
	sub_8215BD28(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r27,r3,45
	ctx.r27.s64 = ctx.r3.s64 + 45;
	// addi r4,r7,4393
	ctx.r4.s64 = ctx.r7.s64 + 4393;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x8218a360
	ctx.lr = 0x8212EA00;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212ea0c
	if (ctx.cr6.eq) goto loc_8212EA0C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8212EA0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,56024
	ctx.r8.u64 = ctx.r10.u64 | 56024;
	// ori r7,r9,56044
	ctx.r7.u64 = ctx.r9.u64 | 56044;
	// addi r6,r28,30
	ctx.r6.s64 = ctx.r28.s64 + 30;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r6,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// ori r8,r10,56280
	ctx.r8.u64 = ctx.r10.u64 | 56280;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8212ea64
	if (ctx.cr6.eq) goto loc_8212EA64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r7,r9,56300
	ctx.r7.u64 = ctx.r9.u64 | 56300;
	// stwx r30,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r30.u32);
	// b 0x8212ea7c
	goto loc_8212EA7C;
loc_8212EA64:
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r9,r28,292
	ctx.r9.s64 = ctx.r28.s64 + 292;
	// ori r5,r7,56300
	ctx.r5.u64 = ctx.r7.u64 | 56300;
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r30.u32);
loc_8212EA7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,219
	ctx.r4.s64 = 219;
	// addi r5,r11,31008
	ctx.r5.s64 = ctx.r11.s64 + 31008;
	// bl 0x8212e7d0
	ctx.lr = 0x8212EA90;
	sub_8212E7D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212EA98"))) PPC_WEAK_FUNC(sub_8212EA98);
PPC_FUNC_IMPL(__imp__sub_8212EA98) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212eaf0
	if (!ctx.cr6.gt) goto loc_8212EAF0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x823c3160
	ctx.lr = 0x8212EAC0;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212eb08
	if (ctx.cr6.eq) goto loc_8212EB08;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8212EAF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212eb08
	if (ctx.cr6.eq) goto loc_8212EB08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e958
	ctx.lr = 0x8212EB08;
	sub_8212E958(ctx, base);
loc_8212EB08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EB1C"))) PPC_WEAK_FUNC(sub_8212EB1C);
PPC_FUNC_IMPL(__imp__sub_8212EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212EB20"))) PPC_WEAK_FUNC(sub_8212EB20);
PPC_FUNC_IMPL(__imp__sub_8212EB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212EB28;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ebf8
	if (ctx.cr6.eq) goto loc_8212EBF8;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8212ebf8
	if (ctx.cr6.eq) goto loc_8212EBF8;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8212EB60;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8212EB70;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x8212EB84;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8212EB90;
	sub_821AD498(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212ebe0
	if (ctx.cr6.eq) goto loc_8212EBE0;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,39
	ctx.r4.s64 = 39;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,5748(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 5748, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8210a9b0
	ctx.lr = 0x8212EBE0;
	sub_8210A9B0(ctx, base);
loc_8212EBE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8212EBEC;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8212EBF8;
	sub_821AD498(ctx, base);
loc_8212EBF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212EC00"))) PPC_WEAK_FUNC(sub_8212EC00);
PPC_FUNC_IMPL(__imp__sub_8212EC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212EC08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,31024
	ctx.r10.s64 = ctx.r11.s64 + 31024;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c34c0
	ctx.lr = 0x8212EC40;
	sub_823C34C0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// stw r29,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r29.u32);
	// stw r7,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r7.u32);
	// lwz r11,-792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -792);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwz r11,-792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -792);
	// lwz r5,148(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8212ec88
	if (ctx.cr6.eq) goto loc_8212EC88;
	// bl 0x82107368
	ctx.lr = 0x8212EC88;
	sub_82107368(ctx, base);
loc_8212EC88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3410
	ctx.lr = 0x8212EC90;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e958
	ctx.lr = 0x8212EC98;
	sub_8212E958(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,54724
	ctx.r9.u64 = ctx.r11.u64 | 54724;
	// ori r8,r10,54980
	ctx.r8.u64 = ctx.r10.u64 | 54980;
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r4,213
	ctx.r4.s64 = 213;
	// ori r6,r7,55236
	ctx.r6.u64 = ctx.r7.u64 | 55236;
	// stwx r28,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82106eb0
	ctx.lr = 0x8212ECE0;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x8212ECE4;
	sub_821D38E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212ECF0"))) PPC_WEAK_FUNC(sub_8212ECF0);
PPC_FUNC_IMPL(__imp__sub_8212ECF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ed04
	if (ctx.cr6.eq) goto loc_8212ED04;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8212ED04:
	// lwz r3,2072(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212ED0C"))) PPC_WEAK_FUNC(sub_8212ED0C);
PPC_FUNC_IMPL(__imp__sub_8212ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212ED10"))) PPC_WEAK_FUNC(sub_8212ED10);
PPC_FUNC_IMPL(__imp__sub_8212ED10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x8212ed2c
	if (ctx.cr6.eq) goto loc_8212ED2C;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// blr 
	return;
loc_8212ED2C:
	// lfs f0,516(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f12,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// lfs f13,31104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8212ed58
	if (!ctx.cr6.lt) goto loc_8212ED58;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8212ED58:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212ed74
	if (!ctx.cr6.lt) goto loc_8212ED74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,520(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// blr 
	return;
loc_8212ED74:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8212ed80
	if (!ctx.cr6.gt) goto loc_8212ED80;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8212ED80:
	// fneg f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,520(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212ED90"))) PPC_WEAK_FUNC(sub_8212ED90);
PPC_FUNC_IMPL(__imp__sub_8212ED90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,3
	ctx.r11.s64 = 3;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EDB0"))) PPC_WEAK_FUNC(sub_8212EDB0);
PPC_FUNC_IMPL(__imp__sub_8212EDB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8212eea4
	if (!ctx.cr6.gt) goto loc_8212EEA4;
	// addi r11,r4,1065
	ctx.r11.s64 = ctx.r4.s64 + 1065;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r31,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,99
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 99, ctx.xer);
	// bne cr6,0x8212ee0c
	if (!ctx.cr6.eq) goto loc_8212EE0C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8516);
	// add. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8212edf4
	if (!ctx.cr0.lt) goto loc_8212EDF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8516, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8212EDF4:
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x8212ee00
	if (!ctx.cr6.gt) goto loc_8212EE00;
	// li r11,999
	ctx.r11.s64 = 999;
loc_8212EE00:
	// stw r11,8516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8516, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8212EE0C:
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,4194
	ctx.r10.s64 = 274857984;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// ori r8,r10,19923
	ctx.r8.u64 = ctx.r10.u64 | 19923;
	// lwz r6,8516(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8516);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mulli r10,r8,1000
	ctx.r10.s64 = ctx.r8.s64 * 1000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x8212ee54
	if (!ctx.cr6.lt) goto loc_8212EE54;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8212ee60
	goto loc_8212EE60;
loc_8212EE54:
	// cmpwi cr6,r9,99
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 99, ctx.xer);
	// ble cr6,0x8212ee60
	if (!ctx.cr6.gt) goto loc_8212EE60;
	// li r9,99
	ctx.r9.s64 = 99;
loc_8212EE60:
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// cmpwi cr6,r9,99
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 99, ctx.xer);
	// bne cr6,0x8212eea0
	if (!ctx.cr6.eq) goto loc_8212EEA0;
	// mulli r11,r7,1000
	ctx.r11.s64 = ctx.r7.s64 * 1000;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addic. r11,r10,1000
	ctx.xer.ca = ctx.r10.u32 > 4294966295;
	ctx.r11.s64 = ctx.r10.s64 + 1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8212eea4
	if (!ctx.cr0.gt) goto loc_8212EEA4;
	// add. r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8212ee94
	if (!ctx.cr0.lt) goto loc_8212EE94;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8516(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8516, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8212EE94:
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x8212eea0
	if (!ctx.cr6.gt) goto loc_8212EEA0;
	// li r11,999
	ctx.r11.s64 = 999;
loc_8212EEA0:
	// stw r11,8516(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8516, ctx.r11.u32);
loc_8212EEA4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EEAC"))) PPC_WEAK_FUNC(sub_8212EEAC);
PPC_FUNC_IMPL(__imp__sub_8212EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212EEB0"))) PPC_WEAK_FUNC(sub_8212EEB0);
PPC_FUNC_IMPL(__imp__sub_8212EEB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8212EED8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212eed8
	if (ctx.cr6.lt) goto loc_8212EED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EF04"))) PPC_WEAK_FUNC(sub_8212EF04);
PPC_FUNC_IMPL(__imp__sub_8212EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212EF08"))) PPC_WEAK_FUNC(sub_8212EF08);
PPC_FUNC_IMPL(__imp__sub_8212EF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EF90"))) PPC_WEAK_FUNC(sub_8212EF90);
PPC_FUNC_IMPL(__imp__sub_8212EF90) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8212efb8
	if (ctx.cr6.eq) goto loc_8212EFB8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x8212eff8
	goto loc_8212EFF8;
loc_8212EFB8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8212efec
	if (!ctx.cr6.gt) goto loc_8212EFEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
loc_8212EFEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8212EFF8:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212f018
	if (ctx.cr6.lt) goto loc_8212F018;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8212f01c
	if (!ctx.cr6.gt) goto loc_8212F01C;
loc_8212F018:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8212F01C:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,26232
	ctx.r4.s64 = ctx.r10.s64 + 26232;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82248910
	ctx.lr = 0x8212F034;
	sub_82248910(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212F05C"))) PPC_WEAK_FUNC(sub_8212F05C);
PPC_FUNC_IMPL(__imp__sub_8212F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212F060"))) PPC_WEAK_FUNC(sub_8212F060);
PPC_FUNC_IMPL(__imp__sub_8212F060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212F068;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,41180
	ctx.r8.u64 = ctx.r11.u64 | 41180;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r9,31124
	ctx.r6.s64 = ctx.r9.s64 + 31124;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r7,41436
	ctx.r5.u64 = ctx.r7.u64 | 41436;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r30,r31,3104
	ctx.r30.s64 = ctx.r31.s64 + 3104;
	// ori r10,r4,41692
	ctx.r10.u64 = ctx.r4.u64 | 41692;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r29,2
	ctx.r29.s64 = 2;
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8212F0C4:
	// addi r30,r30,-336
	ctx.r30.s64 = ctx.r30.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x8212F0D0;
	sub_821B1DC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8212f0c4
	if (!ctx.cr0.lt) goto loc_8212F0C4;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823c30b8
	ctx.lr = 0x8212F0E0;
	sub_823C30B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212F0E8"))) PPC_WEAK_FUNC(sub_8212F0E8);
PPC_FUNC_IMPL(__imp__sub_8212F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8212F0F0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,528(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,544
	ctx.r11.s64 = ctx.r3.s64 + 544;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,29144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29144, ctx.r9.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,29164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 29164, ctx.r30.u32);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x8212F134;
	sub_82084038(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,608
	ctx.r11.s64 = ctx.r31.s64 + 608;
	// lwz r5,544(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r9,r31,576
	ctx.r9.s64 = ctx.r31.s64 + 576;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lwz r8,620(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// bl 0x82084038
	ctx.lr = 0x8212F17C;
	sub_82084038(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r7,r31,640
	ctx.r7.s64 = ctx.r31.s64 + 640;
	// addi r6,r31,704
	ctx.r6.s64 = ctx.r31.s64 + 704;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r31,768
	ctx.r5.s64 = ctx.r31.s64 + 768;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r31,960
	ctx.r9.s64 = ctx.r31.s64 + 960;
	// addi r29,r31,1004
	ctx.r29.s64 = ctx.r31.s64 + 1004;
	// stw r7,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r30.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r6.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r30.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,736(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r5.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r30.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,800(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 216, ctx.r4.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r4)
	PPC_STORE_U32(ctx.r4.u32 + 236, ctx.r30.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,864(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r28,5
	ctx.r28.s64 = 5;
	// stw r3,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r30.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r11,26232
	ctx.r26.s64 = ctx.r11.s64 + 26232;
	// addi r25,r10,31120
	ctx.r25.s64 = ctx.r10.s64 + 31120;
loc_8212F284:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r29,20
	ctx.r27.s64 = ctx.r29.s64 + 20;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x8212f2a0
	if (ctx.cr6.gt) goto loc_8212F2A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8212F2A0:
	// bl 0x82248910
	ctx.lr = 0x8212F2A4;
	sub_82248910(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,-12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r27.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r30.u32);
	// bne 0x8212f284
	if (!ctx.cr0.eq) goto loc_8212F284;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r31,1616
	ctx.r8.s64 = ctx.r31.s64 + 1616;
	// lwz r7,1584(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r6,r31,1680
	ctx.r6.s64 = ctx.r31.s64 + 1680;
	// addi r5,r31,1744
	ctx.r5.s64 = ctx.r31.s64 + 1744;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r31,1808
	ctx.r4.s64 = ctx.r31.s64 + 1808;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r31,1872
	ctx.r3.s64 = ctx.r31.s64 + 1872;
	// addi r7,r31,1936
	ctx.r7.s64 = ctx.r31.s64 + 1936;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r31,2000
	ctx.r28.s64 = ctx.r31.s64 + 2000;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r8,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r8.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r6.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,1712(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r5.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,1776(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 216, ctx.r4.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r4)
	PPC_STORE_U32(ctx.r4.u32 + 236, ctx.r30.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,1840(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r7.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,1968(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r28.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r30.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r29,30148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30148, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,30404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30404, ctx.r29.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,30660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30660, ctx.r29.u32);
	// lwz r7,3108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8212f470
	if (ctx.cr6.eq) goto loc_8212F470;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,6040
	ctx.r5.s64 = 6040;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,29380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29380, ctx.r29.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,30916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30916, ctx.r29.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,29636(r6)
	PPC_STORE_U32(ctx.r6.u32 + 29636, ctx.r29.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r29,31172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31172, ctx.r29.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,29892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29892, ctx.r29.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,31428(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31428, ctx.r29.u32);
	// b 0x8212f4cc
	goto loc_8212F4CC;
loc_8212F470:
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// addic. r11,r11,117
	ctx.xer.ca = ctx.r11.u32 > 4294967178;
	ctx.r11.s64 = ctx.r11.s64 + 117;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8212f490
	if (ctx.cr0.lt) goto loc_8212F490;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_8212F490:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// li r5,6061
	ctx.r5.s64 = 6061;
	// addi r11,r11,117
	ctx.r11.s64 = ctx.r11.s64 + 117;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,200(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,204(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,208(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
loc_8212F4CC:
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106f58
	ctx.lr = 0x8212F4D8;
	sub_82106F58(ctx, base);
	// lwz r11,2052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8212f500
	if (!ctx.cr6.eq) goto loc_8212F500;
	// stw r30,28868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28868, ctx.r30.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,28612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28612, ctx.r29.u32);
	// b 0x8212f510
	goto loc_8212F510;
loc_8212F500:
	// stw r29,28868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28868, ctx.r29.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,28612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28612, ctx.r30.u32);
loc_8212F510:
	// bl 0x8215bec8
	ctx.lr = 0x8212F514;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8212f728
	if (!ctx.cr6.eq) goto loc_8212F728;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f560
	if (!ctx.cr6.gt) goto loc_8212F560;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F53C:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f53c
	if (ctx.cr6.lt) goto loc_8212F53C;
loc_8212F560:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f5a0
	if (!ctx.cr6.gt) goto loc_8212F5A0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F57C:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f57c
	if (ctx.cr6.lt) goto loc_8212F57C;
loc_8212F5A0:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f5e0
	if (!ctx.cr6.gt) goto loc_8212F5E0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F5BC:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f5bc
	if (ctx.cr6.lt) goto loc_8212F5BC;
loc_8212F5E0:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f620
	if (!ctx.cr6.gt) goto loc_8212F620;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F5FC:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f5fc
	if (ctx.cr6.lt) goto loc_8212F5FC;
loc_8212F620:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f660
	if (!ctx.cr6.gt) goto loc_8212F660;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F63C:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f63c
	if (ctx.cr6.lt) goto loc_8212F63C;
loc_8212F660:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212f6a0
	if (!ctx.cr6.gt) goto loc_8212F6A0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8212F67C:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8212f67c
	if (ctx.cr6.lt) goto loc_8212F67C;
loc_8212F6A0:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8212f6dc
	if (!ctx.cr6.gt) goto loc_8212F6DC;
loc_8212F6B8:
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212f6b8
	if (ctx.cr6.lt) goto loc_8212F6B8;
loc_8212F6DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,6080
	ctx.r5.s64 = 6080;
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,28612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28612, ctx.r29.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,28868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28868, ctx.r29.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,29124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 29124, ctx.r29.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106f58
	ctx.lr = 0x8212F710;
	sub_82106F58(ctx, base);
	// li r5,6079
	ctx.r5.s64 = 6079;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,121
	ctx.r4.s64 = 121;
	// bl 0x82106f58
	ctx.lr = 0x8212F720;
	sub_82106F58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8212F728:
	// li r5,6050
	ctx.r5.s64 = 6050;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x82106f58
	ctx.lr = 0x8212F738;
	sub_82106F58(ctx, base);
	// li r5,6051
	ctx.r5.s64 = 6051;
	// li r4,121
	ctx.r4.s64 = 121;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106f58
	ctx.lr = 0x8212F748;
	sub_82106F58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8212F750"))) PPC_WEAK_FUNC(sub_8212F750);
PPC_FUNC_IMPL(__imp__sub_8212F750) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,544
	ctx.r3.s64 = ctx.r3.s64 + 544;
	// bl 0x8212ef90
	ctx.lr = 0x8212F770;
	sub_8212EF90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x8212ef90
	ctx.lr = 0x8212F77C;
	sub_8212EF90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212f7d8
	if (ctx.cr6.eq) goto loc_8212F7D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8212F790;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8212f7d8
	if (ctx.cr6.eq) goto loc_8212F7D8;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x8212f7cc
	if (ctx.cr6.eq) goto loc_8212F7CC;
	// bl 0x8208f6b8
	ctx.lr = 0x8212F7AC;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212f7cc
	if (ctx.cr6.eq) goto loc_8212F7CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x8208f708
	ctx.lr = 0x8212F7C0;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
loc_8212F7CC:
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x8212F7D4;
	sub_8208F658(ctx, base);
	// stw r3,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r3.u32);
loc_8212F7D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212F7EC"))) PPC_WEAK_FUNC(sub_8212F7EC);
PPC_FUNC_IMPL(__imp__sub_8212F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212F7F0"))) PPC_WEAK_FUNC(sub_8212F7F0);
PPC_FUNC_IMPL(__imp__sub_8212F7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8212F7F8;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r27,r30,992
	ctx.r27.s64 = ctx.r30.s64 + 992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212ef90
	ctx.lr = 0x8212F820;
	sub_8212EF90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r26,r11,26232
	ctx.r26.s64 = ctx.r11.s64 + 26232;
	// beq cr6,0x8212f870
	if (ctx.cr6.eq) goto loc_8212F870;
	// addi r11,r29,338
	ctx.r11.s64 = ctx.r29.s64 + 338;
	// addi r10,r29,328
	ctx.r10.s64 = ctx.r29.s64 + 328;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,672
	ctx.r11.s64 = ctx.r30.s64 + 672;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,688(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r7.u32);
	// bl 0x82248910
	ctx.lr = 0x8212F86C;
	sub_82248910(ctx, base);
	// b 0x8212f8bc
	goto loc_8212F8BC;
loc_8212F870:
	// addi r11,r29,328
	ctx.r11.s64 = ctx.r29.s64 + 328;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x8212f8bc
	if (ctx.cr6.lt) goto loc_8212F8BC;
	// lwz r10,684(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bne cr6,0x8212f8a8
	if (!ctx.cr6.eq) goto loc_8212F8A8;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8212f8bc
	goto loc_8212F8BC;
loc_8212F8A8:
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// addi r3,r30,672
	ctx.r3.s64 = ctx.r30.s64 + 672;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212ef90
	ctx.lr = 0x8212F8BC;
	sub_8212EF90(ctx, base);
loc_8212F8BC:
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8212f8d8
	if (!ctx.cr6.gt) goto loc_8212F8D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31120
	ctx.r4.s64 = ctx.r11.s64 + 31120;
	// b 0x8212f8dc
	goto loc_8212F8DC;
loc_8212F8D8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8212F8DC:
	// bl 0x82248910
	ctx.lr = 0x8212F8E0;
	sub_82248910(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,11484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212f924
	if (!ctx.cr6.lt) goto loc_8212F924;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8212f930
	goto loc_8212F930;
loc_8212F924:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8212f930
	if (!ctx.cr6.gt) goto loc_8212F930;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8212F930:
	// addi r11,r29,57
	ctx.r11.s64 = ctx.r29.s64 + 57;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,176(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 176, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f12,180(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 180, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f12,184(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 184, temp.u32);
	// beq cr6,0x8212f9d8
	if (ctx.cr6.eq) goto loc_8212F9D8;
	// bl 0x8215bec8
	ctx.lr = 0x8212F974;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8212f9cc
	if (ctx.cr6.eq) goto loc_8212F9CC;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x8208f6b8
	ctx.lr = 0x8212F988;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212f9a8
	if (ctx.cr6.eq) goto loc_8212F9A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x8208f708
	ctx.lr = 0x8212F99C;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
loc_8212F9A8:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8212f9cc
	if (!ctx.cr6.lt) goto loc_8212F9CC;
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8212f9cc
	if (!ctx.cr6.eq) goto loc_8212F9CC;
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x8212F9C8;
	sub_8208F658(ctx, base);
	// stw r3,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r3.u32);
loc_8212F9CC:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
loc_8212F9D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8212F9E0"))) PPC_WEAK_FUNC(sub_8212F9E0);
PPC_FUNC_IMPL(__imp__sub_8212F9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8212F9E8;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249928
	ctx.lr = 0x8212F9F0;
	sub_82249928(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,560(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r3,544
	ctx.r11.s64 = ctx.r3.s64 + 544;
	// stw r26,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r26.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// addi r28,r10,26232
	ctx.r28.s64 = ctx.r10.s64 + 26232;
	// stw r5,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248910
	ctx.lr = 0x8212FA24;
	sub_82248910(ctx, base);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x8212FA40;
	sub_82084038(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,608
	ctx.r11.s64 = ctx.r31.s64 + 608;
	// lwz r7,544(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r9,r31,576
	ctx.r9.s64 = ctx.r31.s64 + 576;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r26.u32);
	// lwz r5,624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r5,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r5.u32);
	// stw r26,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r26.u32);
	// bl 0x82248910
	ctx.lr = 0x8212FA88;
	sub_82248910(ctx, base);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x8212FAA4;
	sub_82084038(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r9,r31,640
	ctx.r9.s64 = ctx.r31.s64 + 640;
	// lis r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r27,r31,1352
	ctx.r27.s64 = ctx.r31.s64 + 1352;
	// ori r29,r29,43776
	ctx.r29.u64 = ctx.r29.u64 | 43776;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r31,1004
	ctx.r30.s64 = ctx.r31.s64 + 1004;
	// ori r25,r7,47616
	ctx.r25.u64 = ctx.r7.u64 | 47616;
	// stw r9,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r26.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r11,31120
	ctx.r24.s64 = ctx.r11.s64 + 31120;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,11484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11484);
	ctx.f28.f64 = double(temp.f32);
loc_8212FB04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,-316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -316);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,-320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -320, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f28
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x8212fb40
	if (!ctx.cr6.lt) goto loc_8212FB40;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x8212fb4c
	goto loc_8212FB4C;
loc_8212FB40:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8212fb4c
	if (!ctx.cr6.gt) goto loc_8212FB4C;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_8212FB4C:
	// addi r3,r30,-300
	ctx.r3.s64 = ctx.r30.s64 + -300;
	// lwz r5,-320(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -320);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82248910
	ctx.lr = 0x8212FB5C;
	sub_82248910(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bgt cr6,0x8212fb74
	if (ctx.cr6.gt) goto loc_8212FB74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8212FB74:
	// bl 0x82248910
	ctx.lr = 0x8212FB78;
	sub_82248910(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stfs f31,176(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 176, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stfs f30,180(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 180, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,768
	ctx.r29.s64 = ctx.r29.s64 + 768;
	// stfs f30,184(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 184, temp.u32);
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8212fb04
	if (ctx.cr6.lt) goto loc_8212FB04;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r26.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// stw r10,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249974
	ctx.lr = 0x8212FBD4;
	sub_82249974(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8212FBD8"))) PPC_WEAK_FUNC(sub_8212FBD8);
PPC_FUNC_IMPL(__imp__sub_8212FBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212FBE0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2084(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212fcb0
	if (ctx.cr6.eq) goto loc_8212FCB0;
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8212fcb0
	if (ctx.cr6.eq) goto loc_8212FCB0;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8212FC18;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8212FC28;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x8212FC3C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8212FC48;
	sub_821AD498(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212fc98
	if (ctx.cr6.eq) goto loc_8212FC98;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,38
	ctx.r4.s64 = 38;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,5604(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 5604, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8210a9b0
	ctx.lr = 0x8212FC98;
	sub_8210A9B0(ctx, base);
loc_8212FC98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8212FCA4;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8212FCB0;
	sub_821AD498(ctx, base);
loc_8212FCB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212FCB8"))) PPC_WEAK_FUNC(sub_8212FCB8);
PPC_FUNC_IMPL(__imp__sub_8212FCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212FCC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82163df0
	ctx.lr = 0x8212FCD0;
	sub_82163DF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,92(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8212FCE0;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8212fd18
	if (ctx.cr6.eq) goto loc_8212FD18;
	// bl 0x8215bec8
	ctx.lr = 0x8212FCF0;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r10,1284(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8212fd10
	if (!ctx.cr6.eq) goto loc_8212FD10;
	// bl 0x8215bec8
	ctx.lr = 0x8212FD08;
	sub_8215BEC8(ctx, base);
	// lwz r27,76(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x8212fd18
	goto loc_8212FD18;
loc_8212FD10:
	// bl 0x8215bec8
	ctx.lr = 0x8212FD14;
	sub_8215BEC8(ctx, base);
	// lwz r27,80(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
loc_8212FD18:
	// bl 0x82163df0
	ctx.lr = 0x8212FD1C;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8212fd30
	if (!ctx.cr0.lt) goto loc_8212FD30;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8212fd44
	goto loc_8212FD44;
loc_8212FD30:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8212fd44
	if (!ctx.cr6.gt) goto loc_8212FD44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8212FD44:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// bl 0x82163df0
	ctx.lr = 0x8212FD4C;
	sub_82163DF0(ctx, base);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// stw r28,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r11,r31,544
	ctx.r11.s64 = ctx.r31.s64 + 544;
	// stw r29,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r29.u32);
	// addi r26,r9,26232
	ctx.r26.s64 = ctx.r9.s64 + 26232;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82248910
	ctx.lr = 0x8212FD84;
	sub_82248910(ctx, base);
	// li r8,125
	ctx.r8.s64 = 125;
	// addi r11,r31,608
	ctx.r11.s64 = ctx.r31.s64 + 608;
	// stw r8,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r27,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r27.u32);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// bl 0x82248910
	ctx.lr = 0x8212FDB4;
	sub_82248910(ctx, base);
	// li r7,154
	ctx.r7.s64 = 154;
	// stw r7,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212FDC4"))) PPC_WEAK_FUNC(sub_8212FDC4);
PPC_FUNC_IMPL(__imp__sub_8212FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212FDC8"))) PPC_WEAK_FUNC(sub_8212FDC8);
PPC_FUNC_IMPL(__imp__sub_8212FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8212FDD0;
	sub_82248750(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r29,r3,1588
	ctx.r29.s64 = ctx.r3.s64 + 1588;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r17,r11,31108
	ctx.r17.s64 = ctx.r11.s64 + 31108;
loc_8212FDF4:
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82248910
	ctx.lr = 0x8212FE0C;
	sub_82248910(ctx, base);
	// addi r11,r28,206
	ctx.r11.s64 = ctx.r28.s64 + 206;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// blt cr6,0x8212fdf4
	if (ctx.cr6.lt) goto loc_8212FDF4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r26,r10,48840
	ctx.r26.u64 = ctx.r10.u64 | 48840;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r22,r4,47564
	ctx.r22.u64 = ctx.r4.u64 | 47564;
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r18,r10,47816
	ctx.r18.u64 = ctx.r10.u64 | 47816;
	// ori r10,r4,48592
	ctx.r10.u64 = ctx.r4.u64 | 48592;
	// stfsx f0,r6,r26
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r26.u32, temp.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r27,r8,48844
	ctx.r27.u64 = ctx.r8.u64 | 48844;
	// ori r28,r7,48848
	ctx.r28.u64 = ctx.r7.u64 | 48848;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r21,r5,47560
	ctx.r21.u64 = ctx.r5.u64 | 47560;
	// ori r23,r3,47568
	ctx.r23.u64 = ctx.r3.u64 | 47568;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r19,r9,47820
	ctx.r19.u64 = ctx.r9.u64 | 47820;
	// ori r20,r8,47824
	ctx.r20.u64 = ctx.r8.u64 | 47824;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,48584
	ctx.r5.u64 = ctx.r7.u64 | 48584;
	// ori r3,r6,48588
	ctx.r3.u64 = ctx.r6.u64 | 48588;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,48072
	ctx.r7.u64 = ctx.r9.u64 | 48072;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r16,r8,48076
	ctx.r16.u64 = ctx.r8.u64 | 48076;
	// ori r14,r9,48328
	ctx.r14.u64 = ctx.r9.u64 | 48328;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r29,0
	ctx.r29.s64 = 0;
	// stfsx f0,r4,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r27.u32, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r4,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r28.u32, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r4,r21
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r21.u32, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r4,r22
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r22.u32, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r11,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r15,8(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r15,r18
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r15.u32 + ctx.r18.u32, temp.u32);
	// lwz r15,8(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r15,r19
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r15.u32 + ctx.r19.u32, temp.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r4,r20
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r20.u32, temp.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r15,r6,48080
	ctx.r15.u64 = ctx.r6.u64 | 48080;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfsx f0,r4,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r24,0
	ctx.r24.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f0,r9,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f0,r7,r16
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r16.u32, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r6,r8,48332
	ctx.r6.u64 = ctx.r8.u64 | 48332;
	// stfsx f0,r7,r15
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r15.u32, temp.u32);
	// ori r8,r11,49104
	ctx.r8.u64 = ctx.r11.u64 | 49104;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r5,r30,48336
	ctx.r5.u64 = ctx.r30.u64 | 48336;
	// ori r4,r29,49096
	ctx.r4.u64 = ctx.r29.u64 | 49096;
	// ori r9,r24,49100
	ctx.r9.u64 = ctx.r24.u64 | 49100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r10,r14
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r14.u32, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfsx f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// bl 0x820f1808
	ctx.lr = 0x8212FFA0;
	sub_820F1808(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82230c00
	ctx.lr = 0x8212FFA8;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130048
	if (!ctx.cr6.eq) goto loc_82130048;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r9,48836
	ctx.r8.u64 = ctx.r9.u64 | 48836;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r3,r6,47812
	ctx.r3.u64 = ctx.r6.u64 | 47812;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r9,48068
	ctx.r6.u64 = ctx.r9.u64 | 48068;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r4,r7,47556
	ctx.r4.u64 = ctx.r7.u64 | 47556;
	// stwx r11,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r10,48580
	ctx.r7.u64 = ctx.r10.u64 | 48580;
	// ori r9,r5,48324
	ctx.r9.u64 = ctx.r5.u64 | 48324;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,49092
	ctx.r8.u64 = ctx.r10.u64 | 49092;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82130048:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x82130050;
	sub_82163E58(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,1284(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1284);
	// lwz r3,1088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// bl 0x82230668
	ctx.lr = 0x82130060;
	sub_82230668(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,1588
	ctx.r30.s64 = ctx.r31.s64 + 1588;
	// addi r11,r10,31136
	ctx.r11.s64 = ctx.r10.s64 + 31136;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// li r29,7
	ctx.r29.s64 = 7;
loc_82130078:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r5,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82164138
	ctx.lr = 0x82130088;
	sub_82164138(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82248910
	ctx.lr = 0x821300A4;
	sub_82248910(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x82130078
	if (!ctx.cr0.eq) goto loc_82130078;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,31040
	ctx.r11.s64 = ctx.r11.s64 + 31040;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// bgt cr6,0x821300f8
	if (ctx.cr6.gt) goto loc_821300F8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r9,48836
	ctx.r8.u64 = ctx.r9.u64 | 48836;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82130144
	goto loc_82130144;
loc_821300F8:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x82130110
	if (ctx.cr6.gt) goto loc_82130110;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x82130134
	goto loc_82130134;
loc_82130110:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x82130128
	if (ctx.cr6.gt) goto loc_82130128;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x82130134
	goto loc_82130134;
loc_82130128:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_82130134:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_82130144:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,200(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f4,204(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,208(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f7,r9,r26
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f4,r8,r27
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, temp.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f3,r6,r28
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r28.u32, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,1660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// bgt cr6,0x82130228
	if (ctx.cr6.gt) goto loc_82130228;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,47556
	ctx.r8.u64 = ctx.r9.u64 | 47556;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82130270
	goto loc_82130270;
loc_82130228:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x82130240
	if (ctx.cr6.gt) goto loc_82130240;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x82130264
	goto loc_82130264;
loc_82130240:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x82130258
	if (ctx.cr6.gt) goto loc_82130258;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x82130264
	goto loc_82130264;
loc_82130258:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_82130264:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_82130270:
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r3,1648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,200(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f3,204(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f2,208(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f6,r9,r21
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r21.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f3,r8,r22
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r22.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f2,r5,r23
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r23.u32, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,1724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8213034c
	if (ctx.cr6.gt) goto loc_8213034C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,47812
	ctx.r8.u64 = ctx.r9.u64 | 47812;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82130394
	goto loc_82130394;
loc_8213034C:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x82130364
	if (ctx.cr6.gt) goto loc_82130364;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x82130388
	goto loc_82130388;
loc_82130364:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x8213037c
	if (ctx.cr6.gt) goto loc_8213037C;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x82130388
	goto loc_82130388;
loc_8213037C:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_82130388:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_82130394:
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// extsw r3,r10
	ctx.r3.s64 = ctx.r10.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// lwz r5,1712(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,200(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f2,208(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f8,r9,r18
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r18.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f6,r8,r19
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r19.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f2,r5,r20
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r20.u32, temp.u32);
	// lwz r10,1788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// bgt cr6,0x82130470
	if (ctx.cr6.gt) goto loc_82130470;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,48580
	ctx.r8.u64 = ctx.r9.u64 | 48580;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x821304b8
	goto loc_821304B8;
loc_82130470:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x82130488
	if (ctx.cr6.gt) goto loc_82130488;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x821304ac
	goto loc_821304AC;
loc_82130488:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x821304a0
	if (ctx.cr6.gt) goto loc_821304A0;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x821304ac
	goto loc_821304AC;
loc_821304A0:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_821304AC:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821304B8:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r6,0
	ctx.r6.s64 = 0;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// ori r5,r9,48584
	ctx.r5.u64 = ctx.r9.u64 | 48584;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r3,r6,48588
	ctx.r3.u64 = ctx.r6.u64 | 48588;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r6,r6,48592
	ctx.r6.u64 = ctx.r6.u64 | 48592;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,200(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f2,204(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,208(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f3,r9,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f2,r8,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f6,r5,r6
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,1852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// bgt cr6,0x821305ac
	if (ctx.cr6.gt) goto loc_821305AC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,48068
	ctx.r8.u64 = ctx.r9.u64 | 48068;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x821305f4
	goto loc_821305F4;
loc_821305AC:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x821305c4
	if (ctx.cr6.gt) goto loc_821305C4;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x821305e8
	goto loc_821305E8;
loc_821305C4:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x821305dc
	if (ctx.cr6.gt) goto loc_821305DC;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x821305e8
	goto loc_821305E8;
loc_821305DC:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_821305E8:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821305F4:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r4,1840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// ori r5,r9,48072
	ctx.r5.u64 = ctx.r9.u64 | 48072;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,200(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f2,208(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f6,r9,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f7,r8,r16
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r16.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f2,r5,r15
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r15.u32, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,1916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// bgt cr6,0x821306d8
	if (ctx.cr6.gt) goto loc_821306D8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,48324
	ctx.r8.u64 = ctx.r9.u64 | 48324;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82130720
	goto loc_82130720;
loc_821306D8:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x821306f0
	if (ctx.cr6.gt) goto loc_821306F0;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x82130714
	goto loc_82130714;
loc_821306F0:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x82130708
	if (ctx.cr6.gt) goto loc_82130708;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x82130714
	goto loc_82130714;
loc_82130708:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_82130714:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_82130720:
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r6,0
	ctx.r6.s64 = 0;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r3,1904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// ori r5,r9,48332
	ctx.r5.u64 = ctx.r9.u64 | 48332;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// ori r3,r6,48336
	ctx.r3.u64 = ctx.r6.u64 | 48336;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,200(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,204(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,208(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f4,r9,r14
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r14.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f3,r8,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f2,r5,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,1980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// bgt cr6,0x8213080c
	if (ctx.cr6.gt) goto loc_8213080C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,49092
	ctx.r9.u64 = ctx.r10.u64 | 49092;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x82130854
	goto loc_82130854;
loc_8213080C:
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// bgt cr6,0x82130824
	if (ctx.cr6.gt) goto loc_82130824;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x82130848
	goto loc_82130848;
loc_82130824:
	// cmpwi cr6,r10,99
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 99, ctx.xer);
	// bgt cr6,0x8213083c
	if (ctx.cr6.gt) goto loc_8213083C;
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// b 0x82130848
	goto loc_82130848;
loc_8213083C:
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
loc_82130848:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_82130854:
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r6,0
	ctx.r6.s64 = 0;
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r7,1968(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r3,r6,49100
	ctx.r3.u64 = ctx.r6.u64 | 49100;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// ori r5,r8,49096
	ctx.r5.u64 = ctx.r8.u64 | 49096;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,49104
	ctx.r8.u64 = ctx.r9.u64 | 49104;
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,200(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,204(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f2,208(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f3,r4,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f5,r10,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f2,r9,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82130914"))) PPC_WEAK_FUNC(sub_82130914);
PPC_FUNC_IMPL(__imp__sub_82130914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82130918"))) PPC_WEAK_FUNC(sub_82130918);
PPC_FUNC_IMPL(__imp__sub_82130918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82130920;
	sub_82248750(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82163df0
	ctx.lr = 0x8213093C;
	sub_82163DF0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x82130944;
	sub_8215BEC8(ctx, base);
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mulli r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 * 52;
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r19,r11,112
	ctx.r19.s64 = ctx.r11.s64 + 112;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r25,0
	ctx.r25.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,11484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11484);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r25,r25,43776
	ctx.r25.u64 = ctx.r25.u64 | 43776;
	// addi r29,r17,1332
	ctx.r29.s64 = ctx.r17.s64 + 1332;
	// addi r23,r15,8516
	ctx.r23.s64 = ctx.r15.s64 + 8516;
	// addi r31,r17,680
	ctx.r31.s64 = ctx.r17.s64 + 680;
	// li r18,1
	ctx.r18.s64 = 1;
	// ori r16,r6,47616
	ctx.r16.u64 = ctx.r6.u64 | 47616;
	// addi r14,r11,31120
	ctx.r14.s64 = ctx.r11.s64 + 31120;
	// addi r20,r10,26232
	ctx.r20.s64 = ctx.r10.s64 + 26232;
loc_821309A4:
	// lwz r30,4(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// bl 0x8215bec8
	ctx.lr = 0x821309BC;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821309e4
	if (ctx.cr6.eq) goto loc_821309E4;
	// lwz r28,0(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8212edb0
	ctx.lr = 0x821309DC;
	sub_8212EDB0(ctx, base);
	// lwz r26,4(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r22,0(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_821309E4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r21,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r21.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r18,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r18.u32);
	// bl 0x82248910
	ctx.lr = 0x82130A08;
	sub_82248910(ctx, base);
	// addi r30,r24,155
	ctx.r30.s64 = ctx.r24.s64 + 155;
	// addi r26,r31,344
	ctx.r26.s64 = ctx.r31.s64 + 344;
	// addi r11,r30,-11
	ctx.r11.s64 = ctx.r30.s64 + -11;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r21.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r21,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r21.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r21.u32);
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// stw r18,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r18.u32);
	// bl 0x82248910
	ctx.lr = 0x82130A3C;
	sub_82248910(ctx, base);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r22,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r22.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r27,-20(r29)
	PPC_STORE_U32(ctx.r29.u32 + -20, ctx.r27.u32);
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82130a64
	if (ctx.cr6.gt) goto loc_82130A64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82130A64:
	// bl 0x82248910
	ctx.lr = 0x82130A68;
	sub_82248910(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82130a94
	if (!ctx.cr6.lt) goto loc_82130A94;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82130aa0
	goto loc_82130AA0;
loc_82130A94:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82130aa0
	if (!ctx.cr6.gt) goto loc_82130AA0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82130AA0:
	// lwz r10,24(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stfs f0,176(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 176, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stfs f31,180(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 180, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r25,r11
	ctx.r7.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r25,r25,768
	ctx.r25.s64 = ctx.r25.s64 + 768;
	// stfs f31,184(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 184, temp.u32);
	// cmpw cr6,r25,r16
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x821309a4
	if (ctx.cr6.lt) goto loc_821309A4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-176(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82130AFC"))) PPC_WEAK_FUNC(sub_82130AFC);
PPC_FUNC_IMPL(__imp__sub_82130AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82130B00"))) PPC_WEAK_FUNC(sub_82130B00);
PPC_FUNC_IMPL(__imp__sub_82130B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82130B08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82130b48
	if (ctx.cr6.gt) goto loc_82130B48;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r31,-32187
	ctx.r31.s64 = -2109407232;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r5,-17376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17376);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x82110430
	ctx.lr = 0x82130B38;
	sub_82110430(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,-17376(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17376);
	// addi r4,r10,31164
	ctx.r4.s64 = ctx.r10.s64 + 31164;
	// b 0x82130b80
	goto loc_82130B80;
loc_82130B48:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r9,-17616
	ctx.r31.s64 = ctx.r9.s64 + -17616;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82110430
	ctx.lr = 0x82130B74;
	sub_82110430(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r4,r8,31164
	ctx.r4.s64 = ctx.r8.s64 + 31164;
loc_82130B80:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8209eda0
	ctx.lr = 0x82130B88;
	sub_8209EDA0(ctx, base);
	// mulli r11,r28,336
	ctx.r11.s64 = ctx.r28.s64 * 336;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,2096
	ctx.r31.s64 = ctx.r11.s64 + 2096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d25f8
	ctx.lr = 0x82130BA0;
	sub_821D25F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82130BAC"))) PPC_WEAK_FUNC(sub_82130BAC);
PPC_FUNC_IMPL(__imp__sub_82130BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82130BB0"))) PPC_WEAK_FUNC(sub_82130BB0);
PPC_FUNC_IMPL(__imp__sub_82130BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8212f060
	ctx.lr = 0x82130BD0;
	sub_8212F060(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130bec
	if (ctx.cr6.eq) goto loc_82130BEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82130BE8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82130BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82130C04"))) PPC_WEAK_FUNC(sub_82130C04);
PPC_FUNC_IMPL(__imp__sub_82130C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82130C08"))) PPC_WEAK_FUNC(sub_82130C08);
PPC_FUNC_IMPL(__imp__sub_82130C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// addi r10,r3,464
	ctx.r10.s64 = ctx.r3.s64 + 464;
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// addi r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 + 864;
	// std r11,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// addi r10,r3,1056
	ctx.r10.s64 = ctx.r3.s64 + 1056;
	// std r11,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// std r11,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// std r11,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// std r11,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// std r11,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r11.u64);
	// std r11,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r11.u64);
	// std r11,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r11.u64);
	// std r11,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r11.u64);
	// std r11,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r11.u64);
	// std r11,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r11.u64);
	// std r11,312(r3)
	PPC_STORE_U64(ctx.r3.u32 + 312, ctx.r11.u64);
	// std r11,304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 304, ctx.r11.u64);
	// std r11,328(r3)
	PPC_STORE_U64(ctx.r3.u32 + 328, ctx.r11.u64);
	// std r11,320(r3)
	PPC_STORE_U64(ctx.r3.u32 + 320, ctx.r11.u64);
	// std r11,376(r3)
	PPC_STORE_U64(ctx.r3.u32 + 376, ctx.r11.u64);
	// std r11,368(r3)
	PPC_STORE_U64(ctx.r3.u32 + 368, ctx.r11.u64);
	// std r11,392(r3)
	PPC_STORE_U64(ctx.r3.u32 + 392, ctx.r11.u64);
	// std r11,384(r3)
	PPC_STORE_U64(ctx.r3.u32 + 384, ctx.r11.u64);
	// std r11,440(r3)
	PPC_STORE_U64(ctx.r3.u32 + 440, ctx.r11.u64);
	// std r11,432(r3)
	PPC_STORE_U64(ctx.r3.u32 + 432, ctx.r11.u64);
	// std r11,456(r3)
	PPC_STORE_U64(ctx.r3.u32 + 456, ctx.r11.u64);
	// std r11,448(r3)
	PPC_STORE_U64(ctx.r3.u32 + 448, ctx.r11.u64);
	// std r11,496(r3)
	PPC_STORE_U64(ctx.r3.u32 + 496, ctx.r11.u64);
	// std r11,504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 504, ctx.r11.u64);
	// std r11,512(r3)
	PPC_STORE_U64(ctx.r3.u32 + 512, ctx.r11.u64);
	// std r11,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.r11.u64);
	// std r11,568(r3)
	PPC_STORE_U64(ctx.r3.u32 + 568, ctx.r11.u64);
	// std r11,560(r3)
	PPC_STORE_U64(ctx.r3.u32 + 560, ctx.r11.u64);
	// std r11,584(r3)
	PPC_STORE_U64(ctx.r3.u32 + 584, ctx.r11.u64);
	// std r11,576(r3)
	PPC_STORE_U64(ctx.r3.u32 + 576, ctx.r11.u64);
	// std r11,632(r3)
	PPC_STORE_U64(ctx.r3.u32 + 632, ctx.r11.u64);
	// std r11,624(r3)
	PPC_STORE_U64(ctx.r3.u32 + 624, ctx.r11.u64);
	// std r11,648(r3)
	PPC_STORE_U64(ctx.r3.u32 + 648, ctx.r11.u64);
	// std r11,640(r3)
	PPC_STORE_U64(ctx.r3.u32 + 640, ctx.r11.u64);
	// std r11,696(r3)
	PPC_STORE_U64(ctx.r3.u32 + 696, ctx.r11.u64);
	// std r11,688(r3)
	PPC_STORE_U64(ctx.r3.u32 + 688, ctx.r11.u64);
	// std r11,712(r3)
	PPC_STORE_U64(ctx.r3.u32 + 712, ctx.r11.u64);
	// std r11,704(r3)
	PPC_STORE_U64(ctx.r3.u32 + 704, ctx.r11.u64);
	// std r11,760(r3)
	PPC_STORE_U64(ctx.r3.u32 + 760, ctx.r11.u64);
	// std r11,752(r3)
	PPC_STORE_U64(ctx.r3.u32 + 752, ctx.r11.u64);
	// std r11,776(r3)
	PPC_STORE_U64(ctx.r3.u32 + 776, ctx.r11.u64);
	// std r11,768(r3)
	PPC_STORE_U64(ctx.r3.u32 + 768, ctx.r11.u64);
	// std r11,896(r3)
	PPC_STORE_U64(ctx.r3.u32 + 896, ctx.r11.u64);
	// std r11,904(r3)
	PPC_STORE_U64(ctx.r3.u32 + 904, ctx.r11.u64);
	// std r11,912(r3)
	PPC_STORE_U64(ctx.r3.u32 + 912, ctx.r11.u64);
	// std r11,920(r3)
	PPC_STORE_U64(ctx.r3.u32 + 920, ctx.r11.u64);
	// std r11,968(r3)
	PPC_STORE_U64(ctx.r3.u32 + 968, ctx.r11.u64);
	// std r11,960(r3)
	PPC_STORE_U64(ctx.r3.u32 + 960, ctx.r11.u64);
	// std r11,984(r3)
	PPC_STORE_U64(ctx.r3.u32 + 984, ctx.r11.u64);
	// std r11,976(r3)
	PPC_STORE_U64(ctx.r3.u32 + 976, ctx.r11.u64);
	// std r11,1032(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1032, ctx.r11.u64);
	// std r11,1024(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1024, ctx.r11.u64);
	// std r11,1048(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1048, ctx.r11.u64);
	// std r11,1040(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1040, ctx.r11.u64);
	// std r11,1088(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1088, ctx.r11.u64);
	// std r11,1096(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1096, ctx.r11.u64);
	// std r11,1104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1104, ctx.r11.u64);
	// std r11,1112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1112, ctx.r11.u64);
	// std r11,1160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1160, ctx.r11.u64);
	// std r11,1152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1152, ctx.r11.u64);
	// std r11,1176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1176, ctx.r11.u64);
	// std r11,1168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1168, ctx.r11.u64);
	// std r11,1224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1224, ctx.r11.u64);
	// std r11,1216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1216, ctx.r11.u64);
	// std r11,1240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1240, ctx.r11.u64);
	// std r11,1232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1232, ctx.r11.u64);
	// std r11,1288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1288, ctx.r11.u64);
	// std r11,1280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1280, ctx.r11.u64);
	// std r11,1304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1304, ctx.r11.u64);
	// std r11,1296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1296, ctx.r11.u64);
	// std r11,1352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1352, ctx.r11.u64);
	// std r11,1344(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1344, ctx.r11.u64);
	// std r11,1368(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1368, ctx.r11.u64);
	// std r11,1360(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1360, ctx.r11.u64);
	// std r11,1416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1416, ctx.r11.u64);
	// std r11,1408(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1408, ctx.r11.u64);
	// std r11,1432(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1432, ctx.r11.u64);
	// std r11,1424(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1424, ctx.r11.u64);
	// std r11,1480(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1480, ctx.r11.u64);
	// std r11,1472(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1472, ctx.r11.u64);
	// std r11,1496(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1496, ctx.r11.u64);
	// std r11,1488(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1488, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82130D88"))) PPC_WEAK_FUNC(sub_82130D88);
PPC_FUNC_IMPL(__imp__sub_82130D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82130D90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,3104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82130dc8
	if (ctx.cr6.eq) goto loc_82130DC8;
	// bl 0x8208f6b8
	ctx.lr = 0x82130DA8;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82130dc8
	if (ctx.cr6.eq) goto loc_82130DC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// bl 0x8208f708
	ctx.lr = 0x82130DBC;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r10.u32);
loc_82130DC8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82130DD4:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82130f1c
	if (ctx.cr6.eq) goto loc_82130F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f1c
	if (!ctx.cr6.eq) goto loc_82130F1C;
	// lwz r31,1280(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82130E04;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130e20
	if (ctx.cr6.eq) goto loc_82130E20;
	// bl 0x8215bd08
	ctx.lr = 0x82130E14;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82130f1c
	if (!ctx.cr6.eq) goto loc_82130F1C;
loc_82130E20:
	// lwz r11,3108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130e80
	if (ctx.cr6.eq) goto loc_82130E80;
	// bl 0x8218e938
	ctx.lr = 0x82130E34;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82130f1c
	if (ctx.cr6.eq) goto loc_82130F1C;
loc_82130E4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,516(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 516, temp.u32);
	// stw r11,2088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2088, ctx.r11.u32);
	// bne cr6,0x82130e78
	if (!ctx.cr6.eq) goto loc_82130E78;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x823c3468
	ctx.lr = 0x82130E78;
	sub_823C3468(ctx, base);
loc_82130E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82130E80:
	// bl 0x8218e938
	ctx.lr = 0x82130E84;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130e4c
	if (!ctx.cr6.eq) goto loc_82130E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82130EA4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f70
	if (!ctx.cr6.eq) goto loc_82130F70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82130EC4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f70
	if (!ctx.cr6.eq) goto loc_82130F70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82130EE4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f34
	if (!ctx.cr6.eq) goto loc_82130F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82130F04;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82130F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f34
	if (!ctx.cr6.eq) goto loc_82130F34;
loc_82130F1C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82130dd4
	if (ctx.cr6.lt) goto loc_82130DD4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82130F34:
	// lwz r11,2072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2072);
	// lwz r10,2076(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2072, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82130f54
	if (!ctx.cr6.gt) goto loc_82130F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2072, ctx.r11.u32);
loc_82130F54:
	// li r3,10003
	ctx.r3.s64 = 10003;
	// bl 0x8208f658
	ctx.lr = 0x82130F5C;
	sub_8208F658(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 516, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82130F70:
	// lwz r11,2072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2072);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2072, ctx.r11.u32);
	// bge 0x82130f88
	if (!ctx.cr0.lt) goto loc_82130F88;
	// lwz r11,2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// stw r11,2072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2072, ctx.r11.u32);
loc_82130F88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,10003
	ctx.r3.s64 = 10003;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 516, temp.u32);
	// bl 0x8208f658
	ctx.lr = 0x82130F9C;
	sub_8208F658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82130FA4"))) PPC_WEAK_FUNC(sub_82130FA4);
PPC_FUNC_IMPL(__imp__sub_82130FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82130FA8"))) PPC_WEAK_FUNC(sub_82130FA8);
PPC_FUNC_IMPL(__imp__sub_82130FA8) {
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
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821310d4
	if (ctx.cr6.gt) goto loc_821310D4;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4064
	ctx.r12.s64 = ctx.r12.s64 + 4064;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,4108(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4108);
	// lwz r16,4212(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4212);
	// lwz r16,4224(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4224);
	// lwz r16,4224(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4224);
	// lwz r16,4224(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4224);
	// lwz r16,4224(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4224);
	// lwz r16,4224(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4224);
	// lwz r16,4236(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4236);
	// lwz r16,4248(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4248);
	// lwz r16,4288(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4288);
	// lwz r16,4300(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4300);
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// bgt 0x821310d4
	if (ctx.cr0.gt) goto loc_821310D4;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82131028;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x821310d4
	if (ctx.cr6.eq) goto loc_821310D4;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82131064
	if (ctx.cr6.eq) goto loc_82131064;
	// bl 0x8208f6b8
	ctx.lr = 0x82131044;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82131064
	if (ctx.cr6.eq) goto loc_82131064;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x8208f708
	ctx.lr = 0x82131058;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
loc_82131064:
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x8213106C;
	sub_8208F658(ctx, base);
	// stw r3,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r3.u32);
	// b 0x821310d4
	goto loc_821310D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f750
	ctx.lr = 0x8213107C;
	sub_8212F750(ctx, base);
	// b 0x821310d4
	goto loc_821310D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f7f0
	ctx.lr = 0x82131088;
	sub_8212F7F0(ctx, base);
	// b 0x821310d4
	goto loc_821310D4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// b 0x821310d4
	goto loc_821310D4;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f9e0
	ctx.lr = 0x821310C8;
	sub_8212F9E0(ctx, base);
	// b 0x821310d4
	goto loc_821310D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130d88
	ctx.lr = 0x821310D4;
	sub_82130D88(ctx, base);
loc_821310D4:
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

__attribute__((alias("__imp__sub_821310EC"))) PPC_WEAK_FUNC(sub_821310EC);
PPC_FUNC_IMPL(__imp__sub_821310EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821310F0"))) PPC_WEAK_FUNC(sub_821310F0);
PPC_FUNC_IMPL(__imp__sub_821310F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821310F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82130fa8
	ctx.lr = 0x82131104;
	sub_82130FA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821311ac
	if (ctx.cr6.eq) goto loc_821311AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82131118:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82131250
	if (ctx.cr6.eq) goto loc_82131250;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82131250
	if (!ctx.cr6.eq) goto loc_82131250;
	// lwz r31,1280(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82131148;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82131164
	if (ctx.cr6.eq) goto loc_82131164;
	// bl 0x8215bd08
	ctx.lr = 0x82131158;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82131250
	if (!ctx.cr6.eq) goto loc_82131250;
loc_82131164:
	// lwz r11,3108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821311b4
	if (ctx.cr6.eq) goto loc_821311B4;
	// bl 0x8218e938
	ctx.lr = 0x82131178;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82131250
	if (ctx.cr6.eq) goto loc_82131250;
loc_82131190:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2056(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2056, ctx.r10.u32);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stfs f0,516(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 516, temp.u32);
	// stw r11,2060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2060, ctx.r11.u32);
loc_821311AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821311B4:
	// bl 0x8218e938
	ctx.lr = 0x821311B8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821311C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82131190
	if (!ctx.cr6.eq) goto loc_82131190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x821311D8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821311E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213129c
	if (!ctx.cr6.eq) goto loc_8213129C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x821311F8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213129c
	if (!ctx.cr6.eq) goto loc_8213129C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82131218;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82131268
	if (!ctx.cr6.eq) goto loc_82131268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x82131238;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82131268
	if (!ctx.cr6.eq) goto loc_82131268;
loc_82131250:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82131118
	if (ctx.cr6.lt) goto loc_82131118;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82131268:
	// lwz r11,2072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2072);
	// lwz r10,2076(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2072, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82131288
	if (!ctx.cr6.gt) goto loc_82131288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2072, ctx.r11.u32);
loc_82131288:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 516, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8213129C:
	// lwz r11,2072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2072);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2072, ctx.r11.u32);
	// bge 0x821312b4
	if (!ctx.cr0.lt) goto loc_821312B4;
	// lwz r11,2076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2076);
	// stw r11,2072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2072, ctx.r11.u32);
loc_821312B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 516, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821312C8"))) PPC_WEAK_FUNC(sub_821312C8);
PPC_FUNC_IMPL(__imp__sub_821312C8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82131320
	if (!ctx.cr6.gt) goto loc_82131320;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x821312F0;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82131370
	if (ctx.cr6.eq) goto loc_82131370;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82131320:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82131370
	if (ctx.cr6.eq) goto loc_82131370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212f0e8
	ctx.lr = 0x82131338;
	sub_8212F0E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ed10
	ctx.lr = 0x82131340;
	sub_8212ED10(ctx, base);
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82131368
	if (ctx.cr6.lt) goto loc_82131368;
	// bne cr6,0x82131370
	if (!ctx.cr6.eq) goto loc_82131370;
	// bl 0x82130fa8
	ctx.lr = 0x82131354;
	sub_82130FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82131368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821310f0
	ctx.lr = 0x82131370;
	sub_821310F0(ctx, base);
loc_82131370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82131384"))) PPC_WEAK_FUNC(sub_82131384);
PPC_FUNC_IMPL(__imp__sub_82131384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131388"))) PPC_WEAK_FUNC(sub_82131388);
PPC_FUNC_IMPL(__imp__sub_82131388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82131390;
	sub_82248750(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// bl 0x8215bd60
	ctx.lr = 0x821313A8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r16,1
	ctx.r16.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821313f4
	if (!ctx.cr6.eq) goto loc_821313F4;
	// bl 0x8215bec8
	ctx.lr = 0x821313BC;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821313f4
	if (!ctx.cr6.eq) goto loc_821313F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216c098
	ctx.lr = 0x821313D0;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x821313D4;
	sub_8215BD28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x821313DC;
	sub_82163DF0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// divwu r22,r11,r10
	ctx.r22.u32 = ctx.r11.u32 / ctx.r10.u32;
	// b 0x821313fc
	goto loc_821313FC;
loc_821313F4:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821313FC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r24,r28,1396
	ctx.r24.s64 = ctx.r28.s64 + 1396;
	// ori r25,r11,41728
	ctx.r25.u64 = ctx.r11.u64 | 41728;
	// li r14,3
	ctx.r14.s64 = 3;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,166
	ctx.r29.s64 = 166;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// addi r15,r11,31116
	ctx.r15.s64 = ctx.r11.s64 + 31116;
loc_82131424:
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r14,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82248910
	ctx.lr = 0x8213143C;
	sub_82248910(ctx, base);
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// addic. r10,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r10.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8213145c
	if (ctx.cr0.lt) goto loc_8213145C;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r16,-572(r9)
	PPC_STORE_U32(ctx.r9.u32 + -572, ctx.r16.u32);
loc_8213145C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82131474
	if (ctx.cr6.lt) goto loc_82131474;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r16,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r16.u32);
loc_82131474:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8213148c
	if (ctx.cr6.lt) goto loc_8213148C;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r16,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r16.u32);
loc_8213148C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82131424
	if (!ctx.cr0.eq) goto loc_82131424;
	// stw r20,1372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1372, ctx.r20.u32);
	// addi r11,r28,1372
	ctx.r11.s64 = ctx.r28.s64 + 1372;
	// stw r20,1376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1376, ctx.r20.u32);
	// stw r20,1380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1380, ctx.r20.u32);
	// bl 0x82163df0
	ctx.lr = 0x821314B4;
	sub_82163DF0(ctx, base);
	// lwz r11,80(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82230d40
	ctx.lr = 0x821314C4;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82131738
	if (ctx.cr6.eq) goto loc_82131738;
	// bl 0x8215bec8
	ctx.lr = 0x821314D0;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r10,1284(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1284);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82131738
	if (!ctx.cr6.eq) goto loc_82131738;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82131738
	if (ctx.cr6.eq) goto loc_82131738;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r31,r11,1628
	ctx.r31.s64 = ctx.r11.s64 + 1628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r18,1648(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// bl 0x820d8110
	ctx.lr = 0x8213150C;
	sub_820D8110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8270
	ctx.lr = 0x82131520;
	sub_820D8270(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82131738
	if (!ctx.cr6.gt) goto loc_82131738;
	// li r26,163
	ctx.r26.s64 = 163;
	// addi r22,r1,98
	ctx.r22.s64 = ctx.r1.s64 + 98;
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
loc_82131538:
	// lhz r30,-2(r22)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r22.u32 + -2);
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r23,r30
	ctx.r23.s64 = ctx.r30.s16;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82131628
	if (!ctx.cr6.gt) goto loc_82131628;
	// lwz r3,1124(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1124);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822361c8
	ctx.lr = 0x8213156C;
	sub_822361C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822368b0
	ctx.lr = 0x8213157C;
	sub_822368B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82236510
	ctx.lr = 0x82131590;
	sub_82236510(ctx, base);
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// sth r20,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r20.u16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r20,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r20.u16);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// bl 0x82164e00
	ctx.lr = 0x821315AC;
	sub_82164E00(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// bge cr6,0x821315c4
	if (!ctx.cr6.lt) goto loc_821315C4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82164d90
	ctx.lr = 0x821315C4;
	sub_82164D90(ctx, base);
loc_821315C4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,52(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82106f58
	ctx.lr = 0x821315D4;
	sub_82106F58(ctx, base);
	// addic. r11,r26,-3
	ctx.xer.ca = ctx.r26.u32 > 2;
	ctx.r11.s64 = ctx.r26.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821315ec
	if (ctx.cr0.lt) goto loc_821315EC;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r20,-572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -572, ctx.r20.u32);
loc_821315EC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82131604
	if (ctx.cr6.lt) goto loc_82131604;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r20,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r20.u32);
loc_82131604:
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// bne cr6,0x8213161c
	if (!ctx.cr6.eq) goto loc_8213161C;
	// lbz r11,33(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213161c
	if (ctx.cr6.eq) goto loc_8213161C;
	// li r30,11
	ctx.r30.s64 = 11;
loc_8213161C:
	// lbz r7,17(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 17);
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// b 0x821316fc
	goto loc_821316FC;
loc_82131628:
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8213171c
	if (!ctx.cr6.gt) goto loc_8213171C;
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82131640:
	// lhzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82131664
	if (ctx.cr6.eq) goto loc_82131664;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82131640
	if (ctx.cr6.lt) goto loc_82131640;
	// b 0x8213171c
	goto loc_8213171C;
loc_82131664:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213171c
	if (ctx.cr6.eq) goto loc_8213171C;
	// sth r16,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r16.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82165138
	ctx.lr = 0x82131688;
	sub_82165138(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82165128
	ctx.lr = 0x82131694;
	sub_82165128(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r24,28
	ctx.r3.s64 = ctx.r24.s64 + 28;
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// stw r14,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r14.u32);
	// stw r5,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r5.u32);
	// bl 0x82248910
	ctx.lr = 0x821316B0;
	sub_82248910(ctx, base);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x82106f58
	ctx.lr = 0x821316C4;
	sub_82106F58(ctx, base);
	// addic. r8,r26,-3
	ctx.xer.ca = ctx.r26.u32 > 2;
	ctx.r8.s64 = ctx.r26.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x821316dc
	if (ctx.cr0.lt) goto loc_821316DC;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r20,-572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -572, ctx.r20.u32);
loc_821316DC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x821316f4
	if (ctx.cr6.lt) goto loc_821316F4;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r20,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r20.u32);
loc_821316F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_821316FC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r26,-163
	ctx.r4.s64 = ctx.r26.s64 + -163;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82130b00
	ctx.lr = 0x8213170C;
	sub_82130B00(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r3,-548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -548, ctx.r3.u32);
loc_8213171C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r11,r26,-163
	ctx.r11.s64 = ctx.r26.s64 + -163;
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// addi r25,r25,256
	ctx.r25.s64 = ctx.r25.s64 + 256;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82131538
	if (ctx.cr6.lt) goto loc_82131538;
loc_82131738:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82131740"))) PPC_WEAK_FUNC(sub_82131740);
PPC_FUNC_IMPL(__imp__sub_82131740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82131748;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,31124
	ctx.r10.s64 = ctx.r11.s64 + 31124;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// addi r25,r3,32
	ctx.r25.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c34c0
	ctx.lr = 0x82131780;
	sub_823C34C0(ctx, base);
	// addi r26,r31,528
	ctx.r26.s64 = ctx.r31.s64 + 528;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82130c08
	ctx.lr = 0x8213178C;
	sub_82130C08(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r29,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r29.u32);
	// stw r28,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r28.u32);
	// addi r27,r31,2096
	ctx.r27.s64 = ctx.r31.s64 + 2096;
	// stw r24,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r24.u32);
	// stw r9,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r9.u32);
	// stw r29,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r29.u32);
	// stw r24,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r24.u32);
	// stw r29,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r29.u32);
loc_821317BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b29d0
	ctx.lr = 0x821317C4;
	sub_821B29D0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,336
	ctx.r27.s64 = ctx.r27.s64 + 336;
	// bge 0x821317bc
	if (!ctx.cr0.lt) goto loc_821317BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r29,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r29.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r9,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r9.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r7,148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// lwz r6,208(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82131810
	if (ctx.cr6.eq) goto loc_82131810;
	// bl 0x82107368
	ctx.lr = 0x82131810;
	sub_82107368(ctx, base);
loc_82131810:
	// bl 0x8215bd60
	ctx.lr = 0x82131814;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82131828
	if (ctx.cr6.eq) goto loc_82131828;
	// stw r24,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r24.u32);
	// stw r24,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r24.u32);
loc_82131828:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c3410
	ctx.lr = 0x82131830;
	sub_823C3410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// li r4,1520
	ctx.r4.s64 = 1520;
	// lfs f13,14876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f12,31604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8328(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,520(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x8213187C;
	sub_822AA648(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r5,-5052
	ctx.r11.s64 = ctx.r5.s64 + -5052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r30,r4,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// addi r28,r11,456
	ctx.r28.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x8213189C;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x821318A0;
	sub_8215BD28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// addi r4,r10,4393
	ctx.r4.s64 = ctx.r10.s64 + 4393;
	// bl 0x8218a360
	ctx.lr = 0x821318B0;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821318bc
	if (ctx.cr6.eq) goto loc_821318BC;
	// stw r24,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r24.u32);
loc_821318BC:
	// addi r11,r28,30
	ctx.r11.s64 = ctx.r28.s64 + 30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fcb8
	ctx.lr = 0x821318D0;
	sub_8212FCB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fdc8
	ctx.lr = 0x821318DC;
	sub_8212FDC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130918
	ctx.lr = 0x821318E8;
	sub_82130918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131388
	ctx.lr = 0x821318F4;
	sub_82131388(ctx, base);
	// stw r29,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r29.u32);
	// bl 0x821142a0
	ctx.lr = 0x821318FC;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131914
	if (ctx.cr6.eq) goto loc_82131914;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131914
	if (ctx.cr6.eq) goto loc_82131914;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_82131914:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8208f758
	ctx.lr = 0x82131928;
	sub_8208F758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82131934"))) PPC_WEAK_FUNC(sub_82131934);
PPC_FUNC_IMPL(__imp__sub_82131934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131938"))) PPC_WEAK_FUNC(sub_82131938);
PPC_FUNC_IMPL(__imp__sub_82131938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82131940;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821319f4
	if (!ctx.cr6.eq) goto loc_821319F4;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821319f4
	if (ctx.cr6.eq) goto loc_821319F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821344a0
	ctx.lr = 0x82131968;
	sub_821344A0(ctx, base);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821319ec
	if (!ctx.cr6.gt) goto loc_821319EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82131980:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821319b4
	if (ctx.cr6.eq) goto loc_821319B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821319B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821319B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r10,176
	ctx.r3.s64 = ctx.r10.s64 + 176;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821319D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82131980
	if (ctx.cr6.lt) goto loc_82131980;
loc_821319EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134500
	ctx.lr = 0x821319F4;
	sub_82134500(ctx, base);
loc_821319F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821319FC"))) PPC_WEAK_FUNC(sub_821319FC);
PPC_FUNC_IMPL(__imp__sub_821319FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131A00"))) PPC_WEAK_FUNC(sub_82131A00);
PPC_FUNC_IMPL(__imp__sub_82131A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82131A08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82131aa4
	if (!ctx.cr6.gt) goto loc_82131AA4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82131A2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131a54
	if (ctx.cr6.eq) goto loc_82131A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131A54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131a84
	if (ctx.cr6.eq) goto loc_82131A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131A84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82131a2c
	if (ctx.cr6.lt) goto loc_82131A2C;
loc_82131AA4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r29,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r29.u16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82131AC0"))) PPC_WEAK_FUNC(sub_82131AC0);
PPC_FUNC_IMPL(__imp__sub_82131AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31608
	ctx.r9.s64 = ctx.r10.s64 + 31608;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82131B08"))) PPC_WEAK_FUNC(sub_82131B08);
PPC_FUNC_IMPL(__imp__sub_82131B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82131b40
	if (ctx.cr6.eq) goto loc_82131B40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131B40:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131b68
	if (ctx.cr6.eq) goto loc_82131B68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131B68:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131b8c
	if (ctx.cr6.eq) goto loc_82131B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131B8C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131bb0
	if (ctx.cr6.eq) goto loc_82131BB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131BB0:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82131BCC"))) PPC_WEAK_FUNC(sub_82131BCC);
PPC_FUNC_IMPL(__imp__sub_82131BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131BD0"))) PPC_WEAK_FUNC(sub_82131BD0);
PPC_FUNC_IMPL(__imp__sub_82131BD0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82131c0c
	if (!ctx.cr6.gt) goto loc_82131C0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82131C0C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82131c2c
	if (!ctx.cr6.eq) goto loc_82131C2C;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34558
	ctx.r3.u64 = ctx.r3.u64 | 34558;
	// bl 0x8208f878
	ctx.lr = 0x82131C24;
	sub_8208F878(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82131C2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131c3c
	if (ctx.cr6.eq) goto loc_82131C3C;
	// bl 0x8213b478
	ctx.lr = 0x82131C3C;
	sub_8213B478(ctx, base);
loc_82131C3C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131c4c
	if (ctx.cr6.eq) goto loc_82131C4C;
	// bl 0x8213b478
	ctx.lr = 0x82131C4C;
	sub_8213B478(ctx, base);
loc_82131C4C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131c5c
	if (ctx.cr6.eq) goto loc_82131C5C;
	// bl 0x8213b478
	ctx.lr = 0x82131C5C;
	sub_8213B478(ctx, base);
loc_82131C5C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131c6c
	if (ctx.cr6.eq) goto loc_82131C6C;
	// bl 0x8213b478
	ctx.lr = 0x82131C6C;
	sub_8213B478(ctx, base);
loc_82131C6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82131C80"))) PPC_WEAK_FUNC(sub_82131C80);
PPC_FUNC_IMPL(__imp__sub_82131C80) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82131ce0
	if (!ctx.cr6.eq) goto loc_82131CE0;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82131ce0
	if (ctx.cr6.gt) goto loc_82131CE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821344a0
	ctx.lr = 0x82131CB4;
	sub_821344A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131cd8
	if (ctx.cr6.eq) goto loc_82131CD8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131CD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134500
	ctx.lr = 0x82131CE0;
	sub_82134500(ctx, base);
loc_82131CE0:
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

__attribute__((alias("__imp__sub_82131CF4"))) PPC_WEAK_FUNC(sub_82131CF4);
PPC_FUNC_IMPL(__imp__sub_82131CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131CF8"))) PPC_WEAK_FUNC(sub_82131CF8);
PPC_FUNC_IMPL(__imp__sub_82131CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82131D00;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,31612
	ctx.r10.s64 = ctx.r11.s64 + 31612;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// sth r31,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r31.u16);
	// sth r31,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r31.u16);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// bl 0x8215c080
	ctx.lr = 0x82131D3C;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82131D44;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82131D50;
	sub_821837D0(ctx, base);
	// lis r9,2340
	ctx.r9.s64 = 153354240;
	// extsh r29,r26
	ctx.r29.s64 = ctx.r26.s16;
	// ori r8,r9,37449
	ctx.r8.u64 = ctx.r9.u64 | 37449;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82131d78
	if (ctx.cr6.gt) goto loc_82131D78;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82131d7c
	if (!ctx.cr6.gt) goto loc_82131D7C;
loc_82131D78:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82131D7C:
	// bl 0x82183850
	ctx.lr = 0x82131D80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82131d98
	if (ctx.cr6.eq) goto loc_82131D98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x82131D94;
	sub_82183448(ctx, base);
	// b 0x82131da4
	goto loc_82131DA4;
loc_82131D98:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82131DA4;
	sub_821845A0(ctx, base);
loc_82131DA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131dec
	if (ctx.cr6.eq) goto loc_82131DEC;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82131de8
	if (ctx.cr0.lt) goto loc_82131DE8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82131DC8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stwu r31,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82131dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82131DC8;
loc_82131DE8:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82131DEC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r26,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r26.u16);
	// bl 0x821837d0
	ctx.lr = 0x82131DFC;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82131E08"))) PPC_WEAK_FUNC(sub_82131E08);
PPC_FUNC_IMPL(__imp__sub_82131E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82131E10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r10,31612
	ctx.r9.s64 = ctx.r10.s64 + 31612;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82131eb8
	if (!ctx.cr6.gt) goto loc_82131EB8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82131E40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131e64
	if (ctx.cr6.eq) goto loc_82131E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131E64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131e94
	if (ctx.cr6.eq) goto loc_82131E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82131E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131E94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82131e40
	if (ctx.cr6.lt) goto loc_82131E40;
loc_82131EB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131ed0
	if (ctx.cr6.eq) goto loc_82131ED0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82183e40
	ctx.lr = 0x82131ED0;
	sub_82183E40(ctx, base);
loc_82131ED0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82131EDC"))) PPC_WEAK_FUNC(sub_82131EDC);
PPC_FUNC_IMPL(__imp__sub_82131EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82131EE0"))) PPC_WEAK_FUNC(sub_82131EE0);
PPC_FUNC_IMPL(__imp__sub_82131EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82131EE8;
	sub_82248770(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821322b0
	if (ctx.cr6.eq) goto loc_821322B0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82131f14
	if (!ctx.cr6.gt) goto loc_82131F14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_82131F14:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// ble cr6,0x821322b0
	if (!ctx.cr6.gt) goto loc_821322B0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82131F34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82131fc8
	if (ctx.cr6.eq) goto loc_82131FC8;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82131f64
	if (!ctx.cr6.eq) goto loc_82131F64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82131ffc
	if (ctx.cr6.gt) goto loc_82131FFC;
loc_82131F64:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82131f84
	if (!ctx.cr6.eq) goto loc_82131F84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
	// b 0x82131ffc
	goto loc_82131FFC;
loc_82131F84:
	// bl 0x82182e90
	ctx.lr = 0x82131F88;
	sub_82182E90(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82131F90;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x82131F9C;
	sub_821837D0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82131FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x82131FC4;
	sub_821837D0(ctx, base);
	// b 0x82131ffc
	goto loc_82131FFC;
loc_82131FC8:
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82131FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131ffc
	if (ctx.cr6.eq) goto loc_82131FFC;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82131FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82131FFC:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82131f34
	if (ctx.cr6.lt) goto loc_82131F34;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821322b0
	if (ctx.cr6.eq) goto loc_821322B0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821320d4
	if (!ctx.cr6.eq) goto loc_821320D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213205c
	if (ctx.cr6.eq) goto loc_8213205C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213205c
	if (ctx.cr6.eq) goto loc_8213205C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213205C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213205C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132088
	if (ctx.cr6.eq) goto loc_82132088;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82132088:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r28.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r30.u32);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_821320D4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r28.u32);
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// ble 0x821322b0
	if (!ctx.cr0.gt) goto loc_821322B0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
loc_821321CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82132240
	if (ctx.cr6.eq) goto loc_82132240;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132200
	if (ctx.cr6.eq) goto loc_82132200;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82132200:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132230
	if (ctx.cr6.eq) goto loc_82132230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82132230:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x8213227c
	goto loc_8213227C;
loc_82132240:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r4.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r3,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r3.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stwu r9,28(r28)
	ea = 28 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r28.u32 = ea;
	// sth r7,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r7.u16);
loc_8213227C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r5,r10,28
	ctx.r5.s64 = ctx.r10.s64 * 28;
	// bl 0x821847a8
	ctx.lr = 0x82132294;
	sub_821847A8(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821321cc
	if (ctx.cr6.lt) goto loc_821321CC;
loc_821322B0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821322B8"))) PPC_WEAK_FUNC(sub_821322B8);
PPC_FUNC_IMPL(__imp__sub_821322B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821322C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82182e90
	ctx.lr = 0x821322D8;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821322E0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821322EC;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lwz r26,-1512(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// beq cr6,0x82132318
	if (ctx.cr6.eq) goto loc_82132318;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8213232c
	if (!ctx.cr6.eq) goto loc_8213232C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r3,r3,60147
	ctx.r3.u64 = ctx.r3.u64 | 60147;
	// bl 0x8208f658
	ctx.lr = 0x82132314;
	sub_8208F658(ctx, base);
	// b 0x82132330
	goto loc_82132330;
loc_82132318:
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r3,r3,60146
	ctx.r3.u64 = ctx.r3.u64 | 60146;
	// bl 0x8208f658
	ctx.lr = 0x82132328;
	sub_8208F658(ctx, base);
	// b 0x82132330
	goto loc_82132330;
loc_8213232C:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82132330:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132354
	if (ctx.cr6.eq) goto loc_82132354;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82132354:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212d148
	ctx.lr = 0x82132364;
	sub_8212D148(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-17344
	ctx.r9.s64 = ctx.r11.s64 + -17344;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f12,-17344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17344);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r8,-17360
	ctx.r4.s64 = ctx.r8.s64 + -17360;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821323AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821323d0
	if (!ctx.cr6.eq) goto loc_821323D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131b08
	ctx.lr = 0x821323C0;
	sub_82131B08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821323C8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821323D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821323E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821323FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x821837d0
	ctx.lr = 0x82132410;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82132418"))) PPC_WEAK_FUNC(sub_82132418);
PPC_FUNC_IMPL(__imp__sub_82132418) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213244c
	if (!ctx.cr6.eq) goto loc_8213244C;
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
loc_8213244C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82132464
	if (!ctx.cr6.eq) goto loc_82132464;
	// bl 0x82131b08
	ctx.lr = 0x82132464;
	sub_82131B08(ctx, base);
loc_82132464:
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

__attribute__((alias("__imp__sub_8213247C"))) PPC_WEAK_FUNC(sub_8213247C);
PPC_FUNC_IMPL(__imp__sub_8213247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82132480"))) PPC_WEAK_FUNC(sub_82132480);
PPC_FUNC_IMPL(__imp__sub_82132480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82131e08
	ctx.lr = 0x821324A0;
	sub_82131E08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821324bc
	if (ctx.cr6.eq) goto loc_821324BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821324B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821324BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821324D4"))) PPC_WEAK_FUNC(sub_821324D4);
PPC_FUNC_IMPL(__imp__sub_821324D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821324D8"))) PPC_WEAK_FUNC(sub_821324D8);
PPC_FUNC_IMPL(__imp__sub_821324D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x821324E0;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213257c
	if (!ctx.cr6.eq) goto loc_8213257C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82132544
	if (ctx.cr6.eq) goto loc_82132544;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132544
	if (ctx.cr6.eq) goto loc_82132544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82132544:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82132570
	if (ctx.cr6.eq) goto loc_82132570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82132570:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// sth r29,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r29.u16);
loc_8213257C:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82182e90
	ctx.lr = 0x82132598;
	sub_82182E90(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821325A0;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821837d0
	ctx.lr = 0x821325AC;
	sub_821837D0(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-1512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1512);
	// bl 0x8212d148
	ctx.lr = 0x821325C0;
	sub_8212D148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x8213261c
	if (ctx.cr6.eq) goto loc_8213261C;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x8213261c
	if (ctx.cr6.eq) goto loc_8213261C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8213b178
	ctx.lr = 0x821325E4;
	sub_8213B178(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213b178
	ctx.lr = 0x821325F4;
	sub_8213B178(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213b150
	ctx.lr = 0x82132608;
	sub_8213B150(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213b150
	ctx.lr = 0x8213261C;
	sub_8213B150(ctx, base);
loc_8213261C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r4,r24,16
	ctx.r4.u64 = ctx.r24.u32 & 0xFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213264C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r7,176(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82132664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r5,-7560
	ctx.r4.s64 = ctx.r5.s64 + -7560;
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r9.u16);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// bl 0x821837d0
	ctx.lr = 0x821326A4;
	sub_821837D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_821326AC"))) PPC_WEAK_FUNC(sub_821326AC);
PPC_FUNC_IMPL(__imp__sub_821326AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821326B0"))) PPC_WEAK_FUNC(sub_821326B0);
PPC_FUNC_IMPL(__imp__sub_821326B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,31608
	ctx.r8.s64 = ctx.r10.s64 + 31608;
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// bl 0x82131b08
	ctx.lr = 0x821326F4;
	sub_82131B08(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82132710
	if (ctx.cr6.eq) goto loc_82132710;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213270C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82132710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82132728"))) PPC_WEAK_FUNC(sub_82132728);
PPC_FUNC_IMPL(__imp__sub_82132728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82132730;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// addi r10,r11,31968
	ctx.r10.s64 = ctx.r11.s64 + 31968;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8212e710
	ctx.lr = 0x8213274C;
	sub_8212E710(ctx, base);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// bl 0x8213a470
	ctx.lr = 0x82132754;
	sub_8213A470(ctx, base);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// bl 0x8213a470
	ctx.lr = 0x8213275C;
	sub_8213A470(ctx, base);
	// addi r30,r31,1968
	ctx.r30.s64 = ctx.r31.s64 + 1968;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82132764:
	// addi r30,r30,-416
	ctx.r30.s64 = ctx.r30.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a470
	ctx.lr = 0x82132770;
	sub_8213A470(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82132764
	if (!ctx.cr0.lt) goto loc_82132764;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x823c3048
	ctx.lr = 0x82132780;
	sub_823C3048(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x823c3048
	ctx.lr = 0x82132788;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134bb0
	ctx.lr = 0x82132790;
	sub_82134BB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82132798"))) PPC_WEAK_FUNC(sub_82132798);
PPC_FUNC_IMPL(__imp__sub_82132798) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821327AC"))) PPC_WEAK_FUNC(sub_821327AC);
PPC_FUNC_IMPL(__imp__sub_821327AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821327B0"))) PPC_WEAK_FUNC(sub_821327B0);
PPC_FUNC_IMPL(__imp__sub_821327B0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132844
	if (ctx.cr6.eq) goto loc_82132844;
	// bl 0x8215bec8
	ctx.lr = 0x821327D8;
	sub_8215BEC8(ctx, base);
	// lbz r11,655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82132844
	if (ctx.cr6.eq) goto loc_82132844;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821344a0
	ctx.lr = 0x821327EC;
	sub_821344A0(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,2384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82132814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,304
	ctx.r31.s64 = ctx.r31.s64 + 304;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8213281C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82132830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// bne 0x8213281c
	if (!ctx.cr0.eq) goto loc_8213281C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134500
	ctx.lr = 0x82132844;
	sub_82134500(ctx, base);
loc_82132844:
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

__attribute__((alias("__imp__sub_8213285C"))) PPC_WEAK_FUNC(sub_8213285C);
PPC_FUNC_IMPL(__imp__sub_8213285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82132860"))) PPC_WEAK_FUNC(sub_82132860);
PPC_FUNC_IMPL(__imp__sub_82132860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821328f8
	if (ctx.cr6.eq) goto loc_821328F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,31988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x821328C4;
	sub_823C3320(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,14876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x821328F0;
	sub_823C3320(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
loc_821328F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82132914"))) PPC_WEAK_FUNC(sub_82132914);
PPC_FUNC_IMPL(__imp__sub_82132914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82132918"))) PPC_WEAK_FUNC(sub_82132918);
PPC_FUNC_IMPL(__imp__sub_82132918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821329b0
	if (ctx.cr6.eq) goto loc_821329B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// lfs f0,31988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x8213297C;
	sub_823C3320(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,14876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x821329A8;
	sub_823C3320(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
loc_821329B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821329CC"))) PPC_WEAK_FUNC(sub_821329CC);
PPC_FUNC_IMPL(__imp__sub_821329CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821329D0"))) PPC_WEAK_FUNC(sub_821329D0);
PPC_FUNC_IMPL(__imp__sub_821329D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82132728
	ctx.lr = 0x821329F0;
	sub_82132728(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82132a0c
	if (ctx.cr6.eq) goto loc_82132A0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82132A08;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82132A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82132A24"))) PPC_WEAK_FUNC(sub_82132A24);
PPC_FUNC_IMPL(__imp__sub_82132A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82132A28"))) PPC_WEAK_FUNC(sub_82132A28);
PPC_FUNC_IMPL(__imp__sub_82132A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82132A30;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r9,60
	ctx.r9.s64 = 60;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// divw r11,r10,r9
	ctx.r11.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mulli r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 * 60;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82132a5c
	if (!ctx.cr6.gt) goto loc_82132A5C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82132a64
	goto loc_82132A64;
loc_82132A5C:
	// cmpwi cr6,r10,59
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 59, ctx.xer);
	// ble cr6,0x82132a68
	if (!ctx.cr6.gt) goto loc_82132A68;
loc_82132A64:
	// li r10,59
	ctx.r10.s64 = 59;
loc_82132A68:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r31,r9,31616
	ctx.r31.s64 = ctx.r9.s64 + 31616;
	// divw r11,r10,r6
	ctx.r11.s32 = ctx.r10.s32 / ctx.r6.s32;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r27,r9,-8
	ctx.r27.s64 = ctx.r9.s64 + -8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r8,-4
	ctx.r26.s64 = ctx.r8.s64 + -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r30,r28,304
	ctx.r30.s64 = ctx.r28.s64 + 304;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_82132AB4:
	// lwzu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// lfs f12,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,228(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,212
	ctx.r11.s64 = ctx.r30.s64 + 212;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmadds f9,f12,f0,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r5,192(r30)
	PPC_STORE_U64(ctx.r30.u32 + 192, ctx.r5.u64);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r10,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r10.u64);
	// lfs f5,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfsu f0,8(r27)
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// stfs f0,208(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// stfs f5,212(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82132B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f4,276(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,100(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82132B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82132ab4
	if (ctx.cr6.lt) goto loc_82132AB4;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lfs f12,228(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r28,2384
	ctx.r30.s64 = ctx.r28.s64 + 2384;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// addi r29,r8,-17312
	ctx.r29.s64 = ctx.r8.s64 + -17312;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r29,96
	ctx.r6.s64 = ctx.r29.s64 + 96;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// bl 0x821345c8
	ctx.lr = 0x82132BD8;
	sub_821345C8(ctx, base);
	// lwz r6,2384(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2384);
	// lfs f10,276(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,100(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82132BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,228(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r28,1968
	ctx.r30.s64 = ctx.r28.s64 + 1968;
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// bl 0x821345c8
	ctx.lr = 0x82132C3C;
	sub_821345C8(ctx, base);
	// lwz r7,1968(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1968);
	// lfs f6,276(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82132C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82132C68"))) PPC_WEAK_FUNC(sub_82132C68);
PPC_FUNC_IMPL(__imp__sub_82132C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82132C70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132da8
	if (ctx.cr6.eq) goto loc_82132DA8;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82132d80
	if (ctx.cr6.lt) goto loc_82132D80;
	// beq cr6,0x82132cc8
	if (ctx.cr6.eq) goto loc_82132CC8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82132da0
	if (!ctx.cr6.lt) goto loc_82132DA0;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82132da0
	if (!ctx.cr6.gt) goto loc_82132DA0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// bne 0x82132da0
	if (!ctx.cr0.eq) goto loc_82132DA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// bl 0x82132a28
	ctx.lr = 0x82132CC0;
	sub_82132A28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82132CC8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// addi r30,r11,-7560
	ctx.r30.s64 = ctx.r11.s64 + -7560;
	// lwz r11,-8608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8608);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mulli r31,r10,60
	ctx.r31.s64 = ctx.r10.s64 * 60;
	// divw r8,r11,r31
	ctx.r8.s32 = ctx.r11.s32 / ctx.r31.s32;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mullw r6,r8,r31
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// andc r4,r31,r7
	ctx.r4.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// twllei r31,0
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	// bne 0x82132d14
	if (!ctx.cr0.eq) goto loc_82132D14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82132860
	ctx.lr = 0x82132D0C;
	sub_82132860(ctx, base);
	// lwz r11,-8608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8608);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82132D14:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r6,r11,r31
	ctx.r6.s32 = ctx.r11.s32 / ctx.r31.s32;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mullw r4,r6,r31
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// twllei r31,0
	// twlgei r10,-1
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82132d54
	if (!ctx.cr6.eq) goto loc_82132D54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82132918
	ctx.lr = 0x82132D54;
	sub_82132918(ctx, base);
loc_82132D54:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82132da0
	if (!ctx.cr6.eq) goto loc_82132DA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82132860
	ctx.lr = 0x82132D68;
	sub_82132860(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r11.u32);
	// bl 0x82132a28
	ctx.lr = 0x82132D78;
	sub_82132A28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82132D80:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82132da0
	if (!ctx.cr6.eq) goto loc_82132DA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82132860
	ctx.lr = 0x82132D98;
	sub_82132860(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r11.u32);
loc_82132DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82132a28
	ctx.lr = 0x82132DA8;
	sub_82132A28(ctx, base);
loc_82132DA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82132DB0"))) PPC_WEAK_FUNC(sub_82132DB0);
PPC_FUNC_IMPL(__imp__sub_82132DB0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82132dc4
	if (!ctx.cr6.eq) goto loc_82132DC4;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82132DC4:
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82132de4
	if (!ctx.cr6.lt) goto loc_82132DE4;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
loc_82132DE4:
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82132dfc
	if (!ctx.cr6.eq) goto loc_82132DFC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82132DFC:
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// b 0x82132a28
	sub_82132A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82132E04"))) PPC_WEAK_FUNC(sub_82132E04);
PPC_FUNC_IMPL(__imp__sub_82132E04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82132E08"))) PPC_WEAK_FUNC(sub_82132E08);
PPC_FUNC_IMPL(__imp__sub_82132E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82132E10;
	sub_82248774(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82134b40
	ctx.lr = 0x82132E20;
	sub_82134B40(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lfs f13,9864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9864);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r7,31968
	ctx.r6.s64 = ctx.r7.s64 + 31968;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x82132EAC;
	sub_823C2FF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x823c2ff0
	ctx.lr = 0x82132EB8;
	sub_823C2FF0(ctx, base);
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82132EC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x82132ECC;
	sub_8213A6F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// bge 0x82132ec4
	if (!ctx.cr0.lt) goto loc_82132EC4;
	// addi r25,r31,1968
	ctx.r25.s64 = ctx.r31.s64 + 1968;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x82132EE4;
	sub_8213A6F8(ctx, base);
	// addi r24,r31,2384
	ctx.r24.s64 = ctx.r31.s64 + 2384;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x82132EF0;
	sub_8213A6F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134468
	ctx.lr = 0x82132EF8;
	sub_82134468(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,-1512(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1512);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8212d0d8
	ctx.lr = 0x82132F2C;
	sub_8212D0D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,31680
	ctx.r28.s64 = ctx.r11.s64 + 31680;
	// lfs f31,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_82132F44:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d25f8
	ctx.lr = 0x82132F50;
	sub_821D25F8(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,102
	ctx.r3.s64 = 102;
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f31,40(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8218b408
	ctx.lr = 0x82132F70;
	sub_8218B408(ctx, base);
	// lwz r11,92(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// bne 0x82132f44
	if (!ctx.cr0.eq) goto loc_82132F44;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d0d8
	ctx.lr = 0x82132FA4;
	sub_8212D0D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x821d25f8
	ctx.lr = 0x82132FB4;
	sub_821D25F8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,-8612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8612);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8212d0d8
	ctx.lr = 0x82132FD0;
	sub_8212D0D8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x821d25f8
	ctx.lr = 0x82132FE0;
	sub_821D25F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134488
	ctx.lr = 0x82132FE8;
	sub_82134488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82132FF8"))) PPC_WEAK_FUNC(sub_82132FF8);
PPC_FUNC_IMPL(__imp__sub_82132FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,32112
	ctx.r10.s64 = ctx.r11.s64 + 32112;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8213303c
	if (ctx.cr6.eq) goto loc_8213303C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213303C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213303C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133064
	if (ctx.cr6.eq) goto loc_82133064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133064:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821343f8
	ctx.lr = 0x82133070;
	sub_821343F8(ctx, base);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x823c30b8
	ctx.lr = 0x82133078;
	sub_823C30B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134bb0
	ctx.lr = 0x82133080;
	sub_82134BB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133098"))) PPC_WEAK_FUNC(sub_82133098);
PPC_FUNC_IMPL(__imp__sub_82133098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821330A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne cr6,0x821330c8
	if (!ctx.cr6.eq) goto loc_821330C8;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821330cc
	if (ctx.cr6.eq) goto loc_821330CC;
loc_821330C8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_821330CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821330e8
	if (ctx.cr6.eq) goto loc_821330E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821330E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821330E8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213310c
	if (ctx.cr6.eq) goto loc_8213310C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213310C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213310C:
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821343f8
	ctx.lr = 0x82133118;
	sub_821343F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8213312c
	if (ctx.cr6.eq) goto loc_8213312C;
	// bl 0x821eb3e8
	ctx.lr = 0x82133124;
	sub_821EB3E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x8213312C;
	sub_821EBAA8(ctx, base);
loc_8213312C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82133134"))) PPC_WEAK_FUNC(sub_82133134);
PPC_FUNC_IMPL(__imp__sub_82133134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133138"))) PPC_WEAK_FUNC(sub_82133138);
PPC_FUNC_IMPL(__imp__sub_82133138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133154"))) PPC_WEAK_FUNC(sub_82133154);
PPC_FUNC_IMPL(__imp__sub_82133154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133158"))) PPC_WEAK_FUNC(sub_82133158);
PPC_FUNC_IMPL(__imp__sub_82133158) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133180
	if (ctx.cr6.eq) goto loc_82133180;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821331a0
	goto loc_821331A0;
loc_82133180:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133194
	if (ctx.cr6.eq) goto loc_82133194;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821331a0
	goto loc_821331A0;
loc_82133194:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821343f8
	ctx.lr = 0x8213319C;
	sub_821343F8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_821331A0:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821331B8"))) PPC_WEAK_FUNC(sub_821331B8);
PPC_FUNC_IMPL(__imp__sub_821331B8) {
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
	// bl 0x82134b40
	ctx.lr = 0x821331D4;
	sub_82134B40(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r9,32112
	ctx.r8.s64 = ctx.r9.s64 + 32112;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r7,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r7.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// bl 0x823c34c0
	ctx.lr = 0x8213323C;
	sub_823C34C0(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x822aa648
	ctx.lr = 0x82133248;
	sub_822AA648(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r5,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r5.u32);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r4,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133280"))) PPC_WEAK_FUNC(sub_82133280);
PPC_FUNC_IMPL(__imp__sub_82133280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82132ff8
	ctx.lr = 0x821332A0;
	sub_82132FF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821332bc
	if (ctx.cr6.eq) goto loc_821332BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821332B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821332BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821332D4"))) PPC_WEAK_FUNC(sub_821332D4);
PPC_FUNC_IMPL(__imp__sub_821332D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821332D8"))) PPC_WEAK_FUNC(sub_821332D8);
PPC_FUNC_IMPL(__imp__sub_821332D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821332E0;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821332F8;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82133304;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82133314;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82133320;
	sub_821AD498(ctx, base);
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// lwz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82133378
	if (ctx.cr6.eq) goto loc_82133378;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133354
	if (ctx.cr6.eq) goto loc_82133354;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133354:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133378
	if (ctx.cr6.eq) goto loc_82133378;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133378:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82133384;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82133390;
	sub_821AD498(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82133398"))) PPC_WEAK_FUNC(sub_82133398);
PPC_FUNC_IMPL(__imp__sub_82133398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821333A0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8215c080
	ctx.lr = 0x821333C0;
	sub_8215C080(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821333C8;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x821333D4;
	sub_821837D0(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// bl 0x821343f8
	ctx.lr = 0x82133404;
	sub_821343F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,380
	ctx.r30.s64 = ctx.r31.s64 + 380;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8213341C;
	sub_821847A8(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82133440
	if (ctx.cr6.eq) goto loc_82133440;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r25,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r25.u32);
	// stw r25,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r25.u32);
	// stw r25,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r25.u32);
	// stw r25,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r25.u32);
	// stw r25,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r25.u32);
	// b 0x821334b4
	goto loc_821334B4;
loc_82133440:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r9.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r9.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
loc_821334B4:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r26,r31,124
	ctx.r26.s64 = ctx.r31.s64 + 124;
	// stb r24,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r24.u8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8213355c
	if (ctx.cr6.eq) goto loc_8213355C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_821334D8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82133514
	if (ctx.cr6.eq) goto loc_82133514;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821334F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82133508
	if (ctx.cr6.eq) goto loc_82133508;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82133508:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213359c
	if (ctx.cr6.eq) goto loc_8213359C;
loc_82133514:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x821334d8
	if (ctx.cr6.lt) goto loc_821334D8;
loc_82133524:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r4,r10,6073
	ctx.r4.s64 = ctx.r10.s64 + 6073;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82133540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r3,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r3.s64;
loc_82133544:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x82133544
	if (!ctx.cr6.eq) goto loc_82133544;
loc_8213355C:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213357c
	if (ctx.cr6.eq) goto loc_8213357C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213357C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213357C:
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// bl 0x82183850
	ctx.lr = 0x82133584;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82133634
	if (ctx.cr6.eq) goto loc_82133634;
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82183448
	ctx.lr = 0x82133598;
	sub_82183448(ctx, base);
	// b 0x8213363c
	goto loc_8213363C;
loc_8213359C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133524
	if (ctx.cr6.eq) goto loc_82133524;
	// lwz r3,1992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// bl 0x8215bd28
	ctx.lr = 0x821335B4;
	sub_8215BD28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r3,45
	ctx.r30.s64 = ctx.r3.s64 + 45;
	// addi r4,r11,4393
	ctx.r4.s64 = ctx.r11.s64 + 4393;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a360
	ctx.lr = 0x821335C8;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821335f4
	if (ctx.cr6.eq) goto loc_821335F4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r30.s64;
loc_821335D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821335d8
	if (!ctx.cr6.eq) goto loc_821335D8;
	// b 0x8213355c
	goto loc_8213355C;
loc_821335F4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r11,6073
	ctx.r4.s64 = ctx.r11.s64 + 6073;
	// lwz r3,-4904(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4904);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82133614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r3,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r3.s64;
loc_82133618:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x82133618
	if (!ctx.cr6.eq) goto loc_82133618;
	// b 0x8213355c
	goto loc_8213355C;
loc_82133634:
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x821845a0
	ctx.lr = 0x8213363C;
	sub_821845A0(ctx, base);
loc_8213363C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213366c
	if (ctx.cr6.eq) goto loc_8213366C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x8213cf08
	ctx.lr = 0x82133668;
	sub_8213CF08(ctx, base);
	// b 0x82133670
	goto loc_82133670;
loc_8213366C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82133670:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r24,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r24.u32);
	// ori r3,r3,34469
	ctx.r3.u64 = ctx.r3.u64 | 34469;
	// bl 0x8208f870
	ctx.lr = 0x82133684;
	sub_8208F870(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213368C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82133694"))) PPC_WEAK_FUNC(sub_82133694);
PPC_FUNC_IMPL(__imp__sub_82133694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133698"))) PPC_WEAK_FUNC(sub_82133698);
PPC_FUNC_IMPL(__imp__sub_82133698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821336A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x821336AC;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821336B4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821336C0;
	sub_821837D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r3,34470
	ctx.r3.u64 = ctx.r3.u64 | 34470;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bl 0x8208f870
	ctx.lr = 0x821336E8;
	sub_8208F870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821336F0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821336F8"))) PPC_WEAK_FUNC(sub_821336F8);
PPC_FUNC_IMPL(__imp__sub_821336F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82133700;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x8213370C;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133714;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133720;
	sub_821837D0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r28,156(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// bctrl 
	ctx.lr = 0x82133738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133758
	if (ctx.cr6.eq) goto loc_82133758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133758:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// bgt cr6,0x82133908
	if (ctx.cr6.gt) goto loc_82133908;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821337a4
	// bdzf 4*cr6+eq,0x821337f0
	// bdzf 4*cr6+eq,0x8213383c
	// bdzf 4*cr6+eq,0x8213386c
	// bne cr6,0x821338b8
	if (!ctx.cr6.eq) goto loc_821338B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133698
	ctx.lr = 0x82133790;
	sub_82133698(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213379C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821337A4:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x821337AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8213cf08
	ctx.lr = 0x821337D8;
	sub_8213CF08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821337E8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821337F0:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x821337F8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8213cf08
	ctx.lr = 0x82133824;
	sub_8213CF08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133834;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8213383C:
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133864;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8213386C:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x82133874;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8213cf08
	ctx.lr = 0x821338A0;
	sub_8213CF08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821338B0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821338B8:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x821338C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8213cf08
	ctx.lr = 0x821338EC;
	sub_8213CF08(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821338FC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82133904:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82133908:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133914;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8213391C"))) PPC_WEAK_FUNC(sub_8213391C);
PPC_FUNC_IMPL(__imp__sub_8213391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133920"))) PPC_WEAK_FUNC(sub_82133920);
PPC_FUNC_IMPL(__imp__sub_82133920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82133928;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215c080
	ctx.lr = 0x82133938;
	sub_8215C080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133940;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213394C;
	sub_821837D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bgt cr6,0x82133ac4
	if (ctx.cr6.gt) goto loc_82133AC4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82133990
	// bdzf 4*cr6+eq,0x821339cc
	// bdzf 4*cr6+eq,0x821339fc
	// bdzf 4*cr6+eq,0x82133a3c
	// bne cr6,0x82133a6c
	if (!ctx.cr6.eq) goto loc_82133A6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82133698
	ctx.lr = 0x8213397C;
	sub_82133698(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133984;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133990:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x82133998;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// li r5,6070
	ctx.r5.s64 = 6070;
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8213d5f0
	ctx.lr = 0x821339B4;
	sub_8213D5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821339C0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821339CC:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x821339D4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8213d448
	ctx.lr = 0x821339E4;
	sub_8213D448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821339F0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821339FC:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,688
	ctx.r3.s64 = 688;
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x82133A14;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8213d130
	ctx.lr = 0x82133A24;
	sub_8213D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133A30;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133A3C:
	// li r3,672
	ctx.r3.s64 = 672;
	// bl 0x82080000
	ctx.lr = 0x82133A44;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8213cfc0
	ctx.lr = 0x82133A54;
	sub_8213CFC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133A60;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133A6C:
	// li r31,6140
	ctx.r31.s64 = 6140;
	// bl 0x8215bec8
	ctx.lr = 0x82133A74;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82133a84
	if (!ctx.cr6.eq) goto loc_82133A84;
	// li r31,6072
	ctx.r31.s64 = 6072;
loc_82133A84:
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x82133A8C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ac0
	if (ctx.cr6.eq) goto loc_82133AC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8213d5f0
	ctx.lr = 0x82133AA8;
	sub_8213D5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133AB4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133AC0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82133AC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133ACC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82133AD8"))) PPC_WEAK_FUNC(sub_82133AD8);
PPC_FUNC_IMPL(__imp__sub_82133AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82133AE0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215c080
	ctx.lr = 0x82133AF0;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133AF8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133B04;
	sub_821837D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82133b60
	if (ctx.cr6.lt) goto loc_82133B60;
	// bne cr6,0x82133b88
	if (!ctx.cr6.eq) goto loc_82133B88;
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x82133B1C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133b88
	if (ctx.cr6.eq) goto loc_82133B88;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8213cf08
	ctx.lr = 0x82133B48;
	sub_8213CF08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133B54;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133B60:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82133698
	ctx.lr = 0x82133B70;
	sub_82133698(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8208f758
	ctx.lr = 0x82133B84;
	sub_8208F758(ctx, base);
	// bl 0x8208f7f0
	ctx.lr = 0x82133B88;
	sub_8208F7F0(ctx, base);
loc_82133B88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133B90;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82133B9C"))) PPC_WEAK_FUNC(sub_82133B9C);
PPC_FUNC_IMPL(__imp__sub_82133B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133BA0"))) PPC_WEAK_FUNC(sub_82133BA0);
PPC_FUNC_IMPL(__imp__sub_82133BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82133BA8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x82133BB4;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133BBC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133BC8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82133BCC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82133be4
	if (ctx.cr6.eq) goto loc_82133BE4;
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82183448
	ctx.lr = 0x82133BE0;
	sub_82183448(ctx, base);
	// b 0x82133bec
	goto loc_82133BEC;
loc_82133BE4:
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x821845a0
	ctx.lr = 0x82133BEC;
	sub_821845A0(ctx, base);
loc_82133BEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133c34
	if (ctx.cr6.eq) goto loc_82133C34;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8213cf08
	ctx.lr = 0x82133C1C;
	sub_8213CF08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133C28;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82133C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82133C40;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82133C4C"))) PPC_WEAK_FUNC(sub_82133C4C);
PPC_FUNC_IMPL(__imp__sub_82133C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133C50"))) PPC_WEAK_FUNC(sub_82133C50);
PPC_FUNC_IMPL(__imp__sub_82133C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82133C58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215c080
	ctx.lr = 0x82133C68;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133C70;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133C7C;
	sub_821837D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82133cd8
	if (ctx.cr6.lt) goto loc_82133CD8;
	// bne cr6,0x82133ce8
	if (!ctx.cr6.eq) goto loc_82133CE8;
	// li r3,688
	ctx.r3.s64 = 688;
	// bl 0x82080000
	ctx.lr = 0x82133C94;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ce8
	if (ctx.cr6.eq) goto loc_82133CE8;
	// addi r10,r31,124
	ctx.r10.s64 = ctx.r31.s64 + 124;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8213cf08
	ctx.lr = 0x82133CC0;
	sub_8213CF08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133CCC;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82133CD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82133698
	ctx.lr = 0x82133CE8;
	sub_82133698(ctx, base);
loc_82133CE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133CF0;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82133CFC"))) PPC_WEAK_FUNC(sub_82133CFC);
PPC_FUNC_IMPL(__imp__sub_82133CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133D00"))) PPC_WEAK_FUNC(sub_82133D00);
PPC_FUNC_IMPL(__imp__sub_82133D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82133D08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x82133D14;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82133D1C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133D28;
	sub_821837D0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r29,156(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// bctrl 
	ctx.lr = 0x82133D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bgt cr6,0x82133dc0
	if (ctx.cr6.gt) goto loc_82133DC0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82133d78
	// bdzf 4*cr6+eq,0x82133d84
	// bdzf 4*cr6+eq,0x82133d90
	// bdzf 4*cr6+eq,0x82133dc0
	// bne cr6,0x82133db4
	if (!ctx.cr6.eq) goto loc_82133DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133920
	ctx.lr = 0x82133D74;
	sub_82133920(ctx, base);
	// b 0x82133dbc
	goto loc_82133DBC;
loc_82133D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133ad8
	ctx.lr = 0x82133D80;
	sub_82133AD8(ctx, base);
	// b 0x82133dbc
	goto loc_82133DBC;
loc_82133D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133ba0
	ctx.lr = 0x82133D8C;
	sub_82133BA0(ctx, base);
	// b 0x82133dbc
	goto loc_82133DBC;
loc_82133D90:
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82133DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82133dc0
	goto loc_82133DC0;
loc_82133DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133c50
	ctx.lr = 0x82133DBC;
	sub_82133C50(ctx, base);
loc_82133DBC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82133DC0:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133de0
	if (ctx.cr6.eq) goto loc_82133DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133DE0:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82133DEC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82133DF4"))) PPC_WEAK_FUNC(sub_82133DF4);
PPC_FUNC_IMPL(__imp__sub_82133DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133DF8"))) PPC_WEAK_FUNC(sub_82133DF8);
PPC_FUNC_IMPL(__imp__sub_82133DF8) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ea4
	if (ctx.cr6.eq) goto loc_82133EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82133ea4
	if (ctx.cr6.eq) goto loc_82133EA4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82133e74
	if (ctx.cr6.eq) goto loc_82133E74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// bl 0x82133d00
	ctx.lr = 0x82133E60;
	sub_82133D00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82133E74:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82133E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82133ea4
	if (ctx.cr6.eq) goto loc_82133EA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// bl 0x821336f8
	ctx.lr = 0x82133EA4;
	sub_821336F8(ctx, base);
loc_82133EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133EB8"))) PPC_WEAK_FUNC(sub_82133EB8);
PPC_FUNC_IMPL(__imp__sub_82133EB8) {
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
	// lwz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82133f64
	if (!ctx.cr6.eq) goto loc_82133F64;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82133f08
	if (ctx.cr6.eq) goto loc_82133F08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82133efc
	if (ctx.cr6.eq) goto loc_82133EFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82133f24
	if (!ctx.cr6.eq) goto loc_82133F24;
	// bl 0x82133158
	ctx.lr = 0x82133EF8;
	sub_82133158(ctx, base);
	// b 0x82133f24
	goto loc_82133F24;
loc_82133EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133df8
	ctx.lr = 0x82133F04;
	sub_82133DF8(ctx, base);
	// b 0x82133f24
	goto loc_82133F24;
loc_82133F08:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133f24
	if (ctx.cr6.eq) goto loc_82133F24;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82133f24
	if (!ctx.cr6.eq) goto loc_82133F24;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82133F24:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133f44
	if (ctx.cr6.eq) goto loc_82133F44;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82133F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133F44:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133f64
	if (ctx.cr6.eq) goto loc_82133F64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82133F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133F64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133F78"))) PPC_WEAK_FUNC(sub_82133F78);
PPC_FUNC_IMPL(__imp__sub_82133F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133F84"))) PPC_WEAK_FUNC(sub_82133F84);
PPC_FUNC_IMPL(__imp__sub_82133F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82133F88"))) PPC_WEAK_FUNC(sub_82133F88);
PPC_FUNC_IMPL(__imp__sub_82133F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-1492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1492);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82133fcc
	if (!ctx.cr6.eq) goto loc_82133FCC;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-1492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1492, ctx.r11.u32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
loc_82133FCC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82133FD8"))) PPC_WEAK_FUNC(sub_82133FD8);
PPC_FUNC_IMPL(__imp__sub_82133FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-17072
	ctx.r11.s64 = ctx.r11.s64 + -17072;
	// lwz r10,-1488(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1488);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213405c
	if (!ctx.cr6.eq) goto loc_8213405C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32632(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32632);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1488(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1488, ctx.r10.u32);
	// lfs f12,32628(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32624(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32624);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8213405C:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134078"))) PPC_WEAK_FUNC(sub_82134078);
PPC_FUNC_IMPL(__imp__sub_82134078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-17008
	ctx.r11.s64 = ctx.r11.s64 + -17008;
	// lwz r10,-1484(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1484);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821340fc
	if (!ctx.cr6.eq) goto loc_821340FC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32632(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32632);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1484, ctx.r10.u32);
	// lfs f12,32636(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32636);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32624(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32624);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_821340FC:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134118"))) PPC_WEAK_FUNC(sub_82134118);
PPC_FUNC_IMPL(__imp__sub_82134118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-16944
	ctx.r11.s64 = ctx.r11.s64 + -16944;
	// lwz r10,-1480(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1480);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213419c
	if (!ctx.cr6.eq) goto loc_8213419C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32648(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32648);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1480(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1480, ctx.r10.u32);
	// lfs f12,32644(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32640(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32640);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8213419C:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821341B8"))) PPC_WEAK_FUNC(sub_821341B8);
PPC_FUNC_IMPL(__imp__sub_821341B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-16880
	ctx.r11.s64 = ctx.r11.s64 + -16880;
	// lwz r10,-1476(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1476);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213423c
	if (!ctx.cr6.eq) goto loc_8213423C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32656(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32656);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1476(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1476, ctx.r10.u32);
	// lfs f12,32628(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32652(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32652);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8213423C:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134258"))) PPC_WEAK_FUNC(sub_82134258);
PPC_FUNC_IMPL(__imp__sub_82134258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-16816
	ctx.r11.s64 = ctx.r11.s64 + -16816;
	// lwz r10,-1472(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1472);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821342dc
	if (!ctx.cr6.eq) goto loc_821342DC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32664(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32664);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1472(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1472, ctx.r10.u32);
	// lfs f12,32660(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,14780(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14780);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_821342DC:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821342F8"))) PPC_WEAK_FUNC(sub_821342F8);
PPC_FUNC_IMPL(__imp__sub_821342F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-16752
	ctx.r11.s64 = ctx.r11.s64 + -16752;
	// lwz r10,-1468(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1468);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213437c
	if (!ctx.cr6.eq) goto loc_8213437C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f0,32608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32664(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32664);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-1468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1468, ctx.r10.u32);
	// lfs f12,32668(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32668);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,14780(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14780);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_8213437C:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134398"))) PPC_WEAK_FUNC(sub_82134398);
PPC_FUNC_IMPL(__imp__sub_82134398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821343A4"))) PPC_WEAK_FUNC(sub_821343A4);
PPC_FUNC_IMPL(__imp__sub_821343A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821343A8"))) PPC_WEAK_FUNC(sub_821343A8);
PPC_FUNC_IMPL(__imp__sub_821343A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lfs f13,13576(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13576);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,9064(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9064);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,-17104(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + -17104, temp.u32);
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f0,-17100(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -17100, temp.u32);
	// stw r11,-17120(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821343F4"))) PPC_WEAK_FUNC(sub_821343F4);
PPC_FUNC_IMPL(__imp__sub_821343F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821343F8"))) PPC_WEAK_FUNC(sub_821343F8);
PPC_FUNC_IMPL(__imp__sub_821343F8) {
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
	ctx.lr = 0x82134410;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134448
	if (ctx.cr6.eq) goto loc_82134448;
	// bl 0x82225508
	ctx.lr = 0x82134420;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82134450
	if (ctx.cr6.eq) goto loc_82134450;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// stw r31,1820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1820, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82134448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ecc60
	ctx.lr = 0x82134450;
	sub_820ECC60(ctx, base);
loc_82134450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134464"))) PPC_WEAK_FUNC(sub_82134464);
PPC_FUNC_IMPL(__imp__sub_82134464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134468"))) PPC_WEAK_FUNC(sub_82134468);
PPC_FUNC_IMPL(__imp__sub_82134468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-1736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,-1736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134488"))) PPC_WEAK_FUNC(sub_82134488);
PPC_FUNC_IMPL(__imp__sub_82134488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213449C"))) PPC_WEAK_FUNC(sub_8213449C);
PPC_FUNC_IMPL(__imp__sub_8213449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821344A0"))) PPC_WEAK_FUNC(sub_821344A0);
PPC_FUNC_IMPL(__imp__sub_821344A0) {
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
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r11,-1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821344CC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821344cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821344CC;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x821344E8;
	sub_8216DB98(ctx, base);
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

__attribute__((alias("__imp__sub_82134500"))) PPC_WEAK_FUNC(sub_82134500);
PPC_FUNC_IMPL(__imp__sub_82134500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// b 0x821d16c0
	sub_821D16C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82134510"))) PPC_WEAK_FUNC(sub_82134510);
PPC_FUNC_IMPL(__imp__sub_82134510) {
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
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lwz r11,-1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82134544:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82134544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82134544;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x82134560;
	sub_8216DB98(ctx, base);
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

__attribute__((alias("__imp__sub_82134578"))) PPC_WEAK_FUNC(sub_82134578);
PPC_FUNC_IMPL(__imp__sub_82134578) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821345b0
	if (ctx.cr6.eq) goto loc_821345B0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// bl 0x821d16c0
	ctx.lr = 0x821345A8;
	sub_821D16C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_821345B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821345C4"))) PPC_WEAK_FUNC(sub_821345C4);
PPC_FUNC_IMPL(__imp__sub_821345C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821345C8"))) PPC_WEAK_FUNC(sub_821345C8);
PPC_FUNC_IMPL(__imp__sub_821345C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f13,f0,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f12,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bne cr6,0x8213464c
	if (!ctx.cr6.eq) goto loc_8213464C;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// b 0x82134650
	goto loc_82134650;
loc_8213464C:
	// lfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
loc_82134650:
	// lfs f10,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bne cr6,0x82134664
	if (!ctx.cr6.eq) goto loc_82134664;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// b 0x82134668
	goto loc_82134668;
loc_82134664:
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
loc_82134668:
	// fmuls f11,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,36(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fmuls f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f10,32(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821346d8
	if (!ctx.cr6.eq) goto loc_821346D8;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x821347ac
	goto loc_821347AC;
loc_821346D8:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f7,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// bne cr6,0x82134740
	if (!ctx.cr6.eq) goto loc_82134740;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_82134740:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x8213474c
	if (!ctx.cr6.eq) goto loc_8213474C;
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
loc_8213474C:
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// beq cr6,0x82134774
	if (ctx.cr6.eq) goto loc_82134774;
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x8213477c
	goto loc_8213477C;
loc_82134774:
	// stfs f7,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8213477C:
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// beq cr6,0x821347a4
	if (ctx.cr6.eq) goto loc_821347A4;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x821347ac
	goto loc_821347AC;
loc_821347A4:
	// stfs f10,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_821347AC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r8,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r8.u64);
	// std r9,192(r30)
	PPC_STORE_U64(ctx.r30.u32 + 192, ctx.r9.u64);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// stfs f0,212(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// bctrl 
	ctx.lr = 0x821347EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213481c
	if (ctx.cr6.eq) goto loc_8213481C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82134814
	if (ctx.cr6.eq) goto loc_82134814;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82134828
	goto loc_82134828;
loc_82134814:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82134828
	goto loc_82134828;
loc_8213481C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
loc_82134828:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82134848"))) PPC_WEAK_FUNC(sub_82134848);
PPC_FUNC_IMPL(__imp__sub_82134848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82134850;
	sub_82248784(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// lfs f29,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// bne cr6,0x821348a8
	if (!ctx.cr6.eq) goto loc_821348A8;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_821348A8:
	// lfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x821348b8
	if (!ctx.cr6.eq) goto loc_821348B8;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_821348B8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821348c8
	if (ctx.cr6.eq) goto loc_821348C8;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// b 0x821348e8
	goto loc_821348E8;
loc_821348C8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821348E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821348E8:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lwz r9,-1736(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1736);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82134900:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82134900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82134900;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82134944
	if (!ctx.cr6.eq) goto loc_82134944;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r11,r9,-16688
	ctx.r11.s64 = ctx.r9.s64 + -16688;
	// lwz r10,-17120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17120);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// b 0x8213494c
	goto loc_8213494C;
loc_82134944:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_8213494C:
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f12,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f5,f7,f11,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r27.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
	// bl 0x821d9c10
	ctx.lr = 0x821349C0;
	sub_821D9C10(ctx, base);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821349fc
	if (ctx.cr6.eq) goto loc_821349FC;
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x821d93f8
	ctx.lr = 0x821349F8;
	sub_821D93F8(ctx, base);
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
loc_821349FC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82134a2c
	if (ctx.cr6.eq) goto loc_82134A2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82134a24
	if (ctx.cr6.eq) goto loc_82134A24;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82134a38
	goto loc_82134A38;
loc_82134A24:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82134a38
	goto loc_82134A38;
loc_82134A2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
loc_82134A38:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r8,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r8.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82134A6C"))) PPC_WEAK_FUNC(sub_82134A6C);
PPC_FUNC_IMPL(__imp__sub_82134A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134A70"))) PPC_WEAK_FUNC(sub_82134A70);
PPC_FUNC_IMPL(__imp__sub_82134A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,32676
	ctx.r10.s64 = ctx.r11.s64 + 32676;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82134ac4
	if (ctx.cr6.eq) goto loc_82134AC4;
loc_82134AA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82134aa0
	if (!ctx.cr6.eq) goto loc_82134AA0;
loc_82134AC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821274a0
	ctx.lr = 0x82134ACC;
	sub_821274A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134AE4"))) PPC_WEAK_FUNC(sub_82134AE4);
PPC_FUNC_IMPL(__imp__sub_82134AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134AE8"))) PPC_WEAK_FUNC(sub_82134AE8);
PPC_FUNC_IMPL(__imp__sub_82134AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82134a70
	ctx.lr = 0x82134B08;
	sub_82134A70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134b24
	if (ctx.cr6.eq) goto loc_82134B24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82134B20;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82134B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134B3C"))) PPC_WEAK_FUNC(sub_82134B3C);
PPC_FUNC_IMPL(__imp__sub_82134B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134B40"))) PPC_WEAK_FUNC(sub_82134B40);
PPC_FUNC_IMPL(__imp__sub_82134B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r8,32680
	ctx.r6.s64 = ctx.r8.s64 + 32680;
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f13,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,32608(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134BB0"))) PPC_WEAK_FUNC(sub_82134BB0);
PPC_FUNC_IMPL(__imp__sub_82134BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,32680
	ctx.r10.s64 = ctx.r11.s64 + 32680;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82134a70
	sub_82134A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82134BC0"))) PPC_WEAK_FUNC(sub_82134BC0);
PPC_FUNC_IMPL(__imp__sub_82134BC0) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82134c08
	if (!ctx.cr6.eq) goto loc_82134C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3aa8
	ctx.lr = 0x82134BF4;
	sub_820C3AA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82134C08:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134C20"))) PPC_WEAK_FUNC(sub_82134C20);
PPC_FUNC_IMPL(__imp__sub_82134C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82134c78
	if (ctx.cr6.eq) goto loc_82134C78;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134c78
	if (ctx.cr6.eq) goto loc_82134C78;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82134C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82127eb0
	ctx.lr = 0x82134C84;
	sub_82127EB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134C9C"))) PPC_WEAK_FUNC(sub_82134C9C);
PPC_FUNC_IMPL(__imp__sub_82134C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134CA0"))) PPC_WEAK_FUNC(sub_82134CA0);
PPC_FUNC_IMPL(__imp__sub_82134CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82134cf8
	if (ctx.cr6.eq) goto loc_82134CF8;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82134cf8
	if (ctx.cr6.eq) goto loc_82134CF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82134CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82134CF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82127ea8
	ctx.lr = 0x82134D04;
	sub_82127EA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134D1C"))) PPC_WEAK_FUNC(sub_82134D1C);
PPC_FUNC_IMPL(__imp__sub_82134D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134D20"))) PPC_WEAK_FUNC(sub_82134D20);
PPC_FUNC_IMPL(__imp__sub_82134D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,32680
	ctx.r10.s64 = ctx.r11.s64 + 32680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82134a70
	ctx.lr = 0x82134D4C;
	sub_82134A70(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82134d68
	if (ctx.cr6.eq) goto loc_82134D68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82134D64;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82134D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134D80"))) PPC_WEAK_FUNC(sub_82134D80);
PPC_FUNC_IMPL(__imp__sub_82134D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r10,r11,-32768
	ctx.r10.s64 = ctx.r11.s64 + -32768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c30b8
	ctx.lr = 0x82134DB0;
	sub_823C30B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82134dcc
	if (ctx.cr6.eq) goto loc_82134DCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82134DC8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82134DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134DE4"))) PPC_WEAK_FUNC(sub_82134DE4);
PPC_FUNC_IMPL(__imp__sub_82134DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134DE8"))) PPC_WEAK_FUNC(sub_82134DE8);
PPC_FUNC_IMPL(__imp__sub_82134DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82134DF0;
	sub_82248768(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r4,29344
	ctx.r6.s64 = ctx.r4.s64 + 29344;
	// lis r3,26214
	ctx.r3.s64 = 1717960704;
	// lbz r10,24332(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24332);
	// lis r4,14563
	ctx.r4.s64 = 954400768;
	// ori r11,r3,26215
	ctx.r11.u64 = ctx.r3.u64 | 26215;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// ori r7,r4,36409
	ctx.r7.u64 = ctx.r4.u64 | 36409;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lbzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mulhw r10,r27,r7
	ctx.r10.s64 = (int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32)) >> 32;
	// lbzx r26,r11,r6
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mulhw r8,r26,r28
	ctx.r8.s64 = (int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32)) >> 32;
	// lbzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subf r9,r3,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r3.s64;
	// mulhw r3,r4,r28
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32)) >> 32;
	// lbzx r30,r11,r6
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r3,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r3.s64;
	// mulhw r6,r30,r28
	ctx.r6.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32)) >> 32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// stb r8,24332(r5)
	PPC_STORE_U8(ctx.r5.u32 + 24332, ctx.r8.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r23,r11,32704
	ctx.r23.s64 = ctx.r11.s64 + 32704;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,85
	ctx.r29.s64 = 85;
	// li r30,21760
	ctx.r30.s64 = 21760;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r31,576
	ctx.r24.s64 = ctx.r31.s64 + 576;
	// addi r26,r31,1392
	ctx.r26.s64 = ctx.r31.s64 + 1392;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r21,r11,26232
	ctx.r21.s64 = ctx.r11.s64 + 26232;
loc_82134F3C:
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// addi r28,r29,-85
	ctx.r28.s64 = ctx.r29.s64 + -85;
	// addic. r4,r29,-11
	ctx.xer.ca = ctx.r29.u32 > 10;
	ctx.r4.s64 = ctx.r29.s64 + -11;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821350d8
	if (!ctx.cr6.lt) goto loc_821350D8;
	// blt 0x82134f64
	if (ctx.cr0.lt) goto loc_82134F64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,-2620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2620, ctx.r25.u32);
loc_82134F64:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82134f7c
	if (ctx.cr6.lt) goto loc_82134F7C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r25.u32);
loc_82134F7C:
	// addic. r27,r29,10
	ctx.xer.ca = ctx.r29.u32 > 4294967285;
	ctx.r27.s64 = ctx.r29.s64 + 10;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82134f94
	if (ctx.cr0.lt) goto loc_82134F94;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r25.u32);
loc_82134F94:
	// addi r5,r29,5945
	ctx.r5.s64 = ctx.r29.s64 + 5945;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106f58
	ctx.lr = 0x82134FA0;
	sub_82106F58(ctx, base);
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82134fd0
	if (!ctx.cr6.eq) goto loc_82134FD0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r26,-688
	ctx.r3.s64 = ctx.r26.s64 + -688;
	// bl 0x82248910
	ctx.lr = 0x82134FBC;
	sub_82248910(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248910
	ctx.lr = 0x82134FCC;
	sub_82248910(ctx, base);
	// b 0x82135028
	goto loc_82135028;
loc_82134FD0:
	// bge cr6,0x82134ff8
	if (!ctx.cr6.lt) goto loc_82134FF8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r26,-688
	ctx.r3.s64 = ctx.r26.s64 + -688;
	// bl 0x82248910
	ctx.lr = 0x82134FE4;
	sub_82248910(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,688(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// bl 0x82248910
	ctx.lr = 0x82134FF4;
	sub_82248910(ctx, base);
	// b 0x82135028
	goto loc_82135028;
loc_82134FF8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82135010
	if (ctx.cr6.lt) goto loc_82135010;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r20,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r20.u32);
loc_82135010:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82135028
	if (ctx.cr6.lt) goto loc_82135028;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r20,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r20.u32);
loc_82135028:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r26,-688
	ctx.r8.s64 = ctx.r26.s64 + -688;
	// addi r11,r30,2560
	ctx.r11.s64 = ctx.r30.s64 + 2560;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r25,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r25.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r25.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,688(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bne cr6,0x8213509c
	if (!ctx.cr6.eq) goto loc_8213509C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8212e7d0
	ctx.lr = 0x82135088;
	sub_8212E7D0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8212e7d0
	ctx.lr = 0x82135098;
	sub_8212E7D0(ctx, base);
	// b 0x821351ec
	goto loc_821351EC;
loc_8213509C:
	// bge cr6,0x821350bc
	if (!ctx.cr6.lt) goto loc_821350BC;
	// addi r5,r23,48
	ctx.r5.s64 = ctx.r23.s64 + 48;
	// bl 0x8212e7d0
	ctx.lr = 0x821350A8;
	sub_8212E7D0(ctx, base);
	// addi r5,r23,32
	ctx.r5.s64 = ctx.r23.s64 + 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8212e7d0
	ctx.lr = 0x821350B8;
	sub_8212E7D0(ctx, base);
	// b 0x821351ec
	goto loc_821351EC;
loc_821350BC:
	// addi r5,r23,32
	ctx.r5.s64 = ctx.r23.s64 + 32;
	// bl 0x8212e7d0
	ctx.lr = 0x821350C4;
	sub_8212E7D0(ctx, base);
	// addi r5,r23,48
	ctx.r5.s64 = ctx.r23.s64 + 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8212e7d0
	ctx.lr = 0x821350D4;
	sub_8212E7D0(ctx, base);
	// b 0x821351ec
	goto loc_821351EC;
loc_821350D8:
	// blt 0x821350ec
	if (ctx.cr0.lt) goto loc_821350EC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,-2620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2620, ctx.r25.u32);
loc_821350EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82135104
	if (ctx.cr6.lt) goto loc_82135104;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r25.u32);
loc_82135104:
	// addic. r28,r29,10
	ctx.xer.ca = ctx.r29.u32 > 4294967285;
	ctx.r28.s64 = ctx.r29.s64 + 10;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8213511c
	if (ctx.cr0.lt) goto loc_8213511C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r25.u32);
loc_8213511C:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r30,-2816
	ctx.r11.s64 = ctx.r30.s64 + -2816;
	// addi r10,r30,2560
	ctx.r10.s64 = ctx.r30.s64 + 2560;
	// li r5,6062
	ctx.r5.s64 = 6062;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f31,212(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,200(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,204(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,208(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,212(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,212(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106f58
	ctx.lr = 0x821351CC;
	sub_82106F58(ctx, base);
	// li r5,6062
	ctx.r5.s64 = 6062;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106f58
	ctx.lr = 0x821351DC;
	sub_82106F58(ctx, base);
	// li r5,6062
	ctx.r5.s64 = 6062;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106f58
	ctx.lr = 0x821351EC;
	sub_82106F58(ctx, base);
loc_821351EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r11,r29,-85
	ctx.r11.s64 = ctx.r29.s64 + -85;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82134f3c
	if (ctx.cr6.lt) goto loc_82134F3C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,5888
	ctx.r30.s64 = 5888;
	// addi r26,r31,1216
	ctx.r26.s64 = ctx.r31.s64 + 1216;
	// lfs f30,-32752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32752);
	ctx.f30.f64 = double(temp.f32);
loc_82135224:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// addi r29,r11,456
	ctx.r29.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x82135238;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8213523C;
	sub_8215BD28(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r30,-512
	ctx.r11.s64 = ctx.r30.s64 + -512;
	// addi r8,r29,30
	ctx.r8.s64 = ctx.r29.s64 + 30;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r3,45
	ctx.r9.s64 = ctx.r3.s64 + 45;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r25.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bne cr6,0x82135280
	if (!ctx.cr6.eq) goto loc_82135280;
	// addi r9,r29,292
	ctx.r9.s64 = ctx.r29.s64 + 292;
loc_82135280:
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r25,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r25.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r26,r26,688
	ctx.r26.s64 = ctx.r26.s64 + 688;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,204(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,208(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stfs f31,212(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 212, temp.u32);
	// cmpwi cr6,r30,6400
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6400, ctx.xer);
	// blt cr6,0x82135224
	if (ctx.cr6.lt) goto loc_82135224;
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// lwz r5,544(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248910
	ctx.lr = 0x821352F0;
	sub_82248910(ctx, base);
	// addi r29,r31,1248
	ctx.r29.s64 = ctx.r31.s64 + 1248;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r5,1232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248910
	ctx.lr = 0x82135304;
	sub_82248910(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,27096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27096, ctx.r30.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,27116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27116, ctx.r25.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,27352(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27352, ctx.r29.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r25,27372(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27372, ctx.r25.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r25,27076(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27076, ctx.r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r25,27332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27332, ctx.r25.u32);
	// lwz r10,1940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82135370
	if (ctx.cr6.eq) goto loc_82135370;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r20,27076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27076, ctx.r20.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r20,27332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27332, ctx.r20.u32);
loc_82135370:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bne cr6,0x821353cc
	if (!ctx.cr6.eq) goto loc_821353CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,27080(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 27080, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,27084(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 27084, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,27088(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 27088, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,27092(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 27092, temp.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f31,27336(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 27336, temp.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f31,27340(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 27340, temp.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f31,27344(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 27344, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f31,27348(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27348, temp.u32);
	// b 0x82135460
	goto loc_82135460;
loc_821353CC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-32756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82135420
	if (!ctx.cr6.lt) goto loc_82135420;
	// stfs f30,27080(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 27080, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f30,27084(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 27084, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f30,27088(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 27088, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,27092(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 27092, temp.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f31,27336(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 27336, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,27340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27340, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,27344(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 27344, temp.u32);
	// b 0x82135458
	goto loc_82135458;
loc_82135420:
	// stfs f31,21960(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 21960, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,21964(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21964, temp.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f13,21968(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 21968, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,21972(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 21972, temp.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f30,27336(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 27336, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f30,27340(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 27340, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f30,27344(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 27344, temp.u32);
loc_82135458:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f31,27348(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 27348, temp.u32);
loc_82135460:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r20,1988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1988, ctx.r20.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r20,2244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2244, ctx.r20.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r20,2500(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2500, ctx.r20.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r20,2756(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2756, ctx.r20.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r20,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r20.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r20,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r20.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r20,3524(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3524, ctx.r20.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r20,3780(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3780, ctx.r20.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r20,4036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4036, ctx.r20.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r20,4292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4292, ctx.r20.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r20,4548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4548, ctx.r20.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r20,4804(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4804, ctx.r20.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82135500"))) PPC_WEAK_FUNC(sub_82135500);
PPC_FUNC_IMPL(__imp__sub_82135500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82135508;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821355e8
	if (!ctx.cr6.gt) goto loc_821355E8;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82135554
	if (!ctx.cr6.eq) goto loc_82135554;
	// lwz r11,1948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82135554
	if (!ctx.cr6.eq) goto loc_82135554;
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x82135550;
	sub_8208F658(ctx, base);
	// stw r3,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r3.u32);
loc_82135554:
	// lwz r11,1928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x821356c0
	if (!ctx.cr6.gt) goto loc_821356C0;
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// stw r9,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r9.u32);
	// beq cr6,0x821355ac
	if (ctx.cr6.eq) goto loc_821355AC;
	// bl 0x8208f6b8
	ctx.lr = 0x8213558C;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821355ac
	if (ctx.cr6.eq) goto loc_821355AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// bl 0x8208f708
	ctx.lr = 0x821355A0;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
loc_821355AC:
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// lwz r10,1940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821356b8
	if (ctx.cr6.eq) goto loc_821356B8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821356c0
	if (!ctx.cr6.lt) goto loc_821356C0;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821356c0
	if (!ctx.cr6.eq) goto loc_821356C0;
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x821355DC;
	sub_8208F658(ctx, base);
	// stw r3,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821355E8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_821355F4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82135660
	if (ctx.cr6.eq) goto loc_82135660;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82135614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135660
	if (!ctx.cr6.eq) goto loc_82135660;
	// lwz r30,1280(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82135624;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135640
	if (ctx.cr6.eq) goto loc_82135640;
	// bl 0x8215bd08
	ctx.lr = 0x82135634;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82135660
	if (!ctx.cr6.eq) goto loc_82135660;
loc_82135640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82135648;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82135658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135674
	if (!ctx.cr6.eq) goto loc_82135674;
loc_82135660:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821355f4
	if (ctx.cr6.lt) goto loc_821355F4;
	// b 0x82135554
	goto loc_82135554;
loc_82135674:
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// stw r9,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r9.u32);
	// beq cr6,0x821356b8
	if (ctx.cr6.eq) goto loc_821356B8;
	// bl 0x8208f6b8
	ctx.lr = 0x82135698;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821356b8
	if (ctx.cr6.eq) goto loc_821356B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// bl 0x8208f708
	ctx.lr = 0x821356AC;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
loc_821356B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
loc_821356C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821356C8"))) PPC_WEAK_FUNC(sub_821356C8);
PPC_FUNC_IMPL(__imp__sub_821356C8) {
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
	// lwz r11,1920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135728
	if (!ctx.cr6.eq) goto loc_82135728;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82106eb0
	ctx.lr = 0x821356F4;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821356F8;
	sub_821D38E8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135704;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135708;
	sub_821D38E8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,1988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1988, ctx.r11.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,4292(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4292, ctx.r11.u32);
	// b 0x82135760
	goto loc_82135760;
loc_82135728:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82106eb0
	ctx.lr = 0x82135730;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135734;
	sub_821D38E8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135740;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135744;
	sub_821D38E8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,2756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2756, ctx.r11.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,3524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3524, ctx.r11.u32);
loc_82135760:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213577C"))) PPC_WEAK_FUNC(sub_8213577C);
PPC_FUNC_IMPL(__imp__sub_8213577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135780"))) PPC_WEAK_FUNC(sub_82135780);
PPC_FUNC_IMPL(__imp__sub_82135780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135834
	if (!ctx.cr6.eq) goto loc_82135834;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82106eb0
	ctx.lr = 0x821357B0;
	sub_82106EB0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x821357C0;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821357f4
	if (!ctx.cr6.eq) goto loc_821357F4;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821357f4
	if (!ctx.cr6.eq) goto loc_821357F4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4292, ctx.r11.u32);
	// b 0x821358d8
	goto loc_821358D8;
loc_821357F4:
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135800;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135804;
	sub_821D38E8(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135810;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135814;
	sub_821D38E8(ctx, base);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,2500(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2500, ctx.r11.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,4804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4804, ctx.r11.u32);
	// b 0x821358bc
	goto loc_821358BC;
loc_82135834:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82106eb0
	ctx.lr = 0x8213583C;
	sub_82106EB0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x8213584C;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135880
	if (!ctx.cr6.eq) goto loc_82135880;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135880
	if (!ctx.cr6.eq) goto loc_82135880;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,2756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2756, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3524(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3524, ctx.r11.u32);
	// b 0x821358d8
	goto loc_821358D8;
loc_82135880:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x8213588C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135890;
	sub_821D38E8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x8213589C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821358A0;
	sub_821D38E8(ctx, base);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,3268(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3268, ctx.r11.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,4036(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4036, ctx.r11.u32);
loc_821358BC:
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r8.u32);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r3.u32);
loc_821358D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821358F0"))) PPC_WEAK_FUNC(sub_821358F0);
PPC_FUNC_IMPL(__imp__sub_821358F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821358F8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1944);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821359c8
	if (ctx.cr6.eq) goto loc_821359C8;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821359c8
	if (ctx.cr6.eq) goto loc_821359C8;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82135930;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82135940;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82135954;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82135960;
	sub_821AD498(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821359b0
	if (ctx.cr6.eq) goto loc_821359B0;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,37
	ctx.r4.s64 = 37;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,5460(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 5460, temp.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8210a9b0
	ctx.lr = 0x821359B0;
	sub_8210A9B0(ctx, base);
loc_821359B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x821359BC;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x821359C8;
	sub_821AD498(ctx, base);
loc_821359C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821359D0"))) PPC_WEAK_FUNC(sub_821359D0);
PPC_FUNC_IMPL(__imp__sub_821359D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x821359D8;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-32768
	ctx.r10.s64 = ctx.r11.s64 + -32768;
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c34c0
	ctx.lr = 0x82135A10;
	sub_823C34C0(ctx, base);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r26,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r26.u32);
	// addi r18,r31,544
	ctx.r18.s64 = ctx.r31.s64 + 544;
	// stw r9,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r9.u32);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// addi r30,r18,16
	ctx.r30.s64 = ctx.r18.s64 + 16;
loc_82135A2C:
	// std r26,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r26.u64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// std r26,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r26.u64);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,-19856
	ctx.r6.s64 = ctx.r11.s64 + -19856;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x82080d28
	ctx.lr = 0x82135A4C;
	sub_82080D28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,688
	ctx.r30.s64 = ctx.r30.s64 + 688;
	// bge 0x82135a2c
	if (!ctx.cr0.lt) goto loc_82135A2C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r26,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r26.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r17,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r17.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r7,148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lwz r6,208(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82135a9c
	if (ctx.cr6.eq) goto loc_82135A9C;
	// bl 0x82107368
	ctx.lr = 0x82135A9C;
	sub_82107368(ctx, base);
loc_82135A9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c3410
	ctx.lr = 0x82135AA4;
	sub_823C3410(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r21,r11,-7560
	ctx.r21.s64 = ctx.r11.s64 + -7560;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1376
	ctx.r4.s64 = 1376;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lfs f13,14876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31604(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r5,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r5.u32);
	// lfs f0,32(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x82135B00;
	sub_822AA648(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82135B04;
	sub_8215BEC8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lbz r4,5(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lis r10,19044
	ctx.r10.s64 = 1248067584;
	// addi r22,r11,-5052
	ctx.r22.s64 = ctx.r11.s64 + -5052;
	// stw r26,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r26.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// stw r4,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r4.u32);
	// ori r19,r10,26448
	ctx.r19.u64 = ctx.r10.u64 | 26448;
	// addi r20,r11,4393
	ctx.r20.s64 = ctx.r11.s64 + 4393;
loc_82135B34:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r23,0(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8216c098
	ctx.lr = 0x82135B40;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82135B44;
	sub_8215BD28(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// bl 0x8218a360
	ctx.lr = 0x82135B50;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82135b5c
	if (ctx.cr6.eq) goto loc_82135B5C;
	// stw r17,672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 672, ctx.r17.u32);
loc_82135B5C:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r30,32
	ctx.r30.s64 = 32;
loc_82135B68:
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82135bac
	if (!ctx.cr6.lt) goto loc_82135BAC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,1964(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x82135B80;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82135b90
	if (ctx.cr6.eq) goto loc_82135B90;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82135b94
	goto loc_82135B94;
loc_82135B90:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82135B94:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82135BAC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpwi cr6,r30,160
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 160, ctx.xer);
	// blt cr6,0x82135b68
	if (ctx.cr6.lt) goto loc_82135B68;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,688
	ctx.r29.s64 = ctx.r29.s64 + 688;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82135b34
	if (ctx.cr6.lt) goto loc_82135B34;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,1232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82135c00
	if (!ctx.cr6.lt) goto loc_82135C00;
	// stw r17,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r17.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82135BF0;
	sub_8215BEC8(ctx, base);
	// stb r17,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r17.u8);
	// bl 0x8215bec8
	ctx.lr = 0x82135BF8;
	sub_8215BEC8(ctx, base);
	// stb r26,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r26.u8);
	// b 0x82135c14
	goto loc_82135C14;
loc_82135C00:
	// stw r26,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r26.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82135C08;
	sub_8215BEC8(ctx, base);
	// stb r26,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r26.u8);
	// bl 0x8215bec8
	ctx.lr = 0x82135C10;
	sub_8215BEC8(ctx, base);
	// stb r17,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r17.u8);
loc_82135C14:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r26,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r26.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r17,4292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4292, ctx.r17.u32);
	// bl 0x821142a0
	ctx.lr = 0x82135C34;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82135c44
	if (ctx.cr6.eq) goto loc_82135C44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82115208
	ctx.lr = 0x82135C44;
	sub_82115208(ctx, base);
loc_82135C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82135C50"))) PPC_WEAK_FUNC(sub_82135C50);
PPC_FUNC_IMPL(__imp__sub_82135C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82135C58;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82135c7c
	if (!ctx.cr6.gt) goto loc_82135C7C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// b 0x82135d0c
	goto loc_82135D0C;
loc_82135C7C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82135C88:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82135cf4
	if (ctx.cr6.eq) goto loc_82135CF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82135CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135cf4
	if (!ctx.cr6.eq) goto loc_82135CF4;
	// lwz r30,1280(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82135CB8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135cd4
	if (ctx.cr6.eq) goto loc_82135CD4;
	// bl 0x8215bd08
	ctx.lr = 0x82135CC8;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82135cf4
	if (!ctx.cr6.eq) goto loc_82135CF4;
loc_82135CD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82135CDC;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82135CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135d08
	if (!ctx.cr6.eq) goto loc_82135D08;
loc_82135CF4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82135c88
	if (ctx.cr6.lt) goto loc_82135C88;
	// b 0x82135d0c
	goto loc_82135D0C;
loc_82135D08:
	// stw r27,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r27.u32);
loc_82135D0C:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// beq cr6,0x82135dbc
	if (ctx.cr6.eq) goto loc_82135DBC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135d64
	if (!ctx.cr6.eq) goto loc_82135D64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82106eb0
	ctx.lr = 0x82135D30;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135D34;
	sub_821D38E8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135D40;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135D44;
	sub_821D38E8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,2244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2244, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4548, ctx.r11.u32);
	// b 0x82135d9c
	goto loc_82135D9C;
loc_82135D64:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82106eb0
	ctx.lr = 0x82135D6C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135D70;
	sub_821D38E8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82106eb0
	ctx.lr = 0x82135D7C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82135D80;
	sub_821D38E8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
loc_82135D9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135df8
	if (!ctx.cr6.eq) goto loc_82135DF8;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x823c3468
	ctx.lr = 0x82135DB4;
	sub_823C3468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82135DBC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82135de8
	if (!ctx.cr6.eq) goto loc_82135DE8;
	// stw r11,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4804(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4804, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82135DE8:
	// stw r11,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4036(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4036, ctx.r11.u32);
loc_82135DF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82135E00"))) PPC_WEAK_FUNC(sub_82135E00);
PPC_FUNC_IMPL(__imp__sub_82135E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82135e4c
	if (!ctx.cr6.gt) goto loc_82135E4C;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x823c3160
	ctx.lr = 0x82135E2C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82135ffc
	if (ctx.cr6.eq) goto loc_82135FFC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x82135ffc
	goto loc_82135FFC;
loc_82135E4C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82135ffc
	if (ctx.cr6.eq) goto loc_82135FFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134de8
	ctx.lr = 0x82135E64;
	sub_82134DE8(ctx, base);
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82135ef4
	if (ctx.cr6.gt) goto loc_82135EF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82135e94
	// bdzf 4*cr6+eq,0x82135ea0
	// bdzf 4*cr6+eq,0x82135eac
	// bne cr6,0x82135eb8
	if (!ctx.cr6.eq) goto loc_82135EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135500
	ctx.lr = 0x82135E90;
	sub_82135500(ctx, base);
	// b 0x82135ef4
	goto loc_82135EF4;
loc_82135E94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821356c8
	ctx.lr = 0x82135E9C;
	sub_821356C8(ctx, base);
	// b 0x82135ef4
	goto loc_82135EF4;
loc_82135EA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135780
	ctx.lr = 0x82135EA8;
	sub_82135780(ctx, base);
	// b 0x82135ef4
	goto loc_82135EF4;
loc_82135EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135c50
	ctx.lr = 0x82135EB4;
	sub_82135C50(ctx, base);
	// b 0x82135ef4
	goto loc_82135EF4;
loc_82135EB8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,1920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82135ee4
	if (!ctx.cr6.eq) goto loc_82135EE4;
	// stw r11,2244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2244, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4548, ctx.r11.u32);
	// b 0x82135ef4
	goto loc_82135EF4;
loc_82135EE4:
	// stw r11,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r11.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
loc_82135EF4:
	// bl 0x8215bec8
	ctx.lr = 0x82135EF8;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82135f50
	if (!ctx.cr6.eq) goto loc_82135F50;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,3524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3524, ctx.r30.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,3780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3780, ctx.r30.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,4036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4036, ctx.r30.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r30,4292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4292, ctx.r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4548, ctx.r30.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,4804(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4804, ctx.r30.u32);
loc_82135F50:
	// bl 0x8215bd60
	ctx.lr = 0x82135F54;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135ffc
	if (ctx.cr6.eq) goto loc_82135FFC;
	// bl 0x82227aa0
	ctx.lr = 0x82135F64;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82135fbc
	if (!ctx.cr6.eq) goto loc_82135FBC;
	// stw r30,1988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1988, ctx.r30.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,2244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2244, ctx.r30.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,2500(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2500, ctx.r30.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r30,2756(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2756, ctx.r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r30.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r30.u32);
	// b 0x82135ffc
	goto loc_82135FFC;
loc_82135FBC:
	// stw r30,3524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3524, ctx.r30.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,3780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3780, ctx.r30.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,4036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4036, ctx.r30.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r30,4292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4292, ctx.r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4548, ctx.r30.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,4804(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4804, ctx.r30.u32);
loc_82135FFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136014"))) PPC_WEAK_FUNC(sub_82136014);
PPC_FUNC_IMPL(__imp__sub_82136014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136018"))) PPC_WEAK_FUNC(sub_82136018);
PPC_FUNC_IMPL(__imp__sub_82136018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-32672
	ctx.r10.s64 = ctx.r11.s64 + -32672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c30b8
	ctx.lr = 0x82136048;
	sub_823C30B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82136064
	if (ctx.cr6.eq) goto loc_82136064;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82136060;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82136064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213607C"))) PPC_WEAK_FUNC(sub_8213607C);
PPC_FUNC_IMPL(__imp__sub_8213607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136080"))) PPC_WEAK_FUNC(sub_82136080);
PPC_FUNC_IMPL(__imp__sub_82136080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82136088;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,29344
	ctx.r4.s64 = ctx.r4.s64 + 29344;
	// lis r3,26214
	ctx.r3.s64 = 1717960704;
	// lbz r10,24332(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24332);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r11,r3,26215
	ctx.r11.u64 = ctx.r3.u64 | 26215;
	// lis r3,14563
	ctx.r3.s64 = 954400768;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// ori r3,r3,36409
	ctx.r3.u64 = ctx.r3.u64 | 36409;
	// lbzx r29,r10,r4
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r22,r10,26232
	ctx.r22.s64 = ctx.r10.s64 + 26232;
	// mulhw r10,r29,r3
	ctx.r10.s64 = (int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32)) >> 32;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mulhw r8,r3,r8
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r28,r11,r4
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r9,r8,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhw r8,r28,r30
	ctx.r8.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32)) >> 32;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stb r6,24332(r5)
	PPC_STORE_U8(ctx.r5.u32 + 24332, ctx.r6.u8);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mulhw r3,r4,r30
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32)) >> 32;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,944(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r5,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r5.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x821363ac
	if (!ctx.cr6.gt) goto loc_821363AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,42
	ctx.r27.s64 = 42;
	// li r30,10752
	ctx.r30.s64 = 10752;
	// addi r28,r31,576
	ctx.r28.s64 = ctx.r31.s64 + 576;
	// addi r29,r31,800
	ctx.r29.s64 = ctx.r31.s64 + 800;
	// addi r23,r11,-32704
	ctx.r23.s64 = ctx.r11.s64 + -32704;
loc_821361E0:
	// addic. r26,r27,-6
	ctx.xer.ca = ctx.r27.u32 > 5;
	ctx.r26.s64 = ctx.r27.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x821361f8
	if (ctx.cr0.lt) goto loc_821361F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,-1340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1340, ctx.r25.u32);
loc_821361F8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82136210
	if (ctx.cr6.lt) goto loc_82136210;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r25.u32);
loc_82136210:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// addi r10,r27,-42
	ctx.r10.s64 = ctx.r27.s64 + -42;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82136244
	if (!ctx.cr6.eq) goto loc_82136244;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r29,-192
	ctx.r3.s64 = ctx.r29.s64 + -192;
	// bl 0x82248910
	ctx.lr = 0x82136230;
	sub_82248910(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248910
	ctx.lr = 0x82136240;
	sub_82248910(ctx, base);
	// b 0x8213629c
	goto loc_8213629C;
loc_82136244:
	// bge cr6,0x8213626c
	if (!ctx.cr6.lt) goto loc_8213626C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r29,-192
	ctx.r3.s64 = ctx.r29.s64 + -192;
	// bl 0x82248910
	ctx.lr = 0x82136258;
	sub_82248910(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,192(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// bl 0x82248910
	ctx.lr = 0x82136268;
	sub_82248910(ctx, base);
	// b 0x8213629c
	goto loc_8213629C;
loc_8213626C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82136284
	if (ctx.cr6.lt) goto loc_82136284;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r21,-1340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1340, ctx.r21.u32);
loc_82136284:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8213629c
	if (ctx.cr6.lt) goto loc_8213629C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r21,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r21.u32);
loc_8213629C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r30,-1536
	ctx.r11.s64 = ctx.r30.s64 + -1536;
	// addi r8,r29,-192
	ctx.r8.s64 = ctx.r29.s64 + -192;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r25.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r29,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r25,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r25.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,192(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82136358
	if (!ctx.cr6.eq) goto loc_82136358;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,204(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,208(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,212(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 212, temp.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,200(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,204(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,208(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,212(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 212, temp.u32);
	// b 0x8213638c
	goto loc_8213638C;
loc_82136358:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bge cr6,0x82136374
	if (!ctx.cr6.lt) goto loc_82136374;
	// addi r5,r23,16
	ctx.r5.s64 = ctx.r23.s64 + 16;
	// bl 0x8212e7d0
	ctx.lr = 0x8213636C;
	sub_8212E7D0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x82136380
	goto loc_82136380;
loc_82136374:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8212e7d0
	ctx.lr = 0x8213637C;
	sub_8212E7D0(ctx, base);
	// addi r5,r23,16
	ctx.r5.s64 = ctx.r23.s64 + 16;
loc_82136380:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8212e7d0
	ctx.lr = 0x8213638C;
	sub_8212E7D0(ctx, base);
loc_8213638C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r10,r27,-42
	ctx.r10.s64 = ctx.r27.s64 + -42;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821361e0
	if (ctx.cr6.lt) goto loc_821361E0;
loc_821363AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,5888
	ctx.r30.s64 = 5888;
	// addi r26,r31,720
	ctx.r26.s64 = ctx.r31.s64 + 720;
	// lfs f30,-32752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32752);
	ctx.f30.f64 = double(temp.f32);
loc_821363C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// addi r29,r11,456
	ctx.r29.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x821363DC;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x821363E0;
	sub_8215BD28(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r30,-512
	ctx.r11.s64 = ctx.r30.s64 + -512;
	// addi r8,r29,30
	ctx.r8.s64 = ctx.r29.s64 + 30;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r3,45
	ctx.r9.s64 = ctx.r3.s64 + 45;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r25.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bne cr6,0x82136424
	if (!ctx.cr6.eq) goto loc_82136424;
	// addi r9,r29,292
	ctx.r9.s64 = ctx.r29.s64 + 292;
loc_82136424:
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r25,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r25.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r26,r26,192
	ctx.r26.s64 = ctx.r26.s64 + 192;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,204(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,208(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stfs f31,212(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 212, temp.u32);
	// cmpwi cr6,r30,6400
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6400, ctx.xer);
	// blt cr6,0x821363c8
	if (ctx.cr6.lt) goto loc_821363C8;
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// lwz r5,544(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248910
	ctx.lr = 0x82136494;
	sub_82248910(ctx, base);
	// addi r29,r31,752
	ctx.r29.s64 = ctx.r31.s64 + 752;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,736(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248910
	ctx.lr = 0x821364A8;
	sub_82248910(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,12504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12504, ctx.r30.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,12524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12524, ctx.r25.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,12760(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12760, ctx.r29.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r25,12780(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12780, ctx.r25.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r25,12484(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12484, ctx.r25.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r25,12740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12740, ctx.r25.u32);
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82136514
	if (ctx.cr6.eq) goto loc_82136514;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r21,12484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12484, ctx.r21.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r21,12740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12740, ctx.r21.u32);
loc_82136514:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r21,1988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1988, ctx.r21.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r21,2244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2244, ctx.r21.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r21,2500(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2500, ctx.r21.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r21,2756(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2756, ctx.r21.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r21,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r21.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r21,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r21.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r21,3524(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3524, ctx.r21.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r21,3780(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3780, ctx.r21.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r21,4036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4036, ctx.r21.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r21,4292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4292, ctx.r21.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r21,4548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4548, ctx.r21.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r21,4804(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4804, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821365B4"))) PPC_WEAK_FUNC(sub_821365B4);
PPC_FUNC_IMPL(__imp__sub_821365B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821365B8"))) PPC_WEAK_FUNC(sub_821365B8);
PPC_FUNC_IMPL(__imp__sub_821365B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821365C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821366a0
	if (!ctx.cr6.gt) goto loc_821366A0;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// stw r11,940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 940, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8213660c
	if (!ctx.cr6.eq) goto loc_8213660C;
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8213660c
	if (!ctx.cr6.eq) goto loc_8213660C;
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x82136608;
	sub_8208F658(ctx, base);
	// stw r3,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r3.u32);
loc_8213660C:
	// lwz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x82136778
	if (!ctx.cr6.gt) goto loc_82136778;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// beq cr6,0x82136664
	if (ctx.cr6.eq) goto loc_82136664;
	// bl 0x8208f6b8
	ctx.lr = 0x82136644;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82136664
	if (ctx.cr6.eq) goto loc_82136664;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// bl 0x8208f708
	ctx.lr = 0x82136658;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
loc_82136664:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// lwz r10,948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82136770
	if (ctx.cr6.eq) goto loc_82136770;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82136778
	if (!ctx.cr6.lt) goto loc_82136778;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82136778
	if (!ctx.cr6.eq) goto loc_82136778;
	// li r3,10007
	ctx.r3.s64 = 10007;
	// bl 0x8208f658
	ctx.lr = 0x82136694;
	sub_8208F658(ctx, base);
	// stw r3,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821366A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_821366AC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82136718
	if (ctx.cr6.eq) goto loc_82136718;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821366CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82136718
	if (!ctx.cr6.eq) goto loc_82136718;
	// lwz r30,1280(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x821366DC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821366f8
	if (ctx.cr6.eq) goto loc_821366F8;
	// bl 0x8215bd08
	ctx.lr = 0x821366EC;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82136718
	if (!ctx.cr6.eq) goto loc_82136718;
loc_821366F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82136700;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82136710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213672c
	if (!ctx.cr6.eq) goto loc_8213672C;
loc_82136718:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821366ac
	if (ctx.cr6.lt) goto loc_821366AC;
	// b 0x8213660c
	goto loc_8213660C;
loc_8213672C:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// beq cr6,0x82136770
	if (ctx.cr6.eq) goto loc_82136770;
	// bl 0x8208f6b8
	ctx.lr = 0x82136750;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82136770
	if (ctx.cr6.eq) goto loc_82136770;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// bl 0x8208f708
	ctx.lr = 0x82136764;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
loc_82136770:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
loc_82136778:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82136780"))) PPC_WEAK_FUNC(sub_82136780);
PPC_FUNC_IMPL(__imp__sub_82136780) {
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
	// lwz r11,928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821367f8
	if (!ctx.cr6.eq) goto loc_821367F8;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x821367AC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821367B0;
	sub_821D38E8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x821367BC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821367C0;
	sub_821D38E8(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,1988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1988, ctx.r11.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,4292(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4292, ctx.r11.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821367F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82136858
	if (!ctx.cr6.eq) goto loc_82136858;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x8213680C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136810;
	sub_821D38E8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x8213681C;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136820;
	sub_821D38E8(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,2756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2756, ctx.r11.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,3524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3524, ctx.r11.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82136858:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136874"))) PPC_WEAK_FUNC(sub_82136874);
PPC_FUNC_IMPL(__imp__sub_82136874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136878"))) PPC_WEAK_FUNC(sub_82136878);
PPC_FUNC_IMPL(__imp__sub_82136878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213692c
	if (!ctx.cr6.eq) goto loc_8213692C;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82106eb0
	ctx.lr = 0x821368A8;
	sub_82106EB0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x821368B8;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821368ec
	if (!ctx.cr6.eq) goto loc_821368EC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821368ec
	if (!ctx.cr6.eq) goto loc_821368EC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4292, ctx.r11.u32);
	// b 0x821369d0
	goto loc_821369D0;
loc_821368EC:
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x821368F8;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821368FC;
	sub_821D38E8(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136908;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x8213690C;
	sub_821D38E8(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,2500(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2500, ctx.r11.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,4804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4804, ctx.r11.u32);
	// b 0x821369b4
	goto loc_821369B4;
loc_8213692C:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82106eb0
	ctx.lr = 0x82136934;
	sub_82106EB0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136944;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136978
	if (!ctx.cr6.eq) goto loc_82136978;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136978
	if (!ctx.cr6.eq) goto loc_82136978;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,2756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2756, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3524(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3524, ctx.r11.u32);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136978:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136984;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136988;
	sub_821D38E8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136994;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136998;
	sub_821D38E8(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,3268(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3268, ctx.r11.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,4036(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4036, ctx.r11.u32);
loc_821369B4:
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r8.u32);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r3.u32);
loc_821369D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821369E8"))) PPC_WEAK_FUNC(sub_821369E8);
PPC_FUNC_IMPL(__imp__sub_821369E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821369F0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82136ac0
	if (ctx.cr6.eq) goto loc_82136AC0;
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82136ac0
	if (ctx.cr6.eq) goto loc_82136AC0;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82136A28;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82136A38;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82136A4C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82136A58;
	sub_821AD498(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82136aa8
	if (ctx.cr6.eq) goto loc_82136AA8;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,37
	ctx.r4.s64 = 37;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,5460(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 5460, temp.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8210a9b0
	ctx.lr = 0x82136AA8;
	sub_8210A9B0(ctx, base);
loc_82136AA8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82136AB4;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82136AC0;
	sub_821AD498(ctx, base);
loc_82136AC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82136AC8"))) PPC_WEAK_FUNC(sub_82136AC8);
PPC_FUNC_IMPL(__imp__sub_82136AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82136AD0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-32672
	ctx.r10.s64 = ctx.r11.s64 + -32672;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// addi r27,r3,32
	ctx.r27.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c34c0
	ctx.lr = 0x82136B04;
	sub_823C34C0(ctx, base);
	// addi r28,r31,544
	ctx.r28.s64 = ctx.r31.s64 + 544;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r26,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r26.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
loc_82136B20:
	// std r26,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r26.u64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// std r26,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r26.u64);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r6,r11,-19856
	ctx.r6.s64 = ctx.r11.s64 + -19856;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82080d28
	ctx.lr = 0x82136B40;
	sub_82080D28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// bge 0x82136b20
	if (!ctx.cr0.lt) goto loc_82136B20;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r26,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r26.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r22,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r22.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r9,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r9.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r7,148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// lwz r6,208(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82136b90
	if (ctx.cr6.eq) goto loc_82136B90;
	// bl 0x82107368
	ctx.lr = 0x82136B90;
	sub_82107368(ctx, base);
loc_82136B90:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c3410
	ctx.lr = 0x82136B98;
	sub_823C3410(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,-7560
	ctx.r24.s64 = ctx.r11.s64 + -7560;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r4,384
	ctx.r4.s64 = 384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,14876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31604(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r5,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r5.u32);
	// lfs f0,32(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,520(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x82136BF4;
	sub_822AA648(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r4,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r4.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// addi r23,r11,4393
	ctx.r23.s64 = ctx.r11.s64 + 4393;
loc_82136C14:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216c098
	ctx.lr = 0x82136C1C;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82136C20;
	sub_8215BD28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x82136C28;
	sub_8215BEC8(ctx, base);
	// add r29,r3,r28
	ctx.r29.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r25,45
	ctx.r3.s64 = ctx.r25.s64 + 45;
	// bl 0x8218a360
	ctx.lr = 0x82136C38;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82136c44
	if (ctx.cr6.eq) goto loc_82136C44;
	// stw r22,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r22.u32);
loc_82136C44:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r28,104
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 104, ctx.xer);
	// stw r11,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r11.u32);
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// stw r10,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r10.u32);
	// lwz r9,144(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// stw r9,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r9.u32);
	// lwz r8,148(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// stw r8,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r8.u32);
	// lwz r7,152(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// stw r7,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r7.u32);
	// lwz r6,156(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// stw r6,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r6.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stw r5,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r5.u32);
	// lwz r4,160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// stwu r4,192(r30)
	ea = 192 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x82136c14
	if (ctx.cr6.lt) goto loc_82136C14;
	// bl 0x8215bec8
	ctx.lr = 0x82136C98;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r26,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r26.u32);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r22,4148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4148, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82136CCC"))) PPC_WEAK_FUNC(sub_82136CCC);
PPC_FUNC_IMPL(__imp__sub_82136CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136CD0"))) PPC_WEAK_FUNC(sub_82136CD0);
PPC_FUNC_IMPL(__imp__sub_82136CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82136CD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82136cfc
	if (!ctx.cr6.gt) goto loc_82136CFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 940, ctx.r11.u32);
	// b 0x82136d8c
	goto loc_82136D8C;
loc_82136CFC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82136D08:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82136d74
	if (ctx.cr6.eq) goto loc_82136D74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82136D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82136d74
	if (!ctx.cr6.eq) goto loc_82136D74;
	// lwz r30,1280(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82136D38;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82136d54
	if (ctx.cr6.eq) goto loc_82136D54;
	// bl 0x8215bd08
	ctx.lr = 0x82136D48;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82136d74
	if (!ctx.cr6.eq) goto loc_82136D74;
loc_82136D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82136D5C;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82136D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82136d88
	if (!ctx.cr6.eq) goto loc_82136D88;
loc_82136D74:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82136d08
	if (ctx.cr6.lt) goto loc_82136D08;
	// b 0x82136d8c
	goto loc_82136D8C;
loc_82136D88:
	// stw r27,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r27.u32);
loc_82136D8C:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// beq cr6,0x82136e3c
	if (ctx.cr6.eq) goto loc_82136E3C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136de4
	if (!ctx.cr6.eq) goto loc_82136DE4;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82106eb0
	ctx.lr = 0x82136DB0;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136DB4;
	sub_821D38E8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136DC0;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136DC4;
	sub_821D38E8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,2244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2244, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4548, ctx.r11.u32);
	// b 0x82136e1c
	goto loc_82136E1C;
loc_82136DE4:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82106eb0
	ctx.lr = 0x82136DEC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136DF0;
	sub_821D38E8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82136DFC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82136E00;
	sub_821D38E8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
loc_82136E1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136e78
	if (!ctx.cr6.eq) goto loc_82136E78;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823c3468
	ctx.lr = 0x82136E34;
	sub_823C3468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82136E3C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82136e68
	if (!ctx.cr6.eq) goto loc_82136E68;
	// stw r11,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4804(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4804, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82136E68:
	// stw r11,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4036(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4036, ctx.r11.u32);
loc_82136E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82136E80"))) PPC_WEAK_FUNC(sub_82136E80);
PPC_FUNC_IMPL(__imp__sub_82136E80) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82136ed8
	if (!ctx.cr6.gt) goto loc_82136ED8;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x82136EA8;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82137040
	if (ctx.cr6.eq) goto loc_82137040;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82136ED8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82137040
	if (ctx.cr6.eq) goto loc_82137040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136080
	ctx.lr = 0x82136EF0;
	sub_82136080(ctx, base);
	// lwz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82136f80
	if (ctx.cr6.gt) goto loc_82136F80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82136f20
	// bdzf 4*cr6+eq,0x82136f2c
	// bdzf 4*cr6+eq,0x82136f38
	// bne cr6,0x82136f44
	if (!ctx.cr6.eq) goto loc_82136F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821365b8
	ctx.lr = 0x82136F1C;
	sub_821365B8(ctx, base);
	// b 0x82136f80
	goto loc_82136F80;
loc_82136F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136780
	ctx.lr = 0x82136F28;
	sub_82136780(ctx, base);
	// b 0x82136f80
	goto loc_82136F80;
loc_82136F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136878
	ctx.lr = 0x82136F34;
	sub_82136878(ctx, base);
	// b 0x82136f80
	goto loc_82136F80;
loc_82136F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136cd0
	ctx.lr = 0x82136F40;
	sub_82136CD0(ctx, base);
	// b 0x82136f80
	goto loc_82136F80;
loc_82136F44:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82136f70
	if (!ctx.cr6.eq) goto loc_82136F70;
	// stw r11,2244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2244, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4548, ctx.r11.u32);
	// b 0x82136f80
	goto loc_82136F80;
loc_82136F70:
	// stw r11,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
loc_82136F80:
	// bl 0x8215bd60
	ctx.lr = 0x82136F84;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137040
	if (ctx.cr6.eq) goto loc_82137040;
	// bl 0x82227aa0
	ctx.lr = 0x82136F94;
	sub_82227AA0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82137000
	if (!ctx.cr6.eq) goto loc_82137000;
	// stw r11,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,2244(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2244, ctx.r11.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,2500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2500, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3268(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82137000:
	// stw r11,3524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3524, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,4036(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4036, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,4292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4292, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4548, ctx.r11.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,4804(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4804, ctx.r11.u32);
loc_82137040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137054"))) PPC_WEAK_FUNC(sub_82137054);
PPC_FUNC_IMPL(__imp__sub_82137054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137058"))) PPC_WEAK_FUNC(sub_82137058);
PPC_FUNC_IMPL(__imp__sub_82137058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x823c39f0
	sub_823C39F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82137068"))) PPC_WEAK_FUNC(sub_82137068);
PPC_FUNC_IMPL(__imp__sub_82137068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213706C"))) PPC_WEAK_FUNC(sub_8213706C);
PPC_FUNC_IMPL(__imp__sub_8213706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137070"))) PPC_WEAK_FUNC(sub_82137070);
PPC_FUNC_IMPL(__imp__sub_82137070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x823c3a50
	sub_823C3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82137080"))) PPC_WEAK_FUNC(sub_82137080);
PPC_FUNC_IMPL(__imp__sub_82137080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137084"))) PPC_WEAK_FUNC(sub_82137084);
PPC_FUNC_IMPL(__imp__sub_82137084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137088"))) PPC_WEAK_FUNC(sub_82137088);
PPC_FUNC_IMPL(__imp__sub_82137088) {
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
	// bl 0x8213d760
	ctx.lr = 0x821370A0;
	sub_8213D760(ctx, base);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821370b0
	if (ctx.cr6.eq) goto loc_821370B0;
	// bl 0x821ec958
	ctx.lr = 0x821370B0;
	sub_821EC958(ctx, base);
loc_821370B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821370C4"))) PPC_WEAK_FUNC(sub_821370C4);
PPC_FUNC_IMPL(__imp__sub_821370C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821370C8"))) PPC_WEAK_FUNC(sub_821370C8);
PPC_FUNC_IMPL(__imp__sub_821370C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821370D0;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r6,r11,-32660
	ctx.r6.s64 = ctx.r11.s64 + -32660;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213710C;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r29,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r29.u32);
	// addi r7,r10,-32568
	ctx.r7.s64 = ctx.r10.s64 + -32568;
	// stw r27,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r27.u32);
	// addi r6,r9,-32628
	ctx.r6.s64 = ctx.r9.s64 + -32628;
	// addi r5,r8,-32640
	ctx.r5.s64 = ctx.r8.s64 + -32640;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r6.u32);
	// stw r5,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r31.u32);
	// bl 0x821ebb58
	ctx.lr = 0x8213714C;
	sub_821EBB58(ctx, base);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r11,-784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -784);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82137184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82137190"))) PPC_WEAK_FUNC(sub_82137190);
PPC_FUNC_IMPL(__imp__sub_82137190) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371AC"))) PPC_WEAK_FUNC(sub_821371AC);
PPC_FUNC_IMPL(__imp__sub_821371AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821371B0"))) PPC_WEAK_FUNC(sub_821371B0);
PPC_FUNC_IMPL(__imp__sub_821371B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371C8"))) PPC_WEAK_FUNC(sub_821371C8);
PPC_FUNC_IMPL(__imp__sub_821371C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371E0"))) PPC_WEAK_FUNC(sub_821371E0);
PPC_FUNC_IMPL(__imp__sub_821371E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371FC"))) PPC_WEAK_FUNC(sub_821371FC);
PPC_FUNC_IMPL(__imp__sub_821371FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137200"))) PPC_WEAK_FUNC(sub_82137200);
PPC_FUNC_IMPL(__imp__sub_82137200) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213721C"))) PPC_WEAK_FUNC(sub_8213721C);
PPC_FUNC_IMPL(__imp__sub_8213721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137220"))) PPC_WEAK_FUNC(sub_82137220);
PPC_FUNC_IMPL(__imp__sub_82137220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821372d0
	sub_821372D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82137228"))) PPC_WEAK_FUNC(sub_82137228);
PPC_FUNC_IMPL(__imp__sub_82137228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x821372d0
	sub_821372D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82137230"))) PPC_WEAK_FUNC(sub_82137230);
PPC_FUNC_IMPL(__imp__sub_82137230) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,672(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r11,-32568
	ctx.r7.s64 = ctx.r11.s64 + -32568;
	// addi r6,r9,-32628
	ctx.r6.s64 = ctx.r9.s64 + -32628;
	// addi r5,r8,-32640
	ctx.r5.s64 = ctx.r8.s64 + -32640;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// beq cr6,0x821372b4
	if (ctx.cr6.eq) goto loc_821372B4;
	// bl 0x8215bd60
	ctx.lr = 0x82137278;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821372a8
	if (ctx.cr6.eq) goto loc_821372A8;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213729C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x821ec900
	ctx.lr = 0x821372A4;
	sub_821EC900(ctx, base);
	// b 0x821372b4
	goto loc_821372B4;
loc_821372A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x821ec880
	ctx.lr = 0x821372B4;
	sub_821EC880(ctx, base);
loc_821372B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d918
	ctx.lr = 0x821372BC;
	sub_8213D918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821372D0"))) PPC_WEAK_FUNC(sub_821372D0);
PPC_FUNC_IMPL(__imp__sub_821372D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82137230
	ctx.lr = 0x821372F0;
	sub_82137230(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213730c
	if (ctx.cr6.eq) goto loc_8213730C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82137308;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213730C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137324"))) PPC_WEAK_FUNC(sub_82137324);
PPC_FUNC_IMPL(__imp__sub_82137324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137328"))) PPC_WEAK_FUNC(sub_82137328);
PPC_FUNC_IMPL(__imp__sub_82137328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82137330;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-32392
	ctx.r9.s64 = ctx.r11.s64 + -32392;
	// addi r8,r10,-32400
	ctx.r8.s64 = ctx.r10.s64 + -32400;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r31,r3,780
	ctx.r31.s64 = ctx.r3.s64 + 780;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82137360:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82137380
	if (ctx.cr6.eq) goto loc_82137380;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82137380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82137380:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82137360
	if (!ctx.cr0.eq) goto loc_82137360;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x823c30b8
	ctx.lr = 0x82137394;
	sub_823C30B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821857f0
	ctx.lr = 0x8213739C;
	sub_821857F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x821373A4;
	sub_82185A50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821373AC"))) PPC_WEAK_FUNC(sub_821373AC);
PPC_FUNC_IMPL(__imp__sub_821373AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821373B0"))) PPC_WEAK_FUNC(sub_821373B0);
PPC_FUNC_IMPL(__imp__sub_821373B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821374c0
	sub_821374C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821373B8"))) PPC_WEAK_FUNC(sub_821373B8);
PPC_FUNC_IMPL(__imp__sub_821373B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821373C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,1908(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r27,r11,-16384
	ctx.r27.s64 = ctx.r11.s64 + -16384;
loc_821373E4:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x821373f8
	if (!ctx.cr6.eq) goto loc_821373F8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// b 0x82137408
	goto loc_82137408;
loc_821373F8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82137410
	if (!ctx.cr6.eq) goto loc_82137410;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,1364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
loc_82137408:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82137430
	if (ctx.cr6.eq) goto loc_82137430;
loc_82137410:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x820a75f0
	ctx.lr = 0x82137420;
	sub_820A75F0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82137430
	if (!ctx.cr6.lt) goto loc_82137430;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82137430:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x821373e4
	if (ctx.cr6.lt) goto loc_821373E4;
	// stw r28,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82137448"))) PPC_WEAK_FUNC(sub_82137448);
PPC_FUNC_IMPL(__imp__sub_82137448) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8213746c
	if (!ctx.cr6.gt) goto loc_8213746C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_8213746C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r3,1920(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1920);
	// beq cr6,0x821374a8
	if (ctx.cr6.eq) goto loc_821374A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x821374b4
	goto loc_821374B4;
loc_821374A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_821374B4:
	// b 0x820c66e8
	sub_820C66E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821374B8"))) PPC_WEAK_FUNC(sub_821374B8);
PPC_FUNC_IMPL(__imp__sub_821374B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821374BC"))) PPC_WEAK_FUNC(sub_821374BC);
PPC_FUNC_IMPL(__imp__sub_821374BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821374C0"))) PPC_WEAK_FUNC(sub_821374C0);
PPC_FUNC_IMPL(__imp__sub_821374C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82137328
	ctx.lr = 0x821374E0;
	sub_82137328(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821374fc
	if (ctx.cr6.eq) goto loc_821374FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821374F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821374FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137514"))) PPC_WEAK_FUNC(sub_82137514);
PPC_FUNC_IMPL(__imp__sub_82137514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137518"))) PPC_WEAK_FUNC(sub_82137518);
PPC_FUNC_IMPL(__imp__sub_82137518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2756, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,3012(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3012, ctx.r11.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,3268(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3268, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3524, ctx.r11.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,3780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3780, ctx.r11.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,4036(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4036, ctx.r11.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,4292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4292, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,9668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9668, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,9924(r6)
	PPC_STORE_U32(ctx.r6.u32 + 9924, ctx.r11.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,10180(r4)
	PPC_STORE_U32(ctx.r4.u32 + 10180, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,16324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16324, ctx.r11.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,16580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16580, ctx.r11.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,16836(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16836, ctx.r11.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,6084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6084, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,5828(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5828, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,5316(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5316, ctx.r11.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,5572(r4)
	PPC_STORE_U32(ctx.r4.u32 + 5572, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,11716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11716, ctx.r11.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,11972(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11972, ctx.r11.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,12228(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12228, ctx.r11.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,12484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12484, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,12740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12740, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,11720(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 11720, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,11724(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 11724, temp.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,11728(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 11728, temp.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,11976(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 11976, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,11980(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 11980, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,11984(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 11984, temp.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,12232(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12232, temp.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,12236(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12236, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,12240(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12240, temp.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,12488(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12488, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,12492(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12492, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,12496(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12496, temp.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,12744(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12744, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,12748(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12748, temp.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,12752(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12752, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,8904(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8904, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,8908(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8908, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,8912(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8912, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,9160(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 9160, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,9164(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 9164, temp.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,9168(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 9168, temp.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,9416(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 9416, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,9420(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 9420, temp.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,9424(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 9424, temp.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,13000(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 13000, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,13004(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 13004, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f0,13008(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 13008, temp.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,13256(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 13256, temp.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,13260(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 13260, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,13264(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 13264, temp.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,13512(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 13512, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,13516(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 13516, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,13520(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 13520, temp.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,13768(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 13768, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,13772(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 13772, temp.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f0,13776(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 13776, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,14024(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 14024, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,14028(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 14028, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,14032(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 14032, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,7364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7364, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,7108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7108, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,6596(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6596, ctx.r11.u32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,6852(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6852, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,18372(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18372, ctx.r11.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,18628(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18628, ctx.r11.u32);
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,18884(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18884, ctx.r11.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,19140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19140, ctx.r11.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,19396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19396, ctx.r11.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18376(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 18376, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18380(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 18380, temp.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18384(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 18384, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,18632(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 18632, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,18636(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 18636, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,18640(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 18640, temp.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18888(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 18888, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18892(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 18892, temp.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,18896(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 18896, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,19144(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 19144, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,19148(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 19148, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,19152(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 19152, temp.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,19400(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 19400, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f0,19404(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 19404, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,-32752(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32752);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-32380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32380);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,19408(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 19408, temp.u32);
	// lfs f11,-32384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32384);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,15560(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15560, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,15564(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 15564, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,15568(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 15568, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,15816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15816, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,15820(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15820, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,15824(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 15824, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,16072(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16072, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,16076(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16076, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,16080(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16080, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,19656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19656, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,19660(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 19660, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,19664(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 19664, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,19912(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 19912, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,19916(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 19916, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,19920(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 19920, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20168, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20172(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20172, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20176(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20176, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,20424(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20424, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,20428(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20428, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f0,20432(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20432, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20680, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20684(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20684, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,20688(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20688, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f12,7880(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 7880, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f12,7884(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 7884, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f12,7888(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 7888, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f12,14536(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 14536, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f12,14540(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 14540, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f12,14544(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 14544, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f11,8136(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8136, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,8140(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8140, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,8144(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8144, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f11,8392(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8392, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,8396(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8396, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,8400(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8400, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f11,8648(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8648, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,8652(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8652, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,8656(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8656, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f11,14792(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 14792, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,14796(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 14796, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,14800(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 14800, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f11,15048(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 15048, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,15052(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 15052, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,15056(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 15056, temp.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f11,15304(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15304, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,15308(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15308, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f13,15312(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15312, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137A6C"))) PPC_WEAK_FUNC(sub_82137A6C);
PPC_FUNC_IMPL(__imp__sub_82137A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137A70"))) PPC_WEAK_FUNC(sub_82137A70);
PPC_FUNC_IMPL(__imp__sub_82137A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82137A78;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249928
	ctx.lr = 0x82137A80;
	sub_82249928(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82137ac8
	if (!ctx.cr6.gt) goto loc_82137AC8;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x82137A9C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213869c
	if (ctx.cr6.eq) goto loc_8213869C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249974
	ctx.lr = 0x82137AC4;
	sub_82249974(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82137AC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213869c
	if (ctx.cr6.eq) goto loc_8213869C;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82137518
	ctx.lr = 0x82137AE0;
	sub_82137518(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82137AEC;
	sub_82106EB0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137b14
	if (ctx.cr6.eq) goto loc_82137B14;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82137B14:
	// bl 0x8215bd60
	ctx.lr = 0x82137B18;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82137b2c
	if (!ctx.cr6.eq) goto loc_82137B2C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82137b60
	if (ctx.cr6.eq) goto loc_82137B60;
loc_82137B2C:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82137b5c
	if (!ctx.cr6.gt) goto loc_82137B5C;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// divwu r14,r11,r10
	ctx.r14.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// bne 0x82137b5c
	if (!ctx.cr0.eq) goto loc_82137B5C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_82137B5C:
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
loc_82137B60:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r15,r11,-16656
	ctx.r15.s64 = ctx.r11.s64 + -16656;
	// addi r16,r10,-5052
	ctx.r16.s64 = ctx.r10.s64 + -5052;
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,-32752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32752);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r31,516
	ctx.r17.s64 = ctx.r31.s64 + 516;
	// lfs f30,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// lfs f29,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// addi r27,r31,632
	ctx.r27.s64 = ctx.r31.s64 + 632;
	// addi r21,r11,26232
	ctx.r21.s64 = ctx.r11.s64 + 26232;
loc_82137BB4:
	// lwz r22,0(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,1924(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1924);
	// lwz r23,1908(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1908);
	// addi r30,r11,456
	ctx.r30.s64 = ctx.r11.s64 + 456;
	// bl 0x8216c098
	ctx.lr = 0x82137BCC;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82137BD0;
	sub_8215BD28(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,-4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r7,r30,30
	ctx.r7.s64 = ctx.r30.s64 + 30;
	// addi r25,r27,-56
	ctx.r25.s64 = ctx.r27.s64 + -56;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r8,r3,45
	ctx.r8.s64 = ctx.r3.s64 + 45;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r7.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r18.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82137c24
	if (!ctx.cr6.eq) goto loc_82137C24;
	// addi r8,r30,292
	ctx.r8.s64 = ctx.r30.s64 + 292;
loc_82137C24:
	// stw r8,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r8.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r18.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82248910
	ctx.lr = 0x82137C44;
	sub_82248910(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r30,r27,-40
	ctx.r30.s64 = ctx.r27.s64 + -40;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r25.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r18.u32);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82248910
	ctx.lr = 0x82137C7C;
	sub_82248910(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r29,r27,-24
	ctx.r29.s64 = ctx.r27.s64 + -24;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r18.u32);
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x82248910
	ctx.lr = 0x82137CB4;
	sub_82248910(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r18.u32);
loc_82137CE0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x820a75f0
	ctx.lr = 0x82137CEC;
	sub_820A75F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82137d74
	if (ctx.cr6.eq) goto loc_82137D74;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82137d3c
	if (ctx.cr6.eq) goto loc_82137D3C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82137dd4
	if (!ctx.cr6.eq) goto loc_82137DD4;
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r6,r26,r30
	ctx.r6.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f29,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f30,204(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// b 0x82137da8
	goto loc_82137DA8;
loc_82137D3C:
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r6,r26,r30
	ctx.r6.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f31,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f29,204(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// b 0x82137da8
	goto loc_82137DA8;
loc_82137D74:
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r6,r26,r30
	ctx.r6.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f31,200(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f31,204(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
loc_82137DA8:
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stfs f30,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82137dd4
	if (ctx.cr6.lt) goto loc_82137DD4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r18.u32);
loc_82137DD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82137ce0
	if (ctx.cr6.lt) goto loc_82137CE0;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82137e48
	if (!ctx.cr6.eq) goto loc_82137E48;
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82137e48
	if (!ctx.cr6.lt) goto loc_82137E48;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82137e2c
	if (ctx.cr6.lt) goto loc_82137E2C;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r18,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r18.u32);
loc_82137E2C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,212(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 212, temp.u32);
loc_82137E48:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1360(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1360);
	// lwz r8,76(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bne cr6,0x82137e88
	if (!ctx.cr6.eq) goto loc_82137E88;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,204(r6)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,208(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// b 0x82137ea8
	goto loc_82137EA8;
loc_82137E88:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_82137EA8:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1364(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1364);
	// lwz r8,72(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82137ee8
	if (!ctx.cr6.eq) goto loc_82137EE8;
	// stfs f28,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f28,204(r6)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f28,208(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// b 0x82137f04
	goto loc_82137F04;
loc_82137EE8:
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_82137F04:
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r11,r16,8
	ctx.r11.s64 = ctx.r16.s64 + 8;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82137bb4
	if (ctx.cr6.lt) goto loc_82137BB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137f44
	if (ctx.cr6.eq) goto loc_82137F44;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r18.u32);
	// b 0x8213802c
	goto loc_8213802C;
loc_82137F44:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82137f84
	if (!ctx.cr6.eq) goto loc_82137F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137fb4
	if (ctx.cr6.eq) goto loc_82137FB4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82137F68;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82137fb4
	if (ctx.cr6.eq) goto loc_82137FB4;
	// bl 0x821d38e8
	ctx.lr = 0x82137F74;
	sub_821D38E8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r18.u32);
	// b 0x8213802c
	goto loc_8213802C;
loc_82137F84:
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137fc4
	if (ctx.cr6.eq) goto loc_82137FC4;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bne cr6,0x82137fb4
	if (!ctx.cr6.eq) goto loc_82137FB4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x82137FA8;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82137fb4
	if (ctx.cr6.eq) goto loc_82137FB4;
	// bl 0x821d38e8
	ctx.lr = 0x82137FB4;
	sub_821D38E8(ctx, base);
loc_82137FB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r18.u32);
	// b 0x8213802c
	goto loc_8213802C;
loc_82137FC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,544
	ctx.r30.s64 = ctx.r31.s64 + 544;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,3268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3268, ctx.r18.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r18,3524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3524, ctx.r18.u32);
	// bl 0x82248910
	ctx.lr = 0x82137FF0;
	sub_82248910(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r14,20
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 20, ctx.xer);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,3544(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3544, ctx.r30.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r18,3564(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3564, ctx.r18.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bge cr6,0x82138020
	if (!ctx.cr6.lt) goto loc_82138020;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-32372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32372);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82138028
	goto loc_82138028;
loc_82138020:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-32376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32376);
	ctx.f0.f64 = double(temp.f32);
loc_82138028:
	// stfs f0,3332(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 3332, temp.u32);
loc_8213802C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// addi r24,r10,72
	ctx.r24.s64 = ctx.r10.s64 + 72;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r25,r11,56
	ctx.r25.s64 = ctx.r11.s64 + 56;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r9,26214
	ctx.r9.s64 = 1717960704;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// lfs f29,-32756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32756);
	ctx.f29.f64 = double(temp.f32);
	// addi r23,r31,516
	ctx.r23.s64 = ctx.r31.s64 + 516;
	// addi r26,r31,660
	ctx.r26.s64 = ctx.r31.s64 + 660;
	// stw r18,3780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3780, ctx.r18.u32);
	// li r17,4
	ctx.r17.s64 = 4;
	// lis r22,-32179
	ctx.r22.s64 = -2108882944;
	// ori r21,r9,26215
	ctx.r21.u64 = ctx.r9.u64 | 26215;
	// addi r19,r11,29344
	ctx.r19.s64 = ctx.r11.s64 + 29344;
	// li r16,1
	ctx.r16.s64 = 1;
loc_82138078:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r27,r26,-28
	ctx.r27.s64 = ctx.r26.s64 + -28;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r28,1920(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// lwz r29,1908(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// beq cr6,0x8213839c
	if (ctx.cr6.eq) goto loc_8213839C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821380d0
	if (ctx.cr6.eq) goto loc_821380D0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,-4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,204(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,208(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_821380D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213810c
	if (ctx.cr6.eq) goto loc_8213810C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,204(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,208(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_8213810C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82138148
	if (ctx.cr6.eq) goto loc_82138148;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,204(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,208(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_82138148:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82138184
	if (ctx.cr6.eq) goto loc_82138184;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f28,204(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f28,208(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_82138184:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821381c0
	if (ctx.cr6.eq) goto loc_821381C0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f28,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f28,204(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f28,208(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_821381C0:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821381e4
	if (ctx.cr0.lt) goto loc_821381E4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_821381E4:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8213823c
	if (ctx.cr6.lt) goto loc_8213823C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_8213823C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
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
	// stfs f29,204(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,-32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f29,204(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,-4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821382d4
	if (!ctx.cr6.lt) goto loc_821382D4;
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821382c4
	if (!ctx.cr6.lt) goto loc_821382C4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x821382d0
	goto loc_821382D0;
loc_821382C4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821382d0
	if (!ctx.cr6.gt) goto loc_821382D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821382D0:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_821382D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8213854c
	if (!ctx.cr6.eq) goto loc_8213854C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82138318
	if (!ctx.cr6.lt) goto loc_82138318;
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82138308
	if (!ctx.cr6.lt) goto loc_82138308;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x82138314
	goto loc_82138314;
loc_82138308:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82138314
	if (!ctx.cr6.gt) goto loc_82138314;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82138314:
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_82138318:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138338
	if (ctx.cr6.lt) goto loc_82138338;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_82138338:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f29,204(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,-28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f29,204(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// b 0x8213854c
	goto loc_8213854C;
loc_8213839C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821383c0
	if (!ctx.cr6.eq) goto loc_821383C0;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821383dc
	if (!ctx.cr6.eq) goto loc_821383DC;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x821383dc
	goto loc_821383DC;
loc_821383C0:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821383dc
	if (!ctx.cr6.eq) goto loc_821383DC;
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
loc_821383DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c39c8
	ctx.lr = 0x821383E4;
	sub_820C39C8(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c39f8
	ctx.lr = 0x821383F0;
	sub_820C39F8(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82138428
	if (ctx.cr6.eq) goto loc_82138428;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8213841c
	if (ctx.cr6.eq) goto loc_8213841C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x820a7878
	ctx.lr = 0x8213840C;
	sub_820A7878(ctx, base);
	// stw r16,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r16.u32);
	// li r3,10000
	ctx.r3.s64 = 10000;
	// bl 0x8208f658
	ctx.lr = 0x82138418;
	sub_8208F658(ctx, base);
	// b 0x821384ec
	goto loc_821384EC;
loc_8213841C:
	// li r3,10002
	ctx.r3.s64 = 10002;
	// bl 0x8208f658
	ctx.lr = 0x82138424;
	sub_8208F658(ctx, base);
	// b 0x821384ec
	goto loc_821384EC;
loc_82138428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821384a8
	if (!ctx.cr6.eq) goto loc_821384A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821384a8
	if (!ctx.cr6.eq) goto loc_821384A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c3778
	ctx.lr = 0x82138444;
	sub_820C3778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82138470
	if (ctx.cr6.eq) goto loc_82138470;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bge 0x82138460
	if (!ctx.cr0.lt) goto loc_82138460;
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82138460:
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// li r3,10003
	ctx.r3.s64 = 10003;
	// bl 0x8208f658
	ctx.lr = 0x8213846C;
	sub_8208F658(ctx, base);
	// b 0x821384ec
	goto loc_821384EC;
loc_82138470:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c38a0
	ctx.lr = 0x82138478;
	sub_820C38A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821384ec
	if (ctx.cr6.eq) goto loc_821384EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82138498
	if (!ctx.cr6.gt) goto loc_82138498;
	// stw r18,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r18.u32);
loc_82138498:
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// li r3,10003
	ctx.r3.s64 = 10003;
	// bl 0x8208f658
	ctx.lr = 0x821384A4;
	sub_8208F658(ctx, base);
	// b 0x821384ec
	goto loc_821384EC;
loc_821384A8:
	// lbz r11,24332(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 24332);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,24332(r22)
	PPC_STORE_U8(ctx.r22.u32 + 24332, ctx.r10.u8);
	// lbzx r8,r11,r19
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// mulhw r7,r8,r21
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r6,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// bl 0x820a7878
	ctx.lr = 0x821384E0;
	sub_820A7878(ctx, base);
	// li r3,10000
	ctx.r3.s64 = 10000;
	// bl 0x8208f658
	ctx.lr = 0x821384E8;
	sub_8208F658(ctx, base);
	// stw r16,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r16.u32);
loc_821384EC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82138510
	if (ctx.cr0.lt) goto loc_82138510;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_82138510:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,200(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,204(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,208(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
loc_8213854C:
	// addi r11,r15,16
	ctx.r11.s64 = ctx.r15.s64 + 16;
	// addi r24,r24,128
	ctx.r24.s64 = ctx.r24.s64 + 128;
	// addi r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 + 328;
	// addi r26,r26,96
	ctx.r26.s64 = ctx.r26.s64 + 96;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r25,r25,128
	ctx.r25.s64 = ctx.r25.s64 + 128;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82138078
	if (ctx.cr6.lt) goto loc_82138078;
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,516
	ctx.r11.s64 = ctx.r31.s64 + 516;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lfs f13,31104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8213859c
	if (!ctx.cr6.lt) goto loc_8213859C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821385c4
	if (ctx.cr6.gt) goto loc_821385C4;
loc_8213859C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821385ac
	if (!ctx.cr6.lt) goto loc_821385AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821385b8
	goto loc_821385B8;
loc_821385AC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821385b8
	if (!ctx.cr6.gt) goto loc_821385B8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_821385B8:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
loc_821385C4:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821385e4
	if (!ctx.cr6.lt) goto loc_821385E4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8213860c
	if (ctx.cr6.gt) goto loc_8213860C;
loc_821385E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821385f4
	if (!ctx.cr6.lt) goto loc_821385F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82138600
	goto loc_82138600;
loc_821385F4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82138600
	if (!ctx.cr6.gt) goto loc_82138600;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82138600:
	// fneg f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
loc_8213860C:
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82138630
	if (!ctx.cr6.gt) goto loc_82138630;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82138630
	if (!ctx.cr6.eq) goto loc_82138630;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823c3468
	ctx.lr = 0x82138630;
	sub_823C3468(ctx, base);
loc_82138630:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138660
	if (ctx.cr6.eq) goto loc_82138660;
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138660
	if (ctx.cr6.eq) goto loc_82138660;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8213865c
	if (!ctx.cr6.eq) goto loc_8213865C;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
loc_8213865C:
	// stw r16,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r16.u32);
loc_82138660:
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213869c
	if (!ctx.cr6.eq) goto loc_8213869C;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138684
	if (ctx.cr6.eq) goto loc_82138684;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,4036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4036, ctx.r18.u32);
loc_82138684:
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213869c
	if (ctx.cr6.eq) goto loc_8213869C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r18,4292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4292, ctx.r18.u32);
loc_8213869C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249974
	ctx.lr = 0x821386A8;
	sub_82249974(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821386AC"))) PPC_WEAK_FUNC(sub_821386AC);
PPC_FUNC_IMPL(__imp__sub_821386AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821386B0"))) PPC_WEAK_FUNC(sub_821386B0);
PPC_FUNC_IMPL(__imp__sub_821386B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821386B8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8213877c
	if (ctx.cr6.eq) goto loc_8213877C;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x821386E4;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x821386F4;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82138708;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82138714;
	sub_821AD498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82138764
	if (ctx.cr6.eq) goto loc_82138764;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4308(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4308, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8210a9b0
	ctx.lr = 0x82138764;
	sub_8210A9B0(ctx, base);
loc_82138764:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82138770;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8213877C;
	sub_821AD498(ctx, base);
loc_8213877C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82138784"))) PPC_WEAK_FUNC(sub_82138784);
PPC_FUNC_IMPL(__imp__sub_82138784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138788"))) PPC_WEAK_FUNC(sub_82138788);
PPC_FUNC_IMPL(__imp__sub_82138788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82138790;
	sub_82248750(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x821387AC;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82185740
	ctx.lr = 0x821387BC;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r9,r11,-32392
	ctx.r9.s64 = ctx.r11.s64 + -32392;
	// addi r8,r10,-32400
	ctx.r8.s64 = ctx.r10.s64 + -32400;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c34c0
	ctx.lr = 0x821387F4;
	sub_823C34C0(ctx, base);
	// std r27,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r27.u64);
	// std r27,560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 560, ctx.r27.u64);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// std r27,600(r31)
	PPC_STORE_U64(ctx.r31.u32 + 600, ctx.r27.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// std r27,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r27.u64);
	// addi r30,r31,592
	ctx.r30.s64 = ctx.r31.s64 + 592;
	// std r27,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r27.u64);
	// std r27,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r27.u64);
	// std r27,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r27.u64);
	// std r27,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r27.u64);
	// std r27,696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 696, ctx.r27.u64);
	// std r27,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r27.u64);
	// std r27,712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 712, ctx.r27.u64);
	// std r27,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r27.u64);
	// std r27,728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 728, ctx.r27.u64);
	// std r27,720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 720, ctx.r27.u64);
	// stw r27,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r27.u32);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213886c
	if (ctx.cr6.eq) goto loc_8213886C;
	// bl 0x82107368
	ctx.lr = 0x8213886C;
	sub_82107368(ctx, base);
loc_8213886C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3410
	ctx.lr = 0x82138874;
	sub_823C3410(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82138880;
	sub_822AA648(ctx, base);
	// addi r30,r31,784
	ctx.r30.s64 = ctx.r31.s64 + 784;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82138890;
	sub_822AA648(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// lis r3,-32187
	ctx.r3.s64 = -2109407232;
	// addi r15,r11,-5052
	ctx.r15.s64 = ctx.r11.s64 + -5052;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r3,-16640
	ctx.r10.s64 = ctx.r3.s64 + -16640;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r24,r10,100
	ctx.r24.s64 = ctx.r10.s64 + 100;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lfs f13,14876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// lfs f12,31604(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31604);
	ctx.f12.f64 = double(temp.f32);
	// addi r22,r31,1312
	ctx.r22.s64 = ctx.r31.s64 + 1312;
	// lfs f11,8328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// addi r23,r31,640
	ctx.r23.s64 = ctx.r31.s64 + 640;
	// li r21,1
	ctx.r21.s64 = 1;
	// lis r17,-32182
	ctx.r17.s64 = -2109079552;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// addi r11,r11,-32368
	ctx.r11.s64 = ctx.r11.s64 + -32368;
	// addi r19,r10,30956
	ctx.r19.s64 = ctx.r10.s64 + 30956;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,540(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,4393
	ctx.r9.s64 = ctx.r9.s64 + 4393;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,544(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lwz r14,-8540(r4)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8540);
loc_82138950:
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r28,1908(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1908);
	// lwz r25,1924(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1924);
	// bl 0x8216c098
	ctx.lr = 0x82138964;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82138968;
	sub_8215BD28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821389f8
	if (ctx.cr6.eq) goto loc_821389F8;
	// bl 0x82183850
	ctx.lr = 0x8213898C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821389a4
	if (ctx.cr6.eq) goto loc_821389A4;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x821389A0;
	sub_82183448(ctx, base);
	// b 0x821389ac
	goto loc_821389AC;
loc_821389A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821389AC;
	sub_821845A0(ctx, base);
loc_821389AC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821389f0
	if (ctx.cr6.eq) goto loc_821389F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82185740
	ctx.lr = 0x821389C4;
	sub_82185740(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,120
	ctx.r10.s64 = 120;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// bl 0x821373b8
	ctx.lr = 0x821389EC;
	sub_821373B8(ctx, base);
	// b 0x821389f4
	goto loc_821389F4;
loc_821389F0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821389F4:
	// stw r30,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r30.u32);
loc_821389F8:
	// addi r3,r26,45
	ctx.r3.s64 = ctx.r26.s64 + 45;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8218a360
	ctx.lr = 0x82138A04;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82138a10
	if (ctx.cr6.eq) goto loc_82138A10;
	// stw r21,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r21.u32);
loc_82138A10:
	// lfs f0,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bl 0x820a7680
	ctx.lr = 0x82138A2C;
	sub_820A7680(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r9.u32);
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// bl 0x820a76e0
	ctx.lr = 0x82138A44;
	sub_820A76E0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r8.u32);
	// bl 0x820a77a0
	ctx.lr = 0x82138A54;
	sub_820A77A0(ctx, base);
	// lwz r7,12(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r6,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r6.u32);
	// stw r7,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r7.u32);
	// bl 0x820a7770
	ctx.lr = 0x82138A6C;
	sub_820A7770(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r5.u32);
	// bl 0x820a7808
	ctx.lr = 0x82138A7C;
	sub_820A7808(ctx, base);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// stw r3,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r3.u32);
	// stw r4,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r4.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138aa8
	if (ctx.cr6.lt) goto loc_82138AA8;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r21.u32);
loc_82138AA8:
	// lwz r9,1008(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1008);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82138d1c
	if (!ctx.cr6.gt) goto loc_82138D1C;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bgt cr6,0x82138d1c
	if (ctx.cr6.gt) goto loc_82138D1C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138adc
	if (ctx.cr6.lt) goto loc_82138ADC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_82138ADC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138afc
	if (ctx.cr6.lt) goto loc_82138AFC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_82138AFC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138b1c
	if (ctx.cr6.lt) goto loc_82138B1C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_82138B1C:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138b3c
	if (ctx.cr6.lt) goto loc_82138B3C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_82138B3C:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138b5c
	if (ctx.cr6.lt) goto loc_82138B5C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_82138B5C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138b7c
	if (ctx.cr6.lt) goto loc_82138B7C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_82138B7C:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138b9c
	if (ctx.cr6.lt) goto loc_82138B9C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_82138B9C:
	// lwz r10,1636(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1636);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,-4904(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4904);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,20(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lhz r5,10(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82138BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8224a7b8
	ctx.lr = 0x82138BDC;
	sub_8224A7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138cec
	if (ctx.cr6.eq) goto loc_82138CEC;
	// lwz r3,-4904(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4904);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_82138C04:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x82138c04
	if (!ctx.cr6.eq) goto loc_82138C04;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224a698
	ctx.lr = 0x82138C28;
	sub_8224A698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224a698
	ctx.lr = 0x82138C38;
	sub_8224A698(ctx, base);
	// addi r9,r22,-512
	ctx.r9.s64 = ctx.r22.s64 + -512;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r30.s64;
loc_82138C44:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82138c44
	if (!ctx.cr6.eq) goto loc_82138C44;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r3.s64;
loc_82138C64:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82138c64
	if (!ctx.cr6.eq) goto loc_82138C64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,20(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r27.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r22.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r27.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138ce4
	if (ctx.cr6.lt) goto loc_82138CE4;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_82138CE4:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// b 0x82138d00
	goto loc_82138D00;
loc_82138CEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82106f58
	ctx.lr = 0x82138CFC;
	sub_82106F58(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
loc_82138D00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82138d1c
	if (ctx.cr6.lt) goto loc_82138D1C;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_82138D1C:
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r11,r15,8
	ctx.r11.s64 = ctx.r15.s64 + 8;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r23,r23,96
	ctx.r23.s64 = ctx.r23.s64 + 96;
	// addi r22,r22,256
	ctx.r22.s64 = ctx.r22.s64 + 256;
	// addi r24,r24,128
	ctx.r24.s64 = ctx.r24.s64 + 128;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82138950
	if (ctx.cr6.lt) goto loc_82138950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138D4C"))) PPC_WEAK_FUNC(sub_82138D4C);
PPC_FUNC_IMPL(__imp__sub_82138D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138D50"))) PPC_WEAK_FUNC(sub_82138D50);
PPC_FUNC_IMPL(__imp__sub_82138D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82138D58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-32048
	ctx.r10.s64 = ctx.r11.s64 + -32048;
	// addi r31,r3,4764
	ctx.r31.s64 = ctx.r3.s64 + 4764;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82138D78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138d98
	if (ctx.cr6.eq) goto loc_82138D98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138D98:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82138d78
	if (!ctx.cr0.eq) goto loc_82138D78;
	// addi r31,r29,4780
	ctx.r31.s64 = ctx.r29.s64 + 4780;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82138DAC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138dcc
	if (ctx.cr6.eq) goto loc_82138DCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138DCC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82138dac
	if (!ctx.cr0.eq) goto loc_82138DAC;
	// lwz r3,4824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138df8
	if (ctx.cr6.eq) goto loc_82138DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138DF8:
	// addi r31,r29,4796
	ctx.r31.s64 = ctx.r29.s64 + 4796;
	// stw r28,4824(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4824, ctx.r28.u32);
	// li r30,4
	ctx.r30.s64 = 4;
loc_82138E04:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138e24
	if (ctx.cr6.eq) goto loc_82138E24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138E24:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82138e04
	if (!ctx.cr0.eq) goto loc_82138E04;
	// lwz r3,4816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138e50
	if (ctx.cr6.eq) goto loc_82138E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138E50:
	// lwz r3,4820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4820);
	// stw r28,4816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4816, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138e74
	if (ctx.cr6.eq) goto loc_82138E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82138E74:
	// stw r28,4820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4820, ctx.r28.u32);
	// bl 0x821142a0
	ctx.lr = 0x82138E7C;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82138ea4
	if (ctx.cr6.eq) goto loc_82138EA4;
	// lwz r4,4840(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4840);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82138ea4
	if (ctx.cr6.eq) goto loc_82138EA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821146c8
	ctx.lr = 0x82138E98;
	sub_821146C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,4840(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4840, ctx.r10.u32);
loc_82138EA4:
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x8212e710
	ctx.lr = 0x82138EAC;
	sub_8212E710(ctx, base);
	// addi r31,r29,4768
	ctx.r31.s64 = ctx.r29.s64 + 4768;
	// li r30,10
	ctx.r30.s64 = 10;
loc_82138EB4:
	// addi r31,r31,-416
	ctx.r31.s64 = ctx.r31.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a470
	ctx.lr = 0x82138EC0;
	sub_8213A470(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82138eb4
	if (!ctx.cr0.lt) goto loc_82138EB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134bb0
	ctx.lr = 0x82138ED0;
	sub_82134BB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82138ED8"))) PPC_WEAK_FUNC(sub_82138ED8);
PPC_FUNC_IMPL(__imp__sub_82138ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82138d50
	ctx.lr = 0x82138EF8;
	sub_82138D50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138f14
	if (ctx.cr6.eq) goto loc_82138F14;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82138F10;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82138F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138F2C"))) PPC_WEAK_FUNC(sub_82138F2C);
PPC_FUNC_IMPL(__imp__sub_82138F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138F30"))) PPC_WEAK_FUNC(sub_82138F30);
PPC_FUNC_IMPL(__imp__sub_82138F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x82138F38;
	sub_82248758(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82249928
	ctx.lr = 0x82138F40;
	sub_82249928(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139984
	if (ctx.cr6.eq) goto loc_82139984;
	// bl 0x8215c080
	ctx.lr = 0x82138F58;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82138F60;
	sub_82183078(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82138F6C;
	sub_821837D0(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82138F70;
	sub_821142A0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82138F80:
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82138f98
	if (ctx.cr6.eq) goto loc_82138F98;
	// lwz r10,1504(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1504);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82138fa8
	if (ctx.cr6.eq) goto loc_82138FA8;
loc_82138F98:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82138f80
	if (ctx.cr6.lt) goto loc_82138F80;
loc_82138FA8:
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82138FB4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138fec
	if (ctx.cr6.eq) goto loc_82138FEC;
	// bl 0x82227aa0
	ctx.lr = 0x82138FC4;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138fec
	if (ctx.cr6.eq) goto loc_82138FEC;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r18,r8,r18
	ctx.r18.u64 = ctx.r8.u64 & ctx.r18.u64;
loc_82138FEC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,1544(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1544);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-32352
	ctx.r30.s64 = ctx.r11.s64 + -32352;
	// addi r29,r31,3104
	ctx.r29.s64 = ctx.r31.s64 + 3104;
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r27,r31,3520
	ctx.r27.s64 = ctx.r31.s64 + 3520;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r31,3936
	ctx.r26.s64 = ctx.r31.s64 + 3936;
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r31,4352
	ctx.r25.s64 = ctx.r31.s64 + 4352;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,3316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// addi r28,r11,112
	ctx.r28.s64 = ctx.r11.s64 + 112;
	// stfs f11,3312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3312, temp.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,1540(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1540);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3732, temp.u32);
	// stfs f9,3728(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3728, temp.u32);
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,1532(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1532);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stfs f7,4144(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4144, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,1536(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1536);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4564, temp.u32);
	// stfs f5,4560(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4560, temp.u32);
	// lfs f4,1544(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1544);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,3304(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// stfs f31,3296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// stfs f31,3300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3300, temp.u32);
	// lfs f3,1540(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1540);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,3720(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3720, temp.u32);
	// stfs f0,3724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3724, temp.u32);
	// stfs f31,3712(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3712, temp.u32);
	// stfs f31,3716(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3716, temp.u32);
	// lfs f2,1532(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1532);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,4136(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4136, temp.u32);
	// stfs f0,4140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4140, temp.u32);
	// stfs f31,4128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4128, temp.u32);
	// stfs f31,4132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4132, temp.u32);
	// lfs f1,1536(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1536);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,4544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4544, temp.u32);
	// stfs f31,4548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4548, temp.u32);
	// stfs f1,4552(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4552, temp.u32);
	// stfs f0,4556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4556, temp.u32);
loc_821390CC:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82139118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// addi r24,r24,416
	ctx.r24.s64 = ctx.r24.s64 + 416;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x821390cc
	if (!ctx.cr6.gt) goto loc_821390CC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,1924(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1924);
	// addi r21,r31,4784
	ctx.r21.s64 = ctx.r31.s64 + 4784;
	// addi r24,r11,-16320
	ctx.r24.s64 = ctx.r11.s64 + -16320;
	// addi r22,r10,486
	ctx.r22.s64 = ctx.r10.s64 + 486;
	// addi r28,r24,128
	ctx.r28.s64 = ctx.r24.s64 + 128;
	// addi r23,r21,-4
	ctx.r23.s64 = ctx.r21.s64 + -4;
loc_8213914C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r3,4(r23)
	ea = 4 + ctx.r23.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r23.u32 = ea;
	// addi r4,r30,272
	ctx.r4.s64 = ctx.r30.s64 + 272;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82134848
	ctx.lr = 0x82139164;
	sub_82134848(ctx, base);
	// addi r11,r24,128
	ctx.r11.s64 = ctx.r24.s64 + 128;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213914c
	if (ctx.cr6.lt) goto loc_8213914C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r23,r31,4764
	ctx.r23.s64 = ctx.r31.s64 + 4764;
loc_82139180:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r3,4(r23)
	ea = 4 + ctx.r23.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r23.u32 = ea;
	// addi r4,r30,272
	ctx.r4.s64 = ctx.r30.s64 + 272;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82134848
	ctx.lr = 0x82139198;
	sub_82134848(ctx, base);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r11,r24,128
	ctx.r11.s64 = ctx.r24.s64 + 128;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139180
	if (ctx.cr6.lt) goto loc_82139180;
	// addi r23,r31,4800
	ctx.r23.s64 = ctx.r31.s64 + 4800;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r24,r23,-4
	ctx.r24.s64 = ctx.r23.s64 + -4;
loc_821391B4:
	// lwzu r3,4(r24)
	ea = 4 + ctx.r24.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// bl 0x8213b478
	ctx.lr = 0x821391BC;
	sub_8213B478(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x821391b4
	if (!ctx.cr0.eq) goto loc_821391B4;
	// lwz r3,4816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// bl 0x8213b478
	ctx.lr = 0x821391CC;
	sub_8213B478(ctx, base);
	// lwz r3,4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// bl 0x8213b478
	ctx.lr = 0x821391D4;
	sub_8213B478(ctx, base);
	// lwz r11,4836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139218
	if (ctx.cr6.eq) goto loc_82139218;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,1200
	ctx.r10.s64 = ctx.r11.s64 + 1200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lhz r7,164(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82139218
	if (!ctx.cr6.eq) goto loc_82139218;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139218
	if (ctx.cr6.eq) goto loc_82139218;
	// stw r24,1524(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1524, ctx.r24.u32);
loc_82139218:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8213927c
	if (ctx.cr6.eq) goto loc_8213927C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8213927c
	if (ctx.cr6.eq) goto loc_8213927C;
	// lwz r4,4840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4840);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x8213927c
	if (ctx.cr6.eq) goto loc_8213927C;
	// lwz r11,1516(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1516);
	// addi r11,r11,1199
	ctx.r11.s64 = ctx.r11.s64 + 1199;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213927c
	if (ctx.cr6.eq) goto loc_8213927C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82114690
	ctx.lr = 0x82139258;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213927c
	if (ctx.cr6.eq) goto loc_8213927C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4840);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821146c8
	ctx.lr = 0x82139270;
	sub_821146C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r10.u32);
loc_8213927C:
	// lwz r11,1508(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821395d4
	if (ctx.cr6.eq) goto loc_821395D4;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821392a0
	if (ctx.cr6.gt) goto loc_821392A0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821392b4
	if (!ctx.cr6.lt) goto loc_821392B4;
loc_821392A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4832);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,4832(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4832, temp.u32);
loc_821392B4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f13,4832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4832);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4828(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r24.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r10,4788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// stw r24,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r24.u32);
	// lwz r9,4792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// stw r24,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r24.u32);
	// lwz r8,4796(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	// stw r24,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r24.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,100(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82139330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82139348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r24,240(r4)
	PPC_STORE_U32(ctx.r4.u32 + 240, ctx.r24.u32);
	// lfs f0,-32008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14876(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,1512(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1512);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bgt cr6,0x82139414
	if (ctx.cr6.gt) goto loc_82139414;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821393b0
	// bdzf 4*cr6+eq,0x821393cc
	// bne cr6,0x821393e8
	if (!ctx.cr6.eq) goto loc_821393E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r7,r10,32464
	ctx.r7.s64 = ctx.r10.s64 + 32464;
	// li r28,9
	ctx.r28.s64 = 9;
	// ld r6,32464(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32464);
	// b 0x82139400
	goto loc_82139400;
loc_821393B0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r7,r10,32480
	ctx.r7.s64 = ctx.r10.s64 + 32480;
	// li r28,10
	ctx.r28.s64 = 10;
	// ld r6,32480(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32480);
	// b 0x82139400
	goto loc_82139400;
loc_821393CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4788(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4788);
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r7,r10,32448
	ctx.r7.s64 = ctx.r10.s64 + 32448;
	// li r28,8
	ctx.r28.s64 = 8;
	// ld r6,32448(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32448);
	// b 0x82139400
	goto loc_82139400;
loc_821393E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r7,r10,32432
	ctx.r7.s64 = ctx.r10.s64 + 32432;
	// li r28,7
	ctx.r28.s64 = 7;
	// ld r6,32432(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32432);
loc_82139400:
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// stw r11,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r11.u32);
loc_82139414:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f0,4828(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,32496
	ctx.r8.s64 = ctx.r11.s64 + 32496;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r11,32496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32496);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// mulli r10,r30,416
	ctx.r10.s64 = ctx.r30.s64 * 416;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r7,192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// lfd f4,96(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmadds f6,f11,f0,f1
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f5,f9,f0,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fctiwz f3,f6
	ctx.f3.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fmadds f0,f1,f0,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x82139518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r28,416
	ctx.r11.s64 = ctx.r28.s64 * 416;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82139538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821395bc
	if (!ctx.cr6.gt) goto loc_821395BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,1200
	ctx.r9.s64 = ctx.r11.s64 + 1200;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lhz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82139590
	if (!ctx.cr6.eq) goto loc_82139590;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821395bc
	if (ctx.cr6.eq) goto loc_821395BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213958C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821395bc
	goto loc_821395BC;
loc_82139590:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821395bc
	if (!ctx.cr6.eq) goto loc_821395BC;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821395bc
	if (ctx.cr6.eq) goto loc_821395BC;
	// stw r11,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r11.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x821395bc
	if (ctx.cr6.eq) goto loc_821395BC;
	// li r4,30197
	ctx.r4.s64 = 30197;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82114658
	ctx.lr = 0x821395BC;
	sub_82114658(ctx, base);
loc_821395BC:
	// lwz r11,4836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213997c
	if (!ctx.cr6.eq) goto loc_8213997C;
	// stw r24,1508(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1508, ctx.r24.u32);
	// stw r24,1520(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1520, ctx.r24.u32);
	// b 0x8213997c
	goto loc_8213997C;
loc_821395D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,32432
	ctx.r4.s64 = ctx.r10.s64 + 32432;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821395F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r8,32448
	ctx.r4.s64 = ctx.r8.s64 + 32448;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8213960C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r5,32464
	ctx.r4.s64 = ctx.r5.s64 + 32464;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r9,32480
	ctx.r4.s64 = ctx.r9.s64 + 32480;
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82139644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,102
	ctx.r3.s64 = 102;
	// addi r28,r31,1024
	ctx.r28.s64 = ctx.r31.s64 + 1024;
	// lwz r27,1024(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// bl 0x8218b408
	ctx.lr = 0x82139654;
	sub_8218B408(ctx, base);
	// lwz r6,92(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,102
	ctx.r3.s64 = 102;
	// addi r28,r31,1440
	ctx.r28.s64 = ctx.r31.s64 + 1440;
	// lwz r27,1440(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x8218b408
	ctx.lr = 0x82139678;
	sub_8218B408(ctx, base);
	// lwz r5,92(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8213968C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,102
	ctx.r3.s64 = 102;
	// addi r28,r31,1856
	ctx.r28.s64 = ctx.r31.s64 + 1856;
	// lwz r27,1856(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// bl 0x8218b408
	ctx.lr = 0x8213969C;
	sub_8218B408(ctx, base);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821396B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,102
	ctx.r3.s64 = 102;
	// addi r28,r31,2272
	ctx.r28.s64 = ctx.r31.s64 + 2272;
	// lwz r27,2272(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// bl 0x8218b408
	ctx.lr = 0x821396C0;
	sub_8218B408(ctx, base);
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821396D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r10,112
	ctx.r28.s64 = ctx.r10.s64 + 112;
	// addi r26,r11,-32024
	ctx.r26.s64 = ctx.r11.s64 + -32024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// li r25,255
	ctx.r25.s64 = 255;
	// lfs f28,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-32028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32028);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,10376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10376);
	ctx.f30.f64 = double(temp.f32);
loc_82139704:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,383
	ctx.r11.s64 = ctx.r11.s64 + 383;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r20
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8213972c
	if (!ctx.cr6.lt) goto loc_8213972C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r25,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r25.u32);
	// b 0x821397c4
	goto loc_821397C4;
loc_8213972C:
	// lfs f12,4776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmadds f11,f12,f30,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f12,f28,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,36(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bctrl 
	ctx.lr = 0x82139770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821397BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r24,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r24.u32);
loc_821397C4:
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139704
	if (ctx.cr6.lt) goto loc_82139704;
	// lfs f0,4776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,4776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82139808
	if (ctx.cr6.lt) goto loc_82139808;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8213981c
	if (!ctx.cr6.gt) goto loc_8213981C;
loc_82139808:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,4780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4780, temp.u32);
loc_8213981C:
	// lfs f0,4776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82139830
	if (!ctx.cr6.lt) goto loc_82139830;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8213983c
	goto loc_8213983C;
loc_82139830:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8213983c
	if (!ctx.cr6.gt) goto loc_8213983C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8213983C:
	// stfs f0,4776(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// lwz r10,1528(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1528);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82139870
	if (ctx.cr6.eq) goto loc_82139870;
	// lwz r10,1516(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1516);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82139870
	if (!ctx.cr6.eq) goto loc_82139870;
	// lwz r10,4812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_82139870:
	// lwz r10,4816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// lwz r9,1520(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1520);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213997c
	if (!ctx.cr6.gt) goto loc_8213997C;
	// lwz r11,1516(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1516);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82139944
	if (ctx.cr6.gt) goto loc_82139944;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821398d0
	// bdzf 4*cr6+eq,0x821398f4
	// bne cr6,0x82139918
	if (!ctx.cr6.eq) goto loc_82139918;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821398C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r24,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r24.u32);
	// stw r19,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r19.u32);
	// b 0x82139940
	goto loc_82139940;
loc_821398D0:
	// lwz r3,4804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4804);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821398E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4804(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4804);
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82139938
	goto loc_82139938;
loc_821398F4:
	// lwz r3,4808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213990C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4808(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82139938
	goto loc_82139938;
loc_82139918:
	// lwz r3,4812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4812(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	// li r9,4
	ctx.r9.s64 = 4;
loc_82139938:
	// stw r24,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r24.u32);
	// stw r9,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r9.u32);
loc_82139940:
	// stw r19,1524(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1524, ctx.r19.u32);
loc_82139944:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8213997c
	if (ctx.cr6.eq) goto loc_8213997C;
	// lwz r11,1516(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8213997c
	if (!ctx.cr6.gt) goto loc_8213997C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8213997c
	if (ctx.cr6.eq) goto loc_8213997C;
	// lwz r11,4840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4840);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8213997c
	if (!ctx.cr6.eq) goto loc_8213997C;
	// li r4,30196
	ctx.r4.s64 = 30196;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82114658
	ctx.lr = 0x82139978;
	sub_82114658(ctx, base);
	// stw r3,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r3.u32);
loc_8213997C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821837d0
	ctx.lr = 0x82139984;
	sub_821837D0(ctx, base);
loc_82139984:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82249974
	ctx.lr = 0x82139990;
	sub_82249974(ctx, base);
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_82139994"))) PPC_WEAK_FUNC(sub_82139994);
PPC_FUNC_IMPL(__imp__sub_82139994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139998"))) PPC_WEAK_FUNC(sub_82139998);
PPC_FUNC_IMPL(__imp__sub_82139998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821399A0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139aec
	if (ctx.cr6.eq) goto loc_82139AEC;
	// bl 0x8215bec8
	ctx.lr = 0x821399B8;
	sub_8215BEC8(ctx, base);
	// lbz r11,655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139aec
	if (ctx.cr6.eq) goto loc_82139AEC;
	// bl 0x8215bd60
	ctx.lr = 0x821399C8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82139a00
	if (ctx.cr6.eq) goto loc_82139A00;
	// bl 0x82227aa0
	ctx.lr = 0x821399D8;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139a00
	if (ctx.cr6.eq) goto loc_82139A00;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82139aec
	if (!ctx.cr6.eq) goto loc_82139AEC;
loc_82139A00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821344a0
	ctx.lr = 0x82139A08;
	sub_821344A0(ctx, base);
	// addi r31,r29,192
	ctx.r31.s64 = ctx.r29.s64 + 192;
	// li r30,11
	ctx.r30.s64 = 11;
loc_82139A10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// bne 0x82139a10
	if (!ctx.cr0.eq) goto loc_82139A10;
	// addi r30,r29,4780
	ctx.r30.s64 = ctx.r29.s64 + 4780;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82139A38:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82139a38
	if (!ctx.cr0.eq) goto loc_82139A38;
	// addi r30,r29,4764
	ctx.r30.s64 = ctx.r29.s64 + 4764;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82139A5C:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82139a5c
	if (!ctx.cr0.eq) goto loc_82139A5C;
	// addi r30,r29,4796
	ctx.r30.s64 = ctx.r29.s64 + 4796;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82139A80:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82139a80
	if (!ctx.cr0.eq) goto loc_82139A80;
	// lwz r11,4816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4816);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4820);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82139AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4824);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134500
	ctx.lr = 0x82139AEC;
	sub_82134500(ctx, base);
loc_82139AEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82139AF4"))) PPC_WEAK_FUNC(sub_82139AF4);
PPC_FUNC_IMPL(__imp__sub_82139AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139AF8"))) PPC_WEAK_FUNC(sub_82139AF8);
PPC_FUNC_IMPL(__imp__sub_82139AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82139B00;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82134b40
	ctx.lr = 0x82139B10;
	sub_82134B40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lfs f0,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r8,-32048
	ctx.r7.s64 = ctx.r8.s64 + -32048;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r29,10
	ctx.r29.s64 = 10;
	// stfs f31,124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r22,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r22.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82139B88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x82139B90;
	sub_8213A6F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// bge 0x82139b88
	if (!ctx.cr0.lt) goto loc_82139B88;
	// bl 0x8215c080
	ctx.lr = 0x82139BA0;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82139BA8;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82139BB4;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134468
	ctx.lr = 0x82139BBC;
	sub_82134468(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r11,-32352
	ctx.r29.s64 = ctx.r11.s64 + -32352;
	// addi r24,r10,-16368
	ctx.r24.s64 = ctx.r10.s64 + -16368;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r23,-1512(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1512);
	// addi r28,r29,96
	ctx.r28.s64 = ctx.r29.s64 + 96;
	// addi r27,r29,8
	ctx.r27.s64 = ctx.r29.s64 + 8;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82139BFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d0d8
	ctx.lr = 0x82139C10;
	sub_8212D0D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x821d25f8
	ctx.lr = 0x82139C20;
	sub_821D25F8(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,102
	ctx.r3.s64 = 102;
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8218b408
	ctx.lr = 0x82139C44;
	sub_8218B408(ctx, base);
	// lwz r10,92(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// stfs f11,208(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,212(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfs f0,272(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lfs f13,276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bgt cr6,0x82139cb8
	if (ctx.cr6.gt) goto loc_82139CB8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82139cbc
	goto loc_82139CBC;
loc_82139CB8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_82139CBC:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r24,44
	ctx.r11.s64 = ctx.r24.s64 + 44;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139bfc
	if (ctx.cr6.lt) goto loc_82139BFC;
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,3104
	ctx.r3.s64 = ctx.r31.s64 + 3104;
	// addi r4,r10,32432
	ctx.r4.s64 = ctx.r10.s64 + 32432;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82139D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,3520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r31,3520
	ctx.r3.s64 = ctx.r31.s64 + 3520;
	// addi r4,r8,32448
	ctx.r4.s64 = ctx.r8.s64 + 32448;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3936);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r31,3936
	ctx.r3.s64 = ctx.r31.s64 + 3936;
	// addi r4,r5,32464
	ctx.r4.s64 = ctx.r5.s64 + 32464;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r31,4352
	ctx.r3.s64 = ctx.r31.s64 + 4352;
	// addi r4,r9,32480
	ctx.r4.s64 = ctx.r9.s64 + 32480;
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82139D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x82139D60;
	sub_8212D0B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x82139D70;
	sub_8212D0B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r31,4764
	ctx.r28.s64 = ctx.r31.s64 + 4764;
	// addi r26,r3,12
	ctx.r26.s64 = ctx.r3.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
loc_82139D84:
	// bl 0x82183850
	ctx.lr = 0x82139D88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82139da0
	if (ctx.cr6.eq) goto loc_82139DA0;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x82139D9C;
	sub_82183448(ctx, base);
	// b 0x82139da8
	goto loc_82139DA8;
loc_82139DA0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x82139DA8;
	sub_821845A0(ctx, base);
loc_82139DA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82139db8
	if (ctx.cr6.eq) goto loc_82139DB8;
	// bl 0x8213bbc0
	ctx.lr = 0x82139DB4;
	sub_8213BBC0(ctx, base);
	// b 0x82139dbc
	goto loc_82139DBC;
loc_82139DB8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82139DBC:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x82139DCC;
	sub_821D9300(ctx, base);
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,32616(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32616);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// bne 0x82139d84
	if (!ctx.cr0.eq) goto loc_82139D84;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r26,r24,12
	ctx.r26.s64 = ctx.r24.s64 + 12;
	// addi r27,r11,-15936
	ctx.r27.s64 = ctx.r11.s64 + -15936;
	// addi r30,r31,4780
	ctx.r30.s64 = ctx.r31.s64 + 4780;
	// addi r28,r27,-256
	ctx.r28.s64 = ctx.r27.s64 + -256;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
loc_82139DF8:
	// bl 0x82183850
	ctx.lr = 0x82139DFC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82139e14
	if (ctx.cr6.eq) goto loc_82139E14;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x82139E10;
	sub_82183448(ctx, base);
	// b 0x82139e1c
	goto loc_82139E1C;
loc_82139E14:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x82139E1C;
	sub_821845A0(ctx, base);
loc_82139E1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82139e2c
	if (ctx.cr6.eq) goto loc_82139E2C;
	// bl 0x8213bbc0
	ctx.lr = 0x82139E28;
	sub_8213BBC0(ctx, base);
	// b 0x82139e30
	goto loc_82139E30;
loc_82139E2C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82139E30:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x82139E40;
	sub_821D9300(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,32612(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32612);
	// addi r4,r29,272
	ctx.r4.s64 = ctx.r29.s64 + 272;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82134848
	ctx.lr = 0x82139E64;
	sub_82134848(ctx, base);
	// addi r11,r27,-256
	ctx.r11.s64 = ctx.r27.s64 + -256;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82139df8
	if (ctx.cr6.lt) goto loc_82139DF8;
	// bl 0x82183850
	ctx.lr = 0x82139E7C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82139e94
	if (ctx.cr6.eq) goto loc_82139E94;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x82139E90;
	sub_82183448(ctx, base);
	// b 0x82139e9c
	goto loc_82139E9C;
loc_82139E94:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x82139E9C;
	sub_821845A0(ctx, base);
loc_82139E9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82139eac
	if (ctx.cr6.eq) goto loc_82139EAC;
	// bl 0x8213bbc0
	ctx.lr = 0x82139EA8;
	sub_8213BBC0(ctx, base);
	// b 0x82139eb0
	goto loc_82139EB0;
loc_82139EAC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82139EB0:
	// stw r3,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x82139EC0;
	sub_821D9300(ctx, base);
	// lwz r11,32612(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32612);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,4824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r29,288
	ctx.r4.s64 = ctx.r29.s64 + 288;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// lwz r3,4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// bl 0x82134848
	ctx.lr = 0x82139EE4;
	sub_82134848(ctx, base);
	// addi r30,r31,4800
	ctx.r30.s64 = ctx.r31.s64 + 4800;
	// subfic r27,r31,-4800
	ctx.xer.ca = ctx.r31.u32 <= 4294962496;
	ctx.r27.s64 = -4800 - ctx.r31.s64;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82139EF0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8212d148
	ctx.lr = 0x82139F00;
	sub_8212D148(ctx, base);
	// ld r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 272);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,280(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 280);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,272
	ctx.r8.s64 = ctx.r29.s64 + 272;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82139F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r22,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r22.u32);
	// bne 0x82139ef0
	if (!ctx.cr0.eq) goto loc_82139EF0;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8212d148
	ctx.lr = 0x82139F70;
	sub_8212D148(ctx, base);
	// ld r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 272);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r3,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r3.u32);
	// ld r9,280(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 280);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,272
	ctx.r8.s64 = ctx.r29.s64 + 272;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82139FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r10.u32);
	// bl 0x8212d148
	ctx.lr = 0x82139FD4;
	sub_8212D148(ctx, base);
	// stw r3,4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4820, ctx.r3.u32);
	// ld r7,296(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 296);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r5,288(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 288);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r6,r29,288
	ctx.r6.s64 = ctx.r29.s64 + 288;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213A01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 65535;
	// lfs f0,9852(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stw r22,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r22.u32);
	// stfs f31,4776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// stw r22,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r22.u32);
	// stfs f0,4780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4780, temp.u32);
	// stw r5,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r5.u32);
	// stfs f31,4828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
	// stfs f0,4832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4832, temp.u32);
	// bl 0x82134488
	ctx.lr = 0x8213A054;
	sub_82134488(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213A05C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8213A06C"))) PPC_WEAK_FUNC(sub_8213A06C);
PPC_FUNC_IMPL(__imp__sub_8213A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A070"))) PPC_WEAK_FUNC(sub_8213A070);
PPC_FUNC_IMPL(__imp__sub_8213A070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8213A078;
	sub_82248768(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x8213A084;
	sub_8215C080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213A08C;
	sub_82183078(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213A098;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134468
	ctx.lr = 0x8213A0A0;
	sub_82134468(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r11,-32352
	ctx.r31.s64 = ctx.r11.s64 + -32352;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r22,r10,-16368
	ctx.r22.s64 = ctx.r10.s64 + -16368;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r24,-1512(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1512);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r30,r29,192
	ctx.r30.s64 = ctx.r29.s64 + 192;
loc_8213A0E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212d0d8
	ctx.lr = 0x8213A0FC;
	sub_8212D0D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x821d25f8
	ctx.lr = 0x8213A10C;
	sub_821D25F8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,102
	ctx.r3.s64 = 102;
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8218b408
	ctx.lr = 0x8213A130;
	sub_8218B408(ctx, base);
	// lwz r10,92(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// stfs f11,208(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,212(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lfs f13,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bgt cr6,0x8213a1a4
	if (ctx.cr6.gt) goto loc_8213A1A4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8213a1a8
	goto loc_8213A1A8;
loc_8213A1A4:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_8213A1A8:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r22,44
	ctx.r11.s64 = ctx.r22.s64 + 44;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213a0e8
	if (ctx.cr6.lt) goto loc_8213A0E8;
	// lwz r11,3104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r29,3104
	ctx.r3.s64 = ctx.r29.s64 + 3104;
	// addi r4,r10,32432
	ctx.r4.s64 = ctx.r10.s64 + 32432;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8213A1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,3520(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3520);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r29,3520
	ctx.r3.s64 = ctx.r29.s64 + 3520;
	// addi r4,r8,32448
	ctx.r4.s64 = ctx.r8.s64 + 32448;
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8213A208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3936(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3936);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r29,3936
	ctx.r3.s64 = ctx.r29.s64 + 3936;
	// addi r4,r5,32464
	ctx.r4.s64 = ctx.r5.s64 + 32464;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4352(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4352);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r29,4352
	ctx.r3.s64 = ctx.r29.s64 + 4352;
	// addi r4,r9,32480
	ctx.r4.s64 = ctx.r9.s64 + 32480;
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8213A240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8213A24C;
	sub_8212D0B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8213A25C;
	sub_8212D0B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r29,4764
	ctx.r28.s64 = ctx.r29.s64 + 4764;
	// addi r26,r3,12
	ctx.r26.s64 = ctx.r3.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
loc_8213A270:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8213A280;
	sub_821D9300(ctx, base);
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,32616(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32616);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// bne 0x8213a270
	if (!ctx.cr0.eq) goto loc_8213A270;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r26,r25,12
	ctx.r26.s64 = ctx.r25.s64 + 12;
	// addi r27,r11,-15936
	ctx.r27.s64 = ctx.r11.s64 + -15936;
	// addi r30,r29,4780
	ctx.r30.s64 = ctx.r29.s64 + 4780;
	// addi r28,r27,-256
	ctx.r28.s64 = ctx.r27.s64 + -256;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
loc_8213A2AC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8213A2BC;
	sub_821D9300(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32612(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32612);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82134848
	ctx.lr = 0x8213A2E0;
	sub_82134848(ctx, base);
	// addi r11,r27,-256
	ctx.r11.s64 = ctx.r27.s64 + -256;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8213a2ac
	if (ctx.cr6.lt) goto loc_8213A2AC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 4);
	// lwz r3,4824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4824);
	// bl 0x821d9300
	ctx.lr = 0x8213A304;
	sub_821D9300(ctx, base);
	// lwz r11,32612(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32612);
	// lwz r10,4824(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4824);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// lwz r3,4824(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4824);
	// bl 0x82134848
	ctx.lr = 0x8213A328;
	sub_82134848(ctx, base);
	// addi r30,r29,4800
	ctx.r30.s64 = ctx.r29.s64 + 4800;
	// subfic r27,r29,-4800
	ctx.xer.ca = ctx.r29.u32 <= 4294962496;
	ctx.r27.s64 = -4800 - ctx.r29.s64;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8213A334:
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r31,272
	ctx.r8.s64 = ctx.r31.s64 + 272;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8213A364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r21,124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 124, ctx.r21.u32);
	// bne 0x8213a334
	if (!ctx.cr0.eq) goto loc_8213A334;
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4816);
	// addi r8,r31,272
	ctx.r8.s64 = ctx.r31.s64 + 272;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8213A3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4816);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213A3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4816(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4816);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r31,288
	ctx.r9.s64 = ctx.r31.s64 + 288;
	// stw r30,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r30.u32);
	// ld r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// lwz r3,4820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4820);
	// ld r6,288(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213A418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4820);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8213A430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4820(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4820);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r30.u32);
	// lfs f13,9852(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// stw r21,4836(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4836, ctx.r21.u32);
	// stfs f0,4828(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4828, temp.u32);
	// stfs f13,4832(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4832, temp.u32);
	// bl 0x82134488
	ctx.lr = 0x8213A45C;
	sub_82134488(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213A464;
	sub_821837D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8213A46C"))) PPC_WEAK_FUNC(sub_8213A46C);
PPC_FUNC_IMPL(__imp__sub_8213A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A470"))) PPC_WEAK_FUNC(sub_8213A470);
PPC_FUNC_IMPL(__imp__sub_8213A470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-32000
	ctx.r10.s64 = ctx.r11.s64 + -32000;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821b1dc0
	sub_821B1DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213A480"))) PPC_WEAK_FUNC(sub_8213A480);
PPC_FUNC_IMPL(__imp__sub_8213A480) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A490"))) PPC_WEAK_FUNC(sub_8213A490);
PPC_FUNC_IMPL(__imp__sub_8213A490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A4AC"))) PPC_WEAK_FUNC(sub_8213A4AC);
PPC_FUNC_IMPL(__imp__sub_8213A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A4B0"))) PPC_WEAK_FUNC(sub_8213A4B0);
PPC_FUNC_IMPL(__imp__sub_8213A4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A4D4"))) PPC_WEAK_FUNC(sub_8213A4D4);
PPC_FUNC_IMPL(__imp__sub_8213A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A4D8"))) PPC_WEAK_FUNC(sub_8213A4D8);
PPC_FUNC_IMPL(__imp__sub_8213A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213A4E0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8213A50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// li r7,164
	ctx.r7.s64 = 164;
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f1,f0,f12,f2
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// stfs f1,224(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f12,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f9,244(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f8,232(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f6.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8213A5B0;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x8213A5BC;
	sub_821D16C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213A5C4"))) PPC_WEAK_FUNC(sub_8213A5C4);
PPC_FUNC_IMPL(__imp__sub_8213A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A5C8"))) PPC_WEAK_FUNC(sub_8213A5C8);
PPC_FUNC_IMPL(__imp__sub_8213A5C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8213a4d8
	ctx.lr = 0x8213A5F4;
	sub_8213A4D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A604"))) PPC_WEAK_FUNC(sub_8213A604);
PPC_FUNC_IMPL(__imp__sub_8213A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A608"))) PPC_WEAK_FUNC(sub_8213A608);
PPC_FUNC_IMPL(__imp__sub_8213A608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213A610;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,164
	ctx.r8.s64 = 164;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lfs f13,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f3,f0,f13,f4
	ctx.f3.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f4.f64)));
	// stfs f3,224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,240(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f13,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f12,232(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f10.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8213A6CC;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x8213A6D8;
	sub_821D16C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213A6E0"))) PPC_WEAK_FUNC(sub_8213A6E0);
PPC_FUNC_IMPL(__imp__sub_8213A6E0) {
	PPC_FUNC_PROLOGUE();
	// ld r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// addi r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 + 208;
	// ld r9,216(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 216);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A6F8"))) PPC_WEAK_FUNC(sub_8213A6F8);
PPC_FUNC_IMPL(__imp__sub_8213A6F8) {
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
	// bl 0x821b29d0
	ctx.lr = 0x8213A710;
	sub_821B29D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,32512
	ctx.r8.s64 = ctx.r11.s64 + 32512;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,-32000
	ctx.r6.s64 = ctx.r9.s64 + -32000;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r5,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r5.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r10.u64);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r9.u64);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r7.u64);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r6.u64);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r5.u64);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r4.u64);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_8213A7B4"))) PPC_WEAK_FUNC(sub_8213A7B4);
PPC_FUNC_IMPL(__imp__sub_8213A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

