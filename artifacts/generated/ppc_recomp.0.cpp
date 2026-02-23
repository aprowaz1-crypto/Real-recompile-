#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82080000"))) PPC_WEAK_FUNC(sub_82080000);
PPC_FUNC_IMPL(__imp__sub_82080000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82183850
	ctx.lr = 0x82080018;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82080040
	if (ctx.cr6.eq) goto loc_82080040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8208002C;
	sub_82183448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82080040:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8208004C;
	sub_821845A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080060"))) PPC_WEAK_FUNC(sub_82080060);
PPC_FUNC_IMPL(__imp__sub_82080060) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82183e40
	sub_82183E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82080068"))) PPC_WEAK_FUNC(sub_82080068);
PPC_FUNC_IMPL(__imp__sub_82080068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82182e90
	ctx.lr = 0x82080084;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8208008C;
	sub_82183078(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82080098;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_820800B4"))) PPC_WEAK_FUNC(sub_820800B4);
PPC_FUNC_IMPL(__imp__sub_820800B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820800B8"))) PPC_WEAK_FUNC(sub_820800B8);
PPC_FUNC_IMPL(__imp__sub_820800B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x820800D8;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,2124
	ctx.r9.s64 = ctx.r11.s64 + 2124;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,27136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27136, ctx.r31.u32);
	// bl 0x82184800
	ctx.lr = 0x820800FC;
	sub_82184800(ctx, base);
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

__attribute__((alias("__imp__sub_82080114"))) PPC_WEAK_FUNC(sub_82080114);
PPC_FUNC_IMPL(__imp__sub_82080114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080118"))) PPC_WEAK_FUNC(sub_82080118);
PPC_FUNC_IMPL(__imp__sub_82080118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82080120;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r29,64
	ctx.r29.s64 = 64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82080130:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080170
	if (ctx.cr6.eq) goto loc_82080170;
	// bl 0x82080878
	ctx.lr = 0x82080140;
	sub_82080878(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82080170
	if (ctx.cr6.eq) goto loc_82080170;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8208016c
	if (ctx.cr6.eq) goto loc_8208016C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82080160;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8208016C;
	sub_82183E40(ctx, base);
loc_8208016C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82080170:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82080130
	if (!ctx.cr0.eq) goto loc_82080130;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82080184"))) PPC_WEAK_FUNC(sub_82080184);
PPC_FUNC_IMPL(__imp__sub_82080184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080188"))) PPC_WEAK_FUNC(sub_82080188);
PPC_FUNC_IMPL(__imp__sub_82080188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82080190;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,64
	ctx.r30.s64 = 64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820801A0:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820801c0
	if (ctx.cr6.eq) goto loc_820801C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820801B4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820801C0;
	sub_82183E40(ctx, base);
loc_820801C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x820801a0
	if (!ctx.cr0.eq) goto loc_820801A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820801D4"))) PPC_WEAK_FUNC(sub_820801D4);
PPC_FUNC_IMPL(__imp__sub_820801D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820801D8"))) PPC_WEAK_FUNC(sub_820801D8);
PPC_FUNC_IMPL(__imp__sub_820801D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x820801F8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x82080208;
	sub_82183078(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82080220
	if (ctx.cr6.lt) goto loc_82080220;
	// bne cr6,0x82080228
	if (!ctx.cr6.eq) goto loc_82080228;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82080224
	goto loc_82080224;
loc_82080220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82080224:
	// bl 0x821830f8
	ctx.lr = 0x82080228;
	sub_821830F8(ctx, base);
loc_82080228:
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

__attribute__((alias("__imp__sub_82080244"))) PPC_WEAK_FUNC(sub_82080244);
PPC_FUNC_IMPL(__imp__sub_82080244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080248"))) PPC_WEAK_FUNC(sub_82080248);
PPC_FUNC_IMPL(__imp__sub_82080248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82080250;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82182e90
	ctx.lr = 0x82080260;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82080268;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82080274;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82080278;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82080284;
	sub_82183078(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8208028C;
	sub_821830F8(ctx, base);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82080298:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820802b4
	if (ctx.cr6.eq) goto loc_820802B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82080440
	ctx.lr = 0x820802AC;
	sub_82080440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820802c8
	if (!ctx.cr6.eq) goto loc_820802C8;
loc_820802B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x82080298
	if (ctx.cr6.lt) goto loc_82080298;
	// b 0x820802f8
	goto loc_820802F8;
loc_820802C8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820802f0
	if (ctx.cr6.eq) goto loc_820802F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820802E4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820802F0;
	sub_82183E40(ctx, base);
loc_820802F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
loc_820802F8:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82080300:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82080340
	if (ctx.cr6.eq) goto loc_82080340;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x82080300
	if (ctx.cr6.lt) goto loc_82080300;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x820803ac
	if (ctx.cr6.lt) goto loc_820803AC;
	// bne cr6,0x820803b4
	if (!ctx.cr6.eq) goto loc_820803B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82080330;
	sub_821830F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82080338;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82080340:
	// bl 0x82183850
	ctx.lr = 0x82080344;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208035c
	if (ctx.cr6.eq) goto loc_8208035C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x82080358;
	sub_82183448(ctx, base);
	// b 0x82080364
	goto loc_82080364;
loc_8208035C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82080364;
	sub_821845A0(ctx, base);
loc_82080364:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080378
	if (ctx.cr6.eq) goto loc_82080378;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82080470
	ctx.lr = 0x82080374;
	sub_82080470(ctx, base);
	// b 0x8208037c
	goto loc_8208037C;
loc_82080378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8208037C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u32);
	// blt cr6,0x820803ac
	if (ctx.cr6.lt) goto loc_820803AC;
	// bne cr6,0x820803b4
	if (!ctx.cr6.eq) goto loc_820803B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8208039C;
	sub_821830F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x820803A4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820803AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x820803B4;
	sub_821830F8(ctx, base);
loc_820803B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x820803BC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820803C4"))) PPC_WEAK_FUNC(sub_820803C4);
PPC_FUNC_IMPL(__imp__sub_820803C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820803C8"))) PPC_WEAK_FUNC(sub_820803C8);
PPC_FUNC_IMPL(__imp__sub_820803C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,2124
	ctx.r9.s64 = ctx.r11.s64 + 2124;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,27136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27136, ctx.r11.u32);
	// bl 0x82080188
	ctx.lr = 0x82080400;
	sub_82080188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82080408;
	sub_821857F0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82080424
	if (ctx.cr6.eq) goto loc_82080424;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82080420;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82080424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208043C"))) PPC_WEAK_FUNC(sub_8208043C);
PPC_FUNC_IMPL(__imp__sub_8208043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080440"))) PPC_WEAK_FUNC(sub_82080440);
PPC_FUNC_IMPL(__imp__sub_82080440) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82080458
	if (ctx.cr6.eq) goto loc_82080458;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82080458:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080470"))) PPC_WEAK_FUNC(sub_82080470);
PPC_FUNC_IMPL(__imp__sub_82080470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82080480:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82080480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82080480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208049C"))) PPC_WEAK_FUNC(sub_8208049C);
PPC_FUNC_IMPL(__imp__sub_8208049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820804A0"))) PPC_WEAK_FUNC(sub_820804A0);
PPC_FUNC_IMPL(__imp__sub_820804A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82081b78
	ctx.lr = 0x820804E4;
	sub_82081B78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820804F4"))) PPC_WEAK_FUNC(sub_820804F4);
PPC_FUNC_IMPL(__imp__sub_820804F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820804F8"))) PPC_WEAK_FUNC(sub_820804F8);
PPC_FUNC_IMPL(__imp__sub_820804F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_8208050C:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8208051C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82080534
	if (!ctx.cr6.eq) goto loc_82080534;
	// stfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// b 0x82080538
	goto loc_82080538;
loc_82080534:
	// stfsx f13,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
loc_82080538:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8208051c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208051C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8208050c
	if (ctx.cr6.lt) goto loc_8208050C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080550"))) PPC_WEAK_FUNC(sub_82080550);
PPC_FUNC_IMPL(__imp__sub_82080550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lbz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820e7c88
	ctx.lr = 0x82080578;
	sub_820E7C88(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82081348
	ctx.lr = 0x82080594;
	sub_82081348(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820805AC"))) PPC_WEAK_FUNC(sub_820805AC);
PPC_FUNC_IMPL(__imp__sub_820805AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820805B0"))) PPC_WEAK_FUNC(sub_820805B0);
PPC_FUNC_IMPL(__imp__sub_820805B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820805B8;
	sub_8224878C(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820e7560
	ctx.lr = 0x820805D8;
	sub_820E7560(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820805F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x820e7560
	ctx.lr = 0x8208061C;
	sub_820E7560(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82080634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x820e7560
	ctx.lr = 0x82080648;
	sub_820E7560(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82080660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82080678
	if (!ctx.cr6.gt) goto loc_82080678;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82080678:
	// lfs f13,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82080688
	if (!ctx.cr6.gt) goto loc_82080688;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_82080688:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x82080694;
	sub_821875F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lbz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82081348
	ctx.lr = 0x820806BC;
	sub_82081348(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820806C4"))) PPC_WEAK_FUNC(sub_820806C4);
PPC_FUNC_IMPL(__imp__sub_820806C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820806C8"))) PPC_WEAK_FUNC(sub_820806C8);
PPC_FUNC_IMPL(__imp__sub_820806C8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080778
	if (ctx.cr6.eq) goto loc_82080778;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820804f8
	ctx.lr = 0x820806F4;
	sub_820804F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2160
	ctx.r9.s64 = ctx.r10.s64 + 2160;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_82080708:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82080728
	if (ctx.cr6.eq) goto loc_82080728;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// blt cr6,0x82080708
	if (ctx.cr6.lt) goto loc_82080708;
	// b 0x82080768
	goto loc_82080768;
loc_82080728:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82080744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82080778
	if (ctx.cr6.eq) goto loc_82080778;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82080768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82080768:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82081348
	ctx.lr = 0x82080778;
	sub_82081348(ctx, base);
loc_82080778:
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

__attribute__((alias("__imp__sub_82080790"))) PPC_WEAK_FUNC(sub_82080790);
PPC_FUNC_IMPL(__imp__sub_82080790) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208085c
	if (ctx.cr6.eq) goto loc_8208085C;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82080828
	if (!ctx.cr6.lt) goto loc_82080828;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// ld r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// b 0x8208084c
	goto loc_8208084C;
loc_82080828:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820804f8
	ctx.lr = 0x82080830;
	sub_820804F8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,432(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
loc_8208084C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82081348
	ctx.lr = 0x8208085C;
	sub_82081348(ctx, base);
loc_8208085C:
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

__attribute__((alias("__imp__sub_82080874"))) PPC_WEAK_FUNC(sub_82080874);
PPC_FUNC_IMPL(__imp__sub_82080874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080878"))) PPC_WEAK_FUNC(sub_82080878);
PPC_FUNC_IMPL(__imp__sub_82080878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82080880;
	sub_8224878C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82080ae0
	if (!ctx.cr6.eq) goto loc_82080AE0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82080944
	if (!ctx.cr6.eq) goto loc_82080944;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// bl 0x82081b68
	ctx.lr = 0x820808D8;
	sub_82081B68(ctx, base);
	// lis r8,-32186
	ctx.r8.s64 = -2109341696;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,27140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27140);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x820a04f8
	ctx.lr = 0x820808EC;
	sub_820A04F8(ctx, base);
loc_820808EC:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820809a0
	if (ctx.cr6.eq) goto loc_820809A0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82080968
	if (!ctx.cr6.eq) goto loc_82080968;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stb r10,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r10.u8);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// bl 0x82081b78
	ctx.lr = 0x8208093C;
	sub_82081B78(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080944:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x82081ba8
	ctx.lr = 0x82080950;
	sub_82081BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820808ec
	if (!ctx.cr6.eq) goto loc_820808EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080968:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82080984
	if (!ctx.cr6.lt) goto loc_82080984;
	// bl 0x82080550
	ctx.lr = 0x8208097C;
	sub_82080550(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080984:
	// bne cr6,0x82080994
	if (!ctx.cr6.eq) goto loc_82080994;
	// bl 0x820805b0
	ctx.lr = 0x8208098C;
	sub_820805B0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080994:
	// bl 0x820806c8
	ctx.lr = 0x82080998;
	sub_820806C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820809A0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82080a00
	if (ctx.cr6.eq) goto loc_82080A00;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-20416
	ctx.r8.s64 = ctx.r10.s64 + -20416;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820809f0
	if (ctx.cr6.eq) goto loc_820809F0;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820809f0
	if (ctx.cr6.eq) goto loc_820809F0;
	// lwz r11,1240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820809f0
	if (ctx.cr6.eq) goto loc_820809F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82080790
	ctx.lr = 0x820809E8;
	sub_82080790(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820809F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820804a0
	ctx.lr = 0x820809F8;
	sub_820804A0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080A00:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82080acc
	if (ctx.cr6.eq) goto loc_82080ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82080A38;
	sub_820804F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82080a90
	if (ctx.cr6.eq) goto loc_82080A90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82080a6c
	if (!ctx.cr6.gt) goto loc_82080A6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82080a88
	goto loc_82080A88;
loc_82080A6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82080a88
	if (!ctx.cr6.lt) goto loc_82080A88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82080A88:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821875f8
	ctx.lr = 0x82080A90;
	sub_821875F8(ctx, base);
loc_82080A90:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82080A9C;
	sub_8208EA90(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82081348
	ctx.lr = 0x82080AC4;
	sub_82081348(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82080ACC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080ae0
	if (ctx.cr6.eq) goto loc_82080AE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82080790
	ctx.lr = 0x82080AE0;
	sub_82080790(ctx, base);
loc_82080AE0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82080AE8"))) PPC_WEAK_FUNC(sub_82080AE8);
PPC_FUNC_IMPL(__imp__sub_82080AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82080AF0;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r4,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r4.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r5.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r6,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r6.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// sth r31,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r31.u16);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// beq cr6,0x82080b44
	if (ctx.cr6.eq) goto loc_82080B44;
	// lwz r11,1284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1284);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// b 0x82080b88
	goto loc_82080B88;
loc_82080B44:
	// lis r4,22352
	ctx.r4.s64 = 1464860672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,20302
	ctx.r4.u64 = ctx.r4.u64 | 20302;
	// bl 0x821882d0
	ctx.lr = 0x82080B54;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080b88
	if (ctx.cr6.eq) goto loc_82080B88;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080b88
	if (ctx.cr6.eq) goto loc_82080B88;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// addi r9,r10,-20416
	ctx.r9.s64 = ctx.r10.s64 + -20416;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82080b88
	if (ctx.cr6.eq) goto loc_82080B88;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
loc_82080B88:
	// lis r4,21299
	ctx.r4.s64 = 1395851264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19799
	ctx.r4.u64 = ctx.r4.u64 | 19799;
	// bl 0x821882d0
	ctx.lr = 0x82080B98;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080bb0
	if (ctx.cr6.eq) goto loc_82080BB0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82080bb0
	if (ctx.cr6.eq) goto loc_82080BB0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82080BB0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x82080be8
	if (!ctx.cr6.eq) goto loc_82080BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x82081b98
	ctx.lr = 0x82080BE0;
	sub_82081B98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82080BE8:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82080c1c
	if (!ctx.cr6.eq) goto loc_82080C1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// stb r28,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82081b78
	ctx.lr = 0x82080C14;
	sub_82081B78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82080C1C:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,27136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// bl 0x82080248
	ctx.lr = 0x82080C2C;
	sub_82080248(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82080C34"))) PPC_WEAK_FUNC(sub_82080C34);
PPC_FUNC_IMPL(__imp__sub_82080C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080C38"))) PPC_WEAK_FUNC(sub_82080C38);
PPC_FUNC_IMPL(__imp__sub_82080C38) {
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
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r4.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r5,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r5.u8);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r6.u8);
	// stb r8,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r8.u8);
	// stb r8,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r8.u8);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// sth r11,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r11.u16);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stb r9,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r9.u8);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// bne cr6,0x82080cc8
	if (!ctx.cr6.eq) goto loc_82080CC8;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82081b98
	ctx.lr = 0x82080CB4;
	sub_82081B98(ctx, base);
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
loc_82080CC8:
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82080d04
	if (!ctx.cr6.eq) goto loc_82080D04;
	// stb r4,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r4.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82081b78
	ctx.lr = 0x82080CF0;
	sub_82081B78(ctx, base);
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
loc_82080D04:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,27136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// bl 0x82080248
	ctx.lr = 0x82080D14;
	sub_82080248(ctx, base);
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

__attribute__((alias("__imp__sub_82080D28"))) PPC_WEAK_FUNC(sub_82080D28);
PPC_FUNC_IMPL(__imp__sub_82080D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82080D30;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82080d60
	if (ctx.cr0.lt) goto loc_82080D60;
loc_82080D48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82080D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x82080d48
	if (!ctx.cr0.lt) goto loc_82080D48;
loc_82080D60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82080D68"))) PPC_WEAK_FUNC(sub_82080D68);
PPC_FUNC_IMPL(__imp__sub_82080D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82183850
	ctx.lr = 0x82080D80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82080da8
	if (ctx.cr6.eq) goto loc_82080DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82080D94;
	sub_82183448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82080DA8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82080DB4;
	sub_821845A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080DC8"))) PPC_WEAK_FUNC(sub_82080DC8);
PPC_FUNC_IMPL(__imp__sub_82080DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x82080DFC;
	sub_82183E40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82080e18
	if (ctx.cr6.eq) goto loc_82080E18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82080E14;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82080E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080E30"))) PPC_WEAK_FUNC(sub_82080E30);
PPC_FUNC_IMPL(__imp__sub_82080E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82080E38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r30,r11,3312
	ctx.r30.s64 = ctx.r11.s64 + 3312;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x82080E60;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82080e78
	if (ctx.cr6.eq) goto loc_82080E78;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82080E74;
	sub_82183448(ctx, base);
	// b 0x82080e80
	goto loc_82080E80;
loc_82080E78:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82080E80;
	sub_821845A0(ctx, base);
loc_82080E80:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x82080E94;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82080eac
	if (ctx.cr6.eq) goto loc_82080EAC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82080EA8;
	sub_82183448(ctx, base);
	// b 0x82080eb4
	goto loc_82080EB4;
loc_82080EAC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82080EB4;
	sub_821845A0(ctx, base);
loc_82080EB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x82080ED0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82080ef4
	if (ctx.cr6.eq) goto loc_82080EF4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82080EE4;
	sub_82183448(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82080EF4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82080EFC;
	sub_821845A0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82080F0C"))) PPC_WEAK_FUNC(sub_82080F0C);
PPC_FUNC_IMPL(__imp__sub_82080F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82080F10"))) PPC_WEAK_FUNC(sub_82080F10);
PPC_FUNC_IMPL(__imp__sub_82080F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x82080F40;
	sub_82183E40(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r9,3312
	ctx.r30.s64 = ctx.r9.s64 + 3312;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82183e40
	ctx.lr = 0x82080F58;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183e40
	ctx.lr = 0x82080F68;
	sub_82183E40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080F80"))) PPC_WEAK_FUNC(sub_82080F80);
PPC_FUNC_IMPL(__imp__sub_82080F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// lwz r11,27140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82080fe0
	if (!ctx.cr6.eq) goto loc_82080FE0;
	// bl 0x82183078
	ctx.lr = 0x82080FA8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82080FB4;
	sub_821837D0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x82080FBC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82080fd0
	if (ctx.cr6.eq) goto loc_82080FD0;
	// bl 0x82080e30
	ctx.lr = 0x82080FC8;
	sub_82080E30(ctx, base);
	// stw r3,27140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27140, ctx.r3.u32);
	// b 0x82080fd8
	goto loc_82080FD8;
loc_82080FD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27140, ctx.r11.u32);
loc_82080FD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82080FE0;
	sub_821837D0(ctx, base);
loc_82080FE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82080FF8"))) PPC_WEAK_FUNC(sub_82080FF8);
PPC_FUNC_IMPL(__imp__sub_82080FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32186
	ctx.r30.s64 = -2109341696;
	// lwz r31,27140(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82081030
	if (ctx.cr6.eq) goto loc_82081030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080f10
	ctx.lr = 0x82081024;
	sub_82080F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82081030;
	sub_82183E40(ctx, base);
loc_82081030:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27140, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081050"))) PPC_WEAK_FUNC(sub_82081050);
PPC_FUNC_IMPL(__imp__sub_82081050) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x82081128
	if (ctx.cr6.gt) {
		sub_82081128(ctx, base);
		return;
	}
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4208
	ctx.r12.s64 = ctx.r12.s64 + 4208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82081070"))) PPC_WEAK_FUNC(sub_82081070);
PPC_FUNC_IMPL(__imp__sub_82081070) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,4272(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4272);
	// lwz r16,4280(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4280);
	// lwz r16,4288(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4288);
	// lwz r16,4296(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4296);
	// lwz r16,4304(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4304);
	// lwz r16,4312(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4312);
	// lwz r16,4320(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4320);
	// lwz r16,4328(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4328);
	// lwz r16,4336(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4336);
	// lwz r16,4344(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4344);
	// lwz r16,4352(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4352);
	// lwz r16,4360(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4360);
	// lwz r16,4368(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4368);
	// lwz r16,4376(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4376);
	// lwz r16,4384(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4384);
	// lwz r16,4304(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4304);
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810B8"))) PPC_WEAK_FUNC(sub_820810B8);
PPC_FUNC_IMPL(__imp__sub_820810B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810C0"))) PPC_WEAK_FUNC(sub_820810C0);
PPC_FUNC_IMPL(__imp__sub_820810C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810C8"))) PPC_WEAK_FUNC(sub_820810C8);
PPC_FUNC_IMPL(__imp__sub_820810C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810D0"))) PPC_WEAK_FUNC(sub_820810D0);
PPC_FUNC_IMPL(__imp__sub_820810D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810D8"))) PPC_WEAK_FUNC(sub_820810D8);
PPC_FUNC_IMPL(__imp__sub_820810D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810E0"))) PPC_WEAK_FUNC(sub_820810E0);
PPC_FUNC_IMPL(__imp__sub_820810E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810E8"))) PPC_WEAK_FUNC(sub_820810E8);
PPC_FUNC_IMPL(__imp__sub_820810E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810F0"))) PPC_WEAK_FUNC(sub_820810F0);
PPC_FUNC_IMPL(__imp__sub_820810F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820810F8"))) PPC_WEAK_FUNC(sub_820810F8);
PPC_FUNC_IMPL(__imp__sub_820810F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081100"))) PPC_WEAK_FUNC(sub_82081100);
PPC_FUNC_IMPL(__imp__sub_82081100) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081108"))) PPC_WEAK_FUNC(sub_82081108);
PPC_FUNC_IMPL(__imp__sub_82081108) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081110"))) PPC_WEAK_FUNC(sub_82081110);
PPC_FUNC_IMPL(__imp__sub_82081110) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081118"))) PPC_WEAK_FUNC(sub_82081118);
PPC_FUNC_IMPL(__imp__sub_82081118) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081120"))) PPC_WEAK_FUNC(sub_82081120);
PPC_FUNC_IMPL(__imp__sub_82081120) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081128"))) PPC_WEAK_FUNC(sub_82081128);
PPC_FUNC_IMPL(__imp__sub_82081128) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081130"))) PPC_WEAK_FUNC(sub_82081130);
PPC_FUNC_IMPL(__imp__sub_82081130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82081138;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82081390
	ctx.lr = 0x8208114C;
	sub_82081390(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081290
	if (ctx.cr6.eq) goto loc_82081290;
	// bl 0x822488d0
	ctx.lr = 0x8208115C;
	sub_822488D0(ctx, base);
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r8,r11,26215
	ctx.r8.u64 = ctx.r11.u64 | 26215;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulhw r7,r3,r8
	ctx.r7.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32)) >> 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r30,r11,90
	ctx.r30.s64 = ctx.r11.s64 + 90;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82081b68
	ctx.lr = 0x820811B4;
	sub_82081B68(ctx, base);
	// lbz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x82081050
	ctx.lr = 0x820811BC;
	sub_82081050(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82081290
	if (ctx.cr6.eq) goto loc_82081290;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r3,r27,1248
	ctx.r3.s64 = ctx.r27.s64 + 1248;
	// bne cr6,0x820811d8
	if (!ctx.cr6.eq) goto loc_820811D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820811D8:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820811E4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081290
	if (ctx.cr6.eq) goto loc_82081290;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82081290
	if (ctx.cr6.eq) goto loc_82081290;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,404(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82081228
	if (!ctx.cr6.gt) goto loc_82081228;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82081244
	goto loc_82081244;
loc_82081228:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82081244
	if (!ctx.cr6.lt) goto loc_82081244;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82081244:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821875f8
	ctx.lr = 0x8208124C;
	sub_821875F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7588
	ctx.lr = 0x82081258;
	sub_820E7588(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// bl 0x820820b0
	ctx.lr = 0x82081290;
	sub_820820B0(ctx, base);
loc_82081290:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82081298"))) PPC_WEAK_FUNC(sub_82081298);
PPC_FUNC_IMPL(__imp__sub_82081298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820812d0
	if (ctx.cr6.eq) goto loc_820812D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820812D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820812D0:
	// lis r30,-32186
	ctx.r30.s64 = -2109341696;
	// lwz r3,27144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820812f4
	if (ctx.cr6.eq) goto loc_820812F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820812F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820812F4:
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27144, ctx.r11.u32);
	// lwz r3,27148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081320
	if (ctx.cr6.eq) goto loc_82081320;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82081320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82081320:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081340"))) PPC_WEAK_FUNC(sub_82081340);
PPC_FUNC_IMPL(__imp__sub_82081340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081348"))) PPC_WEAK_FUNC(sub_82081348);
PPC_FUNC_IMPL(__imp__sub_82081348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,52
	ctx.xer.ca = ctx.r11.u32 > 4294967243;
	ctx.r11.s64 = ctx.r11.s64 + 52;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// b 0x820820b0
	sub_820820B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081388"))) PPC_WEAK_FUNC(sub_82081388);
PPC_FUNC_IMPL(__imp__sub_82081388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208138C"))) PPC_WEAK_FUNC(sub_8208138C);
PPC_FUNC_IMPL(__imp__sub_8208138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081390"))) PPC_WEAK_FUNC(sub_82081390);
PPC_FUNC_IMPL(__imp__sub_82081390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r10,27144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820813a8
	if (!ctx.cr6.eq) goto loc_820813A8;
loc_820813A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820813A8:
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bge cr6,0x820813a0
	if (!ctx.cr6.lt) goto loc_820813A0;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r11,52
	ctx.xer.ca = ctx.r11.u32 > 4294967243;
	ctx.r11.s64 = ctx.r11.s64 + 52;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820813a0
	if (ctx.cr0.eq) goto loc_820813A0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820813C8"))) PPC_WEAK_FUNC(sub_820813C8);
PPC_FUNC_IMPL(__imp__sub_820813C8) {
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
	ctx.lr = 0x820813D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820813f0
	if (ctx.cr6.eq) goto loc_820813F0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x820813EC;
	sub_82183448(ctx, base);
	// b 0x820813f8
	goto loc_820813F8;
loc_820813F0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820813F8;
	sub_821845A0(ctx, base);
loc_820813F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208141c
	if (ctx.cr6.eq) goto loc_8208141C;
	// bl 0x820832c8
	ctx.lr = 0x82081404;
	sub_820832C8(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,27148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208141C:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27148, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081438"))) PPC_WEAK_FUNC(sub_82081438);
PPC_FUNC_IMPL(__imp__sub_82081438) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081578
	if (ctx.cr6.eq) goto loc_82081578;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081578
	if (ctx.cr6.eq) goto loc_82081578;
	// lbz r4,1(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82081578
	if (ctx.cr6.gt) goto loc_82081578;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820814ac
	// bdzf 4*cr6+eq,0x820814c4
	// bdzf 4*cr6+eq,0x820814fc
	// bdzf 4*cr6+eq,0x82081518
	// bdzf 4*cr6+eq,0x820814dc
	// bdzf 4*cr6+eq,0x82081534
	// bdzf 4*cr6+eq,0x82081574
	// bne cr6,0x82081554
	if (!ctx.cr6.eq) goto loc_82081554;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82081ee8
	ctx.lr = 0x82081498;
	sub_82081EE8(ctx, base);
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
loc_820814AC:
	// bl 0x82081f60
	ctx.lr = 0x820814B0;
	sub_82081F60(ctx, base);
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
loc_820814C4:
	// bl 0x82081fa0
	ctx.lr = 0x820814C8;
	sub_82081FA0(ctx, base);
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
loc_820814DC:
	// bl 0x82081fe8
	ctx.lr = 0x820814E0;
	sub_82081FE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82081578
	if (ctx.cr6.eq) goto loc_82081578;
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
loc_820814FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82081fc0
	ctx.lr = 0x82081504;
	sub_82081FC0(ctx, base);
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
loc_82081518:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82081fc0
	ctx.lr = 0x82081520;
	sub_82081FC0(ctx, base);
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
loc_82081534:
	// bl 0x82082010
	ctx.lr = 0x82081538;
	sub_82082010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82081578
	if (ctx.cr6.eq) goto loc_82081578;
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
loc_82081554:
	// bl 0x82082078
	ctx.lr = 0x82081558;
	sub_82082078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82081578
	if (ctx.cr6.eq) goto loc_82081578;
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
loc_82081574:
	// bl 0x82081f80
	ctx.lr = 0x82081578;
	sub_82081F80(ctx, base);
loc_82081578:
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

__attribute__((alias("__imp__sub_8208158C"))) PPC_WEAK_FUNC(sub_8208158C);
PPC_FUNC_IMPL(__imp__sub_8208158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081590"))) PPC_WEAK_FUNC(sub_82081590);
PPC_FUNC_IMPL(__imp__sub_82081590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820815c0
	if (ctx.cr6.eq) goto loc_820815C0;
	// bl 0x8241dd3c
	ctx.lr = 0x820815BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_820815C0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820815d0
	if (ctx.cr6.eq) goto loc_820815D0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_820815D0:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd4c
	ctx.lr = 0x820815DC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081600"))) PPC_WEAK_FUNC(sub_82081600);
PPC_FUNC_IMPL(__imp__sub_82081600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82081608;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x82081624
	if (!ctx.cr6.eq) goto loc_82081624;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82081624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8208162C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8208163C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208165c
	if (ctx.cr6.eq) goto loc_8208165C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208165C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208165C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,8(r31)
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8208163c
	if (!ctx.cr0.eq) goto loc_8208163C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82081670;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8208167C"))) PPC_WEAK_FUNC(sub_8208167C);
PPC_FUNC_IMPL(__imp__sub_8208167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081680"))) PPC_WEAK_FUNC(sub_82081680);
PPC_FUNC_IMPL(__imp__sub_82081680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82081688;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x820816a4
	if (!ctx.cr6.eq) goto loc_820816A4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_820816A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820816AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// stw r29,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r29.u32);
loc_820816C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820816d8
	if (ctx.cr6.eq) goto loc_820816D8;
	// lwz r9,3148(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820816ec
	if (ctx.cr6.eq) goto loc_820816EC;
loc_820816D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x820816c0
	if (ctx.cr6.lt) goto loc_820816C0;
	// stw r8,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r8.u32);
loc_820816EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820816F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82081700"))) PPC_WEAK_FUNC(sub_82081700);
PPC_FUNC_IMPL(__imp__sub_82081700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82081708;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,27144(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82081730
	if (!ctx.cr6.eq) goto loc_82081730;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82081730:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8208173C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// stw r29,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r29.u32);
	// lwzx r10,r27,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82081778
	if (ctx.cr6.eq) goto loc_82081778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82081764;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82081778:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82081788:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82081788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82081788;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,127
	ctx.r10.s64 = ctx.r11.s64 + 127;
	// rlwinm r9,r10,0,16,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF80;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// bl 0x8241dd2c
	ctx.lr = 0x820817AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r3,8312
	ctx.r3.s64 = 8312;
	// bl 0x82080000
	ctx.lr = 0x820817B8;
	sub_82080000(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820817d0
	if (ctx.cr6.eq) goto loc_820817D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82082cf8
	ctx.lr = 0x820817CC;
	sub_82082CF8(ctx, base);
	// b 0x820817d4
	goto loc_820817D4;
loc_820817D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820817D4:
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820817E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820817F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82081800"))) PPC_WEAK_FUNC(sub_82081800);
PPC_FUNC_IMPL(__imp__sub_82081800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82081808;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,27144(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82081898
	if (ctx.cr6.eq) goto loc_82081898;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8208182C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82081840:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081850
	if (ctx.cr6.eq) goto loc_82081850;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
loc_82081850:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081860
	if (ctx.cr6.eq) goto loc_82081860;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
loc_82081860:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081870
	if (ctx.cr6.eq) goto loc_82081870;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
loc_82081870:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081880
	if (ctx.cr6.eq) goto loc_82081880;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
loc_82081880:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x82081840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82081840;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82081890;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_82081898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820818A0"))) PPC_WEAK_FUNC(sub_820818A0);
PPC_FUNC_IMPL(__imp__sub_820818A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82081600
	sub_82081600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820818B4"))) PPC_WEAK_FUNC(sub_820818B4);
PPC_FUNC_IMPL(__imp__sub_820818B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820818B8"))) PPC_WEAK_FUNC(sub_820818B8);
PPC_FUNC_IMPL(__imp__sub_820818B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82081968
	if (!ctx.cr6.eq) goto loc_82081968;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208191c
	if (!ctx.cr6.eq) goto loc_8208191C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r3,27140(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27140);
	// bl 0x820a04f8
	ctx.lr = 0x8208190C;
	sub_820A04F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208191C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82081934
	if (ctx.cr6.eq) goto loc_82081934;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82081934
	if (ctx.cr6.eq) goto loc_82081934;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82081968
	if (!ctx.cr6.eq) goto loc_82081968;
loc_82081934:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r11,27140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27140);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x820a04f8
	ctx.lr = 0x82081968;
	sub_820A04F8(ctx, base);
loc_82081968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081978"))) PPC_WEAK_FUNC(sub_82081978);
PPC_FUNC_IMPL(__imp__sub_82081978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,3320
	ctx.r9.s64 = ctx.r11.s64 + 3320;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,27144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27144, ctx.r30.u32);
	// bl 0x82081600
	ctx.lr = 0x820819B0;
	sub_82081600(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8209eda0
	ctx.lr = 0x820819B8;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8209eda0
	ctx.lr = 0x820819C0;
	sub_8209EDA0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820819dc
	if (ctx.cr6.eq) goto loc_820819DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820819D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_820819DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820819ec
	if (ctx.cr6.eq) goto loc_820819EC;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_820819EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081A04"))) PPC_WEAK_FUNC(sub_82081A04);
PPC_FUNC_IMPL(__imp__sub_82081A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081A08"))) PPC_WEAK_FUNC(sub_82081A08);
PPC_FUNC_IMPL(__imp__sub_82081A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82081A10;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32186
	ctx.r26.s64 = -2109341696;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r8,27144(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27144);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82081b58
	if (ctx.cr6.eq) goto loc_82081B58;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82081A3C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82081a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82081A3C;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82081ad8
	if (!ctx.cr6.eq) goto loc_82081AD8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82081A5C:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// bge cr6,0x82081aac
	if (!ctx.cr6.lt) goto loc_82081AAC;
	// add r11,r29,r8
	ctx.r11.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r30,r11,52
	ctx.xer.ca = ctx.r11.u32 > 4294967243;
	ctx.r30.s64 = ctx.r11.s64 + 52;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82081aac
	if (ctx.cr0.eq) goto loc_82081AAC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081aac
	if (ctx.cr6.eq) goto loc_82081AAC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82081A80:
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82081438
	ctx.lr = 0x82081A94;
	sub_82081438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82081ac0
	if (!ctx.cr6.eq) goto loc_82081AC0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// blt cr6,0x82081a80
	if (ctx.cr6.lt) goto loc_82081A80;
	// lwz r8,27144(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27144);
loc_82081AAC:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x82081a5c
	if (ctx.cr6.lt) goto loc_82081A5C;
	// b 0x82081b4c
	goto loc_82081B4C;
loc_82081AC0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820818b8
	ctx.lr = 0x82081ACC;
	sub_820818B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82081AD8:
	// bge cr6,0x82081b58
	if (!ctx.cr6.lt) goto loc_82081B58;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic. r30,r11,52
	ctx.xer.ca = ctx.r11.u32 > 4294967243;
	ctx.r30.s64 = ctx.r11.s64 + 52;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82081b58
	if (ctx.cr0.eq) goto loc_82081B58;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081b58
	if (ctx.cr6.eq) goto loc_82081B58;
	// lbz r11,1(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82081b34
	if (!ctx.cr6.eq) goto loc_82081B34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82081B08:
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82081438
	ctx.lr = 0x82081B1C;
	sub_82081438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82081ac0
	if (!ctx.cr6.eq) goto loc_82081AC0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// blt cr6,0x82081b08
	if (ctx.cr6.lt) goto loc_82081B08;
	// b 0x82081b4c
	goto loc_82081B4C;
loc_82081B34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82081438
	ctx.lr = 0x82081B44;
	sub_82081438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82081ac0
	if (!ctx.cr6.eq) goto loc_82081AC0;
loc_82081B4C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820818b8
	ctx.lr = 0x82081B58;
	sub_820818B8(ctx, base);
loc_82081B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82081B64"))) PPC_WEAK_FUNC(sub_82081B64);
PPC_FUNC_IMPL(__imp__sub_82081B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081B68"))) PPC_WEAK_FUNC(sub_82081B68);
PPC_FUNC_IMPL(__imp__sub_82081B68) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82081a08
	sub_82081A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081B74"))) PPC_WEAK_FUNC(sub_82081B74);
PPC_FUNC_IMPL(__imp__sub_82081B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081B78"))) PPC_WEAK_FUNC(sub_82081B78);
PPC_FUNC_IMPL(__imp__sub_82081B78) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82081a08
	sub_82081A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081B84"))) PPC_WEAK_FUNC(sub_82081B84);
PPC_FUNC_IMPL(__imp__sub_82081B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081B88"))) PPC_WEAK_FUNC(sub_82081B88);
PPC_FUNC_IMPL(__imp__sub_82081B88) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82081a08
	sub_82081A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081B94"))) PPC_WEAK_FUNC(sub_82081B94);
PPC_FUNC_IMPL(__imp__sub_82081B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081B98"))) PPC_WEAK_FUNC(sub_82081B98);
PPC_FUNC_IMPL(__imp__sub_82081B98) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82081a08
	sub_82081A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081BA4"))) PPC_WEAK_FUNC(sub_82081BA4);
PPC_FUNC_IMPL(__imp__sub_82081BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081BA8"))) PPC_WEAK_FUNC(sub_82081BA8);
PPC_FUNC_IMPL(__imp__sub_82081BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82081a08
	ctx.lr = 0x82081BE0;
	sub_82081A08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081BF0"))) PPC_WEAK_FUNC(sub_82081BF0);
PPC_FUNC_IMPL(__imp__sub_82081BF0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x82081C1C;
	sub_82081590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r10,r11,3320
	ctx.r10.s64 = ctx.r11.s64 + 3320;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821a07b0
	ctx.lr = 0x82081C30;
	sub_821A07B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x821a0720
	ctx.lr = 0x82081C38;
	sub_821A0720(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82081C48:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r30,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82081c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82081C48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r31,27144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27144, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081C90"))) PPC_WEAK_FUNC(sub_82081C90);
PPC_FUNC_IMPL(__imp__sub_82081C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82081978
	ctx.lr = 0x82081CB0;
	sub_82081978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82081ccc
	if (ctx.cr6.eq) goto loc_82081CCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82081CC8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82081CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081CE4"))) PPC_WEAK_FUNC(sub_82081CE4);
PPC_FUNC_IMPL(__imp__sub_82081CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081CE8"))) PPC_WEAK_FUNC(sub_82081CE8);
PPC_FUNC_IMPL(__imp__sub_82081CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// lwz r11,27144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82081d60
	if (!ctx.cr6.eq) goto loc_82081D60;
	// bl 0x82183078
	ctx.lr = 0x82081D10;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82081D1C;
	sub_821837D0(ctx, base);
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x82081D24;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081d38
	if (ctx.cr6.eq) goto loc_82081D38;
	// bl 0x82081bf0
	ctx.lr = 0x82081D30;
	sub_82081BF0(ctx, base);
	// stw r3,27144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27144, ctx.r3.u32);
	// b 0x82081d40
	goto loc_82081D40;
loc_82081D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27144, ctx.r11.u32);
loc_82081D40:
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82080000
	ctx.lr = 0x82081D48;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82081d54
	if (ctx.cr6.eq) goto loc_82081D54;
	// bl 0x820800b8
	ctx.lr = 0x82081D54;
	sub_820800B8(ctx, base);
loc_82081D54:
	// bl 0x820813c8
	ctx.lr = 0x82081D58;
	sub_820813C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82081D60;
	sub_821837D0(ctx, base);
loc_82081D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081D78"))) PPC_WEAK_FUNC(sub_82081D78);
PPC_FUNC_IMPL(__imp__sub_82081D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82081D80;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82184800
	ctx.lr = 0x82081DAC;
	sub_82184800(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82081DD0"))) PPC_WEAK_FUNC(sub_82081DD0);
PPC_FUNC_IMPL(__imp__sub_82081DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82081DD8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82081e0c
	if (ctx.cr0.lt) goto loc_82081E0C;
loc_82081DF4:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82081E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82081df4
	if (!ctx.cr0.lt) goto loc_82081DF4;
loc_82081E0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82081E14"))) PPC_WEAK_FUNC(sub_82081E14);
PPC_FUNC_IMPL(__imp__sub_82081E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081E18"))) PPC_WEAK_FUNC(sub_82081E18);
PPC_FUNC_IMPL(__imp__sub_82081E18) {
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
	// lwz r10,3152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,213
	ctx.r11.s64 = ctx.r10.s64 + 213;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82081e70
	if (ctx.cr6.eq) goto loc_82081E70;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 * 432;
	// mulli r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 * 432;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821198a8
	ctx.lr = 0x82081E5C;
	sub_821198A8(ctx, base);
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
loc_82081E70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1448
	ctx.lr = 0x82081E78;
	sub_821A1448(ctx, base);
	// lwz r11,3152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,159
	ctx.r11.s64 = ctx.r11.s64 + 159;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821a1eb0
	ctx.lr = 0x82081EA0;
	sub_821A1EB0(ctx, base);
	// lwz r10,3152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r10,159
	ctx.r11.s64 = ctx.r10.s64 + 159;
	// mulli r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 * 432;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8211a9e8
	ctx.lr = 0x82081EC8;
	sub_8211A9E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a11e8
	ctx.lr = 0x82081ED0;
	sub_821A11E8(ctx, base);
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

__attribute__((alias("__imp__sub_82081EE4"))) PPC_WEAK_FUNC(sub_82081EE4);
PPC_FUNC_IMPL(__imp__sub_82081EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82081EE8"))) PPC_WEAK_FUNC(sub_82081EE8);
PPC_FUNC_IMPL(__imp__sub_82081EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82081EF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,3152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82081f58
	if (!ctx.cr6.lt) goto loc_82081F58;
	// addi r9,r11,532
	ctx.r9.s64 = ctx.r11.s64 + 532;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mulli r29,r11,432
	ctx.r29.s64 = ctx.r11.s64 * 432;
	// stb r8,1872(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1872, ctx.r8.u8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stwx r4,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// stb r5,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r5.u8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82119b88
	ctx.lr = 0x82081F48;
	sub_82119B88(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8211a108
	ctx.lr = 0x82081F58;
	sub_8211A108(ctx, base);
loc_82081F58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82081F60"))) PPC_WEAK_FUNC(sub_82081F60);
PPC_FUNC_IMPL(__imp__sub_82081F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r4,432
	ctx.r11.s64 = ctx.r4.s64 * 432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82119d90
	sub_82119D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081F7C"))) PPC_WEAK_FUNC(sub_82081F7C);
PPC_FUNC_IMPL(__imp__sub_82081F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081F80"))) PPC_WEAK_FUNC(sub_82081F80);
PPC_FUNC_IMPL(__imp__sub_82081F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r4,432
	ctx.r11.s64 = ctx.r4.s64 * 432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82119e48
	sub_82119E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081F9C"))) PPC_WEAK_FUNC(sub_82081F9C);
PPC_FUNC_IMPL(__imp__sub_82081F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081FA0"))) PPC_WEAK_FUNC(sub_82081FA0);
PPC_FUNC_IMPL(__imp__sub_82081FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r4,432
	ctx.r11.s64 = ctx.r4.s64 * 432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82119f88
	sub_82119F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081FBC"))) PPC_WEAK_FUNC(sub_82081FBC);
PPC_FUNC_IMPL(__imp__sub_82081FBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081FC0"))) PPC_WEAK_FUNC(sub_82081FC0);
PPC_FUNC_IMPL(__imp__sub_82081FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 * 432;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821196a8
	sub_821196A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82081FE4"))) PPC_WEAK_FUNC(sub_82081FE4);
PPC_FUNC_IMPL(__imp__sub_82081FE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82081FE8"))) PPC_WEAK_FUNC(sub_82081FE8);
PPC_FUNC_IMPL(__imp__sub_82081FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82081ffc
	if (ctx.cr6.lt) goto loc_82081FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82081FFC:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082010"))) PPC_WEAK_FUNC(sub_82082010);
PPC_FUNC_IMPL(__imp__sub_82082010) {
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
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8208203c
	if (ctx.cr6.lt) goto loc_8208203C;
loc_82082028:
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
loc_8208203C:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082028
	if (ctx.cr6.eq) goto loc_82082028;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r4,432
	ctx.r11.s64 = ctx.r4.s64 * 432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8211a040
	ctx.lr = 0x8208205C;
	sub_8211A040(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82082078"))) PPC_WEAK_FUNC(sub_82082078);
PPC_FUNC_IMPL(__imp__sub_82082078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8208208c
	if (ctx.cr6.lt) goto loc_8208208C;
loc_82082084:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8208208C:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82082084
	if (ctx.cr6.eq) goto loc_82082084;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r4,432
	ctx.r11.s64 = ctx.r4.s64 * 432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821196c0
	sub_821196C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820820AC"))) PPC_WEAK_FUNC(sub_820820AC);
PPC_FUNC_IMPL(__imp__sub_820820AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820820B0"))) PPC_WEAK_FUNC(sub_820820B0);
PPC_FUNC_IMPL(__imp__sub_820820B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3152);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 * 432;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8211a170
	sub_8211A170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820820D4"))) PPC_WEAK_FUNC(sub_820820D4);
PPC_FUNC_IMPL(__imp__sub_820820D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820820D8"))) PPC_WEAK_FUNC(sub_820820D8);
PPC_FUNC_IMPL(__imp__sub_820820D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820820E0;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// addi r31,r10,272
	ctx.r31.s64 = ctx.r10.s64 + 272;
	// bgt cr6,0x82082180
	if (ctx.cr6.gt) goto loc_82082180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82082124
	// bdzf 4*cr6+eq,0x8208212c
	// bdzf 4*cr6+eq,0x82082134
	// bdzf 4*cr6+eq,0x82082180
	// bdzf 4*cr6+eq,0x82082160
	// bdzf 4*cr6+eq,0x82082168
	// bne cr6,0x82082170
	if (!ctx.cr6.eq) goto loc_82082170;
loc_82082124:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82082174
	goto loc_82082174;
loc_8208212C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82082174
	goto loc_82082174;
loc_82082134:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82082154
	if (!ctx.cr6.eq) goto loc_82082154;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82248910
	ctx.lr = 0x82082150;
	sub_82248910(ctx, base);
	// b 0x82082180
	goto loc_82082180;
loc_82082154:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82248910
	ctx.lr = 0x8208215C;
	sub_82248910(ctx, base);
	// b 0x82082180
	goto loc_82082180;
loc_82082160:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82082174
	goto loc_82082174;
loc_82082168:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x82082174
	goto loc_82082174;
loc_82082170:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82082174:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82248910
	ctx.lr = 0x82082180;
	sub_82248910(ctx, base);
loc_82082180:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82082260
	if (ctx.cr6.gt) goto loc_82082260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820821a8
	// bdzf 4*cr6+eq,0x82082228
	// bdzf 4*cr6+eq,0x82082260
	// bdzf 4*cr6+eq,0x82082260
	// bne cr6,0x820821e8
	if (!ctx.cr6.eq) goto loc_820821E8;
loc_820821A8:
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x820821BC;
	sub_8218A5F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x820821C8;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82082260
	if (ctx.cr6.eq) goto loc_82082260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82248910
	ctx.lr = 0x820821E0;
	sub_82248910(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820821E8:
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x820821FC;
	sub_8218A5F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x82082208;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82082260
	if (ctx.cr6.eq) goto loc_82082260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82248910
	ctx.lr = 0x82082220;
	sub_82248910(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82082228:
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x8208223C;
	sub_8218A5F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x82082248;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82082260
	if (ctx.cr6.eq) goto loc_82082260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82248910
	ctx.lr = 0x82082260;
	sub_82248910(ctx, base);
loc_82082260:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82082268"))) PPC_WEAK_FUNC(sub_82082268);
PPC_FUNC_IMPL(__imp__sub_82082268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218a810
	ctx.lr = 0x82082280;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820822a8
	if (ctx.cr6.eq) goto loc_820822A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82082294;
	sub_8218AC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820822A8:
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

__attribute__((alias("__imp__sub_820822C0"))) PPC_WEAK_FUNC(sub_820822C0);
PPC_FUNC_IMPL(__imp__sub_820822C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218a810
	ctx.lr = 0x820822D8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082300
	if (ctx.cr6.eq) goto loc_82082300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820822EC;
	sub_8218AE98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82082300:
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

__attribute__((alias("__imp__sub_82082318"))) PPC_WEAK_FUNC(sub_82082318);
PPC_FUNC_IMPL(__imp__sub_82082318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f11,-68(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f8,-56(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f7,-52(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f6,-48(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f5,-44(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f4,-40(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f3,-36(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f2,-32(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f1,-28(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f31,-24(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f30,-20(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r6.u64);
	// std r5,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r5.u64);
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// std r9,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r9.u64);
	// std r8,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r8.u64);
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082408"))) PPC_WEAK_FUNC(sub_82082408);
PPC_FUNC_IMPL(__imp__sub_82082408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82082410;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820824b0
	if (ctx.cr6.eq) goto loc_820824B0;
	// lwz r11,3104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820824b0
	if (ctx.cr6.eq) goto loc_820824B0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,2
	ctx.r26.s64 = 2;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
loc_82082444:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208249c
	if (ctx.cr6.eq) goto loc_8208249C;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r10,546(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 546);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8208249c
	if (!ctx.cr6.eq) goto loc_8208249C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r3,-19232(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19232);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x821a0ad0
	ctx.lr = 0x82082470;
	sub_821A0AD0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stb r3,291(r11)
	PPC_STORE_U8(ctx.r11.u32 + 291, ctx.r3.u8);
	// bne cr6,0x8208249c
	if (!ctx.cr6.eq) goto loc_8208249C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8211a040
	ctx.lr = 0x82082490;
	sub_8211A040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8208249c
	if (ctx.cr6.eq) goto loc_8208249C;
	// stbx r26,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u8);
loc_8208249C:
	// lwz r11,3104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3104);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,432
	ctx.r29.s64 = ctx.r29.s64 + 432;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82082444
	if (ctx.cr6.lt) goto loc_82082444;
loc_820824B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820824B8"))) PPC_WEAK_FUNC(sub_820824B8);
PPC_FUNC_IMPL(__imp__sub_820824B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82183850
	ctx.lr = 0x820824D0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x820824E0;
	sub_82183078(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820824EC;
	sub_821830F8(ctx, base);
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

__attribute__((alias("__imp__sub_82082504"))) PPC_WEAK_FUNC(sub_82082504);
PPC_FUNC_IMPL(__imp__sub_82082504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082508"))) PPC_WEAK_FUNC(sub_82082508);
PPC_FUNC_IMPL(__imp__sub_82082508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82082510;
	sub_82248780(ctx, base);
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
	// addi r8,r11,3500
	ctx.r8.s64 = ctx.r11.s64 + 3500;
	// addi r7,r10,3492
	ctx.r7.s64 = ctx.r10.s64 + 3492;
	// addi r6,r9,3484
	ctx.r6.s64 = ctx.r9.s64 + 3484;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// addi r26,r3,64
	ctx.r26.s64 = ctx.r3.s64 + 64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// ori r29,r11,44624
	ctx.r29.u64 = ctx.r11.u64 | 44624;
loc_82082554:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r3,-19232(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19232);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x821a0bb8
	ctx.lr = 0x82082564;
	sub_821A0BB8(ctx, base);
	// addi r31,r31,432
	ctx.r31.s64 = ctx.r31.s64 + 432;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82082554
	if (ctx.cr6.lt) goto loc_82082554;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820825b4
	if (ctx.cr6.eq) goto loc_820825B4;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// mulli r10,r9,432
	ctx.r10.s64 = ctx.r9.s64 * 432;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x820825a8
	if (ctx.cr0.lt) goto loc_820825A8;
loc_82082594:
	// addi r29,r29,-432
	ctx.r29.s64 = ctx.r29.s64 + -432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a8d0
	ctx.lr = 0x820825A0;
	sub_8211A8D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82082594
	if (!ctx.cr0.lt) goto loc_82082594;
loc_820825A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820825B4;
	sub_82183E40(ctx, base);
loc_820825B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,8280
	ctx.r31.s64 = ctx.r30.s64 + 8280;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// li r29,254
	ctx.r29.s64 = 254;
loc_820825C4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a1ea0
	ctx.lr = 0x820825D0;
	sub_821A1EA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x820825c4
	if (!ctx.cr0.lt) goto loc_820825C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82185a50
	ctx.lr = 0x820825E0;
	sub_82185A50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821857f0
	ctx.lr = 0x820825E8;
	sub_821857F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b208
	ctx.lr = 0x820825F0;
	sub_8218B208(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820825F8"))) PPC_WEAK_FUNC(sub_820825F8);
PPC_FUNC_IMPL(__imp__sub_820825F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x820828e8
	sub_820828E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082600"))) PPC_WEAK_FUNC(sub_82082600);
PPC_FUNC_IMPL(__imp__sub_82082600) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x820828e8
	sub_820828E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082608"))) PPC_WEAK_FUNC(sub_82082608);
PPC_FUNC_IMPL(__imp__sub_82082608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82082610;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82183850
	ctx.lr = 0x82082628;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82082634;
	sub_82183078(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8208263C;
	sub_821830F8(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r4,204
	ctx.r4.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,21572(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21572);
	// bl 0x82182ea0
	ctx.lr = 0x82082650;
	sub_82182EA0(ctx, base);
	// lwz r9,3152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3152);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mulli r10,r9,432
	ctx.r10.s64 = ctx.r9.s64 * 432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8211a4c0
	ctx.lr = 0x82082670;
	sub_8211A4C0(ctx, base);
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182ea0
	ctx.lr = 0x8208267C;
	sub_82182EA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820804f8
	ctx.lr = 0x82082684;
	sub_820804F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,3152(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3152);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mulli r10,r6,432
	ctx.r10.s64 = ctx.r6.s64 * 432;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8211a2a0
	ctx.lr = 0x820826BC;
	sub_8211A2A0(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x820826d8
	if (ctx.cr6.lt) goto loc_820826D8;
	// bne cr6,0x820826e0
	if (!ctx.cr6.eq) goto loc_820826E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820826D0;
	sub_821830F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820826D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x820826E0;
	sub_821830F8(ctx, base);
loc_820826E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820826E8"))) PPC_WEAK_FUNC(sub_820826E8);
PPC_FUNC_IMPL(__imp__sub_820826E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820826F0;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r4,2
	ctx.r31.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820827cc
	if (ctx.cr6.eq) goto loc_820827CC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8208270C:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82087ab0
	ctx.lr = 0x8208271C;
	sub_82087AB0(ctx, base);
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r7,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r7.u16);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// bne cr6,0x820827c0
	if (!ctx.cr6.eq) goto loc_820827C0;
	// lbz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r9,117(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r7,123(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// lbz r6,122(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r5,121(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lbz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// stb r5,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r5.u8);
	// stb r4,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r4.u8);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r11,213
	ctx.r3.s64 = ctx.r11.s64 + 213;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfiwx f12,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.f12.u32);
loc_820827C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x8208270c
	if (!ctx.cr0.eq) goto loc_8208270C;
loc_820827CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820827D4"))) PPC_WEAK_FUNC(sub_820827D4);
PPC_FUNC_IMPL(__imp__sub_820827D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820827D8"))) PPC_WEAK_FUNC(sub_820827D8);
PPC_FUNC_IMPL(__imp__sub_820827D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82082834
	if (!ctx.cr6.eq) goto loc_82082834;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82082834:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208283C"))) PPC_WEAK_FUNC(sub_8208283C);
PPC_FUNC_IMPL(__imp__sub_8208283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082840"))) PPC_WEAK_FUNC(sub_82082840);
PPC_FUNC_IMPL(__imp__sub_82082840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x820828d8
	if (!ctx.cr6.eq) goto loc_820828D8;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// stb r3,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r3.u8);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
loc_820828D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820828E4"))) PPC_WEAK_FUNC(sub_820828E4);
PPC_FUNC_IMPL(__imp__sub_820828E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820828E8"))) PPC_WEAK_FUNC(sub_820828E8);
PPC_FUNC_IMPL(__imp__sub_820828E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82082508
	ctx.lr = 0x82082908;
	sub_82082508(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82082924
	if (ctx.cr6.eq) goto loc_82082924;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82082920;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82082924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208293C"))) PPC_WEAK_FUNC(sub_8208293C);
PPC_FUNC_IMPL(__imp__sub_8208293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082940"))) PPC_WEAK_FUNC(sub_82082940);
PPC_FUNC_IMPL(__imp__sub_82082940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82082948;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82082970
	if (!ctx.cr6.lt) goto loc_82082970;
	// bl 0x82182e90
	ctx.lr = 0x82082968;
	sub_82182E90(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82082974
	goto loc_82082974;
loc_82082970:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82082974:
	// bl 0x82183078
	ctx.lr = 0x82082978;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82082984;
	sub_821837D0(ctx, base);
	// bl 0x82183848
	ctx.lr = 0x82082988;
	sub_82183848(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x8208299C;
	sub_8218AA18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x820829fc
	if (!ctx.cr6.eq) goto loc_820829FC;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82082c64
	if (ctx.cr6.lt) goto loc_82082C64;
loc_820829FC:
	// li r4,16000
	ctx.r4.s64 = 16000;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82082A08;
	sub_8218A810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082a8c
	if (ctx.cr6.eq) goto loc_82082A8C;
	// bl 0x82183850
	ctx.lr = 0x82082A18;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82082A24;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82082A2C;
	sub_821830F8(ctx, base);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa58
	ctx.lr = 0x82082A38;
	sub_8218AA58(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x8218ae98
	ctx.lr = 0x82082A4C;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820826e8
	ctx.lr = 0x82082A5C;
	sub_820826E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82082A68;
	sub_82183E40(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82082a80
	if (ctx.cr6.lt) goto loc_82082A80;
	// bne cr6,0x82082a9c
	if (!ctx.cr6.eq) goto loc_82082A9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82082A7C;
	sub_821830F8(ctx, base);
	// b 0x82082a9c
	goto loc_82082A9C;
loc_82082A80:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82082A88;
	sub_821830F8(ctx, base);
	// b 0x82082a9c
	goto loc_82082A9C;
loc_82082A8C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82082840
	ctx.lr = 0x82082A94;
	sub_82082840(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82082A9C:
	// lis r11,151
	ctx.r11.s64 = 9895936;
	// ori r10,r11,46117
	ctx.r10.u64 = ctx.r11.u64 | 46117;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82082ac0
	if (ctx.cr6.gt) goto loc_82082AC0;
	// mulli r11,r25,432
	ctx.r11.s64 = ctx.r25.s64 * 432;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82082ac4
	if (!ctx.cr6.gt) goto loc_82082AC4;
loc_82082AC0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82082AC4:
	// bl 0x82080d68
	ctx.lr = 0x82082AC8;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82082b00
	if (ctx.cr6.eq) goto loc_82082B00;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// addic. r31,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x82082af8
	if (ctx.cr0.lt) goto loc_82082AF8;
loc_82082AE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a930
	ctx.lr = 0x82082AEC;
	sub_8211A930(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,432
	ctx.r29.s64 = ctx.r29.s64 + 432;
	// bge 0x82082ae4
	if (!ctx.cr0.lt) goto loc_82082AE4;
loc_82082AF8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82082b04
	goto loc_82082B04;
loc_82082B00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82082B04:
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,-19232(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19232);
	// bl 0x82183840
	ctx.lr = 0x82082B14;
	sub_82183840(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82082c58
	if (ctx.cr6.eq) goto loc_82082C58;
loc_82082B20:
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82082B2C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082b4c
	if (ctx.cr6.eq) goto loc_82082B4C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218af88
	ctx.lr = 0x82082B40;
	sub_8218AF88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82082b5c
	if (!ctx.cr6.eq) goto loc_82082B5C;
loc_82082B4C:
	// lwz r11,3152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3152, ctx.r11.u32);
	// b 0x82082c4c
	goto loc_82082C4C;
loc_82082B5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x82082B68;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082b84
	if (ctx.cr6.eq) goto loc_82082B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x82082B7C;
	sub_8218AE98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82082b88
	goto loc_82082B88;
loc_82082B84:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82082B88:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x82082B94;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082bb0
	if (ctx.cr6.eq) goto loc_82082BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x82082BA8;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82082bb4
	goto loc_82082BB4;
loc_82082BB0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82082BB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x82082BC0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82082bdc
	if (ctx.cr6.eq) goto loc_82082BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82082BD4;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82082be0
	goto loc_82082BE0;
loc_82082BDC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82082BE0:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82082608
	ctx.lr = 0x82082BF0;
	sub_82082608(ctx, base);
	// lwz r11,3152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3152);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mulli r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 * 432;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821a0b28
	ctx.lr = 0x82082C08;
	sub_821A0B28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82081e18
	ctx.lr = 0x82082C14;
	sub_82081E18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82082C20;
	sub_82183E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82082C2C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82082C34;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82082C40;
	sub_82183E40(ctx, base);
	// lwz r11,3152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3152);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,3152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3152, ctx.r10.u32);
loc_82082C4C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82082b20
	if (ctx.cr6.lt) goto loc_82082B20;
loc_82082C58:
	// bl 0x82183848
	ctx.lr = 0x82082C5C;
	sub_82183848(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3148, ctx.r11.u32);
loc_82082C64:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x82082C6C;
	sub_8218A7F0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x82082C74;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82082C80"))) PPC_WEAK_FUNC(sub_82082C80);
PPC_FUNC_IMPL(__imp__sub_82082C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-19224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19224);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82082ce4
	if (!ctx.cr6.lt) goto loc_82082CE4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82082ce4
	if (!ctx.cr6.eq) goto loc_82082CE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82082CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82082CF0"))) PPC_WEAK_FUNC(sub_82082CF0);
PPC_FUNC_IMPL(__imp__sub_82082CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82082940
	sub_82082940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82082CF4"))) PPC_WEAK_FUNC(sub_82082CF4);
PPC_FUNC_IMPL(__imp__sub_82082CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082CF8"))) PPC_WEAK_FUNC(sub_82082CF8);
PPC_FUNC_IMPL(__imp__sub_82082CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82082D00;
	sub_82248784(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x82082D10;
	sub_8218B1E8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82185740
	ctx.lr = 0x82082D20;
	sub_82185740(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x82082D34;
	sub_821859A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r7,r10,3500
	ctx.r7.s64 = ctx.r10.s64 + 3500;
	// addi r6,r9,3492
	ctx.r6.s64 = ctx.r9.s64 + 3492;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r5,r8,3484
	ctx.r5.s64 = ctx.r8.s64 + 3484;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r27,r31,3156
	ctx.r27.s64 = ctx.r31.s64 + 3156;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// stw r28,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r28.u32);
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
	// stw r28,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82082D7C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82082d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82082D7C;
	// addi r29,r31,3180
	ctx.r29.s64 = ctx.r31.s64 + 3180;
	// li r30,254
	ctx.r30.s64 = 254;
loc_82082D90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a1580
	ctx.lr = 0x82082D98;
	sub_821A1580(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// bge 0x82082d90
	if (!ctx.cr0.lt) goto loc_82082D90;
	// lwz r11,8284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8284);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r10,8284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8284, ctx.r10.u32);
	// addi r30,r31,8284
	ctx.r30.s64 = ctx.r31.s64 + 8284;
	// lwz r9,8284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8284);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,8284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8284, ctx.r8.u32);
	// stw r28,8288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8288, ctx.r28.u32);
	// lwz r7,8292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8292);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,8292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8292, ctx.r6.u32);
	// lwz r11,8292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8292);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,8292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8292, ctx.r10.u32);
	// stw r28,8296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8296, ctx.r28.u32);
	// lwz r9,8300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8300);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,8300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8300, ctx.r8.u32);
	// lwz r7,8300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8300);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,8300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8300, ctx.r6.u32);
	// stw r28,8304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8304, ctx.r28.u32);
	// bl 0x82184800
	ctx.lr = 0x82082E0C;
	sub_82184800(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,339
	ctx.r3.s64 = ctx.r31.s64 + 339;
	// bl 0x82184800
	ctx.lr = 0x82082E1C;
	sub_82184800(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,594
	ctx.r3.s64 = ctx.r31.s64 + 594;
	// bl 0x82184800
	ctx.lr = 0x82082E2C;
	sub_82184800(ctx, base);
	// li r5,1020
	ctx.r5.s64 = 1020;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x82184800
	ctx.lr = 0x82082E3C;
	sub_82184800(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1872
	ctx.r3.s64 = ctx.r31.s64 + 1872;
	// bl 0x82184800
	ctx.lr = 0x82082E4C;
	sub_82184800(ctx, base);
	// li r5,1020
	ctx.r5.s64 = 1020;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// bl 0x82184800
	ctx.lr = 0x82082E5C;
	sub_82184800(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820820d8
	ctx.lr = 0x82082E68;
	sub_820820D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82188748
	ctx.lr = 0x82082E74;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82082ed8
	if (!ctx.cr6.eq) goto loc_82082ED8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215bfd0
	ctx.lr = 0x82082E84;
	sub_8215BFD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82082ec4
	if (ctx.cr6.eq) goto loc_82082EC4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215bee8
	ctx.lr = 0x82082E94;
	sub_8215BEE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82082940
	ctx.lr = 0x82082EA8;
	sub_82082940(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82082EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82082ee0
	goto loc_82082EE0;
loc_82082EC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82082ED4;
	sub_8218B2D0(ctx, base);
	// b 0x82082ee0
	goto loc_82082EE0;
loc_82082ED8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
loc_82082EE0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,3536
	ctx.r4.s64 = ctx.r10.s64 + 3536;
	// lwz r29,-19020(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x82082EF8;
	sub_8218A540(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x82082F08;
	sub_821A7758(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r8,3520
	ctx.r4.s64 = ctx.r8.s64 + 3520;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,8292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8292, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,8296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8296, ctx.r6.u32);
	// bl 0x8218a540
	ctx.lr = 0x82082F2C;
	sub_8218A540(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x82082F3C;
	sub_821A7758(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r27,r11,28328
	ctx.r27.s64 = ctx.r11.s64 + 28328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r9,8300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8300, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8304, ctx.r8.u32);
	// bl 0x821a78b0
	ctx.lr = 0x82082F68;
	sub_821A78B0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// bl 0x82082c80
	ctx.lr = 0x82082F84;
	sub_82082C80(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82082fbc
	if (!ctx.cr6.eq) goto loc_82082FBC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a8180
	ctx.lr = 0x82082F9C;
	sub_821A8180(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a78b0
	ctx.lr = 0x82082FAC;
	sub_821A78B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82082FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,8280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8280, ctx.r28.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82082FCC"))) PPC_WEAK_FUNC(sub_82082FCC);
PPC_FUNC_IMPL(__imp__sub_82082FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82082FD0"))) PPC_WEAK_FUNC(sub_82082FD0);
PPC_FUNC_IMPL(__imp__sub_82082FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x821a8848
	ctx.lr = 0x8208300C;
	sub_821A8848(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208301C"))) PPC_WEAK_FUNC(sub_8208301C);
PPC_FUNC_IMPL(__imp__sub_8208301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083020"))) PPC_WEAK_FUNC(sub_82083020);
PPC_FUNC_IMPL(__imp__sub_82083020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82083028;
	sub_8224877C(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3084(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3084);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820832b4
	if (ctx.cr6.eq) goto loc_820832B4;
	// lwz r11,3088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820832b4
	if (ctx.cr6.eq) goto loc_820832B4;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r30,-19048(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82083058;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820832b4
	if (ctx.cr6.eq) goto loc_820832B4;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// addi r29,r11,192
	ctx.r29.s64 = ctx.r11.s64 + 192;
	// bl 0x821a0750
	ctx.lr = 0x82083074;
	sub_821A0750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x8208307C;
	sub_821A2A60(ctx, base);
	// bl 0x821a9880
	ctx.lr = 0x82083080;
	sub_821A9880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82083088;
	sub_821A2A60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82083094;
	sub_821A2A60(ctx, base);
	// addi r4,r3,608
	ctx.r4.s64 = ctx.r3.s64 + 608;
	// addi r5,r28,624
	ctx.r5.s64 = ctx.r28.s64 + 624;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a0808
	ctx.lr = 0x820830A4;
	sub_821A0808(ctx, base);
	// ld r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8220);
	// bl 0x82082fd0
	ctx.lr = 0x820830AC;
	sub_82082FD0(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,27148(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27148);
	// lwz r25,32(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82083198
	if (ctx.cr6.eq) goto loc_82083198;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// addi r4,r31,8236
	ctx.r4.s64 = ctx.r31.s64 + 8236;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,3560
	ctx.r5.s64 = ctx.r10.s64 + 3560;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821a8c78
	ctx.lr = 0x820830FC;
	sub_821A8C78(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,211
	ctx.r4.s64 = 211;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a90a8
	ctx.lr = 0x82083118;
	sub_821A90A8(ctx, base);
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x82083120;
	sub_821A2A60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,312
	ctx.r10.s64 = ctx.r1.s64 + 312;
	// addi r9,r3,168
	ctx.r9.s64 = ctx.r3.s64 + 168;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82083130:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82083130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82083130;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82082318
	ctx.lr = 0x82083144;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,207
	ctx.r4.s64 = 207;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a90a8
	ctx.lr = 0x82083158;
	sub_821A90A8(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,-12408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12408);
	// ld r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x82083194;
	sub_821A8E50(ctx, base);
	// b 0x820831cc
	goto loc_820831CC;
loc_82083198:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r4,r31,8228
	ctx.r4.s64 = ctx.r31.s64 + 8228;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,3548
	ctx.r5.s64 = ctx.r10.s64 + 3548;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821a8c78
	ctx.lr = 0x820831CC;
	sub_821A8C78(ctx, base);
loc_820831CC:
	// lwz r11,3088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3088);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82083254
	if (!ctx.cr6.gt) goto loc_82083254;
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
loc_820831E8:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82083240
	if (!ctx.cr6.eq) goto loc_82083240;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,-19232(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19232);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821a0a88
	ctx.lr = 0x82083204;
	sub_821A0A88(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8208322c
	if (ctx.cr6.lt) goto loc_8208322C;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8208321C;
	sub_8209EDA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82119768
	ctx.lr = 0x82083228;
	sub_82119768(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_8208322C:
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8211a040
	ctx.lr = 0x82083234;
	sub_8211A040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82083240
	if (!ctx.cr6.eq) goto loc_82083240;
	// stbx r28,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r28.u8);
loc_82083240:
	// lwz r11,3088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3088);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,432
	ctx.r30.s64 = ctx.r30.s64 + 432;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820831e8
	if (ctx.cr6.lt) goto loc_820831E8;
loc_82083254:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8208328c
	if (!ctx.cr6.eq) goto loc_8208328C;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r31,8228
	ctx.r4.s64 = ctx.r31.s64 + 8228;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x82083284;
	sub_821A8DC0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8208328C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r31,8236
	ctx.r4.s64 = ctx.r31.s64 + 8236;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x820832B4;
	sub_821A8DC0(ctx, base);
loc_820832B4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820832BC"))) PPC_WEAK_FUNC(sub_820832BC);
PPC_FUNC_IMPL(__imp__sub_820832BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820832C0"))) PPC_WEAK_FUNC(sub_820832C0);
PPC_FUNC_IMPL(__imp__sub_820832C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82083340
	sub_82083340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820832C8"))) PPC_WEAK_FUNC(sub_820832C8);
PPC_FUNC_IMPL(__imp__sub_820832C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820832E8;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x821859a0
	ctx.lr = 0x820832FC;
	sub_821859A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,3588
	ctx.r8.s64 = ctx.r10.s64 + 3588;
	// addi r7,r9,3580
	ctx.r7.s64 = ctx.r9.s64 + 3580;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,3576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083340"))) PPC_WEAK_FUNC(sub_82083340);
PPC_FUNC_IMPL(__imp__sub_82083340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3588
	ctx.r9.s64 = ctx.r11.s64 + 3588;
	// addi r8,r10,3580
	ctx.r8.s64 = ctx.r10.s64 + 3580;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x8208337C;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82083384;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820833a0
	if (ctx.cr6.eq) goto loc_820833A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8208339C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820833A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820833B8"))) PPC_WEAK_FUNC(sub_820833B8);
PPC_FUNC_IMPL(__imp__sub_820833B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// lwz r3,27152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820833ec
	if (ctx.cr6.eq) goto loc_820833EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820833EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820833EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27152, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083408"))) PPC_WEAK_FUNC(sub_82083408);
PPC_FUNC_IMPL(__imp__sub_82083408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82083410;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,-14444
	ctx.r9.s64 = ctx.r11.s64 + -14444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,27152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27152, ctx.r31.u32);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822aa648
	ctx.lr = 0x82083444;
	sub_822AA648(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82083448;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x821837d0
	ctx.lr = 0x82083454;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218aa18
	ctx.lr = 0x82083468;
	sub_8218AA18(ctx, base);
	// li r4,6005
	ctx.r4.s64 = 6005;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a810
	ctx.lr = 0x82083474;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82083490
	if (ctx.cr6.eq) goto loc_82083490;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218ae98
	ctx.lr = 0x82083488;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82083494
	goto loc_82083494;
loc_82083490:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82083494:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r10,101(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821847a8
	ctx.lr = 0x820834D0;
	sub_821847A8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82083584
	if (!ctx.cr6.gt) goto loc_82083584;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_820834E0:
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,11(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r6,15(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r5,14(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r8,13(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r9,19(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r3,17(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r3,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r3.u8);
	// stb r8,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stwu r7,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820834e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820834E0;
loc_82083584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218b440
	ctx.lr = 0x82083590;
	sub_8218B440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8208359C;
	sub_82183E40(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a7f0
	ctx.lr = 0x820835A4;
	sub_8218A7F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820835AC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820835B8"))) PPC_WEAK_FUNC(sub_820835B8);
PPC_FUNC_IMPL(__imp__sub_820835B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820835C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82083630
	if (!ctx.cr6.eq) goto loc_82083630;
	// bl 0x82183078
	ctx.lr = 0x820835E4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820835F0;
	sub_821837D0(ctx, base);
	// li r3,2064
	ctx.r3.s64 = 2064;
	// bl 0x82080000
	ctx.lr = 0x820835F8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083620
	if (ctx.cr6.eq) goto loc_82083620;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82083408
	ctx.lr = 0x8208360C;
	sub_82083408(ctx, base);
	// stw r3,27152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27152, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82083618;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82083620:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,27152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27152, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82083630;
	sub_821837D0(ctx, base);
loc_82083630:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82083638"))) PPC_WEAK_FUNC(sub_82083638);
PPC_FUNC_IMPL(__imp__sub_82083638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82083640;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,76(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// blt cr6,0x8208369c
	if (ctx.cr6.lt) goto loc_8208369C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82083668:
	// bl 0x8218b858
	ctx.lr = 0x8208366C;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083694
	if (!ctx.cr6.eq) goto loc_82083694;
loc_82083674:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-4924
	ctx.r31.s64 = ctx.r11.s64 + -4924;
	// addi r5,r10,3660
	ctx.r5.s64 = ctx.r10.s64 + 3660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8218a5f0
	ctx.lr = 0x82083690;
	sub_8218A5F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82083694:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8208369C:
	// cmplwi cr6,r31,25000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25000, ctx.xer);
	// blt cr6,0x820836b8
	if (ctx.cr6.lt) goto loc_820836B8;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82083668
	goto loc_82083668;
loc_820836B8:
	// cmplwi cr6,r31,20000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20000, ctx.xer);
	// blt cr6,0x820836d4
	if (ctx.cr6.lt) goto loc_820836D4;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82083668
	goto loc_82083668;
loc_820836D4:
	// li r28,12
	ctx.r28.s64 = 12;
loc_820836D8:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820836fc
	if (ctx.cr6.eq) goto loc_820836FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b858
	ctx.lr = 0x820836F4;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083694
	if (!ctx.cr6.eq) goto loc_82083694;
loc_820836FC:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x820836d8
	if (ctx.cr6.lt) goto loc_820836D8;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218b858
	ctx.lr = 0x8208371C;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083674
	if (ctx.cr6.eq) goto loc_82083674;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8208372C"))) PPC_WEAK_FUNC(sub_8208372C);
PPC_FUNC_IMPL(__imp__sub_8208372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083730"))) PPC_WEAK_FUNC(sub_82083730);
PPC_FUNC_IMPL(__imp__sub_82083730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82083738;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,76(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// blt cr6,0x82083790
	if (ctx.cr6.lt) goto loc_82083790;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82083760:
	// bl 0x8218b858
	ctx.lr = 0x82083764;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083788
	if (!ctx.cr6.eq) goto loc_82083788;
loc_8208376C:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r8,r9,-4928
	ctx.r8.s64 = ctx.r9.s64 + -4928;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r11,-4928(r9)
	PPC_STORE_U16(ctx.r9.u32 + -4928, ctx.r11.u16);
	// sth r10,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r10.u16);
loc_82083788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083790:
	// cmplwi cr6,r31,25000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25000, ctx.xer);
	// blt cr6,0x820837ac
	if (ctx.cr6.lt) goto loc_820837AC;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82083760
	goto loc_82083760;
loc_820837AC:
	// cmplwi cr6,r31,20000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20000, ctx.xer);
	// blt cr6,0x820837c8
	if (ctx.cr6.lt) goto loc_820837C8;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82083760
	goto loc_82083760;
loc_820837C8:
	// li r28,12
	ctx.r28.s64 = 12;
loc_820837CC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820837f0
	if (ctx.cr6.eq) goto loc_820837F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b858
	ctx.lr = 0x820837E8;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82083788
	if (!ctx.cr6.eq) goto loc_82083788;
loc_820837F0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x820837cc
	if (ctx.cr6.lt) goto loc_820837CC;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218b858
	ctx.lr = 0x82083810;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208376c
	if (ctx.cr6.eq) goto loc_8208376C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82083820"))) PPC_WEAK_FUNC(sub_82083820);
PPC_FUNC_IMPL(__imp__sub_82083820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82083828;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,76(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// blt cr6,0x82083860
	if (ctx.cr6.lt) goto loc_82083860;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8218b858
	ctx.lr = 0x82083858;
	sub_8218B858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083860:
	// cmplwi cr6,r31,25000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25000, ctx.xer);
	// blt cr6,0x82083884
	if (ctx.cr6.lt) goto loc_82083884;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8218b858
	ctx.lr = 0x8208387C;
	sub_8218B858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083884:
	// cmplwi cr6,r31,20000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20000, ctx.xer);
	// blt cr6,0x820838a8
	if (ctx.cr6.lt) goto loc_820838A8;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218b858
	ctx.lr = 0x820838A0;
	sub_8218B858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820838A8:
	// li r28,12
	ctx.r28.s64 = 12;
loc_820838AC:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820838d0
	if (ctx.cr6.eq) goto loc_820838D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b858
	ctx.lr = 0x820838C8;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820838dc
	if (!ctx.cr6.eq) goto loc_820838DC;
loc_820838D0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x820838ac
	if (ctx.cr6.lt) goto loc_820838AC;
loc_820838DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820838E4"))) PPC_WEAK_FUNC(sub_820838E4);
PPC_FUNC_IMPL(__imp__sub_820838E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820838E8"))) PPC_WEAK_FUNC(sub_820838E8);
PPC_FUNC_IMPL(__imp__sub_820838E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820838F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// blt cr6,0x82083928
	if (ctx.cr6.lt) goto loc_82083928;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82083910:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r27,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82083928:
	// cmplwi cr6,r29,25000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 25000, ctx.xer);
	// blt cr6,0x8208393c
	if (ctx.cr6.lt) goto loc_8208393C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82083910
	goto loc_82083910;
loc_8208393C:
	// cmplwi cr6,r29,20000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20000, ctx.xer);
	// blt cr6,0x82083950
	if (ctx.cr6.lt) goto loc_82083950;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82083910
	goto loc_82083910;
loc_82083950:
	// li r28,12
	ctx.r28.s64 = 12;
loc_82083954:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82083998
	if (ctx.cr6.eq) goto loc_82083998;
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b858
	ctx.lr = 0x82083974;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820839b0
	if (!ctx.cr6.eq) goto loc_820839B0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218b858
	ctx.lr = 0x82083990;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820839c0
	if (!ctx.cr6.eq) goto loc_820839C0;
loc_82083998:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x82083954
	if (ctx.cr6.lt) goto loc_82083954;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820839B0:
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820839C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820839CC"))) PPC_WEAK_FUNC(sub_820839CC);
PPC_FUNC_IMPL(__imp__sub_820839CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820839D0"))) PPC_WEAK_FUNC(sub_820839D0);
PPC_FUNC_IMPL(__imp__sub_820839D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820839D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,76(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// blt cr6,0x82083a10
	if (ctx.cr6.lt) goto loc_82083A10;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8218b6e0
	ctx.lr = 0x82083A08;
	sub_8218B6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083A10:
	// cmplwi cr6,r31,25000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25000, ctx.xer);
	// blt cr6,0x82083a34
	if (ctx.cr6.lt) goto loc_82083A34;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8218b6e0
	ctx.lr = 0x82083A2C;
	sub_8218B6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083A34:
	// cmplwi cr6,r31,20000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20000, ctx.xer);
	// blt cr6,0x82083a58
	if (ctx.cr6.lt) goto loc_82083A58;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218b6e0
	ctx.lr = 0x82083A50;
	sub_8218B6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82083A58:
	// li r28,12
	ctx.r28.s64 = 12;
loc_82083A5C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82083a80
	if (ctx.cr6.eq) goto loc_82083A80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b6e0
	ctx.lr = 0x82083A78;
	sub_8218B6E0(ctx, base);
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bne cr6,0x82083a8c
	if (!ctx.cr6.eq) goto loc_82083A8C;
loc_82083A80:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// blt cr6,0x82083a5c
	if (ctx.cr6.lt) goto loc_82083A5C;
loc_82083A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82083A94"))) PPC_WEAK_FUNC(sub_82083A94);
PPC_FUNC_IMPL(__imp__sub_82083A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82083A98"))) PPC_WEAK_FUNC(sub_82083A98);
PPC_FUNC_IMPL(__imp__sub_82083A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-4904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083acc
	if (ctx.cr6.eq) goto loc_82083ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82083ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82083ACC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4904, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083AE8"))) PPC_WEAK_FUNC(sub_82083AE8);
PPC_FUNC_IMPL(__imp__sub_82083AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82083AF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82083b98
	if (!ctx.cr6.gt) goto loc_82083B98;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r5,r9,r7
	ctx.r5.s32 = ctx.r9.s32 / ctx.r7.s32;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// mullw r10,r5,r7
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// andc r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r30.u64;
	// twllei r7,0
	// subf. r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r5,-1
	// beq 0x82083b60
	if (ctx.cr0.eq) goto loc_82083B60;
loc_82083B34:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// divw r29,r30,r10
	ctx.r29.s32 = ctx.r30.s32 / ctx.r10.s32;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twllei r10,0
	// subf. r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r5,-1
	// bne 0x82083b34
	if (!ctx.cr0.eq) goto loc_82083B34;
loc_82083B60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82083b98
	if (!ctx.cr6.gt) goto loc_82083B98;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// divw r8,r7,r11
	ctx.r8.s32 = ctx.r7.s32 / ctx.r11.s32;
	// twllei r11,0
	// twlgei r5,-1
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// twllei r11,0
	// twlgei r10,-1
loc_82083B98:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82083bbc
	if (!ctx.cr6.eq) goto loc_82083BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3680
	ctx.r5.s64 = ctx.r11.s64 + 3680;
	// bl 0x8218a5f0
	ctx.lr = 0x82083BB8;
	sub_8218A5F0(ctx, base);
	// b 0x82083bc8
	goto loc_82083BC8;
loc_82083BBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3664
	ctx.r5.s64 = ctx.r11.s64 + 3664;
	// bl 0x8218a5f0
	ctx.lr = 0x82083BC8;
	sub_8218A5F0(ctx, base);
loc_82083BC8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82083BCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82083bcc
	if (!ctx.cr6.eq) goto loc_82083BCC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82083BF0"))) PPC_WEAK_FUNC(sub_82083BF0);
PPC_FUNC_IMPL(__imp__sub_82083BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,3596
	ctx.r10.s64 = ctx.r11.s64 + 3596;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820ed2a8
	ctx.lr = 0x82083C1C;
	sub_820ED2A8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82083c38
	if (ctx.cr6.eq) goto loc_82083C38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82083C34;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82083C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083C50"))) PPC_WEAK_FUNC(sub_82083C50);
PPC_FUNC_IMPL(__imp__sub_82083C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183850
	ctx.lr = 0x82083C64;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82083c7c
	if (ctx.cr6.eq) goto loc_82083C7C;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82183448
	ctx.lr = 0x82083C78;
	sub_82183448(ctx, base);
	// b 0x82083c84
	goto loc_82083C84;
loc_82083C7C:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x82083C84;
	sub_821845A0(ctx, base);
loc_82083C84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82083cd8
	if (ctx.cr6.eq) goto loc_82083CD8;
	// bl 0x8215c0b8
	ctx.lr = 0x82083C94;
	sub_8215C0B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,3652
	ctx.r5.s64 = ctx.r11.s64 + 3652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r7,57
	ctx.r7.s64 = 57;
	// bl 0x820ed178
	ctx.lr = 0x82083CB0;
	sub_820ED178(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r10,3596
	ctx.r8.s64 = ctx.r10.s64 + 3596;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,-4904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4904, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82083CD8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4904, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82083CF8"))) PPC_WEAK_FUNC(sub_82083CF8);
PPC_FUNC_IMPL(__imp__sub_82083CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82083D00;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82083D0C;
	sub_8218C4B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82083dd8
	if (!ctx.cr6.gt) goto loc_82083DD8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,-5920
	ctx.r26.s64 = ctx.r11.s64 + -5920;
loc_82083D34:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lwzx r30,r9,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// blt cr6,0x82083d78
	if (ctx.cr6.lt) goto loc_82083D78;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82083d78
	if (ctx.cr6.gt) goto loc_82083D78;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x82083d70
	if (ctx.cr6.lt) goto loc_82083D70;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x82083d70
	if (ctx.cr6.gt) goto loc_82083D70;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82083D70:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82083dc8
	goto loc_82083DC8;
loc_82083D78:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82083dc8
	if (ctx.cr6.lt) goto loc_82083DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c400
	ctx.lr = 0x82083D88;
	sub_8218C400(ctx, base);
	// cmpwi cr6,r3,224
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 224, ctx.xer);
	// blt cr6,0x82083db8
	if (ctx.cr6.lt) goto loc_82083DB8;
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bgt cr6,0x82083db8
	if (ctx.cr6.gt) goto loc_82083DB8;
	// cmpwi cr6,r3,247
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 247, ctx.xer);
	// beq cr6,0x82083db8
	if (ctx.cr6.eq) goto loc_82083DB8;
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// rlwimi r11,r28,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r10,r27,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82083DB8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
loc_82083DC8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82083d34
	if (ctx.cr6.lt) goto loc_82083D34;
loc_82083DD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82083DE0"))) PPC_WEAK_FUNC(sub_82083DE0);
PPC_FUNC_IMPL(__imp__sub_82083DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82083DE8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82083DF4;
	sub_8218C4B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82083ec0
	if (!ctx.cr6.gt) goto loc_82083EC0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,-5920
	ctx.r26.s64 = ctx.r11.s64 + -5920;
loc_82083E1C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// lwzx r30,r9,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// blt cr6,0x82083e60
	if (ctx.cr6.lt) goto loc_82083E60;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x82083e60
	if (ctx.cr6.gt) goto loc_82083E60;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82083e58
	if (ctx.cr6.lt) goto loc_82083E58;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x82083e58
	if (ctx.cr6.gt) goto loc_82083E58;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82083E58:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82083eb0
	goto loc_82083EB0;
loc_82083E60:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82083eb0
	if (ctx.cr6.lt) goto loc_82083EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c400
	ctx.lr = 0x82083E70;
	sub_8218C400(ctx, base);
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// blt cr6,0x82083ea0
	if (ctx.cr6.lt) goto loc_82083EA0;
	// cmpwi cr6,r3,222
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 222, ctx.xer);
	// bgt cr6,0x82083ea0
	if (ctx.cr6.gt) goto loc_82083EA0;
	// cmpwi cr6,r3,215
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 215, ctx.xer);
	// beq cr6,0x82083ea0
	if (ctx.cr6.eq) goto loc_82083EA0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// rlwimi r11,r28,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r10,r27,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82083EA0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
loc_82083EB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82083e1c
	if (ctx.cr6.lt) goto loc_82083E1C;
loc_82083EC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82083EC8"))) PPC_WEAK_FUNC(sub_82083EC8);
PPC_FUNC_IMPL(__imp__sub_82083EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82083ED0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82083EDC;
	sub_8218C4B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82084030
	if (!ctx.cr6.gt) goto loc_82084030;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// ori r26,r9,65535
	ctx.r26.u64 = ctx.r9.u64 | 65535;
	// addi r27,r11,-5920
	ctx.r27.s64 = ctx.r11.s64 + -5920;
loc_82083F04:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82083f94
	if (ctx.cr6.eq) goto loc_82083F94;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82083f94
	if (ctx.cr6.eq) goto loc_82083F94;
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// lwzx r30,r9,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// blt cr6,0x82083f64
	if (ctx.cr6.lt) goto loc_82083F64;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x82083f64
	if (ctx.cr6.gt) goto loc_82083F64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82083f5c
	if (ctx.cr6.lt) goto loc_82083F5C;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x82083f5c
	if (ctx.cr6.gt) goto loc_82083F5C;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82083F5C:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82084024
	goto loc_82084024;
loc_82083F64:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82084024
	if (ctx.cr6.lt) goto loc_82084024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c400
	ctx.lr = 0x82083F74;
	sub_8218C400(ctx, base);
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// blt cr6,0x8208401c
	if (ctx.cr6.lt) goto loc_8208401C;
	// cmpwi cr6,r3,222
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 222, ctx.xer);
	// bgt cr6,0x8208401c
	if (ctx.cr6.gt) goto loc_8208401C;
	// cmpwi cr6,r3,215
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 215, ctx.xer);
	// beq cr6,0x8208401c
	if (ctx.cr6.eq) goto loc_8208401C;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// b 0x82084008
	goto loc_82084008;
loc_82083F94:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lwzx r30,r9,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// blt cr6,0x82083fdc
	if (ctx.cr6.lt) goto loc_82083FDC;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82083fdc
	if (ctx.cr6.gt) goto loc_82083FDC;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x82083fd4
	if (ctx.cr6.lt) goto loc_82083FD4;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x82083fd4
	if (ctx.cr6.gt) goto loc_82083FD4;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82083FD4:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82084024
	goto loc_82084024;
loc_82083FDC:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82084024
	if (ctx.cr6.lt) goto loc_82084024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c400
	ctx.lr = 0x82083FEC;
	sub_8218C400(ctx, base);
	// cmpwi cr6,r3,224
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 224, ctx.xer);
	// blt cr6,0x8208401c
	if (ctx.cr6.lt) goto loc_8208401C;
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bgt cr6,0x8208401c
	if (ctx.cr6.gt) goto loc_8208401C;
	// cmpwi cr6,r3,247
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 247, ctx.xer);
	// beq cr6,0x8208401c
	if (ctx.cr6.eq) goto loc_8208401C;
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
loc_82084008:
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// rlwimi r11,r26,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r10,r25,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r25.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_8208401C:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_82084024:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82083f04
	if (ctx.cr6.lt) goto loc_82083F04;
loc_82084030:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82084038"))) PPC_WEAK_FUNC(sub_82084038);
PPC_FUNC_IMPL(__imp__sub_82084038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82084040;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// bge cr6,0x8208406c
	if (!ctx.cr6.lt) goto loc_8208406C;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8208406C:
	// li r29,10
	ctx.r29.s64 = 10;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x82084090
	if (ctx.cr6.eq) goto loc_82084090;
loc_82084078:
	// divd r10,r10,r29
	ctx.r10.s64 = ctx.r10.s64 / ctx.r29.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bne cr6,0x82084078
	if (!ctx.cr6.eq) goto loc_82084078;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8208415c
	if (!ctx.cr6.eq) goto loc_8208415C;
loc_82084090:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82084094:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82084098:
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// beq cr6,0x820840ec
	if (ctx.cr6.eq) goto loc_820840EC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,25033
	ctx.r4.s64 = 25033;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820840C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r6,r7,-5920
	ctx.r6.s64 = ctx.r7.s64 + -5920;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r11,r5,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x820840EC;
	sub_82248A40(ctx, base);
loc_820840EC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820840f8
	if (ctx.cr6.eq) goto loc_820840F8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820840F8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8208410c
	if (ctx.cr6.eq) goto loc_8208410C;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// ble cr6,0x8208410c
	if (!ctx.cr6.gt) goto loc_8208410C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8208410C:
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stbx r9,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u8);
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// bge cr6,0x82084128
	if (!ctx.cr6.lt) goto loc_82084128;
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
loc_82084128:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x820841e4
	if (!ctx.cr6.gt) goto loc_820841E4;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,44
	ctx.r6.s64 = 44;
loc_82084148:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82084198
	if (!ctx.cr6.eq) goto loc_82084198;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// b 0x820841dc
	goto loc_820841DC;
loc_8208415C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82084094
	if (!ctx.cr6.gt) goto loc_82084094;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bne 0x82084098
	if (!ctx.cr0.eq) goto loc_82084098;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82084098
	goto loc_82084098;
loc_82084198:
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// lis r8,26214
	ctx.r8.s64 = 1717960704;
	// ori r4,r10,26215
	ctx.r4.u64 = ctx.r10.u64 | 26215;
	// ori r3,r8,26214
	ctx.r3.u64 = ctx.r8.u64 | 26214;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mulhd r10,r11,r4
	// sradi r10,r10,2
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 2;
	// rldicl r8,r10,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rldicr r8,r10,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rldicr r4,r8,1,62
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divd r11,r11,r29
	ctx.r11.s64 = ctx.r11.s64 / ctx.r29.s64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
loc_820841DC:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// bdnz 0x82084148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82084148;
loc_820841E4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820841fc
	if (ctx.cr6.eq) goto loc_820841FC;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// li r10,45
	ctx.r10.s64 = 45;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
loc_820841FC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8208421c
	if (ctx.cr6.eq) goto loc_8208421C;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// ble cr6,0x8208421c
	if (!ctx.cr6.gt) goto loc_8208421C;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// li r10,43
	ctx.r10.s64 = 43;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
loc_8208421C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82084228"))) PPC_WEAK_FUNC(sub_82084228);
PPC_FUNC_IMPL(__imp__sub_82084228) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,3696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3696);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822489f8
	ctx.lr = 0x82084260;
	sub_822489F8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822489f8
	ctx.lr = 0x8208427C;
	sub_822489F8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x820842ac
	if (!ctx.cr6.lt) goto loc_820842AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820842b8
	goto loc_820842B8;
loc_820842AC:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x820842b8
	if (!ctx.cr6.gt) goto loc_820842B8;
	// li r7,3
	ctx.r7.s64 = 3;
loc_820842B8:
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// li r8,4
	ctx.r8.s64 = 4;
	// fctiwz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82083ae8
	ctx.lr = 0x820842E0;
	sub_82083AE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82084300"))) PPC_WEAK_FUNC(sub_82084300);
PPC_FUNC_IMPL(__imp__sub_82084300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8208431C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8208431c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208431C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084328"))) PPC_WEAK_FUNC(sub_82084328);
PPC_FUNC_IMPL(__imp__sub_82084328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82084330;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8208443c
	if (!ctx.cr6.gt) goto loc_8208443C;
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82084360:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8218c6a8
	ctx.lr = 0x82084380;
	sub_8218C6A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82084428
	if (ctx.cr6.eq) goto loc_82084428;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x820843c8
	if (!ctx.cr6.gt) goto loc_820843C8;
loc_820843AC:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,-16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + -16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820843c8
	if (!ctx.cr6.eq) goto loc_820843C8;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x820843ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820843AC;
loc_820843C8:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82084428
	if (!ctx.cr6.lt) goto loc_82084428;
loc_820843D8:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820843fc
	if (!ctx.cr6.eq) goto loc_820843FC;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820843fc
	if (!ctx.cr6.eq) goto loc_820843FC;
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82084440
	if (ctx.cr6.eq) goto loc_82084440;
loc_820843FC:
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82084414
	if (!ctx.cr6.eq) goto loc_82084414;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82084418
	if (!ctx.cr6.eq) goto loc_82084418;
loc_82084414:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82084418:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820843d8
	if (ctx.cr6.lt) goto loc_820843D8;
loc_82084428:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82084360
	if (ctx.cr6.lt) goto loc_82084360;
loc_8208443C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82084440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82084448"))) PPC_WEAK_FUNC(sub_82084448);
PPC_FUNC_IMPL(__imp__sub_82084448) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_82084450:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084490
	if (ctx.cr6.eq) goto loc_82084490;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82084480
	if (!ctx.cr6.eq) goto loc_82084480;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82084480
	if (!ctx.cr6.eq) goto loc_82084480;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82084498
	if (ctx.cr6.eq) goto loc_82084498;
loc_82084480:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x82084450
	if (ctx.cr6.lt) goto loc_82084450;
loc_82084490:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82084498:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820844A8"))) PPC_WEAK_FUNC(sub_820844A8);
PPC_FUNC_IMPL(__imp__sub_820844A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820844B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x820844b4
	if (ctx.cr6.lt) goto loc_820844B4;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820844E4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820844e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820844E4;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820844F8"))) PPC_WEAK_FUNC(sub_820844F8);
PPC_FUNC_IMPL(__imp__sub_820844F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82084500;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820845e4
	if (ctx.cr6.eq) goto loc_820845E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820845e4
	if (ctx.cr6.eq) goto loc_820845E4;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lhz r4,98(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 98);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82084540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,3708
	ctx.r5.s64 = ctx.r9.s64 + 3708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82084558;
	sub_8218A5F0(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x8208e760
	ctx.lr = 0x82084564;
	sub_8208E760(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,3700
	ctx.r28.s64 = ctx.r11.s64 + 3700;
	// beq cr6,0x820845a4
	if (ctx.cr6.eq) goto loc_820845A4;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,25075
	ctx.r4.s64 = 25075;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208458C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x820845A4;
	sub_8218A5F0(ctx, base);
loc_820845A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,83(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820845e4
	if (ctx.cr6.eq) goto loc_820845E4;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,25074
	ctx.r4.s64 = 25074;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820845CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x820845E4;
	sub_8218A5F0(ctx, base);
loc_820845E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820845EC"))) PPC_WEAK_FUNC(sub_820845EC);
PPC_FUNC_IMPL(__imp__sub_820845EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820845F0"))) PPC_WEAK_FUNC(sub_820845F0);
PPC_FUNC_IMPL(__imp__sub_820845F0) {
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
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,27156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084658
	if (ctx.cr6.eq) goto loc_82084658;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82084658
	if (ctx.cr6.eq) goto loc_82084658;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8208462C:
	// lhzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82084648
	if (!ctx.cr6.eq) goto loc_82084648;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8208466c
	if (ctx.cr6.eq) goto loc_8208466C;
loc_82084648:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8208462c
	if (ctx.cr6.lt) goto loc_8208462C;
loc_82084658:
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
loc_8208466C:
	// mulli r11,r9,116
	ctx.r11.s64 = ctx.r9.s64 * 116;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x82248a40
	ctx.lr = 0x8208467C;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_82084690"))) PPC_WEAK_FUNC(sub_82084690);
PPC_FUNC_IMPL(__imp__sub_82084690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084700
	if (ctx.cr6.eq) goto loc_82084700;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82084700
	if (ctx.cr6.eq) goto loc_82084700;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820846C8:
	// lhzx r31,r10,r8
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820846f0
	if (!ctx.cr6.eq) goto loc_820846F0;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820846f0
	if (!ctx.cr6.eq) goto loc_820846F0;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82084718
	if (ctx.cr6.eq) goto loc_82084718;
loc_820846F0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820846c8
	if (ctx.cr6.lt) goto loc_820846C8;
loc_82084700:
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
loc_82084718:
	// mulli r11,r9,116
	ctx.r11.s64 = ctx.r9.s64 * 116;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82248a40
	ctx.lr = 0x8208472C;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_82084744"))) PPC_WEAK_FUNC(sub_82084744);
PPC_FUNC_IMPL(__imp__sub_82084744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084748"))) PPC_WEAK_FUNC(sub_82084748);
PPC_FUNC_IMPL(__imp__sub_82084748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82084750;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r30,27156(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82084778
	if (!ctx.cr6.eq) goto loc_82084778;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82084778:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82084844
	if (!ctx.cr6.gt) goto loc_82084844;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_82084794:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,94(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82084830
	if (!ctx.cr6.eq) goto loc_82084830;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084830
	if (!ctx.cr6.eq) goto loc_82084830;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82084830
	if (!ctx.cr6.eq) goto loc_82084830;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82084830
	if (ctx.cr6.eq) goto loc_82084830;
	// rlwinm r9,r25,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820847e0
	if (ctx.cr6.eq) goto loc_820847E0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82084830
	if (ctx.cr6.eq) goto loc_82084830;
loc_820847E0:
	// clrlwi r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82084800
	if (ctx.cr6.eq) goto loc_82084800;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222ee18
	ctx.lr = 0x820847F8;
	sub_8222EE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82084830
	if (ctx.cr6.eq) goto loc_82084830;
loc_82084800:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 98);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 100);
	// stwu r8,12(r29)
	ea = 12 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
loc_82084830:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82084794
	if (ctx.cr6.lt) goto loc_82084794;
loc_82084844:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82084850"))) PPC_WEAK_FUNC(sub_82084850);
PPC_FUNC_IMPL(__imp__sub_82084850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,27156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27156);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82084914
	if (ctx.cr6.eq) goto loc_82084914;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82084914
	if (ctx.cr6.eq) goto loc_82084914;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
loc_82084880:
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208490c
	if (ctx.cr6.eq) goto loc_8208490C;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_8208489C:
	// lhzx r30,r11,r5
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820848c4
	if (!ctx.cr6.eq) goto loc_820848C4;
	// lbz r30,2(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820848c4
	if (!ctx.cr6.eq) goto loc_820848C4;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820848d8
	if (ctx.cr6.eq) goto loc_820848D8;
loc_820848C4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8208489c
	if (ctx.cr6.lt) goto loc_8208489C;
	// b 0x8208490c
	goto loc_8208490C;
loc_820848D8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r8,116
	ctx.r11.s64 = ctx.r8.s64 * 116;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,98(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 98);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r5,100(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 100);
	// stwu r5,12(r7)
	ea = 12 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
loc_8208490C:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x82084880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82084880;
loc_82084914:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084920"))) PPC_WEAK_FUNC(sub_82084920);
PPC_FUNC_IMPL(__imp__sub_82084920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,27156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82084998
	if (ctx.cr6.eq) goto loc_82084998;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82084950:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r5,94(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82084988
	if (!ctx.cr6.eq) goto loc_82084988;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82084988
	if (!ctx.cr6.eq) goto loc_82084988;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82084988
	if (!ctx.cr6.eq) goto loc_82084988;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82084988:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82084950
	if (ctx.cr6.lt) goto loc_82084950;
loc_82084998:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820849A0"))) PPC_WEAK_FUNC(sub_820849A0);
PPC_FUNC_IMPL(__imp__sub_820849A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084a10
	if (ctx.cr6.eq) goto loc_82084A10;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82084a10
	if (ctx.cr6.eq) goto loc_82084A10;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820849C8:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r6,94(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82084a00
	if (!ctx.cr6.eq) goto loc_82084A00;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82084a00
	if (!ctx.cr6.eq) goto loc_82084A00;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82084a00
	if (!ctx.cr6.eq) goto loc_82084A00;
	// lhz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82084a18
	if (ctx.cr6.eq) goto loc_82084A18;
loc_82084A00:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820849c8
	if (ctx.cr6.lt) goto loc_820849C8;
loc_82084A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82084A18:
	// mulli r11,r9,116
	ctx.r11.s64 = ctx.r9.s64 * 116;
	// lhzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084A24"))) PPC_WEAK_FUNC(sub_82084A24);
PPC_FUNC_IMPL(__imp__sub_82084A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084A28"))) PPC_WEAK_FUNC(sub_82084A28);
PPC_FUNC_IMPL(__imp__sub_82084A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82084A30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82084ab4
	if (ctx.cr6.eq) goto loc_82084AB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82084a7c
	if (!ctx.cr6.gt) goto loc_82084A7C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82084A58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82183e40
	ctx.lr = 0x82084A68;
	sub_82183E40(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82084a58
	if (ctx.cr6.lt) goto loc_82084A58;
loc_82084A7C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82084A90:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82084a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82084A90;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084aac
	if (ctx.cr6.eq) goto loc_82084AAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82084AAC;
	sub_82183E40(ctx, base);
loc_82084AAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82084AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82084ABC"))) PPC_WEAK_FUNC(sub_82084ABC);
PPC_FUNC_IMPL(__imp__sub_82084ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084AC0"))) PPC_WEAK_FUNC(sub_82084AC0);
PPC_FUNC_IMPL(__imp__sub_82084AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82084AC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82084b0c
	if (!ctx.cr6.gt) goto loc_82084B0C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82084AE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82183e40
	ctx.lr = 0x82084AF8;
	sub_82183E40(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82084ae8
	if (ctx.cr6.lt) goto loc_82084AE8;
loc_82084B0C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82084B20:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82084b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82084B20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084b3c
	if (ctx.cr6.eq) goto loc_82084B3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82084B3C;
	sub_82183E40(ctx, base);
loc_82084B3C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82084B4C"))) PPC_WEAK_FUNC(sub_82084B4C);
PPC_FUNC_IMPL(__imp__sub_82084B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084B50"))) PPC_WEAK_FUNC(sub_82084B50);
PPC_FUNC_IMPL(__imp__sub_82084B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r31,27160(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82084b88
	if (!ctx.cr6.eq) goto loc_82084B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82084bc0
	goto loc_82084BC0;
loc_82084B88:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084448
	ctx.lr = 0x82084B98;
	sub_82084448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82084bc0
	if (!ctx.cr6.eq) goto loc_82084BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084328
	ctx.lr = 0x82084BA8;
	sub_82084328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084bbc
	if (ctx.cr6.eq) goto loc_82084BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820844a8
	ctx.lr = 0x82084BBC;
	sub_820844A8(ctx, base);
loc_82084BBC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82084BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084BD8"))) PPC_WEAK_FUNC(sub_82084BD8);
PPC_FUNC_IMPL(__imp__sub_82084BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82084BE0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lbz r28,10(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,27160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble cr6,0x82084c9c
	if (!ctx.cr6.gt) goto loc_82084C9C;
loc_82084C28:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82084c88
	if (!ctx.cr6.eq) goto loc_82084C88;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bgt cr6,0x82084c60
	if (ctx.cr6.gt) goto loc_82084C60;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82114f60
	ctx.lr = 0x82084C5C;
	sub_82114F60(ctx, base);
	// b 0x82084c8c
	goto loc_82084C8C;
loc_82084C60:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// bl 0x82114f60
	ctx.lr = 0x82084C84;
	sub_82114F60(ctx, base);
	// b 0x82084c8c
	goto loc_82084C8C;
loc_82084C88:
	// bgt cr6,0x82084c9c
	if (ctx.cr6.gt) goto loc_82084C9C;
loc_82084C8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82084c28
	if (ctx.cr6.lt) goto loc_82084C28;
loc_82084C9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82084CA4"))) PPC_WEAK_FUNC(sub_82084CA4);
PPC_FUNC_IMPL(__imp__sub_82084CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82084CA8"))) PPC_WEAK_FUNC(sub_82084CA8);
PPC_FUNC_IMPL(__imp__sub_82084CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82084CB0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x82084CC8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82084CD4;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82084CE8;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82084CF4;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82084d88
	if (ctx.cr6.eq) goto loc_82084D88;
	// bl 0x82183850
	ctx.lr = 0x82084D00;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82084D0C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82084D14;
	sub_821830F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x82084D20;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82084d38
	if (ctx.cr6.lt) goto loc_82084D38;
	// bne cr6,0x82084d40
	if (!ctx.cr6.eq) goto loc_82084D40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82084d3c
	goto loc_82084D3C;
loc_82084D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82084D3C:
	// bl 0x821830f8
	ctx.lr = 0x82084D40;
	sub_821830F8(ctx, base);
loc_82084D40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,564
	ctx.r10.s64 = 36962304;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r9,r10,63276
	ctx.r9.u64 = ctx.r10.u64 | 63276;
	// mulli r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 * 116;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82084d64
	if (!ctx.cr6.gt) goto loc_82084D64;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82084D64:
	// bl 0x82080d68
	ctx.lr = 0x82084D68;
	sub_82080D68(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mulli r5,r11,116
	ctx.r5.s64 = ctx.r11.s64 * 116;
	// bl 0x821847a8
	ctx.lr = 0x82084D7C;
	sub_821847A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82084D88;
	sub_82183E40(ctx, base);
loc_82084D88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82084D90;
	sub_8218A7F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82084D98;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82084DA0"))) PPC_WEAK_FUNC(sub_82084DA0);
PPC_FUNC_IMPL(__imp__sub_82084DA0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,66
	ctx.r10.s64 = 4325376;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// ori r7,r10,21569
	ctx.r7.u64 = ctx.r10.u64 | 21569;
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r9,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r9.u8);
	// stb r6,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r6.u8);
	// stb r11,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r11.u8);
	// stb r8,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r8.u8);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r6,7(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r9,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r9.u8);
	// stb r6,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r6.u8);
	// stb r10,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r10.u8);
	// stb r8,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r8.u8);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82084e20
	if (ctx.cr6.eq) goto loc_82084E20;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// ble cr6,0x82084e24
	if (!ctx.cr6.gt) goto loc_82084E24;
loc_82084E20:
	// li r9,12
	ctx.r9.s64 = 12;
loc_82084E24:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82084f10
	if (!ctx.cr6.gt) goto loc_82084F10;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
loc_82084E4C:
	// lbz r6,-6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r6,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r6.u8);
	// stb r31,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r31.u8);
	// lhz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// lbz r31,-2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r6,-3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// stb r6,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r6.u8);
	// stb r31,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r31.u8);
	// lhz r6,-30(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -30);
	// sth r6,-3(r11)
	PPC_STORE_U16(ctx.r11.u32 + -3, ctx.r6.u16);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r6,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r6.u8);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r31,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r31.u8);
	// lhz r6,-28(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -28);
	// sth r6,-1(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1, ctx.r6.u16);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r6.u8);
	// stb r31,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r31.u8);
	// lhz r6,-26(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -26);
	// sth r6,1(r11)
	PPC_STORE_U16(ctx.r11.u32 + 1, ctx.r6.u16);
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r31,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r31.u8);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r6,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r6.u8);
	// lhz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -24);
	// sth r6,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r6.u16);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r6,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r6.u8);
	// stb r31,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r31.u8);
	// lhz r6,-20(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -20);
	// sth r5,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r5.u16);
	// sth r6,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r6.u16);
	// bge cr6,0x82084eec
	if (!ctx.cr6.lt) goto loc_82084EEC;
	// sth r4,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r4.u16);
loc_82084EEC:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82084e4c
	if (ctx.cr6.lt) goto loc_82084E4C;
loc_82084F10:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// ble cr6,0x82084f68
	if (!ctx.cr6.gt) goto loc_82084F68;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82084F24:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r9.u8);
	// stb r8,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r8.u8);
	// lhz r7,-20(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -20);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r5,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r5.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r6,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r6.u8);
	// lhz r4,-24(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -24);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// bdnz 0x82084f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82084F24;
loc_82084F68:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084F70"))) PPC_WEAK_FUNC(sub_82084F70);
PPC_FUNC_IMPL(__imp__sub_82084F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,27156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82084ca8
	sub_82084CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82084F94"))) PPC_WEAK_FUNC(sub_82084F94);
PPC_FUNC_IMPL(__imp__sub_82084F94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82084F98"))) PPC_WEAK_FUNC(sub_82084F98);
PPC_FUNC_IMPL(__imp__sub_82084F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82084FA0;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82182e90
	ctx.lr = 0x82084FB8;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82084FC0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82084FCC;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82084FE0;
	sub_8218AA18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8208503c
	if (!ctx.cr6.eq) goto loc_8208503C;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82085040
	goto loc_82085040;
loc_8208503C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82085040:
	// bl 0x82183078
	ctx.lr = 0x82085044;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82085050;
	sub_821837D0(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// rlwinm r31,r29,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8208506c
	if (!ctx.cr6.gt) goto loc_8208506C;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8208506C:
	// bl 0x82183850
	ctx.lr = 0x82085070;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82085088
	if (ctx.cr6.eq) goto loc_82085088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82085084;
	sub_82183448(ctx, base);
	// b 0x82085094
	goto loc_82085094;
loc_82085088:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82085094;
	sub_821845A0(ctx, base);
loc_82085094:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820850A4;
	sub_82184800(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820850e4
	if (ctx.cr6.eq) goto loc_820850E4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820850B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ae98
	ctx.lr = 0x820850C0;
	sub_8218AE98(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82084da0
	ctx.lr = 0x820850D4;
	sub_82084DA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x820850b4
	if (ctx.cr6.lt) goto loc_820850B4;
loc_820850E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820850EC;
	sub_821837D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x820850F4;
	sub_8218A7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820850FC;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82085104"))) PPC_WEAK_FUNC(sub_82085104);
PPC_FUNC_IMPL(__imp__sub_82085104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085108"))) PPC_WEAK_FUNC(sub_82085108);
PPC_FUNC_IMPL(__imp__sub_82085108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82085110;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,27160(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82085148
	if (ctx.cr6.eq) goto loc_82085148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084ac0
	ctx.lr = 0x82085134;
	sub_82084AC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084f98
	ctx.lr = 0x82085148;
	sub_82084F98(ctx, base);
loc_82085148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82085150"))) PPC_WEAK_FUNC(sub_82085150);
PPC_FUNC_IMPL(__imp__sub_82085150) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085164"))) PPC_WEAK_FUNC(sub_82085164);
PPC_FUNC_IMPL(__imp__sub_82085164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085168"))) PPC_WEAK_FUNC(sub_82085168);
PPC_FUNC_IMPL(__imp__sub_82085168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// lwz r3,27164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208519c
	if (ctx.cr6.eq) goto loc_8208519C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208519C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208519C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820851B8"))) PPC_WEAK_FUNC(sub_820851B8);
PPC_FUNC_IMPL(__imp__sub_820851B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820851C4"))) PPC_WEAK_FUNC(sub_820851C4);
PPC_FUNC_IMPL(__imp__sub_820851C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820851C8"))) PPC_WEAK_FUNC(sub_820851C8);
PPC_FUNC_IMPL(__imp__sub_820851C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,3712
	ctx.r10.s64 = ctx.r11.s64 + 3712;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820851D8"))) PPC_WEAK_FUNC(sub_820851D8);
PPC_FUNC_IMPL(__imp__sub_820851D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82183078
	ctx.lr = 0x820851F0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820851FC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82085200;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82085218
	if (ctx.cr6.eq) goto loc_82085218;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82183448
	ctx.lr = 0x82085214;
	sub_82183448(ctx, base);
	// b 0x82085220
	goto loc_82085220;
loc_82085218:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821845a0
	ctx.lr = 0x82085220;
	sub_821845A0(ctx, base);
loc_82085220:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085234
	if (ctx.cr6.eq) goto loc_82085234;
	// bl 0x82085470
	ctx.lr = 0x8208522C;
	sub_82085470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82085238
	goto loc_82085238;
loc_82085234:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82085238:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,27164
	ctx.r11.s64 = ctx.r11.s64 + 27164;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x8208524C;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82085268"))) PPC_WEAK_FUNC(sub_82085268);
PPC_FUNC_IMPL(__imp__sub_82085268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,3712
	ctx.r9.s64 = ctx.r10.s64 + 3712;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820852A8;
	sub_822AA648(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r30,97
	ctx.r3.s64 = ctx.r30.s64 + 97;
	// bl 0x822aa648
	ctx.lr = 0x820852B4;
	sub_822AA648(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r30,194
	ctx.r3.s64 = ctx.r30.s64 + 194;
	// bl 0x822aa648
	ctx.lr = 0x820852C0;
	sub_822AA648(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// addi r3,r30,219
	ctx.r3.s64 = ctx.r30.s64 + 219;
	// bl 0x822aa648
	ctx.lr = 0x820852CC;
	sub_822AA648(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820852F0"))) PPC_WEAK_FUNC(sub_820852F0);
PPC_FUNC_IMPL(__imp__sub_820852F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r11,3712
	ctx.r9.s64 = ctx.r11.s64 + 3712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82085328
	if (ctx.cr6.eq) goto loc_82085328;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82085324;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82085328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208533C"))) PPC_WEAK_FUNC(sub_8208533C);
PPC_FUNC_IMPL(__imp__sub_8208533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085340"))) PPC_WEAK_FUNC(sub_82085340);
PPC_FUNC_IMPL(__imp__sub_82085340) {
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
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085364
	if (ctx.cr6.eq) goto loc_82085364;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82085368
	goto loc_82085368;
loc_82085364:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82085368:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82085398
	if (!ctx.cr6.eq) goto loc_82085398;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820853ac
	if (ctx.cr6.eq) goto loc_820853AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82085388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x820853ac
	if (ctx.cr6.lt) goto loc_820853AC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// b 0x820853a4
	goto loc_820853A4;
loc_82085398:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820853ac
	if (ctx.cr6.lt) goto loc_820853AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
loc_820853A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x820853b0
	if (!ctx.cr6.gt) goto loc_820853B0;
loc_820853AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820853B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820853C0"))) PPC_WEAK_FUNC(sub_820853C0);
PPC_FUNC_IMPL(__imp__sub_820853C0) {
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
	// bl 0x82085340
	ctx.lr = 0x820853D0;
	sub_82085340(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820853E8"))) PPC_WEAK_FUNC(sub_820853E8);
PPC_FUNC_IMPL(__imp__sub_820853E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne cr6,0x82085448
	if (!ctx.cr6.eq) goto loc_82085448;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82085448:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x8208545C;
	sub_821847A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208546C"))) PPC_WEAK_FUNC(sub_8208546C);
PPC_FUNC_IMPL(__imp__sub_8208546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085470"))) PPC_WEAK_FUNC(sub_82085470);
PPC_FUNC_IMPL(__imp__sub_82085470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82085478;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82085268
	ctx.lr = 0x82085484;
	sub_82085268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,3824
	ctx.r10.s64 = ctx.r11.s64 + 3824;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241dccc
	ctx.lr = 0x8208549C;
	__imp__XGetGameRegion(ctx, base);
	// cmplwi cr6,r3,511
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 511, ctx.xer);
	// bgt cr6,0x820854f0
	if (ctx.cr6.gt) goto loc_820854F0;
	// beq cr6,0x820854e4
	if (ctx.cr6.eq) goto loc_820854E4;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bgt cr6,0x820854dc
	if (ctx.cr6.gt) goto loc_820854DC;
	// beq cr6,0x820854e4
	if (ctx.cr6.eq) goto loc_820854E4;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x820854d0
	if (ctx.cr6.eq) goto loc_820854D0;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// bne cr6,0x82085520
	if (!ctx.cr6.eq) goto loc_82085520;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82085520
	goto loc_82085520;
loc_820854D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82085520
	goto loc_82085520;
loc_820854DC:
	// cmplwi cr6,r3,508
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 508, ctx.xer);
	// bne cr6,0x82085520
	if (!ctx.cr6.eq) goto loc_82085520;
loc_820854E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82085520
	goto loc_82085520;
loc_820854F0:
	// cmplwi cr6,r3,767
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 767, ctx.xer);
	// bgt cr6,0x82085514
	if (ctx.cr6.gt) goto loc_82085514;
	// cmplwi cr6,r3,766
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 766, ctx.xer);
	// bge cr6,0x82085508
	if (!ctx.cr6.lt) goto loc_82085508;
	// cmplwi cr6,r3,513
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 513, ctx.xer);
	// bne cr6,0x82085520
	if (!ctx.cr6.eq) goto loc_82085520;
loc_82085508:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82085520
	goto loc_82085520;
loc_82085514:
	// cmplwi cr6,r3,1023
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1023, ctx.xer);
	// bne cr6,0x82085520
	if (!ctx.cr6.eq) goto loc_82085520;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82085520:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82085530;
	sub_822AA648(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r30,97
	ctx.r3.s64 = ctx.r30.s64 + 97;
	// bl 0x822aa648
	ctx.lr = 0x8208553C;
	sub_822AA648(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r30,194
	ctx.r3.s64 = ctx.r30.s64 + 194;
	// bl 0x822aa648
	ctx.lr = 0x82085548;
	sub_822AA648(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// addi r3,r30,219
	ctx.r3.s64 = ctx.r30.s64 + 219;
	// bl 0x822aa648
	ctx.lr = 0x82085554;
	sub_822AA648(ctx, base);
	// stb r29,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r29.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r5,r11,3840
	ctx.r5.s64 = ctx.r11.s64 + 3840;
	// addi r3,r31,109
	ctx.r3.s64 = ctx.r31.s64 + 109;
	// bl 0x8218a128
	ctx.lr = 0x8208556C;
	sub_8218A128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82085578"))) PPC_WEAK_FUNC(sub_82085578);
PPC_FUNC_IMPL(__imp__sub_82085578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,3824
	ctx.r10.s64 = ctx.r11.s64 + 3824;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820851c8
	ctx.lr = 0x820855A4;
	sub_820851C8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820855c0
	if (ctx.cr6.eq) goto loc_820855C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820855BC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820855C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820855D8"))) PPC_WEAK_FUNC(sub_820855D8);
PPC_FUNC_IMPL(__imp__sub_820855D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// ori r3,r3,4576
	ctx.r3.u64 = ctx.r3.u64 | 4576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820855E4"))) PPC_WEAK_FUNC(sub_820855E4);
PPC_FUNC_IMPL(__imp__sub_820855E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820855E8"))) PPC_WEAK_FUNC(sub_820855E8);
PPC_FUNC_IMPL(__imp__sub_820855E8) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r6.u32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r3,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r3.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r4,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r4.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085658"))) PPC_WEAK_FUNC(sub_82085658);
PPC_FUNC_IMPL(__imp__sub_82085658) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r7.u32);
	// stw r6,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r6.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085690"))) PPC_WEAK_FUNC(sub_82085690);
PPC_FUNC_IMPL(__imp__sub_82085690) {
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
	ctx.lr = 0x820856A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820856b8
	if (ctx.cr6.eq) goto loc_820856B8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x820856B4;
	sub_82183448(ctx, base);
	// b 0x820856c0
	goto loc_820856C0;
loc_820856B8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820856C0;
	sub_821845A0(ctx, base);
loc_820856C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820856e4
	if (ctx.cr6.eq) goto loc_820856E4;
	// bl 0x8215c3b8
	ctx.lr = 0x820856CC;
	sub_8215C3B8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820856E4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085700"))) PPC_WEAK_FUNC(sub_82085700);
PPC_FUNC_IMPL(__imp__sub_82085700) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82085714;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82085718;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82085730
	if (ctx.cr6.eq) goto loc_82085730;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82183448
	ctx.lr = 0x8208572C;
	sub_82183448(ctx, base);
	// b 0x82085738
	goto loc_82085738;
loc_82085730:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821845a0
	ctx.lr = 0x82085738;
	sub_821845A0(ctx, base);
loc_82085738:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085744
	if (ctx.cr6.eq) goto loc_82085744;
	// bl 0x8208f270
	ctx.lr = 0x82085744;
	sub_8208F270(ctx, base);
loc_82085744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085754"))) PPC_WEAK_FUNC(sub_82085754);
PPC_FUNC_IMPL(__imp__sub_82085754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085758"))) PPC_WEAK_FUNC(sub_82085758);
PPC_FUNC_IMPL(__imp__sub_82085758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x82085770;
	sub_8215C7C8(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82085774;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82085780;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82085784;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208579c
	if (ctx.cr6.eq) goto loc_8208579C;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82183448
	ctx.lr = 0x82085798;
	sub_82183448(ctx, base);
	// b 0x820857a4
	goto loc_820857A4;
loc_8208579C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x820857A4;
	sub_821845A0(ctx, base);
loc_820857A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820857b0
	if (ctx.cr6.eq) goto loc_820857B0;
	// bl 0x8213e2b0
	ctx.lr = 0x820857B0;
	sub_8213E2B0(ctx, base);
loc_820857B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820857B8;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820857CC"))) PPC_WEAK_FUNC(sub_820857CC);
PPC_FUNC_IMPL(__imp__sub_820857CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820857D0"))) PPC_WEAK_FUNC(sub_820857D0);
PPC_FUNC_IMPL(__imp__sub_820857D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bd60
	ctx.lr = 0x820857E4;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x820857F0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820857FC;
	sub_821837D0(ctx, base);
	// bl 0x8208f948
	ctx.lr = 0x82085800;
	sub_8208F948(ctx, base);
	// bl 0x82181040
	ctx.lr = 0x82085804;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085814
	if (ctx.cr6.eq) goto loc_82085814;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x82085814;
	sub_82181370(ctx, base);
loc_82085814:
	// bl 0x8215bd60
	ctx.lr = 0x82085818;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82085864
	if (!ctx.cr6.eq) goto loc_82085864;
	// bl 0x8215bd60
	ctx.lr = 0x82085828;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd20
	ctx.lr = 0x8208582C;
	sub_8215CD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82085864
	if (ctx.cr6.eq) goto loc_82085864;
	// bl 0x8215bd08
	ctx.lr = 0x82085838;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82085848
	if (ctx.cr6.lt) goto loc_82085848;
	// bl 0x8215bd08
	ctx.lr = 0x82085848;
	sub_8215BD08(ctx, base);
loc_82085848:
	// bl 0x8215bd08
	ctx.lr = 0x8208584C;
	sub_8215BD08(ctx, base);
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82080000
	ctx.lr = 0x82085854;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085898
	if (ctx.cr6.eq) goto loc_82085898;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82085894
	goto loc_82085894;
loc_82085864:
	// bl 0x82183850
	ctx.lr = 0x82085868;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82085880
	if (ctx.cr6.eq) goto loc_82085880;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82183448
	ctx.lr = 0x8208587C;
	sub_82183448(ctx, base);
	// b 0x82085888
	goto loc_82085888;
loc_82085880:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x821845a0
	ctx.lr = 0x82085888;
	sub_821845A0(ctx, base);
loc_82085888:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085898
	if (ctx.cr6.eq) goto loc_82085898;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82085894:
	// bl 0x82146198
	ctx.lr = 0x82085898;
	sub_82146198(ctx, base);
loc_82085898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820858A0;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820858B4"))) PPC_WEAK_FUNC(sub_820858B4);
PPC_FUNC_IMPL(__imp__sub_820858B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820858B8"))) PPC_WEAK_FUNC(sub_820858B8);
PPC_FUNC_IMPL(__imp__sub_820858B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x820858D0;
	sub_8215C7C8(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x820858D4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820858E0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820858E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820858fc
	if (ctx.cr6.eq) goto loc_820858FC;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82183448
	ctx.lr = 0x820858F8;
	sub_82183448(ctx, base);
	// b 0x82085904
	goto loc_82085904;
loc_820858FC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821845a0
	ctx.lr = 0x82085904;
	sub_821845A0(ctx, base);
loc_82085904:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085910
	if (ctx.cr6.eq) goto loc_82085910;
	// bl 0x82146af8
	ctx.lr = 0x82085910;
	sub_82146AF8(ctx, base);
loc_82085910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82085918;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208592C"))) PPC_WEAK_FUNC(sub_8208592C);
PPC_FUNC_IMPL(__imp__sub_8208592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085930"))) PPC_WEAK_FUNC(sub_82085930);
PPC_FUNC_IMPL(__imp__sub_82085930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82085938;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r11,3876
	ctx.r5.s64 = ctx.r11.s64 + 3876;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8218cb30
	ctx.lr = 0x82085958;
	sub_8218CB30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// addi r8,r10,3852
	ctx.r8.s64 = ctx.r10.s64 + 3852;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r7.u32);
	// stw r31,27168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27168, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x82085984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8208599C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820859A8"))) PPC_WEAK_FUNC(sub_820859A8);
PPC_FUNC_IMPL(__imp__sub_820859A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,3852
	ctx.r10.s64 = ctx.r11.s64 + 3852;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218cc18
	ctx.lr = 0x820859D4;
	sub_8218CC18(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820859f0
	if (ctx.cr6.eq) goto loc_820859F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820859EC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820859F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085A08"))) PPC_WEAK_FUNC(sub_82085A08);
PPC_FUNC_IMPL(__imp__sub_82085A08) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// ble cr6,0x82085a6c
	if (!ctx.cr6.gt) goto loc_82085A6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82085A38:
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82085a38
	if (ctx.cr6.lt) goto loc_82085A38;
loc_82085A6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085A74"))) PPC_WEAK_FUNC(sub_82085A74);
PPC_FUNC_IMPL(__imp__sub_82085A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085A78"))) PPC_WEAK_FUNC(sub_82085A78);
PPC_FUNC_IMPL(__imp__sub_82085A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82085A80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,27176
	ctx.r29.s64 = ctx.r11.s64 + 27176;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82085ac4
	if (ctx.cr6.eq) goto loc_82085AC4;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r11,r11,-28056
	ctx.r11.s64 = ctx.r11.s64 + -28056;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_82085AA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82085AB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82085aa8
	if (ctx.cr6.lt) goto loc_82085AA8;
loc_82085AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82085ACC"))) PPC_WEAK_FUNC(sub_82085ACC);
PPC_FUNC_IMPL(__imp__sub_82085ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085AD0"))) PPC_WEAK_FUNC(sub_82085AD0);
PPC_FUNC_IMPL(__imp__sub_82085AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// addi r11,r11,-28056
	ctx.r11.s64 = ctx.r11.s64 + -28056;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085AE4"))) PPC_WEAK_FUNC(sub_82085AE4);
PPC_FUNC_IMPL(__imp__sub_82085AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085AE8"))) PPC_WEAK_FUNC(sub_82085AE8);
PPC_FUNC_IMPL(__imp__sub_82085AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r10,r11,27176
	ctx.r10.s64 = ctx.r11.s64 + 27176;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085AF8"))) PPC_WEAK_FUNC(sub_82085AF8);
PPC_FUNC_IMPL(__imp__sub_82085AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-28120
	ctx.r31.s64 = ctx.r11.s64 + -28120;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8241dd2c
	ctx.lr = 0x82085B20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82085B28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,27176
	ctx.r9.s64 = ctx.r10.s64 + 27176;
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82085B3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8241dd3c
	ctx.lr = 0x82085B44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085B5C"))) PPC_WEAK_FUNC(sub_82085B5C);
PPC_FUNC_IMPL(__imp__sub_82085B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085B60"))) PPC_WEAK_FUNC(sub_82085B60);
PPC_FUNC_IMPL(__imp__sub_82085B60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82085c2c
	if (ctx.cr6.gt) {
		sub_82085C2C(ctx, base);
		return;
	}
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23432
	ctx.r12.s64 = ctx.r12.s64 + 23432;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82085B88"))) PPC_WEAK_FUNC(sub_82085B88);
PPC_FUNC_IMPL(__imp__sub_82085B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,23488(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23488);
	// lwz r16,23496(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23496);
	// lwz r16,23504(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23504);
	// lwz r16,23512(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23512);
	// lwz r16,23520(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23520);
	// lwz r16,23528(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23528);
	// lwz r16,23536(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23536);
	// lwz r16,23544(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23544);
	// lwz r16,23552(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23552);
	// lwz r16,23560(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23560);
	// lwz r16,23596(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23596);
	// lwz r16,23568(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23568);
	// lwz r16,23576(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23576);
	// lwz r16,23584(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23584);
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BC8"))) PPC_WEAK_FUNC(sub_82085BC8);
PPC_FUNC_IMPL(__imp__sub_82085BC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BD0"))) PPC_WEAK_FUNC(sub_82085BD0);
PPC_FUNC_IMPL(__imp__sub_82085BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BD8"))) PPC_WEAK_FUNC(sub_82085BD8);
PPC_FUNC_IMPL(__imp__sub_82085BD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BE0"))) PPC_WEAK_FUNC(sub_82085BE0);
PPC_FUNC_IMPL(__imp__sub_82085BE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BE8"))) PPC_WEAK_FUNC(sub_82085BE8);
PPC_FUNC_IMPL(__imp__sub_82085BE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BF0"))) PPC_WEAK_FUNC(sub_82085BF0);
PPC_FUNC_IMPL(__imp__sub_82085BF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085BF8"))) PPC_WEAK_FUNC(sub_82085BF8);
PPC_FUNC_IMPL(__imp__sub_82085BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C00"))) PPC_WEAK_FUNC(sub_82085C00);
PPC_FUNC_IMPL(__imp__sub_82085C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C08"))) PPC_WEAK_FUNC(sub_82085C08);
PPC_FUNC_IMPL(__imp__sub_82085C08) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C10"))) PPC_WEAK_FUNC(sub_82085C10);
PPC_FUNC_IMPL(__imp__sub_82085C10) {
	PPC_FUNC_PROLOGUE();
	// li r3,8192
	ctx.r3.s64 = 8192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C18"))) PPC_WEAK_FUNC(sub_82085C18);
PPC_FUNC_IMPL(__imp__sub_82085C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C20"))) PPC_WEAK_FUNC(sub_82085C20);
PPC_FUNC_IMPL(__imp__sub_82085C20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C2C"))) PPC_WEAK_FUNC(sub_82085C2C);
PPC_FUNC_IMPL(__imp__sub_82085C2C) {
	PPC_FUNC_PROLOGUE();
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82085C34"))) PPC_WEAK_FUNC(sub_82085C34);
PPC_FUNC_IMPL(__imp__sub_82085C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085C38"))) PPC_WEAK_FUNC(sub_82085C38);
PPC_FUNC_IMPL(__imp__sub_82085C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82085C40;
	sub_82248770(ctx, base);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r22,r11,27208
	ctx.r22.s64 = ctx.r11.s64 + 27208;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r30,r22,12
	ctx.r30.s64 = ctx.r22.s64 + 12;
loc_82085C5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82085C64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82085c5c
	if (!ctx.cr0.eq) goto loc_82085C5C;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82248f70
	ctx.lr = 0x82085C80;
	sub_82248F70(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82085C94:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82085c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82085C94;
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stw r24,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r24.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82085CB0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x82087da8
	ctx.lr = 0x82085CC4;
	sub_82087DA8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085ce4
	if (ctx.cr6.eq) goto loc_82085CE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 512, ctx.xer);
	// blt cr6,0x82085cb0
	if (ctx.cr6.lt) goto loc_82085CB0;
	// b 0x82085d30
	goto loc_82085D30;
loc_82085CE4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_82085CEC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82087da8
	ctx.lr = 0x82085D00;
	sub_82087DA8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085d20
	if (ctx.cr6.eq) goto loc_82085D20;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82085cec
	if (ctx.cr6.lt) goto loc_82085CEC;
	// b 0x82085d30
	goto loc_82085D30;
loc_82085D20:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
loc_82085D30:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_82085D38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085d58
	if (ctx.cr6.eq) goto loc_82085D58;
	// bl 0x82087ea8
	ctx.lr = 0x82085D48;
	sub_82087EA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x82085d38
	if (ctx.cr6.lt) goto loc_82085D38;
loc_82085D58:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_82085D60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085d80
	if (ctx.cr6.eq) goto loc_82085D80;
	// bl 0x82087ea8
	ctx.lr = 0x82085D70;
	sub_82087EA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x82085d60
	if (ctx.cr6.lt) goto loc_82085D60;
loc_82085D80:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// li r25,480
	ctx.r25.s64 = 480;
	// lis r27,1
	ctx.r27.s64 = 65536;
loc_82085D8C:
	// rlwinm r29,r25,20,0,11
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 20) & 0xFFF00000;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82087da8
	ctx.lr = 0x82085DA4;
	sub_82087DA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085e1c
	if (ctx.cr6.eq) goto loc_82085E1C;
	// bl 0x82087ea8
	ctx.lr = 0x82085DB0;
	sub_82087EA8(ctx, base);
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_82085DB4:
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087da8
	ctx.lr = 0x82085DCC;
	sub_82087DA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82085de4
	if (!ctx.cr6.eq) goto loc_82085DE4;
	// subf. r31,r27,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bgt 0x82085db4
	if (ctx.cr0.gt) goto loc_82085DB4;
	// b 0x82085dec
	goto loc_82085DEC;
loc_82085DE4:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82085DE8:
	// bl 0x82087ea8
	ctx.lr = 0x82085DEC;
	sub_82087EA8(ctx, base);
loc_82085DEC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt 0x82085d8c
	if (ctx.cr0.gt) goto loc_82085D8C;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r30,r22,12
	ctx.r30.s64 = ctx.r22.s64 + 12;
loc_82085E00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82085E08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82085e00
	if (!ctx.cr0.eq) goto loc_82085E00;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82085E1C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82085dec
	if (!ctx.cr6.eq) goto loc_82085DEC;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_82085E2C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82087da8
	ctx.lr = 0x82085E44;
	sub_82087DA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82085de8
	if (!ctx.cr6.eq) goto loc_82085DE8;
	// subf. r31,r27,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bgt 0x82085e2c
	if (ctx.cr0.gt) goto loc_82085E2C;
	// b 0x82085dec
	goto loc_82085DEC;
}

__attribute__((alias("__imp__sub_82085E5C"))) PPC_WEAK_FUNC(sub_82085E5C);
PPC_FUNC_IMPL(__imp__sub_82085E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82085E60"))) PPC_WEAK_FUNC(sub_82085E60);
PPC_FUNC_IMPL(__imp__sub_82085E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82085E68;
	sub_8224876C(ctx, base);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r21,r11,27208
	ctx.r21.s64 = ctx.r11.s64 + 27208;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r30,r21,12
	ctx.r30.s64 = ctx.r21.s64 + 12;
loc_82085E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82085E94;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82085e8c
	if (!ctx.cr0.eq) goto loc_82085E8C;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82248f70
	ctx.lr = 0x82085EB0;
	sub_82248F70(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82085EC4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82085ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82085EC4;
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r23.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_82085EDC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x82087e30
	ctx.lr = 0x82085EF4;
	sub_82087E30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085f14
	if (ctx.cr6.eq) goto loc_82085F14;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 512, ctx.xer);
	// blt cr6,0x82085edc
	if (ctx.cr6.lt) goto loc_82085EDC;
	// b 0x82085f64
	goto loc_82085F64;
loc_82085F14:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_82085F1C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82087e30
	ctx.lr = 0x82085F34;
	sub_82087E30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085f54
	if (ctx.cr6.eq) goto loc_82085F54;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82085f1c
	if (ctx.cr6.lt) goto loc_82085F1C;
	// b 0x82085f64
	goto loc_82085F64;
loc_82085F54:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
loc_82085F64:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_82085F6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085f8c
	if (ctx.cr6.eq) goto loc_82085F8C;
	// bl 0x82087ea8
	ctx.lr = 0x82085F7C;
	sub_82087EA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x82085f6c
	if (ctx.cr6.lt) goto loc_82085F6C;
loc_82085F8C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_82085F94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82085fb4
	if (ctx.cr6.eq) goto loc_82085FB4;
	// bl 0x82087ea8
	ctx.lr = 0x82085FA4;
	sub_82087EA8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x82085f94
	if (ctx.cr6.lt) goto loc_82085F94;
loc_82085FB4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r25,480
	ctx.r25.s64 = 480;
	// lis r24,1
	ctx.r24.s64 = 65536;
loc_82085FC0:
	// rlwinm r29,r25,20,0,11
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 20) & 0xFFF00000;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82087e30
	ctx.lr = 0x82085FDC;
	sub_82087E30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82086058
	if (ctx.cr6.eq) goto loc_82086058;
	// bl 0x82087ea8
	ctx.lr = 0x82085FE8;
	sub_82087EA8(ctx, base);
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_82085FEC:
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087e30
	ctx.lr = 0x82086008;
	sub_82087E30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82086020
	if (!ctx.cr6.eq) goto loc_82086020;
	// subf. r31,r24,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bge 0x82085fec
	if (!ctx.cr0.lt) goto loc_82085FEC;
	// b 0x82086028
	goto loc_82086028;
loc_82086020:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_82086024:
	// bl 0x82087ea8
	ctx.lr = 0x82086028;
	sub_82087EA8(ctx, base);
loc_82086028:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt 0x82085fc0
	if (ctx.cr0.gt) goto loc_82085FC0;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// li r31,255
	ctx.r31.s64 = 255;
	// addi r30,r21,12
	ctx.r30.s64 = ctx.r21.s64 + 12;
loc_8208603C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82086044;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8208603c
	if (!ctx.cr0.eq) goto loc_8208603C;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82086058:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82086028
	if (!ctx.cr6.eq) goto loc_82086028;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_82086068:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82087e30
	ctx.lr = 0x82086084;
	sub_82087E30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82086024
	if (!ctx.cr6.eq) goto loc_82086024;
	// subf. r31,r24,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bgt 0x82086068
	if (ctx.cr0.gt) goto loc_82086068;
	// b 0x82086028
	goto loc_82086028;
}

__attribute__((alias("__imp__sub_8208609C"))) PPC_WEAK_FUNC(sub_8208609C);
PPC_FUNC_IMPL(__imp__sub_8208609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820860A0"))) PPC_WEAK_FUNC(sub_820860A0);
PPC_FUNC_IMPL(__imp__sub_820860A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820860A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-28128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820860d4
	if (!ctx.cr6.eq) goto loc_820860D4;
	// bl 0x82088010
	ctx.lr = 0x820860CC;
	sub_82088010(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820860D4:
	// lbz r11,141(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,27208
	ctx.r11.s64 = ctx.r9.s64 + 27208;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82086100;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r7,r30,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8208611c
	if (!ctx.cr6.eq) goto loc_8208611C;
	// bl 0x82087ea0
	ctx.lr = 0x82086118;
	sub_82087EA0(ctx, base);
	// b 0x82086120
	goto loc_82086120;
loc_8208611C:
	// bl 0x82183e28
	ctx.lr = 0x82086120;
	sub_82183E28(ctx, base);
loc_82086120:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8208612C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

