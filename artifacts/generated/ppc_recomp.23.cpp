#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8214B6D4"))) PPC_WEAK_FUNC(sub_8214B6D4);
PPC_FUNC_IMPL(__imp__sub_8214B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6D8"))) PPC_WEAK_FUNC(sub_8214B6D8);
PPC_FUNC_IMPL(__imp__sub_8214B6D8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B6E4"))) PPC_WEAK_FUNC(sub_8214B6E4);
PPC_FUNC_IMPL(__imp__sub_8214B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6E8"))) PPC_WEAK_FUNC(sub_8214B6E8);
PPC_FUNC_IMPL(__imp__sub_8214B6E8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B6F4"))) PPC_WEAK_FUNC(sub_8214B6F4);
PPC_FUNC_IMPL(__imp__sub_8214B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6F8"))) PPC_WEAK_FUNC(sub_8214B6F8);
PPC_FUNC_IMPL(__imp__sub_8214B6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B708"))) PPC_WEAK_FUNC(sub_8214B708);
PPC_FUNC_IMPL(__imp__sub_8214B708) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B714"))) PPC_WEAK_FUNC(sub_8214B714);
PPC_FUNC_IMPL(__imp__sub_8214B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B718"))) PPC_WEAK_FUNC(sub_8214B718);
PPC_FUNC_IMPL(__imp__sub_8214B718) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B724"))) PPC_WEAK_FUNC(sub_8214B724);
PPC_FUNC_IMPL(__imp__sub_8214B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B728"))) PPC_WEAK_FUNC(sub_8214B728);
PPC_FUNC_IMPL(__imp__sub_8214B728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823c3d30
	sub_823C3D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B730"))) PPC_WEAK_FUNC(sub_8214B730);
PPC_FUNC_IMPL(__imp__sub_8214B730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8214B738;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823c3b68
	ctx.lr = 0x8214B758;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8214B75C;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x8214B770;
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
	ctx.lr = 0x8214B784;
	sub_821859A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x821571b8
	ctx.lr = 0x8214B790;
	sub_821571B8(ctx, base);
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x8209eda0
	ctx.lr = 0x8214B798;
	sub_8209EDA0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28344
	ctx.r11.s64 = ctx.r11.s64 + -28344;
	// addi r10,r10,-28480
	ctx.r10.s64 = ctx.r10.s64 + -28480;
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// addi r9,r9,-28488
	ctx.r9.s64 = ctx.r9.s64 + -28488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r29,r31,784
	ctx.r29.s64 = ctx.r31.s64 + 784;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// bl 0x821b2118
	ctx.lr = 0x8214B7DC;
	sub_821B2118(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// stw r27,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r27.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r26,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r26.u32);
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// beq cr6,0x8214b804
	if (ctx.cr6.eq) goto loc_8214B804;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8214b808
	if (!ctx.cr6.eq) goto loc_8214B808;
loc_8214B804:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8214B808:
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8214b820
	if (ctx.cr6.eq) goto loc_8214B820;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8214b824
	if (!ctx.cr6.eq) goto loc_8214B824;
loc_8214B820:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8214B824:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// stw r30,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r10,-28544
	ctx.r9.s64 = ctx.r10.s64 + -28544;
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-28544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28544);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// stw r30,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r30.u32);
	// lfs f3,-28044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28044);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r30.u32);
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// lfs f2,-28048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28048);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r30.u32);
	// lfs f1,-32376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// stfs f0,208(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 208, temp.u32);
	// stfs f13,212(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 212, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214b8dc
	if (!ctx.cr6.eq) goto loc_8214B8DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x8214B8C4;
	sub_8214B0F0(ctx, base);
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214B8CC;
	sub_8215BD60(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214b8dc
	if (ctx.cr6.eq) goto loc_8214B8DC;
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
loc_8214B8DC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8214B8F8"))) PPC_WEAK_FUNC(sub_8214B8F8);
PPC_FUNC_IMPL(__imp__sub_8214B8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214b2a8
	ctx.lr = 0x8214B918;
	sub_8214B2A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214b92c
	if (ctx.cr0.eq) goto loc_8214B92C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8214B92C;
	sub_82183E40(ctx, base);
loc_8214B92C:
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

__attribute__((alias("__imp__sub_8214B948"))) PPC_WEAK_FUNC(sub_8214B948);
PPC_FUNC_IMPL(__imp__sub_8214B948) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214b96c
	if (ctx.cr6.eq) goto loc_8214B96C;
	// lwz r10,1116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8214b96c
	if (ctx.cr6.eq) goto loc_8214B96C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8214B96C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B980"))) PPC_WEAK_FUNC(sub_8214B980);
PPC_FUNC_IMPL(__imp__sub_8214B980) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8214b9a8
	if (ctx.cr6.lt) goto loc_8214B9A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8214b9a8
	if (ctx.cr6.gt) goto loc_8214B9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214b9d4
	goto loc_8214B9D4;
loc_8214B9A8:
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214B9B0;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214b9d0
	if (ctx.cr0.eq) goto loc_8214B9D0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ec858
	ctx.lr = 0x8214B9C4;
	sub_821EC858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x8214b9d4
	if (!ctx.cr0.eq) goto loc_8214B9D4;
loc_8214B9D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214B9D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B9E4"))) PPC_WEAK_FUNC(sub_8214B9E4);
PPC_FUNC_IMPL(__imp__sub_8214B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B9E8"))) PPC_WEAK_FUNC(sub_8214B9E8);
PPC_FUNC_IMPL(__imp__sub_8214B9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214ba54
	if (!ctx.cr6.eq) goto loc_8214BA54;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8214ba54
	if (ctx.cr0.eq) goto loc_8214BA54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x8214BA24;
	sub_821ADDC0(ctx, base);
	// stw r3,1148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x8214BA30;
	sub_821ADD20(ctx, base);
	// stw r3,1144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1144, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8214BA40;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x8214BA4C;
	sub_821AD498(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1140, ctx.r11.u32);
loc_8214BA54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BA6C"))) PPC_WEAK_FUNC(sub_8214BA6C);
PPC_FUNC_IMPL(__imp__sub_8214BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BA70"))) PPC_WEAK_FUNC(sub_8214BA70);
PPC_FUNC_IMPL(__imp__sub_8214BA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bac4
	if (ctx.cr6.eq) goto loc_8214BAC4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8214bac4
	if (ctx.cr0.eq) goto loc_8214BAC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// bl 0x821ad600
	ctx.lr = 0x8214BAB0;
	sub_821AD600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// bl 0x821ad498
	ctx.lr = 0x8214BABC;
	sub_821AD498(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
loc_8214BAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BADC"))) PPC_WEAK_FUNC(sub_8214BADC);
PPC_FUNC_IMPL(__imp__sub_8214BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BAE0"))) PPC_WEAK_FUNC(sub_8214BAE0);
PPC_FUNC_IMPL(__imp__sub_8214BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214bb70
	if (!ctx.cr6.eq) goto loc_8214BB70;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8214bb70
	if (ctx.cr6.eq) goto loc_8214BB70;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8214bb60
	if (ctx.cr6.eq) goto loc_8214BB60;
	// ble cr6,0x8214bb70
	if (!ctx.cr6.gt) goto loc_8214BB70;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x8214bb38
	if (!ctx.cr6.gt) goto loc_8214BB38;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x8214bb70
	if (!ctx.cr6.gt) goto loc_8214BB70;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bgt cr6,0x8214bb70
	if (ctx.cr6.gt) goto loc_8214BB70;
loc_8214BB38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BB4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// b 0x8214bb74
	goto loc_8214BB74;
loc_8214BB60:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8214bb4c
	if (ctx.cr6.lt) goto loc_8214BB4C;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x8214bb4c
	if (ctx.cr6.eq) goto loc_8214BB4C;
loc_8214BB70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214BB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BB8C"))) PPC_WEAK_FUNC(sub_8214BB8C);
PPC_FUNC_IMPL(__imp__sub_8214BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BB90"))) PPC_WEAK_FUNC(sub_8214BB90);
PPC_FUNC_IMPL(__imp__sub_8214BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214BBB0;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bc04
	if (ctx.cr0.eq) goto loc_8214BC04;
	// bl 0x8215bd60
	ctx.lr = 0x8214BBBC;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bbf4
	if (ctx.cr6.eq) goto loc_8214BBF4;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BBE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bbf4
	if (ctx.cr0.eq) goto loc_8214BBF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// bl 0x821ec880
	ctx.lr = 0x8214BBF4;
	sub_821EC880(ctx, base);
loc_8214BBF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r10.u32);
loc_8214BC04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BC1C"))) PPC_WEAK_FUNC(sub_8214BC1C);
PPC_FUNC_IMPL(__imp__sub_8214BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BC20"))) PPC_WEAK_FUNC(sub_8214BC20);
PPC_FUNC_IMPL(__imp__sub_8214BC20) {
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
	ctx.lr = 0x8214BC38;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bc68
	if (ctx.cr6.eq) goto loc_8214BC68;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bcac
	if (ctx.cr6.eq) goto loc_8214BCAC;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8214bcac
	if (!ctx.cr6.eq) goto loc_8214BCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bb90
	ctx.lr = 0x8214BC64;
	sub_8214BB90(ctx, base);
	// b 0x8214bcac
	goto loc_8214BCAC;
loc_8214BC68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bcac
	if (ctx.cr0.eq) goto loc_8214BCAC;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x8214bca0
	if (ctx.cr6.eq) goto loc_8214BCA0;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x8214bca4
	goto loc_8214BCA4;
loc_8214BCA0:
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_8214BCA4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BCAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BCC0"))) PPC_WEAK_FUNC(sub_8214BCC0);
PPC_FUNC_IMPL(__imp__sub_8214BCC0) {
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
	ctx.lr = 0x8214BCD8;
	sub_8215BD60(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214bd04
	if (!ctx.cr6.eq) goto loc_8214BD04;
	// bl 0x82154c90
	ctx.lr = 0x8214BCE8;
	sub_82154C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bd04
	if (ctx.cr0.eq) goto loc_8214BD04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BD04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BD18"))) PPC_WEAK_FUNC(sub_8214BD18);
PPC_FUNC_IMPL(__imp__sub_8214BD18) {
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
	// lwz r11,1096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bd9c
	if (ctx.cr6.eq) goto loc_8214BD9C;
	// bl 0x8214bb90
	ctx.lr = 0x8214BD3C;
	sub_8214BB90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x8214BD50;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bdd8
	if (ctx.cr0.eq) goto loc_8214BDD8;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214bd68
	if (ctx.cr6.eq) goto loc_8214BD68;
	// bl 0x82154aa8
	ctx.lr = 0x8214BD68;
	sub_82154AA8(ctx, base);
loc_8214BD68:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30200
	ctx.r4.s64 = 30200;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214BD78;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214BD90;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8214bdd8
	goto loc_8214BDD8;
loc_8214BD9C:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8214bdd8
	if (ctx.cr6.lt) goto loc_8214BDD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x8214BDBC;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214bdd8
	if (ctx.cr0.eq) goto loc_8214BDD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BDD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BDEC"))) PPC_WEAK_FUNC(sub_8214BDEC);
PPC_FUNC_IMPL(__imp__sub_8214BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BDF0"))) PPC_WEAK_FUNC(sub_8214BDF0);
PPC_FUNC_IMPL(__imp__sub_8214BDF0) {
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
	// lwz r11,1096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214be48
	if (!ctx.cr6.eq) goto loc_8214BE48;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8214be48
	if (ctx.cr6.lt) goto loc_8214BE48;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// bl 0x8214bae0
	ctx.lr = 0x8214BE2C;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214be48
	if (ctx.cr0.eq) goto loc_8214BE48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214BE48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BE5C"))) PPC_WEAK_FUNC(sub_8214BE5C);
PPC_FUNC_IMPL(__imp__sub_8214BE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BE60"))) PPC_WEAK_FUNC(sub_8214BE60);
PPC_FUNC_IMPL(__imp__sub_8214BE60) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// addi r7,r3,56
	ctx.r7.s64 = ctx.r3.s64 + 56;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BEC8"))) PPC_WEAK_FUNC(sub_8214BEC8);
PPC_FUNC_IMPL(__imp__sub_8214BEC8) {
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
	// bl 0x8214bc20
	ctx.lr = 0x8214BEE0;
	sub_8214BC20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bd0
	ctx.lr = 0x8214BEE8;
	sub_823C3BD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BEFC"))) PPC_WEAK_FUNC(sub_8214BEFC);
PPC_FUNC_IMPL(__imp__sub_8214BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BF00"))) PPC_WEAK_FUNC(sub_8214BF00);
PPC_FUNC_IMPL(__imp__sub_8214BF00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// b 0x823c3c60
	sub_823C3C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214BF0C"))) PPC_WEAK_FUNC(sub_8214BF0C);
PPC_FUNC_IMPL(__imp__sub_8214BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214BF10"))) PPC_WEAK_FUNC(sub_8214BF10);
PPC_FUNC_IMPL(__imp__sub_8214BF10) {
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
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214BF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x823c3c70
	ctx.lr = 0x8214BF44;
	sub_823C3C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BF58"))) PPC_WEAK_FUNC(sub_8214BF58);
PPC_FUNC_IMPL(__imp__sub_8214BF58) {
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
	// lwz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214bfbc
	if (!ctx.cr6.eq) goto loc_8214BFBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r11.u32);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// bl 0x823c3ca8
	ctx.lr = 0x8214BF8C;
	sub_823C3CA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bfbc
	if (ctx.cr6.eq) goto loc_8214BFBC;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214bfbc
	if (ctx.cr6.eq) goto loc_8214BFBC;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214bfbc
	if (ctx.cr6.eq) goto loc_8214BFBC;
	// bl 0x82154aa8
	ctx.lr = 0x8214BFBC;
	sub_82154AA8(ctx, base);
loc_8214BFBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214BFD0"))) PPC_WEAK_FUNC(sub_8214BFD0);
PPC_FUNC_IMPL(__imp__sub_8214BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214c030
	if (!ctx.cr6.eq) goto loc_8214C030;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r30,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r30.u32);
	// bl 0x823c3cd8
	ctx.lr = 0x8214C004;
	sub_823C3CD8(ctx, base);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c030
	if (ctx.cr6.eq) goto loc_8214C030;
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c030
	if (ctx.cr6.eq) goto loc_8214C030;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c030
	if (ctx.cr6.eq) goto loc_8214C030;
	// bl 0x82154aa8
	ctx.lr = 0x8214C030;
	sub_82154AA8(ctx, base);
loc_8214C030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C048"))) PPC_WEAK_FUNC(sub_8214C048);
PPC_FUNC_IMPL(__imp__sub_8214C048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214C064"))) PPC_WEAK_FUNC(sub_8214C064);
PPC_FUNC_IMPL(__imp__sub_8214C064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C068"))) PPC_WEAK_FUNC(sub_8214C068);
PPC_FUNC_IMPL(__imp__sub_8214C068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c080
	if (ctx.cr6.eq) goto loc_8214C080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// blr 
	return;
loc_8214C080:
	// lwz r11,1112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C090"))) PPC_WEAK_FUNC(sub_8214C090);
PPC_FUNC_IMPL(__imp__sub_8214C090) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C0A4"))) PPC_WEAK_FUNC(sub_8214C0A4);
PPC_FUNC_IMPL(__imp__sub_8214C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C0A8"))) PPC_WEAK_FUNC(sub_8214C0A8);
PPC_FUNC_IMPL(__imp__sub_8214C0A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C0BC"))) PPC_WEAK_FUNC(sub_8214C0BC);
PPC_FUNC_IMPL(__imp__sub_8214C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C0C0"))) PPC_WEAK_FUNC(sub_8214C0C0);
PPC_FUNC_IMPL(__imp__sub_8214C0C0) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214C0DC;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c12c
	if (!ctx.cr0.eq) goto loc_8214C12C;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c10c
	if (ctx.cr6.eq) goto loc_8214C10C;
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214c10c
	if (!ctx.cr6.eq) goto loc_8214C10C;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c10c
	if (ctx.cr6.eq) goto loc_8214C10C;
	// bl 0x82154aa8
	ctx.lr = 0x8214C10C;
	sub_82154AA8(ctx, base);
loc_8214C10C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bfd0
	ctx.lr = 0x8214C114;
	sub_8214BFD0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
loc_8214C12C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C140"))) PPC_WEAK_FUNC(sub_8214C140);
PPC_FUNC_IMPL(__imp__sub_8214C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd60
	ctx.lr = 0x8214C15C;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214c228
	if (!ctx.cr6.eq) goto loc_8214C228;
	// bl 0x8215bd60
	ctx.lr = 0x8214C16C;
	sub_8215BD60(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c180
	if (ctx.cr6.eq) goto loc_8214C180;
loc_8214C178:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c22c
	goto loc_8214C22C;
loc_8214C180:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a930
	ctx.lr = 0x8214C18C;
	sub_8214A930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c1a4
	if (!ctx.cr0.eq) goto loc_8214C1A4;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a8e8
	ctx.lr = 0x8214C19C;
	sub_8214A8E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214c228
	if (ctx.cr0.eq) goto loc_8214C228;
loc_8214C1A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214c178
	if (ctx.cr0.eq) goto loc_8214C178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bb90
	ctx.lr = 0x8214C1C8;
	sub_8214BB90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x8214C1DC;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214c228
	if (ctx.cr0.eq) goto loc_8214C228;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c1f4
	if (ctx.cr6.eq) goto loc_8214C1F4;
	// bl 0x82154aa8
	ctx.lr = 0x8214C1F4;
	sub_82154AA8(ctx, base);
loc_8214C1F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30213
	ctx.r4.s64 = 30213;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214C204;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214C21C;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8214c178
	goto loc_8214C178;
loc_8214C228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C22C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C244"))) PPC_WEAK_FUNC(sub_8214C244);
PPC_FUNC_IMPL(__imp__sub_8214C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C248"))) PPC_WEAK_FUNC(sub_8214C248);
PPC_FUNC_IMPL(__imp__sub_8214C248) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214C264;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c28c
	if (!ctx.cr0.eq) goto loc_8214C28C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bfd0
	ctx.lr = 0x8214C274;
	sub_8214BFD0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
loc_8214C28C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C2A0"))) PPC_WEAK_FUNC(sub_8214C2A0);
PPC_FUNC_IMPL(__imp__sub_8214C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214C2A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c2d0
	if (ctx.cr6.eq) goto loc_8214C2D0;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c32c
	if (!ctx.cr6.eq) goto loc_8214C32C;
loc_8214C2D0:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214c2f0
	if (ctx.cr6.eq) goto loc_8214C2F0;
	// bl 0x82154aa8
	ctx.lr = 0x8214C2F0;
	sub_82154AA8(ctx, base);
loc_8214C2F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// beq cr6,0x8214c30c
	if (ctx.cr6.eq) goto loc_8214C30C;
	// bl 0x82155bd0
	ctx.lr = 0x8214C308;
	sub_82155BD0(ctx, base);
	// b 0x8214c310
	goto loc_8214C310;
loc_8214C30C:
	// bl 0x82155c88
	ctx.lr = 0x8214C310;
	sub_82155C88(ctx, base);
loc_8214C310:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c330
	goto loc_8214C330;
loc_8214C32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214C338"))) PPC_WEAK_FUNC(sub_8214C338);
PPC_FUNC_IMPL(__imp__sub_8214C338) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214C354;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c36c
	if (!ctx.cr0.eq) goto loc_8214C36C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214C36C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C380"))) PPC_WEAK_FUNC(sub_8214C380);
PPC_FUNC_IMPL(__imp__sub_8214C380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,13
	ctx.r10.s64 = 13;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214c3bc
	if (ctx.cr6.eq) goto loc_8214C3BC;
	// bl 0x82154aa8
	ctx.lr = 0x8214C3BC;
	sub_82154AA8(ctx, base);
loc_8214C3BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214C3CC;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8214C3FC"))) PPC_WEAK_FUNC(sub_8214C3FC);
PPC_FUNC_IMPL(__imp__sub_8214C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C400"))) PPC_WEAK_FUNC(sub_8214C400);
PPC_FUNC_IMPL(__imp__sub_8214C400) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214C41C;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c434
	if (!ctx.cr0.eq) goto loc_8214C434;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214C434:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C448"))) PPC_WEAK_FUNC(sub_8214C448);
PPC_FUNC_IMPL(__imp__sub_8214C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214c484
	if (ctx.cr6.eq) goto loc_8214C484;
	// bl 0x82154aa8
	ctx.lr = 0x8214C484;
	sub_82154AA8(ctx, base);
loc_8214C484:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214C494;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8214C4C4"))) PPC_WEAK_FUNC(sub_8214C4C4);
PPC_FUNC_IMPL(__imp__sub_8214C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C4C8"))) PPC_WEAK_FUNC(sub_8214C4C8);
PPC_FUNC_IMPL(__imp__sub_8214C4C8) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155dc0
	ctx.lr = 0x8214C4E4;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c4fc
	if (!ctx.cr0.eq) goto loc_8214C4FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214C4FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C510"))) PPC_WEAK_FUNC(sub_8214C510);
PPC_FUNC_IMPL(__imp__sub_8214C510) {
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
	// bl 0x8214bfd0
	ctx.lr = 0x8214C528;
	sub_8214BFD0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r10,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r10.u32);
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C554"))) PPC_WEAK_FUNC(sub_8214C554);
PPC_FUNC_IMPL(__imp__sub_8214C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C558"))) PPC_WEAK_FUNC(sub_8214C558);
PPC_FUNC_IMPL(__imp__sub_8214C558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214C560;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221350
	ctx.lr = 0x8214C57C;
	sub_82221350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c608
	if (!ctx.cr0.eq) goto loc_8214C608;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c59c
	if (ctx.cr6.eq) goto loc_8214C59C;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c608
	if (!ctx.cr6.eq) goto loc_8214C608;
loc_8214C59C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214c5c8
	if (ctx.cr6.eq) goto loc_8214C5C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c5d8
	if (ctx.cr6.eq) goto loc_8214C5D8;
	// li r4,16001
	ctx.r4.s64 = 16001;
	// b 0x8214c5d4
	goto loc_8214C5D4;
loc_8214C5C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c5d8
	if (ctx.cr6.eq) goto loc_8214C5D8;
	// li r4,16002
	ctx.r4.s64 = 16002;
loc_8214C5D4:
	// bl 0x82154c38
	ctx.lr = 0x8214C5D8;
	sub_82154C38(ctx, base);
loc_8214C5D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821561c8
	ctx.lr = 0x8214C5E0;
	sub_821561C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a7e0
	ctx.lr = 0x8214C5EC;
	sub_8214A7E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c60c
	goto loc_8214C60C;
loc_8214C608:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C60C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214C614"))) PPC_WEAK_FUNC(sub_8214C614);
PPC_FUNC_IMPL(__imp__sub_8214C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C618"))) PPC_WEAK_FUNC(sub_8214C618);
PPC_FUNC_IMPL(__imp__sub_8214C618) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c63c
	if (ctx.cr6.eq) goto loc_8214C63C;
	// bl 0x82154aa8
	ctx.lr = 0x8214C63C;
	sub_82154AA8(ctx, base);
loc_8214C63C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C674"))) PPC_WEAK_FUNC(sub_8214C674);
PPC_FUNC_IMPL(__imp__sub_8214C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C678"))) PPC_WEAK_FUNC(sub_8214C678);
PPC_FUNC_IMPL(__imp__sub_8214C678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd60
	ctx.lr = 0x8214C698;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c708
	if (ctx.cr6.eq) goto loc_8214C708;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221350
	ctx.lr = 0x8214C6B0;
	sub_82221350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c708
	if (!ctx.cr0.eq) goto loc_8214C708;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c6d0
	if (ctx.cr6.eq) goto loc_8214C6D0;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c708
	if (!ctx.cr6.eq) goto loc_8214C708;
loc_8214C6D0:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// beq cr6,0x8214c6f4
	if (ctx.cr6.eq) goto loc_8214C6F4;
	// li r4,16004
	ctx.r4.s64 = 16004;
	// bl 0x82154c38
	ctx.lr = 0x8214C6F4;
	sub_82154C38(ctx, base);
loc_8214C6F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C708:
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

__attribute__((alias("__imp__sub_8214C724"))) PPC_WEAK_FUNC(sub_8214C724);
PPC_FUNC_IMPL(__imp__sub_8214C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C728"))) PPC_WEAK_FUNC(sub_8214C728);
PPC_FUNC_IMPL(__imp__sub_8214C728) {
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
	// bl 0x82154d28
	ctx.lr = 0x8214C740;
	sub_82154D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c77c
	if (!ctx.cr0.eq) goto loc_8214C77C;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c758
	if (ctx.cr6.eq) goto loc_8214C758;
	// bl 0x82154aa8
	ctx.lr = 0x8214C758;
	sub_82154AA8(ctx, base);
loc_8214C758:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C790"))) PPC_WEAK_FUNC(sub_8214C790);
PPC_FUNC_IMPL(__imp__sub_8214C790) {
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
	ctx.lr = 0x8214C7A8;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214c828
	if (!ctx.cr6.eq) goto loc_8214C828;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221350
	ctx.lr = 0x8214C7C0;
	sub_82221350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214c828
	if (!ctx.cr0.eq) goto loc_8214C828;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c7e0
	if (ctx.cr6.eq) goto loc_8214C7E0;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c828
	if (!ctx.cr6.eq) goto loc_8214C828;
loc_8214C7E0:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214c804
	if (ctx.cr6.eq) goto loc_8214C804;
	// li r4,16005
	ctx.r4.s64 = 16005;
	// bl 0x82154c38
	ctx.lr = 0x8214C804;
	sub_82154C38(ctx, base);
loc_8214C804:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ebaa8
	ctx.lr = 0x8214C80C;
	sub_821EBAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c82c
	goto loc_8214C82C;
loc_8214C828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C82C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C840"))) PPC_WEAK_FUNC(sub_8214C840);
PPC_FUNC_IMPL(__imp__sub_8214C840) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c86c
	if (ctx.cr6.eq) goto loc_8214C86C;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c8a8
	if (!ctx.cr6.eq) goto loc_8214C8A8;
loc_8214C86C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// li r4,30202
	ctx.r4.s64 = 30202;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214C88C;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c8ac
	goto loc_8214C8AC;
loc_8214C8A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C8AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C8C0"))) PPC_WEAK_FUNC(sub_8214C8C0);
PPC_FUNC_IMPL(__imp__sub_8214C8C0) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c8f8
	if (ctx.cr6.eq) goto loc_8214C8F8;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x8214c8f8
	if (!ctx.cr6.eq) goto loc_8214C8F8;
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x8214C8EC;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8214c8fc
	if (!ctx.cr0.eq) goto loc_8214C8FC;
loc_8214C8F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C8FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C90C"))) PPC_WEAK_FUNC(sub_8214C90C);
PPC_FUNC_IMPL(__imp__sub_8214C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C910"))) PPC_WEAK_FUNC(sub_8214C910);
PPC_FUNC_IMPL(__imp__sub_8214C910) {
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
	// bl 0x8214c8c0
	ctx.lr = 0x8214C928;
	sub_8214C8C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214c944
	if (ctx.cr0.eq) goto loc_8214C944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214C944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C958"))) PPC_WEAK_FUNC(sub_8214C958);
PPC_FUNC_IMPL(__imp__sub_8214C958) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214c984
	if (ctx.cr6.eq) goto loc_8214C984;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214c9c0
	if (!ctx.cr6.eq) goto loc_8214C9C0;
loc_8214C984:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// li r4,30203
	ctx.r4.s64 = 30203;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214C9A4;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c9c4
	goto loc_8214C9C4;
loc_8214C9C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C9C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C9D8"))) PPC_WEAK_FUNC(sub_8214C9D8);
PPC_FUNC_IMPL(__imp__sub_8214C9D8) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214ca10
	if (ctx.cr6.eq) goto loc_8214CA10;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8214ca10
	if (!ctx.cr6.eq) goto loc_8214CA10;
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x8214CA04;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8214ca14
	if (!ctx.cr0.eq) goto loc_8214CA14;
loc_8214CA10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CA14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CA24"))) PPC_WEAK_FUNC(sub_8214CA24);
PPC_FUNC_IMPL(__imp__sub_8214CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CA28"))) PPC_WEAK_FUNC(sub_8214CA28);
PPC_FUNC_IMPL(__imp__sub_8214CA28) {
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
	// bl 0x8214c9d8
	ctx.lr = 0x8214CA40;
	sub_8214C9D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214ca5c
	if (ctx.cr0.eq) goto loc_8214CA5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214CA5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CA70"))) PPC_WEAK_FUNC(sub_8214CA70);
PPC_FUNC_IMPL(__imp__sub_8214CA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r9,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r9.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214CA90"))) PPC_WEAK_FUNC(sub_8214CA90);
PPC_FUNC_IMPL(__imp__sub_8214CA90) {
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
	// bl 0x8214c140
	ctx.lr = 0x8214CAA8;
	sub_8214C140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214cae0
	if (!ctx.cr0.eq) goto loc_8214CAE0;
	// bl 0x82154d28
	ctx.lr = 0x8214CAB4;
	sub_82154D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214cae0
	if (!ctx.cr0.eq) goto loc_8214CAE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214CAE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CAF4"))) PPC_WEAK_FUNC(sub_8214CAF4);
PPC_FUNC_IMPL(__imp__sub_8214CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CAF8"))) PPC_WEAK_FUNC(sub_8214CAF8);
PPC_FUNC_IMPL(__imp__sub_8214CAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cbb0
	if (ctx.cr6.eq) goto loc_8214CBB0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x8214CB28;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cbb0
	if (ctx.cr0.eq) goto loc_8214CBB0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221350
	ctx.lr = 0x8214CB3C;
	sub_82221350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214cbb0
	if (!ctx.cr0.eq) goto loc_8214CBB0;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cb5c
	if (ctx.cr6.eq) goto loc_8214CB5C;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214cbb0
	if (!ctx.cr6.eq) goto loc_8214CBB0;
loc_8214CB5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// li r30,30214
	ctx.r30.s64 = 30214;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214CB74;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cb84
	if (ctx.cr6.eq) goto loc_8214CB84;
	// li r30,30215
	ctx.r30.s64 = 30215;
loc_8214CB84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155d28
	ctx.lr = 0x8214CB94;
	sub_82155D28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214cbb4
	goto loc_8214CBB4;
loc_8214CBB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CBB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CBCC"))) PPC_WEAK_FUNC(sub_8214CBCC);
PPC_FUNC_IMPL(__imp__sub_8214CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CBD0"))) PPC_WEAK_FUNC(sub_8214CBD0);
PPC_FUNC_IMPL(__imp__sub_8214CBD0) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cc08
	if (ctx.cr6.eq) goto loc_8214CC08;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x8214cc08
	if (!ctx.cr6.eq) goto loc_8214CC08;
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x8214CBFC;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8214cc0c
	if (!ctx.cr0.eq) goto loc_8214CC0C;
loc_8214CC08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CC0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CC1C"))) PPC_WEAK_FUNC(sub_8214CC1C);
PPC_FUNC_IMPL(__imp__sub_8214CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CC20"))) PPC_WEAK_FUNC(sub_8214CC20);
PPC_FUNC_IMPL(__imp__sub_8214CC20) {
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
	// bl 0x8214c140
	ctx.lr = 0x8214CC38;
	sub_8214C140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214cca4
	if (!ctx.cr0.eq) goto loc_8214CCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cbd0
	ctx.lr = 0x8214CC48;
	sub_8214CBD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cca4
	if (ctx.cr0.eq) goto loc_8214CCA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155e30
	ctx.lr = 0x8214CC5C;
	sub_82155E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cc94
	if (ctx.cr0.eq) goto loc_8214CC94;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x8214CC6C;
	sub_821EBAA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214cca4
	goto loc_8214CCA4;
loc_8214CC94:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214CCA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CCB8"))) PPC_WEAK_FUNC(sub_8214CCB8);
PPC_FUNC_IMPL(__imp__sub_8214CCB8) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cce4
	if (ctx.cr6.eq) goto loc_8214CCE4;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214cd24
	if (!ctx.cr6.eq) goto loc_8214CD24;
loc_8214CCE4:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// beq cr6,0x8214cd08
	if (ctx.cr6.eq) goto loc_8214CD08;
	// li r4,16006
	ctx.r4.s64 = 16006;
	// bl 0x82154c38
	ctx.lr = 0x8214CD08;
	sub_82154C38(ctx, base);
loc_8214CD08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214cd28
	goto loc_8214CD28;
loc_8214CD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CD28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CD3C"))) PPC_WEAK_FUNC(sub_8214CD3C);
PPC_FUNC_IMPL(__imp__sub_8214CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CD40"))) PPC_WEAK_FUNC(sub_8214CD40);
PPC_FUNC_IMPL(__imp__sub_8214CD40) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214cd64
	if (ctx.cr6.eq) goto loc_8214CD64;
	// bl 0x82154aa8
	ctx.lr = 0x8214CD64;
	sub_82154AA8(ctx, base);
loc_8214CD64:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CD88"))) PPC_WEAK_FUNC(sub_8214CD88);
PPC_FUNC_IMPL(__imp__sub_8214CD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r9,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r9.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214CDA8"))) PPC_WEAK_FUNC(sub_8214CDA8);
PPC_FUNC_IMPL(__imp__sub_8214CDA8) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cdd4
	if (ctx.cr6.eq) goto loc_8214CDD4;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214ce5c
	if (!ctx.cr6.eq) goto loc_8214CE5C;
loc_8214CDD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// blt cr6,0x8214ce30
	if (ctx.cr6.lt) goto loc_8214CE30;
	// beq cr6,0x8214ce28
	if (ctx.cr6.eq) goto loc_8214CE28;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8214ce20
	if (ctx.cr6.lt) goto loc_8214CE20;
	// beq cr6,0x8214ce18
	if (ctx.cr6.eq) goto loc_8214CE18;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// blt cr6,0x8214ce10
	if (ctx.cr6.lt) goto loc_8214CE10;
	// bne cr6,0x8214ce40
	if (!ctx.cr6.eq) goto loc_8214CE40;
	// li r4,30533
	ctx.r4.s64 = 30533;
	// b 0x8214ce34
	goto loc_8214CE34;
loc_8214CE10:
	// li r4,30534
	ctx.r4.s64 = 30534;
	// b 0x8214ce34
	goto loc_8214CE34;
loc_8214CE18:
	// li r4,30218
	ctx.r4.s64 = 30218;
	// b 0x8214ce34
	goto loc_8214CE34;
loc_8214CE20:
	// li r4,30217
	ctx.r4.s64 = 30217;
	// b 0x8214ce34
	goto loc_8214CE34;
loc_8214CE28:
	// li r4,30203
	ctx.r4.s64 = 30203;
	// b 0x8214ce34
	goto loc_8214CE34;
loc_8214CE30:
	// li r4,30216
	ctx.r4.s64 = 30216;
loc_8214CE34:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x82155bd0
	ctx.lr = 0x8214CE40;
	sub_82155BD0(ctx, base);
loc_8214CE40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214ce60
	goto loc_8214CE60;
loc_8214CE5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CE60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CE74"))) PPC_WEAK_FUNC(sub_8214CE74);
PPC_FUNC_IMPL(__imp__sub_8214CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CE78"))) PPC_WEAK_FUNC(sub_8214CE78);
PPC_FUNC_IMPL(__imp__sub_8214CE78) {
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
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214ceb0
	if (ctx.cr6.eq) goto loc_8214CEB0;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x8214ceb0
	if (!ctx.cr6.eq) goto loc_8214CEB0;
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155de8
	ctx.lr = 0x8214CEA4;
	sub_82155DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8214ceb4
	if (!ctx.cr0.eq) goto loc_8214CEB4;
loc_8214CEB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CEB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CEC4"))) PPC_WEAK_FUNC(sub_8214CEC4);
PPC_FUNC_IMPL(__imp__sub_8214CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CEC8"))) PPC_WEAK_FUNC(sub_8214CEC8);
PPC_FUNC_IMPL(__imp__sub_8214CEC8) {
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
	// bl 0x8214ce78
	ctx.lr = 0x8214CEE0;
	sub_8214CE78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cefc
	if (ctx.cr0.eq) goto loc_8214CEFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214CEFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214CF10"))) PPC_WEAK_FUNC(sub_8214CF10);
PPC_FUNC_IMPL(__imp__sub_8214CF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214CF18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8214CF28;
	sub_8215BD60(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214cf44
	if (!ctx.cr6.eq) goto loc_8214CF44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82154e60
	ctx.lr = 0x8214CF3C;
	sub_82154E60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cfcc
	if (ctx.cr0.eq) goto loc_8214CFCC;
loc_8214CF44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82154dd0
	ctx.lr = 0x8214CF4C;
	sub_82154DD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82154e28
	ctx.lr = 0x8214CF54;
	sub_82154E28(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8214cf6c
	if (ctx.cr6.eq) goto loc_8214CF6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82154fb0
	ctx.lr = 0x8214CF64;
	sub_82154FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cfcc
	if (ctx.cr0.eq) goto loc_8214CFCC;
loc_8214CF6C:
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cf84
	if (ctx.cr6.eq) goto loc_8214CF84;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214cfcc
	if (!ctx.cr6.eq) goto loc_8214CFCC;
loc_8214CF84:
	// li r11,38
	ctx.r11.s64 = 38;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// bl 0x82155040
	ctx.lr = 0x8214CF9C;
	sub_82155040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214cfc0
	if (ctx.cr0.eq) goto loc_8214CFC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214cfd0
	goto loc_8214CFD0;
loc_8214CFC0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
loc_8214CFCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214CFD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214CFD8"))) PPC_WEAK_FUNC(sub_8214CFD8);
PPC_FUNC_IMPL(__imp__sub_8214CFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214CFE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82154fb0
	ctx.lr = 0x8214CFF4;
	sub_82154FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d05c
	if (ctx.cr0.eq) goto loc_8214D05C;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d014
	if (ctx.cr6.eq) goto loc_8214D014;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214d05c
	if (!ctx.cr6.eq) goto loc_8214D05C;
loc_8214D014:
	// li r11,38
	ctx.r11.s64 = 38;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r29.u32);
	// bl 0x82155040
	ctx.lr = 0x8214D02C;
	sub_82155040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d050
	if (ctx.cr0.eq) goto loc_8214D050;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214d060
	goto loc_8214D060;
loc_8214D050:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r29,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r29.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
loc_8214D05C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214D068"))) PPC_WEAK_FUNC(sub_8214D068);
PPC_FUNC_IMPL(__imp__sub_8214D068) {
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
	// bl 0x82155088
	ctx.lr = 0x8214D080;
	sub_82155088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d098
	if (!ctx.cr0.eq) goto loc_8214D098;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214D098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D0AC"))) PPC_WEAK_FUNC(sub_8214D0AC);
PPC_FUNC_IMPL(__imp__sub_8214D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D0B0"))) PPC_WEAK_FUNC(sub_8214D0B0);
PPC_FUNC_IMPL(__imp__sub_8214D0B0) {
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
	// bl 0x82155088
	ctx.lr = 0x8214D0C8;
	sub_82155088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d0e0
	if (!ctx.cr0.eq) goto loc_8214D0E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,41
	ctx.r10.s64 = 41;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214D0E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D0F4"))) PPC_WEAK_FUNC(sub_8214D0F4);
PPC_FUNC_IMPL(__imp__sub_8214D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D0F8"))) PPC_WEAK_FUNC(sub_8214D0F8);
PPC_FUNC_IMPL(__imp__sub_8214D0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214D100;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d124
	if (ctx.cr6.eq) goto loc_8214D124;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214d228
	if (!ctx.cr6.eq) goto loc_8214D228;
loc_8214D124:
	// lwz r11,1132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r28,1120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1120, ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r10.u32);
	// bne cr6,0x8214d16c
	if (!ctx.cr6.eq) goto loc_8214D16C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82155098
	ctx.lr = 0x8214D148;
	sub_82155098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d16c
	if (ctx.cr0.eq) goto loc_8214D16C;
loc_8214D150:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214d22c
	goto loc_8214D22C;
loc_8214D16C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x8214d1fc
	if (!ctx.cr6.gt) goto loc_8214D1FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8214d1fc
	if (ctx.cr6.eq) goto loc_8214D1FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d1fc
	if (ctx.cr0.eq) goto loc_8214D1FC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,1120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1120, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r11.u32);
	// b 0x8214d22c
	goto loc_8214D22C;
loc_8214D1FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d150
	if (!ctx.cr0.eq) goto loc_8214D150;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,1120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1120, ctx.r28.u32);
	// stw r11,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r11.u32);
loc_8214D228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D22C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214D234"))) PPC_WEAK_FUNC(sub_8214D234);
PPC_FUNC_IMPL(__imp__sub_8214D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D238"))) PPC_WEAK_FUNC(sub_8214D238);
PPC_FUNC_IMPL(__imp__sub_8214D238) {
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
	// bl 0x82155088
	ctx.lr = 0x8214D250;
	sub_82155088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d268
	if (!ctx.cr0.eq) goto loc_8214D268;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,43
	ctx.r10.s64 = 43;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214D268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D27C"))) PPC_WEAK_FUNC(sub_8214D27C);
PPC_FUNC_IMPL(__imp__sub_8214D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D280"))) PPC_WEAK_FUNC(sub_8214D280);
PPC_FUNC_IMPL(__imp__sub_8214D280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d2b0
	if (ctx.cr6.eq) goto loc_8214D2B0;
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8214d2f8
	if (!ctx.cr6.eq) goto loc_8214D2F8;
loc_8214D2B0:
	// li r11,44
	ctx.r11.s64 = 44;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// bl 0x821550e0
	ctx.lr = 0x8214D2C8;
	sub_821550E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d2ec
	if (ctx.cr0.eq) goto loc_8214D2EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214d2fc
	goto loc_8214D2FC;
loc_8214D2EC:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
loc_8214D2F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D2FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D314"))) PPC_WEAK_FUNC(sub_8214D314);
PPC_FUNC_IMPL(__imp__sub_8214D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D318"))) PPC_WEAK_FUNC(sub_8214D318);
PPC_FUNC_IMPL(__imp__sub_8214D318) {
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
	// bl 0x82155088
	ctx.lr = 0x8214D330;
	sub_82155088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d348
	if (!ctx.cr0.eq) goto loc_8214D348;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214D348:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D35C"))) PPC_WEAK_FUNC(sub_8214D35C);
PPC_FUNC_IMPL(__imp__sub_8214D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D360"))) PPC_WEAK_FUNC(sub_8214D360);
PPC_FUNC_IMPL(__imp__sub_8214D360) {
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D3A8"))) PPC_WEAK_FUNC(sub_8214D3A8);
PPC_FUNC_IMPL(__imp__sub_8214D3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D3C0"))) PPC_WEAK_FUNC(sub_8214D3C0);
PPC_FUNC_IMPL(__imp__sub_8214D3C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// b 0x823c3d08
	sub_823C3D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D3CC"))) PPC_WEAK_FUNC(sub_8214D3CC);
PPC_FUNC_IMPL(__imp__sub_8214D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D3D0"))) PPC_WEAK_FUNC(sub_8214D3D0);
PPC_FUNC_IMPL(__imp__sub_8214D3D0) {
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
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d428
	if (ctx.cr0.eq) goto loc_8214D428;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d420
	if (ctx.cr6.eq) goto loc_8214D420;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x8214D414;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne 0x8214d424
	if (!ctx.cr0.eq) goto loc_8214D424;
loc_8214D420:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8214D424:
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
loc_8214D428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D43C"))) PPC_WEAK_FUNC(sub_8214D43C);
PPC_FUNC_IMPL(__imp__sub_8214D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D440"))) PPC_WEAK_FUNC(sub_8214D440);
PPC_FUNC_IMPL(__imp__sub_8214D440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214D448;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0a8
	ctx.lr = 0x8214D45C;
	sub_8214B0A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d4b8
	if (ctx.cr0.eq) goto loc_8214D4B8;
	// li r31,16007
	ctx.r31.s64 = 16007;
	// li r29,4
	ctx.r29.s64 = 4;
	// bl 0x8215bd60
	ctx.lr = 0x8214D470;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d484
	if (ctx.cr6.eq) goto loc_8214D484;
	// li r31,16008
	ctx.r31.s64 = 16008;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8214D484:
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d498
	if (ctx.cr6.eq) goto loc_8214D498;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82154c38
	ctx.lr = 0x8214D498;
	sub_82154C38(ctx, base);
loc_8214D498:
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8214d4ac
	if (ctx.cr6.lt) goto loc_8214D4AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8214d4b0
	if (!ctx.cr6.gt) goto loc_8214D4B0;
loc_8214D4AC:
	// stw r29,1136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1136, ctx.r29.u32);
loc_8214D4B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1128, ctx.r11.u32);
loc_8214D4B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214D4C0"))) PPC_WEAK_FUNC(sub_8214D4C0);
PPC_FUNC_IMPL(__imp__sub_8214D4C0) {
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
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214d50c
	if (ctx.cr6.eq) goto loc_8214D50C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d510
	if (!ctx.cr6.eq) goto loc_8214D510;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d500
	if (ctx.cr6.eq) goto loc_8214D500;
	// bl 0x82154aa8
	ctx.lr = 0x8214D500;
	sub_82154AA8(ctx, base);
loc_8214D500:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// b 0x8214d510
	goto loc_8214D510;
loc_8214D50C:
	// bl 0x8214a978
	ctx.lr = 0x8214D510;
	sub_8214A978(ctx, base);
loc_8214D510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D524"))) PPC_WEAK_FUNC(sub_8214D524);
PPC_FUNC_IMPL(__imp__sub_8214D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D528"))) PPC_WEAK_FUNC(sub_8214D528);
PPC_FUNC_IMPL(__imp__sub_8214D528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D540"))) PPC_WEAK_FUNC(sub_8214D540);
PPC_FUNC_IMPL(__imp__sub_8214D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214D548;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214d56c
	if (!ctx.cr6.eq) goto loc_8214D56C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8214d628
	goto loc_8214D628;
loc_8214D56C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214d598
	if (ctx.cr0.eq) goto loc_8214D598;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8214d60c
	goto loc_8214D60C;
loc_8214D598:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214d5c0
	if (ctx.cr0.eq) goto loc_8214D5C0;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8214d60c
	goto loc_8214D60C;
loc_8214D5C0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214d5e8
	if (ctx.cr0.eq) goto loc_8214D5E8;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8214d60c
	goto loc_8214D60C;
loc_8214D5E8:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d624
	if (ctx.cr0.eq) goto loc_8214D624;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
loc_8214D60C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8214d624
	if (ctx.cr6.eq) goto loc_8214D624;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823c5728
	ctx.lr = 0x8214D624;
	sub_823C5728(ctx, base);
loc_8214D624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8214D628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214D630"))) PPC_WEAK_FUNC(sub_8214D630);
PPC_FUNC_IMPL(__imp__sub_8214D630) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x821571f8
	ctx.lr = 0x8214D64C;
	sub_821571F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d664
	if (ctx.cr0.eq) goto loc_8214D664;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d664
	if (ctx.cr6.eq) goto loc_8214D664;
	// bl 0x82154878
	ctx.lr = 0x8214D664;
	sub_82154878(ctx, base);
loc_8214D664:
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d678
	if (ctx.cr6.eq) goto loc_8214D678;
	// addi r3,r31,-256
	ctx.r3.s64 = ctx.r31.s64 + -256;
	// bl 0x8214ba70
	ctx.lr = 0x8214D678;
	sub_8214BA70(ctx, base);
loc_8214D678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D68C"))) PPC_WEAK_FUNC(sub_8214D68C);
PPC_FUNC_IMPL(__imp__sub_8214D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D690"))) PPC_WEAK_FUNC(sub_8214D690);
PPC_FUNC_IMPL(__imp__sub_8214D690) {
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
	ctx.lr = 0x8214D6B0;
	sub_821A2A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d6f8
	if (!ctx.cr0.eq) goto loc_8214D6F8;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8214d6f8
	if (!ctx.cr6.gt) goto loc_8214D6F8;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x821571f8
	ctx.lr = 0x8214D6CC;
	sub_821571F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d6f8
	if (ctx.cr0.eq) goto loc_8214D6F8;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d6e8
	if (ctx.cr6.eq) goto loc_8214D6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b9e8
	ctx.lr = 0x8214D6E8;
	sub_8214B9E8(ctx, base);
loc_8214D6E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// b 0x8214d6fc
	goto loc_8214D6FC;
loc_8214D6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D6FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D710"))) PPC_WEAK_FUNC(sub_8214D710);
PPC_FUNC_IMPL(__imp__sub_8214D710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd60
	ctx.lr = 0x8214D72C;
	sub_8215BD60(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d750
	if (ctx.cr6.eq) goto loc_8214D750;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214d798
	goto loc_8214D798;
loc_8214D750:
	// lwz r11,1108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214d798
	if (ctx.cr6.eq) goto loc_8214D798;
	// bl 0x8215bd60
	ctx.lr = 0x8214D760;
	sub_8215BD60(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d798
	if (!ctx.cr6.eq) goto loc_8214D798;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// bl 0x8214a930
	ctx.lr = 0x8214D778;
	sub_8214A930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214d790
	if (!ctx.cr0.eq) goto loc_8214D790;
	// lwz r3,-1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// bl 0x8214a8e8
	ctx.lr = 0x8214D788;
	sub_8214A8E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d798
	if (ctx.cr0.eq) goto loc_8214D798;
loc_8214D790:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214bdf0
	ctx.lr = 0x8214D798;
	sub_8214BDF0(ctx, base);
loc_8214D798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D7B0"))) PPC_WEAK_FUNC(sub_8214D7B0);
PPC_FUNC_IMPL(__imp__sub_8214D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8214D7D4;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8214d8d0
	if (ctx.cr6.eq) goto loc_8214D8D0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8214d868
	if (ctx.cr6.eq) goto loc_8214D868;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8214d844
	if (ctx.cr6.eq) goto loc_8214D844;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8214d820
	if (ctx.cr6.eq) goto loc_8214D820;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8214d904
	if (!ctx.cr6.eq) goto loc_8214D904;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d80c
	if (ctx.cr6.eq) goto loc_8214D80C;
	// bl 0x82154aa8
	ctx.lr = 0x8214D80C;
	sub_82154AA8(ctx, base);
loc_8214D80C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x8214c840
	ctx.lr = 0x8214D81C;
	sub_8214C840(ctx, base);
	// b 0x8214d904
	goto loc_8214D904;
loc_8214D820:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d830
	if (ctx.cr6.eq) goto loc_8214D830;
	// bl 0x82154aa8
	ctx.lr = 0x8214D830;
	sub_82154AA8(ctx, base);
loc_8214D830:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// bl 0x8214c958
	ctx.lr = 0x8214D840;
	sub_8214C958(ctx, base);
	// b 0x8214d904
	goto loc_8214D904;
loc_8214D844:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214aa28
	ctx.lr = 0x8214D850;
	sub_8214AA28(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214d904
	goto loc_8214D904;
loc_8214D868:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bae0
	ctx.lr = 0x8214D87C;
	sub_8214BAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d904
	if (ctx.cr0.eq) goto loc_8214D904;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d894
	if (ctx.cr6.eq) goto loc_8214D894;
	// bl 0x82154aa8
	ctx.lr = 0x8214D894;
	sub_82154AA8(ctx, base);
loc_8214D894:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214aa28
	ctx.lr = 0x8214D89C;
	sub_8214AA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82155bd0
	ctx.lr = 0x8214D8AC;
	sub_82155BD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214D8C4;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8214d904
	goto loc_8214D904;
loc_8214D8D0:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d8e0
	if (ctx.cr6.eq) goto loc_8214D8E0;
	// bl 0x82154aa8
	ctx.lr = 0x8214D8E0;
	sub_82154AA8(ctx, base);
loc_8214D8E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r9.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214D904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D91C"))) PPC_WEAK_FUNC(sub_8214D91C);
PPC_FUNC_IMPL(__imp__sub_8214D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D920"))) PPC_WEAK_FUNC(sub_8214D920);
PPC_FUNC_IMPL(__imp__sub_8214D920) {
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
	// bl 0x8213e7a0
	ctx.lr = 0x8214D938;
	sub_8213E7A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d974
	if (ctx.cr0.eq) goto loc_8214D974;
	// bl 0x82220c48
	ctx.lr = 0x8214D944;
	sub_82220C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d974
	if (ctx.cr0.eq) goto loc_8214D974;
	// bl 0x8214a8d0
	ctx.lr = 0x8214D950;
	sub_8214A8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214d974
	if (ctx.cr0.eq) goto loc_8214D974;
	// bl 0x8215bd08
	ctx.lr = 0x8214D95C;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821eb638
	ctx.lr = 0x8214D964;
	sub_821EB638(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8214D974:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D988"))) PPC_WEAK_FUNC(sub_8214D988);
PPC_FUNC_IMPL(__imp__sub_8214D988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214d9b8
	if (ctx.cr6.eq) goto loc_8214D9B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
loc_8214D9B8:
	// b 0x8214d7b0
	sub_8214D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D9BC"))) PPC_WEAK_FUNC(sub_8214D9BC);
PPC_FUNC_IMPL(__imp__sub_8214D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D9C0"))) PPC_WEAK_FUNC(sub_8214D9C0);
PPC_FUNC_IMPL(__imp__sub_8214D9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214d9f0
	if (ctx.cr6.eq) goto loc_8214D9F0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
loc_8214D9F0:
	// b 0x8214d7b0
	sub_8214D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D9F4"))) PPC_WEAK_FUNC(sub_8214D9F4);
PPC_FUNC_IMPL(__imp__sub_8214D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D9F8"))) PPC_WEAK_FUNC(sub_8214D9F8);
PPC_FUNC_IMPL(__imp__sub_8214D9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214da28
	if (ctx.cr6.eq) goto loc_8214DA28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
loc_8214DA28:
	// b 0x8214d7b0
	sub_8214D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214DA2C"))) PPC_WEAK_FUNC(sub_8214DA2C);
PPC_FUNC_IMPL(__imp__sub_8214DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DA30"))) PPC_WEAK_FUNC(sub_8214DA30);
PPC_FUNC_IMPL(__imp__sub_8214DA30) {
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
	// beq cr6,0x8214da74
	if (ctx.cr6.eq) goto loc_8214DA74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214da8c
	if (!ctx.cr6.eq) goto loc_8214DA8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// b 0x8214da8c
	goto loc_8214DA8C;
loc_8214DA74:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214da84
	if (ctx.cr6.eq) goto loc_8214DA84;
	// bl 0x82154aa8
	ctx.lr = 0x8214DA84;
	sub_82154AA8(ctx, base);
loc_8214DA84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x8214DA8C;
	sub_8214D7B0(ctx, base);
loc_8214DA8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214DAA0"))) PPC_WEAK_FUNC(sub_8214DAA0);
PPC_FUNC_IMPL(__imp__sub_8214DAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214dad0
	if (ctx.cr6.eq) goto loc_8214DAD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
loc_8214DAD0:
	// b 0x8214d7b0
	sub_8214D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214DAD4"))) PPC_WEAK_FUNC(sub_8214DAD4);
PPC_FUNC_IMPL(__imp__sub_8214DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DAD8"))) PPC_WEAK_FUNC(sub_8214DAD8);
PPC_FUNC_IMPL(__imp__sub_8214DAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214db38
	if (ctx.cr6.eq) goto loc_8214DB38;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214db7c
	if (!ctx.cr6.eq) goto loc_8214DB7C;
	// bl 0x82154cd8
	ctx.lr = 0x8214DB10;
	sub_82154CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214db7c
	if (ctx.cr0.eq) goto loc_8214DB7C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822216a8
	ctx.lr = 0x8214DB24;
	sub_822216A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// b 0x8214db7c
	goto loc_8214DB7C;
loc_8214DB38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8214DB48;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8214db5c
	if (ctx.cr6.eq) goto loc_8214DB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x8214DB58;
	sub_8214D7B0(ctx, base);
	// b 0x8214db7c
	goto loc_8214DB7C;
loc_8214DB5C:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214aa28
	ctx.lr = 0x8214DB68;
	sub_8214AA28(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214DB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214DB94"))) PPC_WEAK_FUNC(sub_8214DB94);
PPC_FUNC_IMPL(__imp__sub_8214DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DB98"))) PPC_WEAK_FUNC(sub_8214DB98);
PPC_FUNC_IMPL(__imp__sub_8214DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214dc7c
	if (ctx.cr6.eq) goto loc_8214DC7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214dc30
	if (ctx.cr6.eq) goto loc_8214DC30;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214dce8
	if (!ctx.cr6.eq) goto loc_8214DCE8;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82221348
	ctx.lr = 0x8214DBE4;
	sub_82221348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214dce8
	if (!ctx.cr0.eq) goto loc_8214DCE8;
	// bl 0x8215bd08
	ctx.lr = 0x8214DBF0;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218e938
	ctx.lr = 0x8214DBF8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214dce8
	if (ctx.cr0.eq) goto loc_8214DCE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x822212d8
	ctx.lr = 0x8214DC1C;
	sub_822212D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214dce8
	if (ctx.cr0.eq) goto loc_8214DCE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x8214DC2C;
	sub_821EBAA8(ctx, base);
	// b 0x8214dce8
	goto loc_8214DCE8;
loc_8214DC30:
	// bl 0x82154cd8
	ctx.lr = 0x8214DC34;
	sub_82154CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214dc60
	if (ctx.cr0.eq) goto loc_8214DC60;
	// beq cr6,0x8214dc4c
	if (ctx.cr6.eq) goto loc_8214DC4C;
	// bl 0x82154aa8
	ctx.lr = 0x8214DC4C;
	sub_82154AA8(ctx, base);
loc_8214DC4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// b 0x8214dce8
	goto loc_8214DCE8;
loc_8214DC60:
	// beq cr6,0x8214dc68
	if (ctx.cr6.eq) goto loc_8214DC68;
	// bl 0x82154aa8
	ctx.lr = 0x8214DC68;
	sub_82154AA8(ctx, base);
loc_8214DC68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
loc_8214DC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c958
	ctx.lr = 0x8214DC78;
	sub_8214C958(ctx, base);
	// b 0x8214dce8
	goto loc_8214DCE8;
loc_8214DC7C:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214dc8c
	if (ctx.cr6.eq) goto loc_8214DC8C;
	// bl 0x82154aa8
	ctx.lr = 0x8214DC8C;
	sub_82154AA8(ctx, base);
loc_8214DC8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8214DC9C;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8214dcc8
	if (ctx.cr6.eq) goto loc_8214DCC8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8214dc70
	if (ctx.cr6.eq) goto loc_8214DC70;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8214dcc0
	if (ctx.cr6.eq) goto loc_8214DCC0;
	// bl 0x8214d7b0
	ctx.lr = 0x8214DCBC;
	sub_8214D7B0(ctx, base);
	// b 0x8214dce8
	goto loc_8214DCE8;
loc_8214DCC0:
	// bl 0x8214c840
	ctx.lr = 0x8214DCC4;
	sub_8214C840(ctx, base);
	// b 0x8214dce8
	goto loc_8214DCE8;
loc_8214DCC8:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214aa28
	ctx.lr = 0x8214DCD4;
	sub_8214AA28(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214DCE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214DD00"))) PPC_WEAK_FUNC(sub_8214DD00);
PPC_FUNC_IMPL(__imp__sub_8214DD00) {
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
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bgt cr6,0x8214df4c
	if (ctx.cr6.gt) goto loc_8214DF4C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-28536
	ctx.r12.s64 = ctx.r12.s64 + -28536;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-8888
	ctx.r12.s64 = ctx.r12.s64 + -8888;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
loc_8214DD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c338
	ctx.lr = 0x8214DDA4;
	sub_8214C338(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d360
	ctx.lr = 0x8214DDB0;
	sub_8214D360(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c400
	ctx.lr = 0x8214DDBC;
	sub_8214C400(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bfd0
	ctx.lr = 0x8214DDC8;
	sub_8214BFD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c4c8
	ctx.lr = 0x8214DDE4;
	sub_8214C4C8(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c510
	ctx.lr = 0x8214DDF0;
	sub_8214C510(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214dad8
	ctx.lr = 0x8214DE74;
	sub_8214DAD8(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214db98
	ctx.lr = 0x8214DE8C;
	sub_8214DB98(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cc20
	ctx.lr = 0x8214DEBC;
	sub_8214CC20(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x8214dd50
	goto loc_8214DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d068
	ctx.lr = 0x8214DEF8;
	sub_8214D068(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d0b0
	ctx.lr = 0x8214DF10;
	sub_8214D0B0(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x8214dd50
	goto loc_8214DD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d238
	ctx.lr = 0x8214DF28;
	sub_8214D238(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d360
	ctx.lr = 0x8214DF34;
	sub_8214D360(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d318
	ctx.lr = 0x8214DF40;
	sub_8214D318(ctx, base);
	// b 0x8214df4c
	goto loc_8214DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d360
	ctx.lr = 0x8214DF4C;
	sub_8214D360(ctx, base);
loc_8214DF4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214DF60"))) PPC_WEAK_FUNC(sub_8214DF60);
PPC_FUNC_IMPL(__imp__sub_8214DF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,1152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-27896
	ctx.r11.s64 = ctx.r11.s64 + -27896;
	// addi r10,r10,-28032
	ctx.r10.s64 = ctx.r10.s64 + -28032;
	// addi r9,r9,-28040
	ctx.r9.s64 = ctx.r9.s64 + -28040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x8214dfbc
	if (ctx.cr6.eq) goto loc_8214DFBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214DFBC:
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214dfe4
	if (ctx.cr6.eq) goto loc_8214DFE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214DFE4:
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x8214DFF0;
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

__attribute__((alias("__imp__sub_8214E008"))) PPC_WEAK_FUNC(sub_8214E008);
PPC_FUNC_IMPL(__imp__sub_8214E008) {
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
	// bl 0x8214c0a8
	ctx.lr = 0x8214E020;
	sub_8214C0A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E034;
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

__attribute__((alias("__imp__sub_8214E048"))) PPC_WEAK_FUNC(sub_8214E048);
PPC_FUNC_IMPL(__imp__sub_8214E048) {
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
	// bl 0x821eb380
	ctx.lr = 0x8214E064;
	sub_821EB380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bf58
	ctx.lr = 0x8214E06C;
	sub_8214BF58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E080"))) PPC_WEAK_FUNC(sub_8214E080);
PPC_FUNC_IMPL(__imp__sub_8214E080) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,16200
	ctx.r9.s64 = 16200;
	// li r8,16201
	ctx.r8.s64 = 16201;
	// li r7,16202
	ctx.r7.s64 = 16202;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x8214E0D0;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_8214E0E4"))) PPC_WEAK_FUNC(sub_8214E0E4);
PPC_FUNC_IMPL(__imp__sub_8214E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E0E8"))) PPC_WEAK_FUNC(sub_8214E0E8);
PPC_FUNC_IMPL(__imp__sub_8214E0E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8214e220
	sub_8214E220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E0F0"))) PPC_WEAK_FUNC(sub_8214E0F0);
PPC_FUNC_IMPL(__imp__sub_8214E0F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x8214e220
	sub_8214E220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E0F8"))) PPC_WEAK_FUNC(sub_8214E0F8);
PPC_FUNC_IMPL(__imp__sub_8214E0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwa r9,0(r6)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 0));
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,200(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwa r8,4(r6)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 4));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,204(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwa r8,8(r6)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 8));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E190"))) PPC_WEAK_FUNC(sub_8214E190);
PPC_FUNC_IMPL(__imp__sub_8214E190) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x8214E1B0;
	sub_8214B730(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// addi r10,r10,-27896
	ctx.r10.s64 = ctx.r10.s64 + -27896;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-28032
	ctx.r9.s64 = ctx.r9.s64 + -28032;
	// addi r8,r8,-28040
	ctx.r8.s64 = ctx.r8.s64 + -28040;
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// ori r10,r7,127
	ctx.r10.u64 = ctx.r7.u64 | 127;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x82154960
	ctx.lr = 0x8214E1F8;
	sub_82154960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8214b948
	ctx.lr = 0x8214E204;
	sub_8214B948(ctx, base);
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

__attribute__((alias("__imp__sub_8214E21C"))) PPC_WEAK_FUNC(sub_8214E21C);
PPC_FUNC_IMPL(__imp__sub_8214E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E220"))) PPC_WEAK_FUNC(sub_8214E220);
PPC_FUNC_IMPL(__imp__sub_8214E220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214df60
	ctx.lr = 0x8214E240;
	sub_8214DF60(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e254
	if (ctx.cr0.eq) goto loc_8214E254;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8214E254;
	sub_82183E40(ctx, base);
loc_8214E254:
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

__attribute__((alias("__imp__sub_8214E270"))) PPC_WEAK_FUNC(sub_8214E270);
PPC_FUNC_IMPL(__imp__sub_8214E270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1152(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8214e29c
	if (!ctx.cr0.eq) goto loc_8214E29C;
loc_8214E294:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214e314
	goto loc_8214E314;
loc_8214E29C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157260
	ctx.lr = 0x8214E2A4;
	sub_82157260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e2dc
	if (ctx.cr0.eq) goto loc_8214E2DC;
	// lwz r3,1152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214e2cc
	if (ctx.cr6.eq) goto loc_8214E2CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214E2CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1152, ctx.r11.u32);
	// b 0x8214e314
	goto loc_8214E314;
loc_8214E2DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214e310
	if (ctx.cr6.eq) goto loc_8214E310;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214e294
	if (ctx.cr6.eq) goto loc_8214E294;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3a78
	ctx.lr = 0x8214E30C;
	sub_820F3A78(ctx, base);
	// b 0x8214e314
	goto loc_8214E314;
loc_8214E310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214E314:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E32C"))) PPC_WEAK_FUNC(sub_8214E32C);
PPC_FUNC_IMPL(__imp__sub_8214E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E330"))) PPC_WEAK_FUNC(sub_8214E330);
PPC_FUNC_IMPL(__imp__sub_8214E330) {
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
	ctx.lr = 0x8214E35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e3d4
	if (ctx.cr0.eq) goto loc_8214E3D4;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r9,53412
	ctx.r9.u64 = ctx.r9.u64 | 53412;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// li r4,370
	ctx.r4.s64 = 370;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x8210a9b0
	ctx.lr = 0x8214E39C;
	sub_8210A9B0(ctx, base);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,54852
	ctx.r11.u64 = ctx.r11.u64 | 54852;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,380
	ctx.r4.s64 = 380;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x8210a9b0
	ctx.lr = 0x8214E3CC;
	sub_8210A9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x8214E3D4;
	sub_8214D630(ctx, base);
loc_8214E3D4:
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

__attribute__((alias("__imp__sub_8214E3EC"))) PPC_WEAK_FUNC(sub_8214E3EC);
PPC_FUNC_IMPL(__imp__sub_8214E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E3F0"))) PPC_WEAK_FUNC(sub_8214E3F0);
PPC_FUNC_IMPL(__imp__sub_8214E3F0) {
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
	// bl 0x8215bd08
	ctx.lr = 0x8214E408;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8214d280
	ctx.lr = 0x8214E418;
	sub_8214D280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e434
	if (ctx.cr0.eq) goto loc_8214E434;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x8214E430;
	sub_823C5728(ctx, base);
	// b 0x8214e440
	goto loc_8214E440;
loc_8214E434:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823c18f8
	ctx.lr = 0x8214E440;
	sub_823C18F8(ctx, base);
loc_8214E440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E454"))) PPC_WEAK_FUNC(sub_8214E454);
PPC_FUNC_IMPL(__imp__sub_8214E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E458"))) PPC_WEAK_FUNC(sub_8214E458);
PPC_FUNC_IMPL(__imp__sub_8214E458) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,924
	ctx.r11.s64 = 924;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8214E47C:
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r10.u32);
	// bdnz 0x8214e47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214E47C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// addi r11,r3,77
	ctx.r11.s64 = ctx.r3.s64 + 77;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E558"))) PPC_WEAK_FUNC(sub_8214E558);
PPC_FUNC_IMPL(__imp__sub_8214E558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214E560;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x8214E578;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r31,74
	ctx.r31.s64 = 74;
	// li r29,3
	ctx.r29.s64 = 3;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8214E594:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E5A8;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E5BC;
	sub_8214E0F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x8214e594
	if (!ctx.cr0.eq) goto loc_8214E594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214e458
	ctx.lr = 0x8214E5D0;
	sub_8214E458(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214E5D8"))) PPC_WEAK_FUNC(sub_8214E5D8);
PPC_FUNC_IMPL(__imp__sub_8214E5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214E5E0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,924
	ctx.r30.s64 = 924;
	// stw r28,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8214E5F8:
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x8214E650;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214E67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8214e6a0
	if (!ctx.cr6.eq) goto loc_8214E6A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8214E68C;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8214E6A0:
	// addi r27,r28,74
	ctx.r27.s64 = ctx.r28.s64 + 74;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E6B8;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E6CC;
	sub_8214E0F8(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,960
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 960, ctx.xer);
	// blt cr6,0x8214e5f8
	if (ctx.cr6.lt) goto loc_8214E5F8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214E6E4"))) PPC_WEAK_FUNC(sub_8214E6E4);
PPC_FUNC_IMPL(__imp__sub_8214E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E6E8"))) PPC_WEAK_FUNC(sub_8214E6E8);
PPC_FUNC_IMPL(__imp__sub_8214E6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214E6F0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82155180
	ctx.lr = 0x8214E6FC;
	sub_82155180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214e710
	if (!ctx.cr0.eq) goto loc_8214E710;
	// bl 0x821551e0
	ctx.lr = 0x8214E708;
	sub_821551E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e730
	if (ctx.cr0.eq) goto loc_8214E730;
loc_8214E710:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156538
	ctx.lr = 0x8214E720;
	sub_82156538(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// bl 0x82156538
	ctx.lr = 0x8214E730;
	sub_82156538(ctx, base);
loc_8214E730:
	// li r31,74
	ctx.r31.s64 = 74;
loc_8214E734:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8214E73C;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// addi r4,r31,-74
	ctx.r4.s64 = ctx.r31.s64 + -74;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821d12d0
	ctx.lr = 0x8214E760;
	sub_821D12D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e784
	if (ctx.cr0.eq) goto loc_8214E784;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8214E770;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8214E784:
	// addi r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 3;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E79C;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E7B0;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E7C4;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214E7D8;
	sub_8214E0F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r31,-74
	ctx.r11.s64 = ctx.r31.s64 + -74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8214e734
	if (ctx.cr6.lt) goto loc_8214E734;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214E7F0"))) PPC_WEAK_FUNC(sub_8214E7F0);
PPC_FUNC_IMPL(__imp__sub_8214E7F0) {
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
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x821d12d0
	ctx.lr = 0x8214E820;
	sub_821D12D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8214e86c
	if (!ctx.cr6.eq) goto loc_8214E86C;
	// bl 0x82155180
	ctx.lr = 0x8214E82C;
	sub_82155180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e858
	if (ctx.cr0.eq) goto loc_8214E858;
	// li r4,30512
	ctx.r4.s64 = 30512;
loc_8214E838:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c2a0
	ctx.lr = 0x8214E844;
	sub_8214C2A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823c18f8
	ctx.lr = 0x8214E850;
	sub_823C18F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214e870
	goto loc_8214E870;
loc_8214E858:
	// bl 0x821551e0
	ctx.lr = 0x8214E85C;
	sub_821551E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e86c
	if (ctx.cr0.eq) goto loc_8214E86C;
	// li r4,30513
	ctx.r4.s64 = 30513;
	// b 0x8214e838
	goto loc_8214E838;
loc_8214E86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214E870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E884"))) PPC_WEAK_FUNC(sub_8214E884);
PPC_FUNC_IMPL(__imp__sub_8214E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E888"))) PPC_WEAK_FUNC(sub_8214E888);
PPC_FUNC_IMPL(__imp__sub_8214E888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,1152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82157260
	ctx.lr = 0x8214E8AC;
	sub_82157260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e90c
	if (ctx.cr0.eq) goto loc_8214E90C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214e90c
	if (ctx.cr0.eq) goto loc_8214E90C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e558
	ctx.lr = 0x8214E8D8;
	sub_8214E558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e6e8
	ctx.lr = 0x8214E8E0;
	sub_8214E6E8(ctx, base);
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// beq cr6,0x8214e908
	if (ctx.cr6.eq) goto loc_8214E908;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214E908:
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
loc_8214E90C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214E924"))) PPC_WEAK_FUNC(sub_8214E924);
PPC_FUNC_IMPL(__imp__sub_8214E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E928"))) PPC_WEAK_FUNC(sub_8214E928);
PPC_FUNC_IMPL(__imp__sub_8214E928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214E930;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214be60
	ctx.lr = 0x8214E93C;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x8214E94C;
	sub_82109E00(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x8214E950;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214E958;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214E964;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8214E96C;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8214e98c
	if (ctx.cr0.eq) goto loc_8214E98C;
	// bl 0x82182e90
	ctx.lr = 0x8214E978;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156630
	ctx.lr = 0x8214E988;
	sub_82156630(ctx, base);
	// b 0x8214e990
	goto loc_8214E990;
loc_8214E98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214E990:
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// li r3,102
	ctx.r3.s64 = 102;
	// bl 0x821ebaa8
	ctx.lr = 0x8214E99C;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e458
	ctx.lr = 0x8214E9A4;
	sub_8214E458(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e080
	ctx.lr = 0x8214E9B0;
	sub_8214E080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e6e8
	ctx.lr = 0x8214E9B8;
	sub_8214E6E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214E9C0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214E9C8"))) PPC_WEAK_FUNC(sub_8214E9C8);
PPC_FUNC_IMPL(__imp__sub_8214E9C8) {
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
	// bl 0x8214b328
	ctx.lr = 0x8214E9E0;
	sub_8214B328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e458
	ctx.lr = 0x8214E9E8;
	sub_8214E458(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e080
	ctx.lr = 0x8214E9F4;
	sub_8214E080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214EA08"))) PPC_WEAK_FUNC(sub_8214EA08);
PPC_FUNC_IMPL(__imp__sub_8214EA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8214ea1c
	if (ctx.cr6.lt) goto loc_8214EA1C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8214e888
	sub_8214E888(ctx, base);
	return;
loc_8214EA1C:
	// b 0x8214e6e8
	sub_8214E6E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214EA20"))) PPC_WEAK_FUNC(sub_8214EA20);
PPC_FUNC_IMPL(__imp__sub_8214EA20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214EA24"))) PPC_WEAK_FUNC(sub_8214EA24);
PPC_FUNC_IMPL(__imp__sub_8214EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214EA28"))) PPC_WEAK_FUNC(sub_8214EA28);
PPC_FUNC_IMPL(__imp__sub_8214EA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214EA30;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214e7f0
	ctx.lr = 0x8214EA44;
	sub_8214E7F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214eae0
	if (!ctx.cr0.eq) goto loc_8214EAE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x8214EA5C;
	sub_823C5728(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8214eacc
	if (!ctx.cr6.eq) goto loc_8214EACC;
	// bl 0x82182e90
	ctx.lr = 0x8214EA7C;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214EA84;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214EA90;
	sub_821837D0(ctx, base);
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x82080000
	ctx.lr = 0x8214EA98;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214eaa8
	if (ctx.cr0.eq) goto loc_8214EAA8;
	// bl 0x82157e08
	ctx.lr = 0x8214EAA4;
	sub_82157E08(ctx, base);
	// b 0x8214eaac
	goto loc_8214EAAC;
loc_8214EAA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214EAAC:
	// stw r3,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214e5d8
	ctx.lr = 0x8214EAB8;
	sub_8214E5D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8214EAC8;
	sub_821837D0(ctx, base);
	// b 0x8214eae0
	goto loc_8214EAE0;
loc_8214EACC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EAE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214EAE8"))) PPC_WEAK_FUNC(sub_8214EAE8);
PPC_FUNC_IMPL(__imp__sub_8214EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214EAF0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-27424
	ctx.r11.s64 = ctx.r11.s64 + -27424;
	// addi r10,r10,-27560
	ctx.r10.s64 = ctx.r10.s64 + -27560;
	// addi r9,r9,-27572
	ctx.r9.s64 = ctx.r9.s64 + -27572;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x8214eb3c
	if (ctx.cr6.eq) goto loc_8214EB3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EB3C:
	// lwz r3,4360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214eb64
	if (ctx.cr6.eq) goto loc_8214EB64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EB64:
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// stw r29,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214eb88
	if (ctx.cr6.eq) goto loc_8214EB88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EB88:
	// addi r30,r31,3040
	ctx.r30.s64 = ctx.r31.s64 + 3040;
	// stw r29,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r29.u32);
	// li r28,19
	ctx.r28.s64 = 19;
	// addi r29,r30,4392
	ctx.r29.s64 = ctx.r30.s64 + 4392;
loc_8214EB98:
	// addi r29,r29,-152
	ctx.r29.s64 = ctx.r29.s64 + -152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82158040
	ctx.lr = 0x8214EBA4;
	sub_82158040(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8214eb98
	if (!ctx.cr0.lt) goto loc_8214EB98;
	// addi r30,r30,1160
	ctx.r30.s64 = ctx.r30.s64 + 1160;
	// li r29,19
	ctx.r29.s64 = 19;
loc_8214EBB4:
	// addi r30,r30,-152
	ctx.r30.s64 = ctx.r30.s64 + -152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158040
	ctx.lr = 0x8214EBC0;
	sub_82158040(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8214ebb4
	if (!ctx.cr0.lt) goto loc_8214EBB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x8214EBD0;
	sub_8214B2A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214EBD8"))) PPC_WEAK_FUNC(sub_8214EBD8);
PPC_FUNC_IMPL(__imp__sub_8214EBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b980
	sub_8214B980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214EBDC"))) PPC_WEAK_FUNC(sub_8214EBDC);
PPC_FUNC_IMPL(__imp__sub_8214EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214EBE0"))) PPC_WEAK_FUNC(sub_8214EBE0);
PPC_FUNC_IMPL(__imp__sub_8214EBE0) {
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
	// bl 0x821eb380
	ctx.lr = 0x8214EBFC;
	sub_821EB380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bfd0
	ctx.lr = 0x8214EC04;
	sub_8214BFD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214EC18"))) PPC_WEAK_FUNC(sub_8214EC18);
PPC_FUNC_IMPL(__imp__sub_8214EC18) {
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
	// lwz r11,7512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7512);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,-27600
	ctx.r10.s64 = ctx.r10.s64 + -27600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8214c558
	ctx.lr = 0x8214EC48;
	sub_8214C558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214ec5c
	if (ctx.cr0.eq) goto loc_8214EC5C;
	// lwz r11,7512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r11.u32);
loc_8214EC5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214EC70"))) PPC_WEAK_FUNC(sub_8214EC70);
PPC_FUNC_IMPL(__imp__sub_8214EC70) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,16203
	ctx.r9.s64 = 16203;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r8,16204
	ctx.r8.s64 = 16204;
	// li r7,16205
	ctx.r7.s64 = 16205;
	// li r9,16206
	ctx.r9.s64 = 16206;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x8214ECC8;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_8214ECDC"))) PPC_WEAK_FUNC(sub_8214ECDC);
PPC_FUNC_IMPL(__imp__sub_8214ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214ECE0"))) PPC_WEAK_FUNC(sub_8214ECE0);
PPC_FUNC_IMPL(__imp__sub_8214ECE0) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x8214ECFC;
	sub_82154AA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214ED10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8214ed24
	if (ctx.cr6.lt) goto loc_8214ED24;
	// bne cr6,0x8214ed2c
	if (!ctx.cr6.eq) goto loc_8214ED2C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8214ed28
	goto loc_8214ED28;
loc_8214ED24:
	// li r11,8
	ctx.r11.s64 = 8;
loc_8214ED28:
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
loc_8214ED2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214ED40"))) PPC_WEAK_FUNC(sub_8214ED40);
PPC_FUNC_IMPL(__imp__sub_8214ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x8214ED60;
	sub_82154AA8(ctx, base);
	// addi r30,r31,756
	ctx.r30.s64 = ctx.r31.s64 + 756;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,30220
	ctx.r4.s64 = 30220;
	// bl 0x82155d28
	ctx.lr = 0x8214ED74;
	sub_82155D28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82155ed8
	ctx.lr = 0x8214ED80;
	sub_82155ED8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214EDA0"))) PPC_WEAK_FUNC(sub_8214EDA0);
PPC_FUNC_IMPL(__imp__sub_8214EDA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8214ef58
	sub_8214EF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214EDA8"))) PPC_WEAK_FUNC(sub_8214EDA8);
PPC_FUNC_IMPL(__imp__sub_8214EDA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x8214ef58
	sub_8214EF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214EDB0"))) PPC_WEAK_FUNC(sub_8214EDB0);
PPC_FUNC_IMPL(__imp__sub_8214EDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8214EDB8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x8214EDE0;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r24,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r24.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27424
	ctx.r11.s64 = ctx.r11.s64 + -27424;
	// addi r10,r10,-27560
	ctx.r10.s64 = ctx.r10.s64 + -27560;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// addi r9,r9,-27572
	ctx.r9.s64 = ctx.r9.s64 + -27572;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,1160
	ctx.r29.s64 = ctx.r31.s64 + 1160;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r28,19
	ctx.r28.s64 = 19;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8214EE1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821585b8
	ctx.lr = 0x8214EE24;
	sub_821585B8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,152
	ctx.r27.s64 = ctx.r27.s64 + 152;
	// bge 0x8214ee1c
	if (!ctx.cr0.lt) goto loc_8214EE1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// li r10,371
	ctx.r10.s64 = 371;
	// stw r30,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r30.u32);
	// addi r28,r31,4392
	ctx.r28.s64 = ctx.r31.s64 + 4392;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// stw r10,4372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4372, ctx.r10.u32);
	// li r27,19
	ctx.r27.s64 = 19;
	// stw r30,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r30.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r30,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r30.u32);
loc_8214EE5C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821585b8
	ctx.lr = 0x8214EE64;
	sub_821585B8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,152
	ctx.r26.s64 = ctx.r26.s64 + 152;
	// bge 0x8214ee5c
	if (!ctx.cr0.lt) goto loc_8214EE5C;
	// stw r30,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r30.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,4200
	ctx.r3.s64 = ctx.r31.s64 + 4200;
	// bl 0x822aa648
	ctx.lr = 0x8214EE80;
	sub_822AA648(ctx, base);
	// stw r25,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r25.u32);
	// stw r23,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r23.u32);
	// li r27,20
	ctx.r27.s64 = 20;
loc_8214EE8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82158058
	ctx.lr = 0x8214EE94;
	sub_82158058(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// bne 0x8214ee8c
	if (!ctx.cr0.eq) goto loc_8214EE8C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214eeb4
	if (!ctx.cr6.eq) goto loc_8214EEB4;
	// bl 0x82145998
	ctx.lr = 0x8214EEB4;
	sub_82145998(ctx, base);
loc_8214EEB4:
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// addi r27,r31,7428
	ctx.r27.s64 = ctx.r31.s64 + 7428;
	// stw r30,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r30.u32);
	// li r29,20
	ctx.r29.s64 = 20;
	// stw r30,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r30.u32);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
loc_8214EECC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82158058
	ctx.lr = 0x8214EED4;
	sub_82158058(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,152
	ctx.r28.s64 = ctx.r28.s64 + 152;
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// bne 0x8214eecc
	if (!ctx.cr0.eq) goto loc_8214EECC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x8214EEF4;
	sub_8214B948(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x8214EEFC;
	sub_821EBAA8(ctx, base);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8214ef4c
	if (!ctx.cr6.eq) goto loc_8214EF4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r28,r11,-27600
	ctx.r28.s64 = ctx.r11.s64 + -27600;
loc_8214EF10:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82221e50
	ctx.lr = 0x8214EF18;
	sub_82221E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214ef40
	if (ctx.cr0.eq) goto loc_8214EF40;
	// lwz r11,7512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7512);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// stw r11,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r11.u32);
	// blt cr6,0x8214ef10
	if (ctx.cr6.lt) goto loc_8214EF10;
	// b 0x8214ef4c
	goto loc_8214EF4C;
loc_8214EF40:
	// stw r30,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x8214EF4C;
	sub_821EBAA8(ctx, base);
loc_8214EF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8214EF58"))) PPC_WEAK_FUNC(sub_8214EF58);
PPC_FUNC_IMPL(__imp__sub_8214EF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8214eae8
	ctx.lr = 0x8214EF78;
	sub_8214EAE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214ef8c
	if (ctx.cr0.eq) goto loc_8214EF8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8214EF8C;
	sub_82183E40(ctx, base);
loc_8214EF8C:
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

__attribute__((alias("__imp__sub_8214EFA8"))) PPC_WEAK_FUNC(sub_8214EFA8);
PPC_FUNC_IMPL(__imp__sub_8214EFA8) {
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
	// lwz r3,4360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214efd0
	if (!ctx.cr6.eq) goto loc_8214EFD0;
loc_8214EFC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214f040
	goto loc_8214F040;
loc_8214EFD0:
	// bl 0x82145930
	ctx.lr = 0x8214EFD4;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// beq 0x8214f00c
	if (ctx.cr0.eq) goto loc_8214F00C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214effc
	if (ctx.cr6.eq) goto loc_8214EFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EFFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r11.u32);
	// b 0x8214f040
	goto loc_8214F040;
loc_8214F00C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214f03c
	if (ctx.cr6.eq) goto loc_8214F03C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214efc8
	if (ctx.cr6.eq) goto loc_8214EFC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3a78
	ctx.lr = 0x8214F038;
	sub_820F3A78(ctx, base);
	// b 0x8214f040
	goto loc_8214F040;
loc_8214F03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214F040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F054"))) PPC_WEAK_FUNC(sub_8214F054);
PPC_FUNC_IMPL(__imp__sub_8214F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F058"))) PPC_WEAK_FUNC(sub_8214F058);
PPC_FUNC_IMPL(__imp__sub_8214F058) {
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
	// lwz r3,4364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214f080
	if (!ctx.cr6.eq) goto loc_8214F080;
loc_8214F078:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214f0f0
	goto loc_8214F0F0;
loc_8214F080:
	// bl 0x82145930
	ctx.lr = 0x8214F084;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// beq 0x8214f0bc
	if (ctx.cr0.eq) goto loc_8214F0BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214f0ac
	if (ctx.cr6.eq) goto loc_8214F0AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214F0AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r11.u32);
	// b 0x8214f0f0
	goto loc_8214F0F0;
loc_8214F0BC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214f0ec
	if (ctx.cr6.eq) goto loc_8214F0EC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214f078
	if (ctx.cr6.eq) goto loc_8214F078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3a78
	ctx.lr = 0x8214F0E8;
	sub_820F3A78(ctx, base);
	// b 0x8214f0f0
	goto loc_8214F0F0;
loc_8214F0EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214F0F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F104"))) PPC_WEAK_FUNC(sub_8214F104);
PPC_FUNC_IMPL(__imp__sub_8214F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F108"))) PPC_WEAK_FUNC(sub_8214F108);
PPC_FUNC_IMPL(__imp__sub_8214F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x8214F144;
	sub_8214B948(ctx, base);
	// lwz r11,7512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7512);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8214f16c
	if (ctx.cr6.lt) goto loc_8214F16C;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214f160
	if (ctx.cr6.eq) goto loc_8214F160;
	// bl 0x82154aa8
	ctx.lr = 0x8214F160;
	sub_82154AA8(ctx, base);
loc_8214F160:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// b 0x8214f170
	goto loc_8214F170;
loc_8214F16C:
	// stw r30,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r30.u32);
loc_8214F170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F188"))) PPC_WEAK_FUNC(sub_8214F188);
PPC_FUNC_IMPL(__imp__sub_8214F188) {
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
	// bl 0x8214c140
	ctx.lr = 0x8214F1A0;
	sub_8214C140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214f200
	if (!ctx.cr0.eq) goto loc_8214F200;
	// bl 0x82154d28
	ctx.lr = 0x8214F1AC;
	sub_82154D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214f200
	if (!ctx.cr0.eq) goto loc_8214F200;
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// lwz r4,1152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// bl 0x821584b0
	ctx.lr = 0x8214F1CC;
	sub_821584B0(ctx, base);
	// lwz r4,1152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// bl 0x82154110
	ctx.lr = 0x8214F1D8;
	sub_82154110(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b948
	ctx.lr = 0x8214F1EC;
	sub_8214B948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214F200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F214"))) PPC_WEAK_FUNC(sub_8214F214);
PPC_FUNC_IMPL(__imp__sub_8214F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F218"))) PPC_WEAK_FUNC(sub_8214F218);
PPC_FUNC_IMPL(__imp__sub_8214F218) {
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
	ctx.lr = 0x8214F244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214f2c0
	if (ctx.cr0.eq) goto loc_8214F2C0;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4116);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 * 144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f31,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r4,4116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4116);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x8210a9b0
	ctx.lr = 0x8214F288;
	sub_8210A9B0(ctx, base);
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,54996
	ctx.r11.u64 = ctx.r11.u64 | 54996;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,381
	ctx.r4.s64 = 381;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// bl 0x8210a9b0
	ctx.lr = 0x8214F2B8;
	sub_8210A9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x8214F2C0;
	sub_8214D630(ctx, base);
loc_8214F2C0:
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

__attribute__((alias("__imp__sub_8214F2D8"))) PPC_WEAK_FUNC(sub_8214F2D8);
PPC_FUNC_IMPL(__imp__sub_8214F2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214F2E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8214F2EC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214F2F4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214F300;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8214F308;
	sub_82080000(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8214f328
	if (ctx.cr0.eq) goto loc_8214F328;
	// bl 0x82182e90
	ctx.lr = 0x8214F314;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156630
	ctx.lr = 0x8214F324;
	sub_82156630(ctx, base);
	// b 0x8214f32c
	goto loc_8214F32C;
loc_8214F328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214F32C:
	// lwz r11,1132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1132);
	// stw r3,756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 756, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214f350
	if (!ctx.cr6.eq) goto loc_8214F350;
	// li r11,370
	ctx.r11.s64 = 370;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,4372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4372, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82156538
	ctx.lr = 0x8214F350;
	sub_82156538(ctx, base);
loc_8214F350:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,960
	ctx.r31.s64 = 960;
loc_8214F358:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 756);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x821d12d0
	ctx.lr = 0x8214F368;
	sub_821D12D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8214f374
	if (!ctx.cr6.eq) goto loc_8214F374;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8214F374:
	// lwz r8,760(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 760);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214f3bc
	if (!ctx.cr6.gt) goto loc_8214F3BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F394:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r30,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r30.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8214f394
	if (ctx.cr6.lt) goto loc_8214F394;
loc_8214F3BC:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r31,1008
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1008, ctx.xer);
	// blt cr6,0x8214f358
	if (ctx.cr6.lt) goto loc_8214F358;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214F3D4;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214F3DC"))) PPC_WEAK_FUNC(sub_8214F3DC);
PPC_FUNC_IMPL(__imp__sub_8214F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F3E0"))) PPC_WEAK_FUNC(sub_8214F3E0);
PPC_FUNC_IMPL(__imp__sub_8214F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214F3E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,80
	ctx.r30.s64 = 80;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8214F3F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8214F400;
	sub_8218B408(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214F414;
	sub_8214E0F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8214F41C;
	sub_8218B408(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214F430;
	sub_8214E0F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x8214f3f8
	if (!ctx.cr0.eq) goto loc_8214F3F8;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,1008
	ctx.r11.s64 = 1008;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8214F44C:
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r10.u32);
	// bdnz 0x8214f44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214F44C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r10.u32);
	// lwz r9,760(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214F51C"))) PPC_WEAK_FUNC(sub_8214F51C);
PPC_FUNC_IMPL(__imp__sub_8214F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F520"))) PPC_WEAK_FUNC(sub_8214F520);
PPC_FUNC_IMPL(__imp__sub_8214F520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214F528;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1008
	ctx.r30.s64 = 1008;
	// stw r28,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8214F540:
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r29.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x8214F598;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214F5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8214f5e8
	if (!ctx.cr6.eq) goto loc_8214F5E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8214F5D4;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_8214F5E8:
	// addi r27,r28,80
	ctx.r27.s64 = ctx.r28.s64 + 80;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8214e0f8
	ctx.lr = 0x8214F600;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x8214F614;
	sub_8214E0F8(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,1056
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1056, ctx.xer);
	// blt cr6,0x8214f540
	if (ctx.cr6.lt) goto loc_8214F540;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214F62C"))) PPC_WEAK_FUNC(sub_8214F62C);
PPC_FUNC_IMPL(__imp__sub_8214F62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F630"))) PPC_WEAK_FUNC(sub_8214F630);
PPC_FUNC_IMPL(__imp__sub_8214F630) {
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
	// addi r3,r3,756
	ctx.r3.s64 = ctx.r3.s64 + 756;
	// bl 0x82155e90
	ctx.lr = 0x8214F644;
	sub_82155E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8214f670
	if (ctx.cr6.lt) goto loc_8214F670;
	// beq cr6,0x8214f658
	if (ctx.cr6.eq) goto loc_8214F658;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214f684
	goto loc_8214F684;
loc_8214F658:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b1e8
	ctx.lr = 0x8214F668;
	sub_8214B1E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214f684
	goto loc_8214F684;
loc_8214F670:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b1e8
	ctx.lr = 0x8214F680;
	sub_8214B1E8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_8214F684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F694"))) PPC_WEAK_FUNC(sub_8214F694);
PPC_FUNC_IMPL(__imp__sub_8214F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F698"))) PPC_WEAK_FUNC(sub_8214F698);
PPC_FUNC_IMPL(__imp__sub_8214F698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8214F6A0;
	sub_82248778(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x82248f70
	ctx.lr = 0x8214F6C4;
	sub_82248F70(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r1,300
	ctx.r10.s64 = ctx.r1.s64 + 300;
	// lis r9,17659
	ctx.r9.s64 = 1157300224;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8214F6D8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8214f6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214F6D8;
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214f7b4
	if (!ctx.cr6.gt) goto loc_8214F7B4;
	// addi r28,r31,4392
	ctx.r28.s64 = ctx.r31.s64 + 4392;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8214F6F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821586b8
	ctx.lr = 0x8214F700;
	sub_821586B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214f728
	if (ctx.cr0.eq) goto loc_8214F728;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x82158710
	ctx.lr = 0x8214F718;
	sub_82158710(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfsx f1,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8214F728:
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,152
	ctx.r28.s64 = ctx.r28.s64 + 152;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8214f6f8
	if (ctx.cr6.lt) goto loc_8214F6F8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8214f7b4
	if (!ctx.cr6.gt) goto loc_8214F7B4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8214f7b4
	if (!ctx.cr6.gt) goto loc_8214F7B4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8214F754:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8214f7a8
	if (!ctx.cr6.gt) goto loc_8214F7A8;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8214F76C:
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8214f7a0
	if (!ctx.cr6.gt) goto loc_8214F7A0;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8214F7A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8214f76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214F76C;
loc_8214F7A8:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8214f754
	if (!ctx.cr0.eq) goto loc_8214F754;
loc_8214F7B4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228c88
	ctx.lr = 0x8214F7BC;
	sub_82228C88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8214f86c
	if (ctx.cr6.lt) goto loc_8214F86C;
	// bne cr6,0x8214f8e4
	if (!ctx.cr6.eq) goto loc_8214F8E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8214f860
	if (!ctx.cr6.gt) goto loc_8214F860;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r25,r31,7428
	ctx.r25.s64 = ctx.r31.s64 + 7428;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
	// addi r28,r31,4200
	ctx.r28.s64 = ctx.r31.s64 + 4200;
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
loc_8214F7FC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228be0
	ctx.lr = 0x8214F804;
	sub_82228BE0(ctx, base);
	// lwzu r27,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-744(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -744);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82223140
	ctx.lr = 0x8214F81C;
	sub_82223140(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158058
	ctx.lr = 0x8214F824;
	sub_82158058(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821580d8
	ctx.lr = 0x8214F830;
	sub_821580D8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228bd8
	ctx.lr = 0x8214F838;
	sub_82228BD8(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821847a8
	ctx.lr = 0x8214F84C;
	sub_821847A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r25.u32 = ea;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// bne 0x8214f7fc
	if (!ctx.cr0.eq) goto loc_8214F7FC;
loc_8214F860:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// b 0x8214f8e4
	goto loc_8214F8E4;
loc_8214F86C:
	// stw r26,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r26.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82228be0
	ctx.lr = 0x8214F878;
	sub_82228BE0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82223140
	ctx.lr = 0x8214F89C;
	sub_82223140(ctx, base);
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// bl 0x82158058
	ctx.lr = 0x8214F8B0;
	sub_82158058(ctx, base);
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// bl 0x821580d8
	ctx.lr = 0x8214F8C8;
	sub_821580D8(ctx, base);
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1858
	ctx.r11.s64 = ctx.r11.s64 + 1858;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8214F8E4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8209eda0
	ctx.lr = 0x8214F8EC;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8214F8F4"))) PPC_WEAK_FUNC(sub_8214F8F4);
PPC_FUNC_IMPL(__imp__sub_8214F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F8F8"))) PPC_WEAK_FUNC(sub_8214F8F8);
PPC_FUNC_IMPL(__imp__sub_8214F8F8) {
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
	// lwz r10,760(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,30956
	ctx.r4.s64 = ctx.r9.s64 + 30956;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// bl 0x8224a7b8
	ctx.lr = 0x8214F930;
	sub_8224A7B8(ctx, base);
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

__attribute__((alias("__imp__sub_8214F948"))) PPC_WEAK_FUNC(sub_8214F948);
PPC_FUNC_IMPL(__imp__sub_8214F948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214F950;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x8214F958;
	sub_82249928(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f28,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f28.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f29,10388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10388);
	ctx.f29.f64 = double(temp.f32);
	// li r30,960
	ctx.r30.s64 = 960;
	// lfs f30,11308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-31244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
loc_8214F988:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f8f8
	ctx.lr = 0x8214F998;
	sub_8214F8F8(ctx, base);
	// lwz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq 0x8214fa08
	if (ctx.cr0.eq) goto loc_8214FA08;
	// stfs f31,780(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 780, temp.u32);
	// stfs f31,784(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 784, temp.u32);
	// lwz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,524(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f31,528(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f30,524(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f30,528(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f30,268(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f30,272(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// b 0x8214fa58
	goto loc_8214FA58;
loc_8214FA08:
	// stfs f29,780(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 780, temp.u32);
	// stfs f29,784(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 784, temp.u32);
	// lwz r10,760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f29,524(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f29,528(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f28,524(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f28,528(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f28,268(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f28,272(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_8214FA58:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,1008
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1008, ctx.xer);
	// blt cr6,0x8214f988
	if (ctx.cr6.lt) goto loc_8214F988;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x8214FA74;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214FA78"))) PPC_WEAK_FUNC(sub_8214FA78);
PPC_FUNC_IMPL(__imp__sub_8214FA78) {
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x8214FA94;
	sub_821EBAA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x8214f3e0
	ctx.lr = 0x8214FAA4;
	sub_8214F3E0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x8214FAAC;
	sub_821EBAA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FAC8"))) PPC_WEAK_FUNC(sub_8214FAC8);
PPC_FUNC_IMPL(__imp__sub_8214FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214FAD0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,1132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// lwz r3,1152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// bl 0x82156ef8
	ctx.lr = 0x8214FAF8;
	sub_82156EF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156fe0
	ctx.lr = 0x8214FB04;
	sub_82156FE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156f00
	ctx.lr = 0x8214FB10;
	sub_82156F00(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170860
	ctx.lr = 0x8214FB1C;
	sub_82170860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82156f08
	ctx.lr = 0x8214FB28;
	sub_82156F08(ctx, base);
	// lwz r3,1152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// bl 0x82157160
	ctx.lr = 0x8214FB30;
	sub_82157160(ctx, base);
	// stw r30,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r30.u32);
	// stw r30,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r30.u32);
	// addi r28,r31,7428
	ctx.r28.s64 = ctx.r31.s64 + 7428;
	// addi r29,r31,4392
	ctx.r29.s64 = ctx.r31.s64 + 4392;
	// li r30,20
	ctx.r30.s64 = 20;
loc_8214FB44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82158058
	ctx.lr = 0x8214FB4C;
	sub_82158058(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bne 0x8214fb44
	if (!ctx.cr0.eq) goto loc_8214FB44;
	// li r4,16010
	ctx.r4.s64 = 16010;
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154c38
	ctx.lr = 0x8214FB6C;
	sub_82154C38(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ebaa8
	ctx.lr = 0x8214FB74;
	sub_821EBAA8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214FB84"))) PPC_WEAK_FUNC(sub_8214FB84);
PPC_FUNC_IMPL(__imp__sub_8214FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FB88"))) PPC_WEAK_FUNC(sub_8214FB88);
PPC_FUNC_IMPL(__imp__sub_8214FB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214FB90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214fbb8
	if (ctx.cr6.eq) goto loc_8214FBB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FBB8:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x8214FBC4;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214FBCC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214FBD8;
	sub_821837D0(ctx, base);
	// li r3,2064
	ctx.r3.s64 = 2064;
	// bl 0x82080000
	ctx.lr = 0x8214FBE0;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214fbfc
	if (ctx.cr0.eq) goto loc_8214FBFC;
	// lwz r6,1132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// lwz r5,768(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r4,764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// bl 0x821588d8
	ctx.lr = 0x8214FBF8;
	sub_821588D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8214FBFC:
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// addi r4,r31,1160
	ctx.r4.s64 = ctx.r31.s64 + 1160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// bl 0x82158ab0
	ctx.lr = 0x8214FC10;
	sub_82158AB0(ctx, base);
	// addi r4,r31,4200
	ctx.r4.s64 = ctx.r31.s64 + 4200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// bl 0x82158c38
	ctx.lr = 0x8214FC20;
	sub_82158C38(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8214FC30;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214FC38"))) PPC_WEAK_FUNC(sub_8214FC38);
PPC_FUNC_IMPL(__imp__sub_8214FC38) {
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
	// lwz r3,4360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// bl 0x82145930
	ctx.lr = 0x8214FC54;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214fce0
	if (ctx.cr0.eq) goto loc_8214FCE0;
	// lwz r3,4360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// beq 0x8214fcb4
	if (ctx.cr0.eq) goto loc_8214FCB4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// stw r3,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fcd8
	if (ctx.cr6.eq) goto loc_8214FCD8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8214fccc
	goto loc_8214FCCC;
loc_8214FCB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// beq cr6,0x8214fcd8
	if (ctx.cr6.eq) goto loc_8214FCD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8214FCCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FCD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r11.u32);
loc_8214FCE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FCF4"))) PPC_WEAK_FUNC(sub_8214FCF4);
PPC_FUNC_IMPL(__imp__sub_8214FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FCF8"))) PPC_WEAK_FUNC(sub_8214FCF8);
PPC_FUNC_IMPL(__imp__sub_8214FCF8) {
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
	// bl 0x8214f630
	ctx.lr = 0x8214FD10;
	sub_8214F630(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8214fd28
	if (ctx.cr6.eq) goto loc_8214FD28;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8214fd30
	if (!ctx.cr6.eq) goto loc_8214FD30;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8214fd2c
	goto loc_8214FD2C;
loc_8214FD28:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8214FD2C:
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
loc_8214FD30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FD44"))) PPC_WEAK_FUNC(sub_8214FD44);
PPC_FUNC_IMPL(__imp__sub_8214FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FD48"))) PPC_WEAK_FUNC(sub_8214FD48);
PPC_FUNC_IMPL(__imp__sub_8214FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214FD50;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214fd78
	if (ctx.cr6.eq) goto loc_8214FD78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FD78:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4364, ctx.r11.u32);
	// bl 0x821596b0
	ctx.lr = 0x8214FD88;
	sub_821596B0(ctx, base);
	// lwz r11,4376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4376);
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,1160
	ctx.r31.s64 = ctx.r11.s64 + 1160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158778
	ctx.lr = 0x8214FDA0;
	sub_82158778(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158320
	ctx.lr = 0x8214FDAC;
	sub_82158320(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158388
	ctx.lr = 0x8214FDB8;
	sub_82158388(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821583f0
	ctx.lr = 0x8214FDC4;
	sub_821583F0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158458
	ctx.lr = 0x8214FDD0;
	sub_82158458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82159710
	ctx.lr = 0x8214FDDC;
	sub_82159710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158550
	ctx.lr = 0x8214FDE4;
	sub_82158550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82159838
	ctx.lr = 0x8214FDF0;
	sub_82159838(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82159720
	ctx.lr = 0x8214FE00;
	sub_82159720(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x8214FE04;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214FE0C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214FE18;
	sub_821837D0(ctx, base);
	// li r3,1520
	ctx.r3.s64 = 1520;
	// bl 0x82080000
	ctx.lr = 0x8214FE20;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214fe40
	if (ctx.cr0.eq) goto loc_8214FE40;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,1132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// lwz r5,768(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// lwz r4,764(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// bl 0x82159850
	ctx.lr = 0x8214FE3C;
	sub_82159850(ctx, base);
	// b 0x8214fe44
	goto loc_8214FE44;
loc_8214FE40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214FE44:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,4364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4364, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4368, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8214FE58;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214FE60"))) PPC_WEAK_FUNC(sub_8214FE60);
PPC_FUNC_IMPL(__imp__sub_8214FE60) {
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
	// lwz r3,4364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4364);
	// bl 0x82145930
	ctx.lr = 0x8214FE7C;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214feb4
	if (ctx.cr0.eq) goto loc_8214FEB4;
	// lwz r3,4364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214fea8
	if (ctx.cr0.eq) goto loc_8214FEA8;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8214feb0
	goto loc_8214FEB0;
loc_8214FEA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_8214FEB0:
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
loc_8214FEB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FEC8"))) PPC_WEAK_FUNC(sub_8214FEC8);
PPC_FUNC_IMPL(__imp__sub_8214FEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd60
	ctx.lr = 0x8214FEE4;
	sub_8215BD60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c790
	ctx.lr = 0x8214FEF4;
	sub_8214C790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214ff4c
	if (ctx.cr0.eq) goto loc_8214FF4C;
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// addi r11,r11,1858
	ctx.r11.s64 = ctx.r11.s64 + 1858;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x8214ff18
	if (ctx.cr6.lt) goto loc_8214FF18;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8214FF18:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214ff38
	if (ctx.cr6.eq) goto loc_8214FF38;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,-1388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1388);
	// bl 0x8214af08
	ctx.lr = 0x8214FF30;
	sub_8214AF08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214ff4c
	if (!ctx.cr0.eq) goto loc_8214FF4C;
loc_8214FF38:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x8214FF40;
	sub_82154AA8(ctx, base);
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c840
	ctx.lr = 0x8214FF4C;
	sub_8214C840(ctx, base);
loc_8214FF4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FF64"))) PPC_WEAK_FUNC(sub_8214FF64);
PPC_FUNC_IMPL(__imp__sub_8214FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FF68"))) PPC_WEAK_FUNC(sub_8214FF68);
PPC_FUNC_IMPL(__imp__sub_8214FF68) {
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
	// bl 0x8214efa8
	ctx.lr = 0x8214FF80;
	sub_8214EFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214ff98
	if (ctx.cr0.eq) goto loc_8214FF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f058
	ctx.lr = 0x8214FF90;
	sub_8214F058(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8214FF98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214FFAC"))) PPC_WEAK_FUNC(sub_8214FFAC);
PPC_FUNC_IMPL(__imp__sub_8214FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FFB0"))) PPC_WEAK_FUNC(sub_8214FFB0);
PPC_FUNC_IMPL(__imp__sub_8214FFB0) {
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
	// bl 0x8214be60
	ctx.lr = 0x8214FFC8;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x8214FFD8;
	sub_82109E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f2d8
	ctx.lr = 0x8214FFE0;
	sub_8214F2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f3e0
	ctx.lr = 0x8214FFE8;
	sub_8214F3E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214ec70
	ctx.lr = 0x8214FFF4;
	sub_8214EC70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150008"))) PPC_WEAK_FUNC(sub_82150008);
PPC_FUNC_IMPL(__imp__sub_82150008) {
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
	// bl 0x8214c0a8
	ctx.lr = 0x82150020;
	sub_8214C0A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f948
	ctx.lr = 0x8215003C;
	sub_8214F948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150050"))) PPC_WEAK_FUNC(sub_82150050);
PPC_FUNC_IMPL(__imp__sub_82150050) {
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
	// bl 0x8214b328
	ctx.lr = 0x82150068;
	sub_8214B328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f3e0
	ctx.lr = 0x82150070;
	sub_8214F3E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214ec70
	ctx.lr = 0x8215007C;
	sub_8214EC70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150090"))) PPC_WEAK_FUNC(sub_82150090);
PPC_FUNC_IMPL(__imp__sub_82150090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82150098;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// bl 0x82154098
	ctx.lr = 0x821500A8;
	sub_82154098(ctx, base);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821500C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82150154
	if (ctx.cr6.lt) goto loc_82150154;
	// beq cr6,0x82150120
	if (ctx.cr6.eq) goto loc_82150120;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x821500ec
	if (ctx.cr6.lt) goto loc_821500EC;
	// bne cr6,0x8215017c
	if (!ctx.cr6.eq) goto loc_8215017C;
	// bl 0x8215bd60
	ctx.lr = 0x821500E0;
	sub_8215BD60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x821500f8
	goto loc_821500F8;
loc_821500EC:
	// lwz r29,1104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// bl 0x8215bd60
	ctx.lr = 0x821500F4;
	sub_8215BD60(ctx, base);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
loc_821500F8:
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82156fe0
	ctx.lr = 0x82150108;
	sub_82156FE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215011C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8215017c
	goto loc_8215017C;
loc_82150120:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82150130
	if (!ctx.cr6.eq) goto loc_82150130;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82150130:
	// bl 0x8215bd60
	ctx.lr = 0x82150134;
	sub_8215BD60(ctx, base);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214f520
	ctx.lr = 0x82150140;
	sub_8214F520(ctx, base);
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82156fe0
	ctx.lr = 0x82150150;
	sub_82156FE0(ctx, base);
	// b 0x82150174
	goto loc_82150174;
loc_82150154:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82150164
	if (!ctx.cr6.eq) goto loc_82150164;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82150164:
	// bl 0x8215bd60
	ctx.lr = 0x82150168;
	sub_8215BD60(ctx, base);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214f520
	ctx.lr = 0x82150174;
	sub_8214F520(ctx, base);
loc_82150174:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r11.u32);
loc_8215017C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82150194;
	sub_823C5728(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215019C"))) PPC_WEAK_FUNC(sub_8215019C);
PPC_FUNC_IMPL(__imp__sub_8215019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821501A0"))) PPC_WEAK_FUNC(sub_821501A0);
PPC_FUNC_IMPL(__imp__sub_821501A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821501A8;
	sub_82248780(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82228c88
	ctx.lr = 0x821501BC;
	sub_82228C88(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,4384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4384);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r29,-744(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// blt cr6,0x821502e4
	if (ctx.cr6.lt) goto loc_821502E4;
	// bne cr6,0x82150238
	if (!ctx.cr6.eq) goto loc_82150238;
	// stw r27,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r27.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821501E4;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218e938
	ctx.lr = 0x821501EC;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821501FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215024c
	if (ctx.cr0.eq) goto loc_8215024C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221700
	ctx.lr = 0x8215020C;
	sub_82221700(ctx, base);
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x82150214;
	sub_82154AA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x8215021C;
	sub_821EBAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,30206
	ctx.r4.s64 = 30206;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82150238:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8209eda0
	ctx.lr = 0x82150240;
	sub_8209EDA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8215024C:
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821502b0
	if (!ctx.cr6.gt) goto loc_821502B0;
	// addi r30,r31,4392
	ctx.r30.s64 = ctx.r31.s64 + 4392;
loc_82150260:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158600
	ctx.lr = 0x8215026C;
	sub_82158600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158660
	ctx.lr = 0x82150274;
	sub_82158660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215029c
	if (ctx.cr0.eq) goto loc_8215029C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x821586b8
	ctx.lr = 0x82150288;
	sub_821586B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215029c
	if (ctx.cr0.eq) goto loc_8215029C;
	// lwz r11,4380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r11.u32);
loc_8215029C:
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82150260
	if (ctx.cr6.lt) goto loc_82150260;
loc_821502B0:
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82150238
	if (!ctx.cr6.eq) goto loc_82150238;
	// lwz r11,4380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821502d8
	if (!ctx.cr6.gt) goto loc_821502D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f698
	ctx.lr = 0x821502D4;
	sub_8214F698(ctx, base);
	// b 0x821502dc
	goto loc_821502DC;
loc_821502D8:
	// li r28,2
	ctx.r28.s64 = 2;
loc_821502DC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82150368
	goto loc_82150368;
loc_821502E4:
	// stw r27,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r27.u32);
	// bl 0x822219a8
	ctx.lr = 0x821502F4;
	sub_822219A8(ctx, base);
	// stw r3,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r3.u32);
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x82221700
	ctx.lr = 0x82150300;
	sub_82221700(ctx, base);
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x822228d8
	ctx.lr = 0x82150308;
	sub_822228D8(ctx, base);
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82150360
	if (!ctx.cr6.gt) goto loc_82150360;
	// addi r28,r31,4392
	ctx.r28.s64 = ctx.r31.s64 + 4392;
loc_8215031C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228c88
	ctx.lr = 0x82150324;
	sub_82228C88(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223140
	ctx.lr = 0x82150338;
	sub_82223140(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821580d8
	ctx.lr = 0x82150344;
	sub_821580D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x8215034C;
	sub_8209EDA0(ctx, base);
	// lwz r11,4388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4388);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,152
	ctx.r28.s64 = ctx.r28.s64 + 152;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8215031c
	if (ctx.cr6.lt) goto loc_8215031C;
loc_82150360:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82150368:
	// stw r11,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r11.u32);
	// b 0x82150238
	goto loc_82150238;
}

__attribute__((alias("__imp__sub_82150370"))) PPC_WEAK_FUNC(sub_82150370);
PPC_FUNC_IMPL(__imp__sub_82150370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82150378;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,-1388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82150424
	if (ctx.cr6.eq) goto loc_82150424;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821503c8
	if (ctx.cr6.eq) goto loc_821503C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82150488
	if (!ctx.cr6.eq) goto loc_82150488;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821503c0
	if (!ctx.cr6.eq) goto loc_821503C0;
	// bl 0x821501a0
	ctx.lr = 0x821503B8;
	sub_821501A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82150488
	goto loc_82150488;
loc_821503C0:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82150488
	goto loc_82150488;
loc_821503C8:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82221348
	ctx.lr = 0x821503D8;
	sub_82221348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82150488
	if (!ctx.cr0.eq) goto loc_82150488;
	// bl 0x8215bd08
	ctx.lr = 0x821503E4;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218e938
	ctx.lr = 0x821503EC;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821503FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150488
	if (ctx.cr0.eq) goto loc_82150488;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x822212d8
	ctx.lr = 0x82150410;
	sub_822212D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150488
	if (ctx.cr0.eq) goto loc_82150488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x82150420;
	sub_821EBAA8(ctx, base);
	// b 0x82150488
	goto loc_82150488;
loc_82150424:
	// lwz r3,768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x82154aa8
	ctx.lr = 0x8215042C;
	sub_82154AA8(ctx, base);
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x82150434;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82150474
	if (ctx.cr6.eq) goto loc_82150474;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82150450
	if (ctx.cr6.eq) goto loc_82150450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d7b0
	ctx.lr = 0x8215044C;
	sub_8214D7B0(ctx, base);
	// b 0x82150488
	goto loc_82150488;
loc_82150450:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214aa28
	ctx.lr = 0x8215045C;
	sub_8214AA28(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82150488
	goto loc_82150488;
loc_82150474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150488:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82150494"))) PPC_WEAK_FUNC(sub_82150494);
PPC_FUNC_IMPL(__imp__sub_82150494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150498"))) PPC_WEAK_FUNC(sub_82150498);
PPC_FUNC_IMPL(__imp__sub_82150498) {
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
	// bl 0x82150370
	ctx.lr = 0x821504B0;
	sub_82150370(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821504cc
	if (ctx.cr6.eq) goto loc_821504CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821504d4
	if (!ctx.cr6.eq) goto loc_821504D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214ed40
	ctx.lr = 0x821504C8;
	sub_8214ED40(ctx, base);
	// b 0x821504d4
	goto loc_821504D4;
loc_821504CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214ece0
	ctx.lr = 0x821504D4;
	sub_8214ECE0(ctx, base);
loc_821504D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821504E8"))) PPC_WEAK_FUNC(sub_821504E8);
PPC_FUNC_IMPL(__imp__sub_821504E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4368);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-27584
	ctx.r12.s64 = ctx.r12.s64 + -27584;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,1308
	ctx.r12.s64 = ctx.r12.s64 + 1308;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8215051C"))) PPC_WEAK_FUNC(sub_8215051C);
PPC_FUNC_IMPL(__imp__sub_8215051C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214ec18
	sub_8214EC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150520"))) PPC_WEAK_FUNC(sub_82150520);
PPC_FUNC_IMPL(__imp__sub_82150520) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fa78
	sub_8214FA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150524"))) PPC_WEAK_FUNC(sub_82150524);
PPC_FUNC_IMPL(__imp__sub_82150524) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fac8
	sub_8214FAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150528"))) PPC_WEAK_FUNC(sub_82150528);
PPC_FUNC_IMPL(__imp__sub_82150528) {
	PPC_FUNC_PROLOGUE();
	// b 0x82150498
	sub_82150498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215052C"))) PPC_WEAK_FUNC(sub_8215052C);
PPC_FUNC_IMPL(__imp__sub_8215052C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fb88
	sub_8214FB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150530"))) PPC_WEAK_FUNC(sub_82150530);
PPC_FUNC_IMPL(__imp__sub_82150530) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fc38
	sub_8214FC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150534"))) PPC_WEAK_FUNC(sub_82150534);
PPC_FUNC_IMPL(__imp__sub_82150534) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fcf8
	sub_8214FCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150538"))) PPC_WEAK_FUNC(sub_82150538);
PPC_FUNC_IMPL(__imp__sub_82150538) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fd48
	sub_8214FD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215053C"))) PPC_WEAK_FUNC(sub_8215053C);
PPC_FUNC_IMPL(__imp__sub_8215053C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fe60
	sub_8214FE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150540"))) PPC_WEAK_FUNC(sub_82150540);
PPC_FUNC_IMPL(__imp__sub_82150540) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214fec8
	sub_8214FEC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150544"))) PPC_WEAK_FUNC(sub_82150544);
PPC_FUNC_IMPL(__imp__sub_82150544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150548"))) PPC_WEAK_FUNC(sub_82150548);
PPC_FUNC_IMPL(__imp__sub_82150548) {
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
	// lwz r3,1160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// addi r10,r10,-27120
	ctx.r10.s64 = ctx.r10.s64 + -27120;
	// addi r9,r9,-27128
	ctx.r9.s64 = ctx.r9.s64 + -27128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x821505a0
	if (ctx.cr6.eq) goto loc_821505A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821505A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821505A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// bl 0x8214b2a8
	ctx.lr = 0x821505B4;
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

__attribute__((alias("__imp__sub_821505C8"))) PPC_WEAK_FUNC(sub_821505C8);
PPC_FUNC_IMPL(__imp__sub_821505C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821505d8
	if (ctx.cr6.lt) goto loc_821505D8;
	// b 0x8214b980
	sub_8214B980(ctx, base);
	return;
loc_821505D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821505E0"))) PPC_WEAK_FUNC(sub_821505E0);
PPC_FUNC_IMPL(__imp__sub_821505E0) {
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82150610
	if (ctx.cr0.eq) goto loc_82150610;
	// bl 0x821496f0
	ctx.lr = 0x82150608;
	sub_821496F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150618
	if (ctx.cr0.eq) goto loc_82150618;
loc_82150610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3a78
	ctx.lr = 0x82150618;
	sub_820F3A78(ctx, base);
loc_82150618:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215062C"))) PPC_WEAK_FUNC(sub_8215062C);
PPC_FUNC_IMPL(__imp__sub_8215062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150630"))) PPC_WEAK_FUNC(sub_82150630);
PPC_FUNC_IMPL(__imp__sub_82150630) {
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
	// bl 0x8214c728
	ctx.lr = 0x82150648;
	sub_8214C728(ctx, base);
	// lwz r3,1160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// bl 0x82159e50
	ctx.lr = 0x82150650;
	sub_82159E50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150664"))) PPC_WEAK_FUNC(sub_82150664);
PPC_FUNC_IMPL(__imp__sub_82150664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150668"))) PPC_WEAK_FUNC(sub_82150668);
PPC_FUNC_IMPL(__imp__sub_82150668) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8214b340
	sub_8214B340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150670"))) PPC_WEAK_FUNC(sub_82150670);
PPC_FUNC_IMPL(__imp__sub_82150670) {
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
	// lwz r4,1152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1156);
	// bl 0x82154110
	ctx.lr = 0x82150690;
	sub_82154110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bf58
	ctx.lr = 0x82150698;
	sub_8214BF58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821506AC"))) PPC_WEAK_FUNC(sub_821506AC);
PPC_FUNC_IMPL(__imp__sub_821506AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821506B0"))) PPC_WEAK_FUNC(sub_821506B0);
PPC_FUNC_IMPL(__imp__sub_821506B0) {
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821499e8
	ctx.lr = 0x821506D0;
	sub_821499E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bfd0
	ctx.lr = 0x821506D8;
	sub_8214BFD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821506EC"))) PPC_WEAK_FUNC(sub_821506EC);
PPC_FUNC_IMPL(__imp__sub_821506EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821506F0"))) PPC_WEAK_FUNC(sub_821506F0);
PPC_FUNC_IMPL(__imp__sub_821506F0) {
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
	ctx.lr = 0x82150718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150748
	if (ctx.cr0.eq) goto loc_82150748;
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150730
	if (ctx.cr6.eq) goto loc_82150730;
	// bl 0x82154878
	ctx.lr = 0x82150730;
	sub_82154878(ctx, base);
loc_82150730:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150740
	if (ctx.cr6.eq) goto loc_82150740;
	// bl 0x82159f50
	ctx.lr = 0x82150740;
	sub_82159F50(ctx, base);
loc_82150740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82150748;
	sub_8214D630(ctx, base);
loc_82150748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215075C"))) PPC_WEAK_FUNC(sub_8215075C);
PPC_FUNC_IMPL(__imp__sub_8215075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150760"))) PPC_WEAK_FUNC(sub_82150760);
PPC_FUNC_IMPL(__imp__sub_82150760) {
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
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x82150780;
	sub_821EA3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821507a0
	if (ctx.cr0.eq) goto loc_821507A0;
	// lwz r3,1160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// bl 0x82159f18
	ctx.lr = 0x82150790;
	sub_82159F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821507a0
	if (ctx.cr0.eq) goto loc_821507A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
loc_821507A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821507B4"))) PPC_WEAK_FUNC(sub_821507B4);
PPC_FUNC_IMPL(__imp__sub_821507B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821507B8"))) PPC_WEAK_FUNC(sub_821507B8);
PPC_FUNC_IMPL(__imp__sub_821507B8) {
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x821497e8
	ctx.lr = 0x821507D8;
	sub_821497E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821507fc
	if (ctx.cr0.eq) goto loc_821507FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821507FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821507FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150810"))) PPC_WEAK_FUNC(sub_82150810);
PPC_FUNC_IMPL(__imp__sub_82150810) {
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
	// lwz r3,-1392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// bl 0x82149878
	ctx.lr = 0x82150830;
	sub_82149878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215084c
	if (ctx.cr0.eq) goto loc_8215084C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215084C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215084C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150860"))) PPC_WEAK_FUNC(sub_82150860);
PPC_FUNC_IMPL(__imp__sub_82150860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82150998
	sub_82150998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150868"))) PPC_WEAK_FUNC(sub_82150868);
PPC_FUNC_IMPL(__imp__sub_82150868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82150998
	sub_82150998(ctx, base);
	return;
}

