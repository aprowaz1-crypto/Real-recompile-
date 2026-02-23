#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821A28FC"))) PPC_WEAK_FUNC(sub_821A28FC);
PPC_FUNC_IMPL(__imp__sub_821A28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2900"))) PPC_WEAK_FUNC(sub_821A2900);
PPC_FUNC_IMPL(__imp__sub_821A2900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r4.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2918"))) PPC_WEAK_FUNC(sub_821A2918);
PPC_FUNC_IMPL(__imp__sub_821A2918) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x8218d888
	ctx.lr = 0x821A294C;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2958
	if (ctx.cr6.eq) goto loc_821A2958;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2958:
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r5,-19216
	ctx.r11.s64 = ctx.r5.s64 + -19216;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A29D0"))) PPC_WEAK_FUNC(sub_821A29D0);
PPC_FUNC_IMPL(__imp__sub_821A29D0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A29E8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a29f4
	if (ctx.cr6.eq) goto loc_821A29F4;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A29F4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r10,-19216
	ctx.r10.s64 = ctx.r10.s64 + -19216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2A18"))) PPC_WEAK_FUNC(sub_821A2A18);
PPC_FUNC_IMPL(__imp__sub_821A2A18) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2A30;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2a3c
	if (ctx.cr6.eq) goto loc_821A2A3C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2A3C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19080
	ctx.r9.s64 = ctx.r11.s64 + -19080;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2A60"))) PPC_WEAK_FUNC(sub_821A2A60);
PPC_FUNC_IMPL(__imp__sub_821A2A60) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2A78;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2a84
	if (ctx.cr6.eq) goto loc_821A2A84;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2A84:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19088
	ctx.r9.s64 = ctx.r11.s64 + -19088;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2AA8"))) PPC_WEAK_FUNC(sub_821A2AA8);
PPC_FUNC_IMPL(__imp__sub_821A2AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2AC8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2ad4
	if (ctx.cr6.eq) goto loc_821A2AD4;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2AD4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19080
	ctx.r9.s64 = ctx.r11.s64 + -19080;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2AFC"))) PPC_WEAK_FUNC(sub_821A2AFC);
PPC_FUNC_IMPL(__imp__sub_821A2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2B00"))) PPC_WEAK_FUNC(sub_821A2B00);
PPC_FUNC_IMPL(__imp__sub_821A2B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2B20;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2b2c
	if (ctx.cr6.eq) goto loc_821A2B2C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2B2C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19072
	ctx.r9.s64 = ctx.r11.s64 + -19072;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2B54"))) PPC_WEAK_FUNC(sub_821A2B54);
PPC_FUNC_IMPL(__imp__sub_821A2B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2B58"))) PPC_WEAK_FUNC(sub_821A2B58);
PPC_FUNC_IMPL(__imp__sub_821A2B58) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2B70;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2b7c
	if (ctx.cr6.eq) goto loc_821A2B7C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2B7C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19072
	ctx.r9.s64 = ctx.r11.s64 + -19072;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2BA0"))) PPC_WEAK_FUNC(sub_821A2BA0);
PPC_FUNC_IMPL(__imp__sub_821A2BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2BC0;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2bcc
	if (ctx.cr6.eq) goto loc_821A2BCC;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2BCC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19064
	ctx.r9.s64 = ctx.r11.s64 + -19064;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2BF4"))) PPC_WEAK_FUNC(sub_821A2BF4);
PPC_FUNC_IMPL(__imp__sub_821A2BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2BF8"))) PPC_WEAK_FUNC(sub_821A2BF8);
PPC_FUNC_IMPL(__imp__sub_821A2BF8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2C10;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2c1c
	if (ctx.cr6.eq) goto loc_821A2C1C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2C1C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19064
	ctx.r9.s64 = ctx.r11.s64 + -19064;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2C40"))) PPC_WEAK_FUNC(sub_821A2C40);
PPC_FUNC_IMPL(__imp__sub_821A2C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A2C60;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2c6c
	if (ctx.cr6.eq) goto loc_821A2C6C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A2C6C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19056
	ctx.r9.s64 = ctx.r11.s64 + -19056;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2C94"))) PPC_WEAK_FUNC(sub_821A2C94);
PPC_FUNC_IMPL(__imp__sub_821A2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2C98"))) PPC_WEAK_FUNC(sub_821A2C98);
PPC_FUNC_IMPL(__imp__sub_821A2C98) {
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
	// bl 0x8218d888
	ctx.lr = 0x821A2CB0;
	sub_8218D888(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272d60
	ctx.lr = 0x821A2CC0;
	sub_82272D60(ctx, base);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272a88
	ctx.lr = 0x821A2CCC;
	sub_82272A88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2CE8"))) PPC_WEAK_FUNC(sub_821A2CE8);
PPC_FUNC_IMPL(__imp__sub_821A2CE8) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x8241dd2c
	ctx.lr = 0x821A2D04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8226db08
	ctx.lr = 0x821A2D0C;
	sub_8226DB08(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821A2D10;
	sub_82088650(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2D30"))) PPC_WEAK_FUNC(sub_821A2D30);
PPC_FUNC_IMPL(__imp__sub_821A2D30) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x8226db48
	ctx.lr = 0x821A2D4C;
	sub_8226DB48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// bl 0x8241dd3c
	ctx.lr = 0x821A2D5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_821A2D74"))) PPC_WEAK_FUNC(sub_821A2D74);
PPC_FUNC_IMPL(__imp__sub_821A2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2D78"))) PPC_WEAK_FUNC(sub_821A2D78);
PPC_FUNC_IMPL(__imp__sub_821A2D78) {
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
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a2e34
	if (!ctx.cr6.eq) goto loc_821A2E34;
	// bl 0x8218d888
	ctx.lr = 0x821A2D9C;
	sub_8218D888(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272d60
	ctx.lr = 0x821A2DAC;
	sub_82272D60(ctx, base);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82272a88
	ctx.lr = 0x821A2DB8;
	sub_82272A88(ctx, base);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2e2c
	if (ctx.cr6.eq) goto loc_821A2E2C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a2de4
	if (!ctx.cr6.eq) goto loc_821A2DE4;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A2DE4:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,243(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 243);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,247(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 247);
	// lbz r11,251(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 251);
	// li r9,0
	ctx.r9.s64 = 0;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfs f1,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// li r6,63
	ctx.r6.s64 = 63;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// li r5,0
	ctx.r5.s64 = 0;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// bl 0x82273fe0
	ctx.lr = 0x821A2E2C;
	sub_82273FE0(ctx, base);
loc_821A2E2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
loc_821A2E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2E48"))) PPC_WEAK_FUNC(sub_821A2E48);
PPC_FUNC_IMPL(__imp__sub_821A2E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821A2E50;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A2E60;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A2E6C;
	sub_821837D0(ctx, base);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r3,-3296(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2ee8
	if (ctx.cr6.eq) goto loc_821A2EE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2ee8
	if (ctx.cr6.eq) goto loc_821A2EE8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r11,-8200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// subfic r6,r7,3
	ctx.xer.ca = ctx.r7.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r7.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821a2ee0
	if (!ctx.cr6.lt) goto loc_821A2EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x821A2ED8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_821A2EE0:
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x821b1bc8
	ctx.lr = 0x821A2EE8;
	sub_821B1BC8(ctx, base);
loc_821A2EE8:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r29,-12408(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12408);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821a2f0c
	if (ctx.cr6.eq) goto loc_821A2F0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a8708
	ctx.lr = 0x821A2F00;
	sub_821A8708(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A2F0C;
	sub_82183E40(ctx, base);
loc_821A2F0C:
	// stw r28,-12408(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12408, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x821aa9c0
	ctx.lr = 0x821A2F18;
	sub_821AA9C0(ctx, base);
	// bl 0x821aaa00
	ctx.lr = 0x821A2F1C;
	sub_821AAA00(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2f2c
	if (ctx.cr6.eq) goto loc_821A2F2C;
	// bl 0x821de368
	ctx.lr = 0x821A2F2C;
	sub_821DE368(ctx, base);
loc_821A2F2C:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r11,r9,7200
	ctx.r11.s64 = ctx.r9.s64 + 7200;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r6,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r6.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r5,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r5.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// bl 0x821a2420
	ctx.lr = 0x821A2F68;
	sub_821A2420(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8226db58
	ctx.lr = 0x821A2F70;
	sub_8226DB58(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2f84
	if (ctx.cr6.eq) goto loc_821A2F84;
	// bl 0x82268fb0
	ctx.lr = 0x821A2F80;
	sub_82268FB0(ctx, base);
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
loc_821A2F84:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2f98
	if (ctx.cr6.eq) goto loc_821A2F98;
	// bl 0x82268fb0
	ctx.lr = 0x821A2F94;
	sub_82268FB0(ctx, base);
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_821A2F98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8226da88
	ctx.lr = 0x821A2FA4;
	sub_8226DA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a27f8
	ctx.lr = 0x821A2FAC;
	sub_821A27F8(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a2fd4
	if (ctx.cr6.eq) goto loc_821A2FD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821de8a8
	ctx.lr = 0x821A2FC0;
	sub_821DE8A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x821de920
	ctx.lr = 0x821A2FD4;
	sub_821DE920(ctx, base);
loc_821A2FD4:
	// bl 0x821a25f8
	ctx.lr = 0x821A2FD8;
	sub_821A25F8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821a2fe8
	if (ctx.cr6.eq) goto loc_821A2FE8;
	// lwz r3,-3296(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3296);
	// bl 0x821b1d08
	ctx.lr = 0x821A2FE8;
	sub_821B1D08(ctx, base);
loc_821A2FE8:
	// bl 0x821aa9c0
	ctx.lr = 0x821A2FEC;
	sub_821AA9C0(ctx, base);
	// bl 0x821aaa00
	ctx.lr = 0x821A2FF0;
	sub_821AAA00(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r28,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821A3008;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821A3010"))) PPC_WEAK_FUNC(sub_821A3010);
PPC_FUNC_IMPL(__imp__sub_821A3010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A3018;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A3028;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3034
	if (ctx.cr6.eq) goto loc_821A3034;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A3034:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-19216
	ctx.r30.s64 = ctx.r11.s64 + -19216;
	// addi r9,r30,136
	ctx.r9.s64 = ctx.r30.s64 + 136;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821a308c
	if (!ctx.cr6.eq) goto loc_821A308C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A3058;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3064
	if (ctx.cr6.eq) goto loc_821A3064;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A3064:
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// beq cr6,0x821a308c
	if (ctx.cr6.eq) goto loc_821A308C;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r29,176
	ctx.r5.s64 = ctx.r29.s64 + 176;
	// addi r4,r29,240
	ctx.r4.s64 = ctx.r29.s64 + 240;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x821A308C;
	sub_82289C50(ctx, base);
loc_821A308C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A3094"))) PPC_WEAK_FUNC(sub_821A3094);
PPC_FUNC_IMPL(__imp__sub_821A3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3098"))) PPC_WEAK_FUNC(sub_821A3098);
PPC_FUNC_IMPL(__imp__sub_821A3098) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r3,368
	ctx.r4.s64 = ctx.r3.s64 + 368;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821A30DC;
	sub_8208EA90(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821a311c
	if (ctx.cr6.lt) goto loc_821A311C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x821a311c
	if (ctx.cr6.gt) goto loc_821A311C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x821a311c
	if (ctx.cr6.lt) goto loc_821A311C;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x821a3120
	if (!ctx.cr6.gt) goto loc_821A3120;
loc_821A311C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A3120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A3138"))) PPC_WEAK_FUNC(sub_821A3138);
PPC_FUNC_IMPL(__imp__sub_821A3138) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82088248
	ctx.lr = 0x821A3158;
	sub_82088248(ctx, base);
	// ld r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8224b370
	ctx.lr = 0x821A3168;
	sub_8224B370(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-19032(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -19032);
	// fdiv f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 / ctx.f0.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x821a31b8
	if (ctx.cr6.lt) goto loc_821A31B8;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8226db48
	ctx.lr = 0x821A3188;
	sub_8226DB48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821A319C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821A31A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8226db08
	ctx.lr = 0x821A31AC;
	sub_8226DB08(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821A31B0;
	sub_82088650(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r10,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r10.u64);
loc_821A31B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A31D0"))) PPC_WEAK_FUNC(sub_821A31D0);
PPC_FUNC_IMPL(__imp__sub_821A31D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821A31D8;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x821A31F4;
	sub_82081590(ctx, base);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x821A31FC;
	sub_82183078(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// li r3,336
	ctx.r3.s64 = 336;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// addi r26,r31,132
	ctx.r26.s64 = ctx.r31.s64 + 132;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r27,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r27.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stw r31,-19048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19048, ctx.r31.u32);
	// bl 0x82080000
	ctx.lr = 0x821A3258;
	sub_82080000(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-19024
	ctx.r29.s64 = ctx.r11.s64 + -19024;
	// beq cr6,0x821a3278
	if (ctx.cr6.eq) goto loc_821A3278;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821e00c8
	ctx.lr = 0x821A3270;
	sub_821E00C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821a327c
	goto loc_821A327C;
loc_821A3278:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821A327C:
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x821A3288;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a329c
	if (ctx.cr6.eq) goto loc_821A329C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821e00c8
	ctx.lr = 0x821A3298;
	sub_821E00C8(ctx, base);
	// b 0x821a32a0
	goto loc_821A32A0;
loc_821A329C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A32A0:
	// stw r3,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r3.u32);
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x821A32AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a32c0
	if (ctx.cr6.eq) goto loc_821A32C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821e00c8
	ctx.lr = 0x821A32BC;
	sub_821E00C8(ctx, base);
	// b 0x821a32c4
	goto loc_821A32C4;
loc_821A32C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A32C4:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x821A32E8;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2668
	ctx.lr = 0x821A32F0;
	sub_821A2668(ctx, base);
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// addi r11,r8,7200
	ctx.r11.s64 = ctx.r8.s64 + 7200;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// lwzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// bl 0x82184800
	ctx.lr = 0x821A3338;
	sub_82184800(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lis r7,11552
	ctx.r7.s64 = 757071872;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// addi r24,r11,-7560
	ctx.r24.s64 = ctx.r11.s64 + -7560;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// ori r25,r7,406
	ctx.r25.u64 = ctx.r7.u64 | 406;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// ori r5,r6,390
	ctx.r5.u64 = ctx.r6.u64 | 390;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x821a3388
	if (ctx.cr6.eq) goto loc_821A3388;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x821a3394
	if (!ctx.cr6.eq) goto loc_821A3394;
loc_821A3388:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x821a3398
	goto loc_821A3398;
loc_821A3394:
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
loc_821A3398:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2420
	ctx.lr = 0x821A33A4;
	sub_821A2420(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// stw r27,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r27.u32);
	// lis r8,640
	ctx.r8.s64 = 41943040;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// ori r11,r10,346
	ctx.r11.u64 = ctx.r10.u64 | 346;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x8226de88
	ctx.lr = 0x821A3408;
	sub_8226DE88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a3634
	if (ctx.cr6.lt) goto loc_821A3634;
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd4c
	ctx.lr = 0x821A3420;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821A3424;
	sub_82088650(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,24
	ctx.r4.s64 = 24;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821A3438;
	sub_822AA648(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,11084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82088210
	ctx.lr = 0x821A344C;
	sub_82088210(ctx, base);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r26,r11,-19072
	ctx.r26.s64 = ctx.r11.s64 + -19072;
	// lfd f0,29648(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 29648);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// lfd f13,29328(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 29328);
	// lfd f12,-23352(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + -23352);
	// fdiv f9,f0,f10
	ctx.f9.f64 = ctx.f0.f64 / ctx.f10.f64;
	// stfd f9,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.f9.u64);
	// fmul f0,f10,f13
	ctx.f0.f64 = ctx.f10.f64 * ctx.f13.f64;
	// stfd f0,32(r26)
	PPC_STORE_U64(ctx.r26.u32 + 32, ctx.f0.u64);
	// fmul f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 * ctx.f12.f64;
	// stfd f0,40(r26)
	PPC_STORE_U64(ctx.r26.u32 + 40, ctx.f0.u64);
	// bl 0x82088248
	ctx.lr = 0x821A3494;
	sub_82088248(ctx, base);
	// ld r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r6,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r6.u64);
	// bl 0x8241dd2c
	ctx.lr = 0x821A34A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a27f8
	ctx.lr = 0x821A34B0;
	sub_821A27F8(ctx, base);
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821a3510
	if (ctx.cr6.eq) goto loc_821A3510;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// li r3,296
	ctx.r3.s64 = 296;
	// stw r27,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r27.u32);
	// bl 0x82080000
	ctx.lr = 0x821A34CC;
	sub_82080000(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a34ec
	if (ctx.cr6.eq) goto loc_821A34EC;
	// bl 0x82183078
	ctx.lr = 0x821A34DC;
	sub_82183078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821de2c8
	ctx.lr = 0x821A34E8;
	sub_821DE2C8(ctx, base);
	// b 0x821a34f0
	goto loc_821A34F0;
loc_821A34EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A34F0:
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821de8a8
	ctx.lr = 0x821A34FC;
	sub_821DE8A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x821de920
	ctx.lr = 0x821A3510;
	sub_821DE920(ctx, base);
loc_821A3510:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a35c4
	if (ctx.cr6.eq) goto loc_821A35C4;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x821A3528;
	sub_822AA648(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,80
	ctx.r11.s64 = 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r3,79
	ctx.r10.s64 = ctx.r3.s64 + 79;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r7,r4,15
	ctx.r7.s64 = ctx.r4.s64 + 15;
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r7,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x821a3574
	if (ctx.cr6.eq) goto loc_821A3574;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x821a3574
	if (ctx.cr6.eq) goto loc_821A3574;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bne cr6,0x821a3578
	if (!ctx.cr6.eq) goto loc_821A3578;
loc_821A3574:
	// li r8,8
	ctx.r8.s64 = 8;
loc_821A3578:
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x821A359C;
	sub_8226B3E0(ctx, base);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8226b3e0
	ctx.lr = 0x821A35C0;
	sub_8226B3E0(ctx, base);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
loc_821A35C4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82080000
	ctx.lr = 0x821A35CC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a35e0
	if (ctx.cr6.eq) goto loc_821A35E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ad990
	ctx.lr = 0x821A35DC;
	sub_821AD990(ctx, base);
	// b 0x821a35e4
	goto loc_821A35E4;
loc_821A35E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A35E4:
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// li r3,1544
	ctx.r3.s64 = 1544;
	// bl 0x82080000
	ctx.lr = 0x821A35F0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3600
	if (ctx.cr6.eq) goto loc_821A3600;
	// bl 0x821de150
	ctx.lr = 0x821A35FC;
	sub_821DE150(ctx, base);
	// b 0x821a3604
	goto loc_821A3604;
loc_821A3600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821A3604:
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// stw r30,-8(r26)
	PPC_STORE_U32(ctx.r26.u32 + -8, ctx.r30.u32);
	// stw r30,-16(r26)
	PPC_STORE_U32(ctx.r26.u32 + -16, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r30,-4(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4, ctx.r30.u32);
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r30,-12(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
loc_821A3634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821A3640"))) PPC_WEAK_FUNC(sub_821A3640);
PPC_FUNC_IMPL(__imp__sub_821A3640) {
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
	ctx.lr = 0x821A3650;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821a3668
	if (ctx.cr6.eq) goto loc_821A3668;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82183448
	ctx.lr = 0x821A3664;
	sub_82183448(ctx, base);
	// b 0x821a3670
	goto loc_821A3670;
loc_821A3668:
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x821845a0
	ctx.lr = 0x821A3670;
	sub_821845A0(ctx, base);
loc_821A3670:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a367c
	if (ctx.cr6.eq) goto loc_821A367C;
	// bl 0x821a31d0
	ctx.lr = 0x821A367C;
	sub_821A31D0(ctx, base);
loc_821A367C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A368C"))) PPC_WEAK_FUNC(sub_821A368C);
PPC_FUNC_IMPL(__imp__sub_821A368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3690"))) PPC_WEAK_FUNC(sub_821A3690);
PPC_FUNC_IMPL(__imp__sub_821A3690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a3804
	if (ctx.cr6.eq) goto loc_821A3804;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a3710
	if (ctx.cr6.eq) goto loc_821A3710;
	// bl 0x8218d888
	ctx.lr = 0x821A36C4;
	sub_8218D888(ctx, base);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a36d4
	if (ctx.cr6.eq) goto loc_821A36D4;
	// bl 0x821ad858
	ctx.lr = 0x821A36D4;
	sub_821AD858(ctx, base);
loc_821A36D4:
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a36f0
	if (!ctx.cr6.eq) goto loc_821A36F0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A36F0:
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82275238
	ctx.lr = 0x821A3704;
	sub_82275238(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x821de680
	ctx.lr = 0x821A370C;
	sub_821DE680(ctx, base);
	// b 0x821a3770
	goto loc_821A3770;
loc_821A3710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2c98
	ctx.lr = 0x821A3718;
	sub_821A2C98(ctx, base);
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a3734
	if (!ctx.cr6.eq) goto loc_821A3734;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A3734:
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82275238
	ctx.lr = 0x821A3748;
	sub_82275238(ctx, base);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3758
	if (ctx.cr6.eq) goto loc_821A3758;
	// bl 0x821ad858
	ctx.lr = 0x821A3758;
	sub_821AD858(ctx, base);
loc_821A3758:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a3768
	if (!ctx.cr6.eq) goto loc_821A3768;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A3768:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226f640
	ctx.lr = 0x821A3770;
	sub_8226F640(ctx, base);
loc_821A3770:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821a37d4
	if (ctx.cr6.eq) goto loc_821A37D4;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x821a37a0
	if (ctx.cr6.eq) goto loc_821A37A0;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x821a37b8
	if (!ctx.cr6.eq) goto loc_821A37B8;
loc_821A37A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a37b0
	if (!ctx.cr6.eq) goto loc_821A37B0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A37B0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821a37cc
	goto loc_821A37CC;
loc_821A37B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a37c8
	if (!ctx.cr6.eq) goto loc_821A37C8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821A37C8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821A37CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822712b0
	ctx.lr = 0x821A37D4;
	sub_822712B0(ctx, base);
loc_821A37D4:
	// ld r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// ld r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r9,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r9.u64);
	// bl 0x82088248
	ctx.lr = 0x821A37EC;
	sub_82088248(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a37fc
	if (ctx.cr6.eq) goto loc_821A37FC;
	// bl 0x821de1a8
	ctx.lr = 0x821A37FC;
	sub_821DE1A8(ctx, base);
loc_821A37FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
loc_821A3804:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a383c
	if (ctx.cr6.eq) goto loc_821A383C;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821a3830
	if (!ctx.cr6.eq) goto loc_821A3830;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821a383c
	if (ctx.cr6.eq) goto loc_821A383C;
loc_821A3830:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x821de920
	ctx.lr = 0x821A383C;
	sub_821DE920(ctx, base);
loc_821A383C:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821a3854
	if (ctx.cr6.eq) goto loc_821A3854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2e48
	ctx.lr = 0x821A3854;
	sub_821A2E48(ctx, base);
loc_821A3854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A386C"))) PPC_WEAK_FUNC(sub_821A386C);
PPC_FUNC_IMPL(__imp__sub_821A386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3870"))) PPC_WEAK_FUNC(sub_821A3870);
PPC_FUNC_IMPL(__imp__sub_821A3870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A3878;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821A388C;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3898
	if (ctx.cr6.eq) goto loc_821A3898;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821A3898:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-19080
	ctx.r9.s64 = ctx.r11.s64 + -19080;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821a38d8
	if (!ctx.cr6.eq) goto loc_821A38D8;
	// stw r31,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a38cc
	if (ctx.cr6.eq) goto loc_821A38CC;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r29,368
	ctx.r3.s64 = ctx.r29.s64 + 368;
	// bl 0x82289c50
	ctx.lr = 0x821A38CC;
	sub_82289C50(ctx, base);
loc_821A38CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a3010
	ctx.lr = 0x821A38D8;
	sub_821A3010(ctx, base);
loc_821A38D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A38E0"))) PPC_WEAK_FUNC(sub_821A38E0);
PPC_FUNC_IMPL(__imp__sub_821A38E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x821a392c
	if (!ctx.cr6.gt) goto loc_821A392C;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
loc_821A38FC:
	// ldx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x821a391c
	if (!ctx.cr6.eq) goto loc_821A391C;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r5
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x821a3934
	if (ctx.cr6.eq) goto loc_821A3934;
loc_821A391C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821a38fc
	if (ctx.cr6.lt) goto loc_821A38FC;
loc_821A392C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A3934:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A3944"))) PPC_WEAK_FUNC(sub_821A3944);
PPC_FUNC_IMPL(__imp__sub_821A3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3948"))) PPC_WEAK_FUNC(sub_821A3948);
PPC_FUNC_IMPL(__imp__sub_821A3948) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x822be420
	sub_822BE420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A3950"))) PPC_WEAK_FUNC(sub_821A3950);
PPC_FUNC_IMPL(__imp__sub_821A3950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x821A3958;
	sub_82248758(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r29,r11,-21560
	ctx.r29.s64 = ctx.r11.s64 + -21560;
	// addi r31,r10,-14048
	ctx.r31.s64 = ctx.r10.s64 + -14048;
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a431c
	if (!ctx.cr6.eq) goto loc_821A431C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8756
	ctx.r4.s64 = ctx.r10.s64 + 8756;
	// bl 0x8218a540
	ctx.lr = 0x821A39A0;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8740
	ctx.r4.s64 = ctx.r9.s64 + 8740;
	// bl 0x8218a540
	ctx.lr = 0x821A39D0;
	sub_8218A540(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,-21576
	ctx.r4.s64 = ctx.r8.s64 + -21576;
	// bl 0x8218a540
	ctx.lr = 0x821A3A00;
	sub_8218A540(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-21592
	ctx.r4.s64 = ctx.r7.s64 + -21592;
	// bl 0x8218a540
	ctx.lr = 0x821A3A30;
	sub_8218A540(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-21608
	ctx.r4.s64 = ctx.r6.s64 + -21608;
	// bl 0x8218a540
	ctx.lr = 0x821A3A60;
	sub_8218A540(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-21624
	ctx.r4.s64 = ctx.r5.s64 + -21624;
	// bl 0x8218a540
	ctx.lr = 0x821A3A90;
	sub_8218A540(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-21640
	ctx.r4.s64 = ctx.r4.s64 + -21640;
	// bl 0x8218a540
	ctx.lr = 0x821A3AC0;
	sub_8218A540(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r10.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-21656
	ctx.r4.s64 = ctx.r11.s64 + -21656;
	// bl 0x8218a540
	ctx.lr = 0x821A3AF0;
	sub_8218A540(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-21672
	ctx.r4.s64 = ctx.r10.s64 + -21672;
	// bl 0x8218a540
	ctx.lr = 0x821A3B20;
	sub_8218A540(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r9,-21688
	ctx.r4.s64 = ctx.r9.s64 + -21688;
	// bl 0x8218a540
	ctx.lr = 0x821A3B50;
	sub_8218A540(ctx, base);
	// li r11,43
	ctx.r11.s64 = 43;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r8,-21704
	ctx.r4.s64 = ctx.r8.s64 + -21704;
	// bl 0x8218a540
	ctx.lr = 0x821A3B80;
	sub_8218A540(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r10.u16);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r7,-21716
	ctx.r4.s64 = ctx.r7.s64 + -21716;
	// bl 0x8218a540
	ctx.lr = 0x821A3BB0;
	sub_8218A540(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r10.u16);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r6,-21732
	ctx.r4.s64 = ctx.r6.s64 + -21732;
	// bl 0x8218a540
	ctx.lr = 0x821A3BE0;
	sub_8218A540(ctx, base);
	// li r11,54
	ctx.r11.s64 = 54;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r10.u16);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r5,-21752
	ctx.r4.s64 = ctx.r5.s64 + -21752;
	// bl 0x8218a540
	ctx.lr = 0x821A3C10;
	sub_8218A540(ctx, base);
	// li r11,58
	ctx.r11.s64 = 58;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r10.u16);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r4,-21772
	ctx.r4.s64 = ctx.r4.s64 + -21772;
	// bl 0x8218a540
	ctx.lr = 0x821A3C40;
	sub_8218A540(ctx, base);
	// li r11,62
	ctx.r11.s64 = 62;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r10.u16);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r10,-21792
	ctx.r4.s64 = ctx.r10.s64 + -21792;
	// bl 0x8218a540
	ctx.lr = 0x821A3C70;
	sub_8218A540(ctx, base);
	// li r11,66
	ctx.r11.s64 = 66;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r10.u16);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r9,8680
	ctx.r4.s64 = ctx.r9.s64 + 8680;
	// bl 0x8218a540
	ctx.lr = 0x821A3CA0;
	sub_8218A540(ctx, base);
	// li r11,70
	ctx.r11.s64 = 70;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r10.u16);
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r8,-21804
	ctx.r4.s64 = ctx.r8.s64 + -21804;
	// bl 0x8218a540
	ctx.lr = 0x821A3CD0;
	sub_8218A540(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r10.u16);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r4,r7,-21812
	ctx.r4.s64 = ctx.r7.s64 + -21812;
	// bl 0x8218a540
	ctx.lr = 0x821A3D00;
	sub_8218A540(ctx, base);
	// li r11,72
	ctx.r11.s64 = 72;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,594(r31)
	PPC_STORE_U16(ctx.r31.u32 + 594, ctx.r10.u16);
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// addi r4,r6,-21820
	ctx.r4.s64 = ctx.r6.s64 + -21820;
	// bl 0x8218a540
	ctx.lr = 0x821A3D30;
	sub_8218A540(ctx, base);
	// li r11,73
	ctx.r11.s64 = 73;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 624, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 626, ctx.r10.u16);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// addi r4,r5,8076
	ctx.r4.s64 = ctx.r5.s64 + 8076;
	// bl 0x8218a540
	ctx.lr = 0x821A3D60;
	sub_8218A540(ctx, base);
	// li r11,74
	ctx.r11.s64 = 74;
	// li r10,84
	ctx.r10.s64 = 84;
	// sth r11,656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 656, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,658(r31)
	PPC_STORE_U16(ctx.r31.u32 + 658, ctx.r10.u16);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// addi r4,r4,-21836
	ctx.r4.s64 = ctx.r4.s64 + -21836;
	// bl 0x8218a540
	ctx.lr = 0x821A3D90;
	sub_8218A540(ctx, base);
	// li r11,159
	ctx.r11.s64 = 159;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,688(r31)
	PPC_STORE_U16(ctx.r31.u32 + 688, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,690(r31)
	PPC_STORE_U16(ctx.r31.u32 + 690, ctx.r10.u16);
	// stw r9,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// addi r4,r10,-21852
	ctx.r4.s64 = ctx.r10.s64 + -21852;
	// bl 0x8218a540
	ctx.lr = 0x821A3DC0;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,720(r31)
	PPC_STORE_U16(ctx.r31.u32 + 720, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r10,722(r31)
	PPC_STORE_U16(ctx.r31.u32 + 722, ctx.r10.u16);
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// addi r4,r9,-21868
	ctx.r4.s64 = ctx.r9.s64 + -21868;
	// bl 0x8218a540
	ctx.lr = 0x821A3DF0;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,752(r31)
	PPC_STORE_U16(ctx.r31.u32 + 752, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r10,754(r31)
	PPC_STORE_U16(ctx.r31.u32 + 754, ctx.r10.u16);
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// addi r4,r8,-21884
	ctx.r4.s64 = ctx.r8.s64 + -21884;
	// bl 0x8218a540
	ctx.lr = 0x821A3E20;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 784, ctx.r11.u16);
	// sth r10,786(r31)
	PPC_STORE_U16(ctx.r31.u32 + 786, ctx.r10.u16);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r4,r7,-21900
	ctx.r4.s64 = ctx.r7.s64 + -21900;
	// bl 0x8218a540
	ctx.lr = 0x821A3E4C;
	sub_8218A540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 816, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r10,818(r31)
	PPC_STORE_U16(ctx.r31.u32 + 818, ctx.r10.u16);
	// stw r9,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// addi r4,r6,-21916
	ctx.r4.s64 = ctx.r6.s64 + -21916;
	// bl 0x8218a540
	ctx.lr = 0x821A3E7C;
	sub_8218A540(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,848(r31)
	PPC_STORE_U16(ctx.r31.u32 + 848, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,850(r31)
	PPC_STORE_U16(ctx.r31.u32 + 850, ctx.r10.u16);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// addi r4,r5,-21932
	ctx.r4.s64 = ctx.r5.s64 + -21932;
	// bl 0x8218a540
	ctx.lr = 0x821A3EAC;
	sub_8218A540(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,880(r31)
	PPC_STORE_U16(ctx.r31.u32 + 880, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r10,882(r31)
	PPC_STORE_U16(ctx.r31.u32 + 882, ctx.r10.u16);
	// stw r9,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// addi r4,r4,-21948
	ctx.r4.s64 = ctx.r4.s64 + -21948;
	// bl 0x8218a540
	ctx.lr = 0x821A3EDC;
	sub_8218A540(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,912(r31)
	PPC_STORE_U16(ctx.r31.u32 + 912, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r10,914(r31)
	PPC_STORE_U16(ctx.r31.u32 + 914, ctx.r10.u16);
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// addi r4,r10,-21964
	ctx.r4.s64 = ctx.r10.s64 + -21964;
	// bl 0x8218a540
	ctx.lr = 0x821A3F0C;
	sub_8218A540(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,944(r31)
	PPC_STORE_U16(ctx.r31.u32 + 944, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r10,946(r31)
	PPC_STORE_U16(ctx.r31.u32 + 946, ctx.r10.u16);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// addi r4,r9,-21980
	ctx.r4.s64 = ctx.r9.s64 + -21980;
	// bl 0x8218a540
	ctx.lr = 0x821A3F3C;
	sub_8218A540(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r10,978(r31)
	PPC_STORE_U16(ctx.r31.u32 + 978, ctx.r10.u16);
	// stw r9,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// addi r4,r8,-21992
	ctx.r4.s64 = ctx.r8.s64 + -21992;
	// bl 0x8218a540
	ctx.lr = 0x821A3F6C;
	sub_8218A540(ctx, base);
	// li r11,160
	ctx.r11.s64 = 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1008(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1008, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,1010(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1010, ctx.r10.u16);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// addi r4,r7,8788
	ctx.r4.s64 = ctx.r7.s64 + 8788;
	// bl 0x8218a540
	ctx.lr = 0x821A3F9C;
	sub_8218A540(ctx, base);
	// li r11,161
	ctx.r11.s64 = 161;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1040(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1040, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r10.u16);
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// addi r4,r6,8772
	ctx.r4.s64 = ctx.r6.s64 + 8772;
	// bl 0x8218a540
	ctx.lr = 0x821A3FCC;
	sub_8218A540(ctx, base);
	// li r11,162
	ctx.r11.s64 = 162;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1072, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// sth r10,1074(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1074, ctx.r10.u16);
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r9,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r9.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// addi r4,r5,-22008
	ctx.r4.s64 = ctx.r5.s64 + -22008;
	// bl 0x8218a540
	ctx.lr = 0x821A3FFC;
	sub_8218A540(ctx, base);
	// li r11,163
	ctx.r11.s64 = 163;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1104, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1106, ctx.r10.u16);
	// stw r9,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// addi r4,r4,-22020
	ctx.r4.s64 = ctx.r4.s64 + -22020;
	// bl 0x8218a540
	ctx.lr = 0x821A402C;
	sub_8218A540(ctx, base);
	// li r11,164
	ctx.r11.s64 = 164;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1136, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1138(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1138, ctx.r10.u16);
	// stw r9,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// addi r4,r10,-22028
	ctx.r4.s64 = ctx.r10.s64 + -22028;
	// bl 0x8218a540
	ctx.lr = 0x821A405C;
	sub_8218A540(ctx, base);
	// li r11,165
	ctx.r11.s64 = 165;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1168, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1170, ctx.r10.u16);
	// stw r9,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// addi r4,r9,-22044
	ctx.r4.s64 = ctx.r9.s64 + -22044;
	// bl 0x8218a540
	ctx.lr = 0x821A408C;
	sub_8218A540(ctx, base);
	// li r11,166
	ctx.r11.s64 = 166;
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,1200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1200, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1202, ctx.r10.u16);
	// stw r9,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r11.u32);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// addi r4,r8,-22064
	ctx.r4.s64 = ctx.r8.s64 + -22064;
	// bl 0x8218a540
	ctx.lr = 0x821A40BC;
	sub_8218A540(ctx, base);
	// li r11,170
	ctx.r11.s64 = 170;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1232, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1234(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1234, ctx.r10.u16);
	// stw r9,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// addi r4,r7,-22080
	ctx.r4.s64 = ctx.r7.s64 + -22080;
	// bl 0x8218a540
	ctx.lr = 0x821A40EC;
	sub_8218A540(ctx, base);
	// li r11,171
	ctx.r11.s64 = 171;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,1264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1264, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1266, ctx.r10.u16);
	// stw r9,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// addi r4,r6,-22096
	ctx.r4.s64 = ctx.r6.s64 + -22096;
	// bl 0x8218a540
	ctx.lr = 0x821A411C;
	sub_8218A540(ctx, base);
	// li r11,183
	ctx.r11.s64 = 183;
	// sth r11,1296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1296, ctx.r11.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1298, ctx.r10.u16);
	// stw r9,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// addi r4,r5,-22108
	ctx.r4.s64 = ctx.r5.s64 + -22108;
	// bl 0x8218a540
	ctx.lr = 0x821A414C;
	sub_8218A540(ctx, base);
	// li r11,184
	ctx.r11.s64 = 184;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1328, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1330, ctx.r10.u16);
	// stw r9,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// addi r4,r4,-22120
	ctx.r4.s64 = ctx.r4.s64 + -22120;
	// bl 0x8218a540
	ctx.lr = 0x821A417C;
	sub_8218A540(ctx, base);
	// li r11,185
	ctx.r11.s64 = 185;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1360, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1362(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1362, ctx.r10.u16);
	// stw r9,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// addi r4,r10,-22132
	ctx.r4.s64 = ctx.r10.s64 + -22132;
	// bl 0x8218a540
	ctx.lr = 0x821A41AC;
	sub_8218A540(ctx, base);
	// li r11,186
	ctx.r11.s64 = 186;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1392, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1394, ctx.r10.u16);
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// addi r4,r9,-22144
	ctx.r4.s64 = ctx.r9.s64 + -22144;
	// bl 0x8218a540
	ctx.lr = 0x821A41DC;
	sub_8218A540(ctx, base);
	// li r11,187
	ctx.r11.s64 = 187;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1424, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1426(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1426, ctx.r10.u16);
	// stw r9,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// addi r4,r8,-22160
	ctx.r4.s64 = ctx.r8.s64 + -22160;
	// bl 0x8218a540
	ctx.lr = 0x821A420C;
	sub_8218A540(ctx, base);
	// li r11,188
	ctx.r11.s64 = 188;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1456, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1458, ctx.r10.u16);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// addi r4,r7,-22168
	ctx.r4.s64 = ctx.r7.s64 + -22168;
	// bl 0x8218a540
	ctx.lr = 0x821A423C;
	sub_8218A540(ctx, base);
	// li r11,192
	ctx.r11.s64 = 192;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1488, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,1490(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1490, ctx.r10.u16);
	// stw r9,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x8218a540
	ctx.lr = 0x821A4268;
	sub_8218A540(ctx, base);
	// li r11,213
	ctx.r11.s64 = 213;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1520, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1522, ctx.r10.u16);
	// stw r9,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// addi r3,r31,1536
	ctx.r3.s64 = ctx.r31.s64 + 1536;
	// addi r4,r6,-22184
	ctx.r4.s64 = ctx.r6.s64 + -22184;
	// bl 0x8218a540
	ctx.lr = 0x821A4298;
	sub_8218A540(ctx, base);
	// li r11,214
	ctx.r11.s64 = 214;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1552, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1554(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1554, ctx.r10.u16);
	// stw r9,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// addi r3,r31,1568
	ctx.r3.s64 = ctx.r31.s64 + 1568;
	// addi r4,r5,-22200
	ctx.r4.s64 = ctx.r5.s64 + -22200;
	// bl 0x8218a540
	ctx.lr = 0x821A42C8;
	sub_8218A540(ctx, base);
	// li r11,217
	ctx.r11.s64 = 217;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1584, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1586(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1586, ctx.r10.u16);
	// stw r9,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// addi r4,r4,-22216
	ctx.r4.s64 = ctx.r4.s64 + -22216;
	// bl 0x8218a540
	ctx.lr = 0x821A42F8;
	sub_8218A540(ctx, base);
	// li r11,218
	ctx.r11.s64 = 218;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1616, ctx.r11.u16);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,1618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1618, ctx.r10.u16);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r9,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A431C:
	// ld r8,0(r16)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r16.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821A4328:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x821a4344
	if (!ctx.cr6.eq) goto loc_821A4344;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,8(r16)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r16.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x821a475c
	if (ctx.cr6.eq) goto loc_821A475C;
loc_821A4344:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r9,51
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 51, ctx.xer);
	// blt cr6,0x821a4328
	if (ctx.cr6.lt) goto loc_821A4328;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r24,r10,-14064
	ctx.r24.s64 = ctx.r10.s64 + -14064;
	// bne cr6,0x821a4384
	if (!ctx.cr6.eq) goto loc_821A4384;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r10,-22228
	ctx.r4.s64 = ctx.r10.s64 + -22228;
	// bl 0x8218a540
	ctx.lr = 0x821A4380;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4384:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r19,r10,-14080
	ctx.r19.s64 = ctx.r10.s64 + -14080;
	// bne cr6,0x821a43b4
	if (!ctx.cr6.eq) goto loc_821A43B4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r10,-22240
	ctx.r4.s64 = ctx.r10.s64 + -22240;
	// bl 0x8218a540
	ctx.lr = 0x821A43B0;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A43B4:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r20,r10,-14096
	ctx.r20.s64 = ctx.r10.s64 + -14096;
	// bne cr6,0x821a43e4
	if (!ctx.cr6.eq) goto loc_821A43E4;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r10,-22252
	ctx.r4.s64 = ctx.r10.s64 + -22252;
	// bl 0x8218a540
	ctx.lr = 0x821A43E0;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A43E4:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r18,r10,-14112
	ctx.r18.s64 = ctx.r10.s64 + -14112;
	// bne cr6,0x821a4414
	if (!ctx.cr6.eq) goto loc_821A4414;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r10,-22264
	ctx.r4.s64 = ctx.r10.s64 + -22264;
	// bl 0x8218a540
	ctx.lr = 0x821A4410;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4414:
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r27,r10,-14128
	ctx.r27.s64 = ctx.r10.s64 + -14128;
	// bne cr6,0x821a4444
	if (!ctx.cr6.eq) goto loc_821A4444;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r10,-22276
	ctx.r4.s64 = ctx.r10.s64 + -22276;
	// bl 0x8218a540
	ctx.lr = 0x821A4440;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4444:
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r21,r10,-14144
	ctx.r21.s64 = ctx.r10.s64 + -14144;
	// bne cr6,0x821a4474
	if (!ctx.cr6.eq) goto loc_821A4474;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r10,-22288
	ctx.r4.s64 = ctx.r10.s64 + -22288;
	// bl 0x8218a540
	ctx.lr = 0x821A4470;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4474:
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r22,r10,-14160
	ctx.r22.s64 = ctx.r10.s64 + -14160;
	// bne cr6,0x821a44a4
	if (!ctx.cr6.eq) goto loc_821A44A4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r10,-22300
	ctx.r4.s64 = ctx.r10.s64 + -22300;
	// bl 0x8218a540
	ctx.lr = 0x821A44A0;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A44A4:
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r23,r10,-14176
	ctx.r23.s64 = ctx.r10.s64 + -14176;
	// bne cr6,0x821a44d4
	if (!ctx.cr6.eq) goto loc_821A44D4;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r10,8148
	ctx.r4.s64 = ctx.r10.s64 + 8148;
	// bl 0x8218a540
	ctx.lr = 0x821A44D0;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A44D4:
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r25,r10,-14192
	ctx.r25.s64 = ctx.r10.s64 + -14192;
	// bne cr6,0x821a4504
	if (!ctx.cr6.eq) goto loc_821A4504;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r10,-22308
	ctx.r4.s64 = ctx.r10.s64 + -22308;
	// bl 0x8218a540
	ctx.lr = 0x821A4500;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4504:
	// rlwinm r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r26,r10,-14208
	ctx.r26.s64 = ctx.r10.s64 + -14208;
	// bne cr6,0x821a4534
	if (!ctx.cr6.eq) goto loc_821A4534;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,-22320
	ctx.r4.s64 = ctx.r10.s64 + -22320;
	// bl 0x8218a540
	ctx.lr = 0x821A4530;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4534:
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r10,-14224
	ctx.r28.s64 = ctx.r10.s64 + -14224;
	// bne cr6,0x821a4564
	if (!ctx.cr6.eq) goto loc_821A4564;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,-22332
	ctx.r4.s64 = ctx.r10.s64 + -22332;
	// bl 0x8218a540
	ctx.lr = 0x821A4560;
	sub_8218A540(ctx, base);
	// lwz r11,-12416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12416);
loc_821A4564:
	// ld r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r17.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a476c
	if (!ctx.cr6.eq) goto loc_821A476C;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a476c
	if (!ctx.cr6.eq) goto loc_821A476C;
	// rlwinm r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-14512
	ctx.r31.s64 = ctx.r10.s64 + -14512;
	// bne cr6,0x821a57b4
	if (!ctx.cr6.eq) goto loc_821A57B4;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A45B8;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A45E8;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A4618;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,8800
	ctx.r4.s64 = ctx.r7.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A4648;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22348
	ctx.r4.s64 = ctx.r6.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A4678;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22360
	ctx.r4.s64 = ctx.r5.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A46A8;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22372
	ctx.r4.s64 = ctx.r4.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A46D8;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22388
	ctx.r4.s64 = ctx.r11.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A4704;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22400
	ctx.r4.s64 = ctx.r10.s64 + -22400;
	// bl 0x8218a540
	ctx.lr = 0x821A4734;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A475C:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
loc_821A476C:
	// ld r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a495c
	if (!ctx.cr6.eq) goto loc_821A495C;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a495c
	if (!ctx.cr6.eq) goto loc_821A495C;
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-14800
	ctx.r31.s64 = ctx.r10.s64 + -14800;
	// bne cr6,0x821a4954
	if (!ctx.cr6.eq) goto loc_821A4954;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A47B4;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A47E4;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A4814;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-22416
	ctx.r4.s64 = ctx.r7.s64 + -22416;
	// bl 0x8218a540
	ctx.lr = 0x821A4844;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,8800
	ctx.r4.s64 = ctx.r6.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A4874;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22348
	ctx.r4.s64 = ctx.r5.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A48A4;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22360
	ctx.r4.s64 = ctx.r4.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A48D4;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22372
	ctx.r4.s64 = ctx.r11.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A4904;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22388
	ctx.r4.s64 = ctx.r10.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A4934;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_821A4954:
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A495C:
	// ld r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a4978
	if (!ctx.cr6.eq) goto loc_821A4978;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x821a5a14
	if (ctx.cr6.eq) goto loc_821A5A14;
loc_821A4978:
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a4994
	if (!ctx.cr6.eq) goto loc_821A4994;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x821a5a14
	if (ctx.cr6.eq) goto loc_821A5A14;
loc_821A4994:
	// ld r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a4c74
	if (!ctx.cr6.eq) goto loc_821A4C74;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a4c74
	if (!ctx.cr6.eq) goto loc_821A4C74;
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-15248
	ctx.r31.s64 = ctx.r10.s64 + -15248;
	// bne cr6,0x821a4c6c
	if (!ctx.cr6.eq) goto loc_821A4C6C;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A49DC;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A4A0C;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A4A3C;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-22432
	ctx.r4.s64 = ctx.r7.s64 + -22432;
	// bl 0x8218a540
	ctx.lr = 0x821A4A6C;
	sub_8218A540(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22448
	ctx.r4.s64 = ctx.r6.s64 + -22448;
	// bl 0x8218a540
	ctx.lr = 0x821A4A9C;
	sub_8218A540(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22464
	ctx.r4.s64 = ctx.r5.s64 + -22464;
	// bl 0x8218a540
	ctx.lr = 0x821A4ACC;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,8800
	ctx.r4.s64 = ctx.r4.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A4AFC;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22348
	ctx.r4.s64 = ctx.r11.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A4B2C;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22360
	ctx.r4.s64 = ctx.r10.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A4B5C;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r9,-22372
	ctx.r4.s64 = ctx.r9.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A4B8C;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r8,-22388
	ctx.r4.s64 = ctx.r8.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A4BBC;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r10.u16);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r7,-22476
	ctx.r4.s64 = ctx.r7.s64 + -22476;
	// bl 0x8218a540
	ctx.lr = 0x821A4BEC;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r10.u16);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r6,-22492
	ctx.r4.s64 = ctx.r6.s64 + -22492;
	// bl 0x8218a540
	ctx.lr = 0x821A4C1C;
	sub_8218A540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r10.u16);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r5,-22508
	ctx.r4.s64 = ctx.r5.s64 + -22508;
	// bl 0x8218a540
	ctx.lr = 0x821A4C4C;
	sub_8218A540(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r10.u16);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_821A4C6C:
	// li r8,14
	ctx.r8.s64 = 14;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A4C74:
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a5014
	if (!ctx.cr6.eq) goto loc_821A5014;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a5014
	if (!ctx.cr6.eq) goto loc_821A5014;
	// rlwinm r9,r11,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-15824
	ctx.r31.s64 = ctx.r10.s64 + -15824;
	// bne cr6,0x821a500c
	if (!ctx.cr6.eq) goto loc_821A500C;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-22524
	ctx.r4.s64 = ctx.r10.s64 + -22524;
	// bl 0x8218a540
	ctx.lr = 0x821A4CBC;
	sub_8218A540(ctx, base);
	// li r11,216
	ctx.r11.s64 = 216;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,-22540
	ctx.r4.s64 = ctx.r9.s64 + -22540;
	// bl 0x8218a540
	ctx.lr = 0x821A4CEC;
	sub_8218A540(ctx, base);
	// li r11,215
	ctx.r11.s64 = 215;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8724
	ctx.r4.s64 = ctx.r8.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A4D1C;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,8708
	ctx.r4.s64 = ctx.r7.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A4D4C;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,8692
	ctx.r4.s64 = ctx.r6.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A4D7C;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22556
	ctx.r4.s64 = ctx.r5.s64 + -22556;
	// bl 0x8218a540
	ctx.lr = 0x821A4DAC;
	sub_8218A540(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22432
	ctx.r4.s64 = ctx.r4.s64 + -22432;
	// bl 0x8218a540
	ctx.lr = 0x821A4DDC;
	sub_8218A540(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22448
	ctx.r4.s64 = ctx.r11.s64 + -22448;
	// bl 0x8218a540
	ctx.lr = 0x821A4E0C;
	sub_8218A540(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22464
	ctx.r4.s64 = ctx.r10.s64 + -22464;
	// bl 0x8218a540
	ctx.lr = 0x821A4E3C;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r9,8800
	ctx.r4.s64 = ctx.r9.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A4E6C;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r8,-22348
	ctx.r4.s64 = ctx.r8.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A4E9C;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r10.u16);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r7,-22360
	ctx.r4.s64 = ctx.r7.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A4ECC;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r10.u16);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r6,-22372
	ctx.r4.s64 = ctx.r6.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A4EFC;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r10.u16);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r5,-22388
	ctx.r4.s64 = ctx.r5.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A4F2C;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r10.u16);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r4,-22492
	ctx.r4.s64 = ctx.r4.s64 + -22492;
	// bl 0x8218a540
	ctx.lr = 0x821A4F5C;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r10.u16);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r10,-22572
	ctx.r4.s64 = ctx.r10.s64 + -22572;
	// bl 0x8218a540
	ctx.lr = 0x821A4F8C;
	sub_8218A540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r10.u16);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r9,-22508
	ctx.r4.s64 = ctx.r9.s64 + -22508;
	// bl 0x8218a540
	ctx.lr = 0x821A4FBC;
	sub_8218A540(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r10.u16);
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r8,-22588
	ctx.r4.s64 = ctx.r8.s64 + -22588;
	// bl 0x8218a540
	ctx.lr = 0x821A4FEC;
	sub_8218A540(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r10.u16);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
loc_821A500C:
	// li r8,18
	ctx.r8.s64 = 18;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A5014:
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a5414
	if (!ctx.cr6.eq) goto loc_821A5414;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a5414
	if (!ctx.cr6.eq) goto loc_821A5414;
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-16464
	ctx.r31.s64 = ctx.r10.s64 + -16464;
	// bne cr6,0x821a540c
	if (!ctx.cr6.eq) goto loc_821A540C;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A505C;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A508C;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A50BC;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-22600
	ctx.r4.s64 = ctx.r7.s64 + -22600;
	// bl 0x8218a540
	ctx.lr = 0x821A50EC;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22612
	ctx.r4.s64 = ctx.r6.s64 + -22612;
	// bl 0x8218a540
	ctx.lr = 0x821A511C;
	sub_8218A540(ctx, base);
	// li r11,204
	ctx.r11.s64 = 204;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22624
	ctx.r4.s64 = ctx.r5.s64 + -22624;
	// bl 0x8218a540
	ctx.lr = 0x821A514C;
	sub_8218A540(ctx, base);
	// li r11,205
	ctx.r11.s64 = 205;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22636
	ctx.r4.s64 = ctx.r4.s64 + -22636;
	// bl 0x8218a540
	ctx.lr = 0x821A517C;
	sub_8218A540(ctx, base);
	// li r11,206
	ctx.r11.s64 = 206;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22648
	ctx.r4.s64 = ctx.r11.s64 + -22648;
	// bl 0x8218a540
	ctx.lr = 0x821A51AC;
	sub_8218A540(ctx, base);
	// li r11,207
	ctx.r11.s64 = 207;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22660
	ctx.r4.s64 = ctx.r10.s64 + -22660;
	// bl 0x8218a540
	ctx.lr = 0x821A51DC;
	sub_8218A540(ctx, base);
	// li r11,208
	ctx.r11.s64 = 208;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r9,-22672
	ctx.r4.s64 = ctx.r9.s64 + -22672;
	// bl 0x8218a540
	ctx.lr = 0x821A520C;
	sub_8218A540(ctx, base);
	// li r11,209
	ctx.r11.s64 = 209;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r8,-22684
	ctx.r4.s64 = ctx.r8.s64 + -22684;
	// bl 0x8218a540
	ctx.lr = 0x821A523C;
	sub_8218A540(ctx, base);
	// li r11,210
	ctx.r11.s64 = 210;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r10.u16);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r7,-22696
	ctx.r4.s64 = ctx.r7.s64 + -22696;
	// bl 0x8218a540
	ctx.lr = 0x821A526C;
	sub_8218A540(ctx, base);
	// li r11,211
	ctx.r11.s64 = 211;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r10.u16);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r6,8800
	ctx.r4.s64 = ctx.r6.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A529C;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r10.u16);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r5,-22348
	ctx.r4.s64 = ctx.r5.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A52CC;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r10.u16);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r4,-22360
	ctx.r4.s64 = ctx.r4.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A52FC;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r10.u16);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r10,-22372
	ctx.r4.s64 = ctx.r10.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A532C;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r10.u16);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r9,-22388
	ctx.r4.s64 = ctx.r9.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A535C;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r10.u16);
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r8,-22712
	ctx.r4.s64 = ctx.r8.s64 + -22712;
	// bl 0x8218a540
	ctx.lr = 0x821A538C;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r10.u16);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r4,r7,-22728
	ctx.r4.s64 = ctx.r7.s64 + -22728;
	// bl 0x8218a540
	ctx.lr = 0x821A53BC;
	sub_8218A540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,594(r31)
	PPC_STORE_U16(ctx.r31.u32 + 594, ctx.r10.u16);
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// addi r4,r6,-22744
	ctx.r4.s64 = ctx.r6.s64 + -22744;
	// bl 0x8218a540
	ctx.lr = 0x821A53EC;
	sub_8218A540(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 624, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 626, ctx.r10.u16);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_821A540C:
	// li r8,20
	ctx.r8.s64 = 20;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A5414:
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a55d0
	if (!ctx.cr6.eq) goto loc_821A55D0;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a55d0
	if (!ctx.cr6.eq) goto loc_821A55D0;
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-16720
	ctx.r31.s64 = ctx.r10.s64 + -16720;
	// bne cr6,0x821a55c8
	if (!ctx.cr6.eq) goto loc_821A55C8;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A545C;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A548C;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A54BC;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,8800
	ctx.r4.s64 = ctx.r7.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A54EC;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22348
	ctx.r4.s64 = ctx.r6.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A551C;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22360
	ctx.r4.s64 = ctx.r5.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A554C;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22372
	ctx.r4.s64 = ctx.r4.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A557C;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22388
	ctx.r4.s64 = ctx.r11.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A55A8;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
loc_821A55C8:
	// li r8,8
	ctx.r8.s64 = 8;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A55D0:
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a57bc
	if (!ctx.cr6.eq) goto loc_821A57BC;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a57bc
	if (!ctx.cr6.eq) goto loc_821A57BC;
	// rlwinm r9,r11,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-17008
	ctx.r31.s64 = ctx.r10.s64 + -17008;
	// bne cr6,0x821a57b4
	if (!ctx.cr6.eq) goto loc_821A57B4;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A5618;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A5648;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A5678;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-22756
	ctx.r4.s64 = ctx.r7.s64 + -22756;
	// bl 0x8218a540
	ctx.lr = 0x821A56A8;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22772
	ctx.r4.s64 = ctx.r6.s64 + -22772;
	// bl 0x8218a540
	ctx.lr = 0x821A56D8;
	sub_8218A540(ctx, base);
	// li r11,204
	ctx.r11.s64 = 204;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22788
	ctx.r4.s64 = ctx.r5.s64 + -22788;
	// bl 0x8218a540
	ctx.lr = 0x821A5708;
	sub_8218A540(ctx, base);
	// li r11,205
	ctx.r11.s64 = 205;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22372
	ctx.r4.s64 = ctx.r4.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A5738;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22800
	ctx.r4.s64 = ctx.r11.s64 + -22800;
	// bl 0x8218a540
	ctx.lr = 0x821A5764;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22572
	ctx.r4.s64 = ctx.r10.s64 + -22572;
	// bl 0x8218a540
	ctx.lr = 0x821A5794;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_821A57B4:
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A57BC:
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a582c
	if (!ctx.cr6.eq) goto loc_821A582C;
	// ld r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a582c
	if (!ctx.cr6.eq) goto loc_821A582C;
	// rlwinm r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-17040
	ctx.r31.s64 = ctx.r10.s64 + -17040;
	// bne cr6,0x821a5824
	if (!ctx.cr6.eq) goto loc_821A5824;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-22812
	ctx.r4.s64 = ctx.r10.s64 + -22812;
	// bl 0x8218a540
	ctx.lr = 0x821A5804;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821A5824:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A582C:
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a63e8
	if (!ctx.cr6.eq) goto loc_821A63E8;
	// ld r9,8(r17)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x821a63e8
	if (!ctx.cr6.eq) goto loc_821A63E8;
	// rlwinm r9,r11,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-17328
	ctx.r31.s64 = ctx.r10.s64 + -17328;
	// bne cr6,0x821a5a0c
	if (!ctx.cr6.eq) goto loc_821A5A0C;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A5874;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A58A4;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,8692
	ctx.r4.s64 = ctx.r8.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A58D4;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,8800
	ctx.r4.s64 = ctx.r7.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A5904;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22348
	ctx.r4.s64 = ctx.r6.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A5934;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22360
	ctx.r4.s64 = ctx.r5.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A5964;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22372
	ctx.r4.s64 = ctx.r4.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A5994;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22388
	ctx.r4.s64 = ctx.r11.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A59C0;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8218a540
	ctx.lr = 0x821A59EC;
	sub_8218A540(ctx, base);
	// li r11,213
	ctx.r11.s64 = 213;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_821A5A0C:
	// li r8,9
	ctx.r8.s64 = 9;
	// b 0x821a63e8
	goto loc_821A63E8;
loc_821A5A14:
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,-18992
	ctx.r31.s64 = ctx.r10.s64 + -18992;
	// bne cr6,0x821a63e4
	if (!ctx.cr6.eq) goto loc_821A63E4;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-12416(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-22824
	ctx.r4.s64 = ctx.r10.s64 + -22824;
	// bl 0x8218a540
	ctx.lr = 0x821A5A40;
	sub_8218A540(ctx, base);
	// li r11,219
	ctx.r11.s64 = 219;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r9,-22836
	ctx.r4.s64 = ctx.r9.s64 + -22836;
	// bl 0x8218a540
	ctx.lr = 0x821A5A70;
	sub_8218A540(ctx, base);
	// li r11,220
	ctx.r11.s64 = 220;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r8,-22848
	ctx.r4.s64 = ctx.r8.s64 + -22848;
	// bl 0x8218a540
	ctx.lr = 0x821A5AA0;
	sub_8218A540(ctx, base);
	// li r11,221
	ctx.r11.s64 = 221;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r7,-22864
	ctx.r4.s64 = ctx.r7.s64 + -22864;
	// bl 0x8218a540
	ctx.lr = 0x821A5AD0;
	sub_8218A540(ctx, base);
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r6,-22880
	ctx.r4.s64 = ctx.r6.s64 + -22880;
	// bl 0x8218a540
	ctx.lr = 0x821A5B00;
	sub_8218A540(ctx, base);
	// li r11,223
	ctx.r11.s64 = 223;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r10.u16);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r5,-22896
	ctx.r4.s64 = ctx.r5.s64 + -22896;
	// bl 0x8218a540
	ctx.lr = 0x821A5B30;
	sub_8218A540(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r10.u16);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r4,-22912
	ctx.r4.s64 = ctx.r4.s64 + -22912;
	// bl 0x8218a540
	ctx.lr = 0x821A5B60;
	sub_8218A540(ctx, base);
	// li r11,225
	ctx.r11.s64 = 225;
	// sth r11,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,-22928
	ctx.r4.s64 = ctx.r11.s64 + -22928;
	// bl 0x8218a540
	ctx.lr = 0x821A5B90;
	sub_8218A540(ctx, base);
	// li r11,226
	ctx.r11.s64 = 226;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r10.u16);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r4,r10,-22944
	ctx.r4.s64 = ctx.r10.s64 + -22944;
	// bl 0x8218a540
	ctx.lr = 0x821A5BC0;
	sub_8218A540(ctx, base);
	// li r11,227
	ctx.r11.s64 = 227;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r9,-22960
	ctx.r4.s64 = ctx.r9.s64 + -22960;
	// bl 0x8218a540
	ctx.lr = 0x821A5BF0;
	sub_8218A540(ctx, base);
	// li r11,228
	ctx.r11.s64 = 228;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r10.u16);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// addi r4,r8,-22976
	ctx.r4.s64 = ctx.r8.s64 + -22976;
	// bl 0x8218a540
	ctx.lr = 0x821A5C20;
	sub_8218A540(ctx, base);
	// li r11,229
	ctx.r11.s64 = 229;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r10.u16);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r7,-22992
	ctx.r4.s64 = ctx.r7.s64 + -22992;
	// bl 0x8218a540
	ctx.lr = 0x821A5C50;
	sub_8218A540(ctx, base);
	// li r11,230
	ctx.r11.s64 = 230;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r10.u16);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r6,-23008
	ctx.r4.s64 = ctx.r6.s64 + -23008;
	// bl 0x8218a540
	ctx.lr = 0x821A5C80;
	sub_8218A540(ctx, base);
	// li r11,233
	ctx.r11.s64 = 233;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r10.u16);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// addi r4,r5,-23024
	ctx.r4.s64 = ctx.r5.s64 + -23024;
	// bl 0x8218a540
	ctx.lr = 0x821A5CB0;
	sub_8218A540(ctx, base);
	// li r11,245
	ctx.r11.s64 = 245;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r10.u16);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r4,-23040
	ctx.r4.s64 = ctx.r4.s64 + -23040;
	// bl 0x8218a540
	ctx.lr = 0x821A5CE0;
	sub_8218A540(ctx, base);
	// li r11,246
	ctx.r11.s64 = 246;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r10.u16);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r10,-23056
	ctx.r4.s64 = ctx.r10.s64 + -23056;
	// bl 0x8218a540
	ctx.lr = 0x821A5D10;
	sub_8218A540(ctx, base);
	// li r11,247
	ctx.r11.s64 = 247;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r10.u16);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// addi r4,r9,-22524
	ctx.r4.s64 = ctx.r9.s64 + -22524;
	// bl 0x8218a540
	ctx.lr = 0x821A5D40;
	sub_8218A540(ctx, base);
	// li r11,216
	ctx.r11.s64 = 216;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r10.u16);
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// addi r4,r8,-22540
	ctx.r4.s64 = ctx.r8.s64 + -22540;
	// bl 0x8218a540
	ctx.lr = 0x821A5D70;
	sub_8218A540(ctx, base);
	// li r11,215
	ctx.r11.s64 = 215;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r10.u16);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// addi r4,r7,-23068
	ctx.r4.s64 = ctx.r7.s64 + -23068;
	// bl 0x8218a540
	ctx.lr = 0x821A5DA0;
	sub_8218A540(ctx, base);
	// li r11,212
	ctx.r11.s64 = 212;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,594(r31)
	PPC_STORE_U16(ctx.r31.u32 + 594, ctx.r10.u16);
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// addi r4,r6,8724
	ctx.r4.s64 = ctx.r6.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x821A5DD0;
	sub_8218A540(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 624, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 626, ctx.r10.u16);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// addi r4,r5,8708
	ctx.r4.s64 = ctx.r5.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x821A5E00;
	sub_8218A540(ctx, base);
	// li r11,201
	ctx.r11.s64 = 201;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 656, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,658(r31)
	PPC_STORE_U16(ctx.r31.u32 + 658, ctx.r10.u16);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// addi r4,r4,8692
	ctx.r4.s64 = ctx.r4.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x821A5E30;
	sub_8218A540(ctx, base);
	// li r11,202
	ctx.r11.s64 = 202;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,688(r31)
	PPC_STORE_U16(ctx.r31.u32 + 688, ctx.r11.u16);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,690(r31)
	PPC_STORE_U16(ctx.r31.u32 + 690, ctx.r10.u16);
	// stw r9,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// addi r4,r10,-22432
	ctx.r4.s64 = ctx.r10.s64 + -22432;
	// bl 0x8218a540
	ctx.lr = 0x821A5E60;
	sub_8218A540(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,720(r31)
	PPC_STORE_U16(ctx.r31.u32 + 720, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,722(r31)
	PPC_STORE_U16(ctx.r31.u32 + 722, ctx.r10.u16);
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// addi r4,r9,-22448
	ctx.r4.s64 = ctx.r9.s64 + -22448;
	// bl 0x8218a540
	ctx.lr = 0x821A5E90;
	sub_8218A540(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,752(r31)
	PPC_STORE_U16(ctx.r31.u32 + 752, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,754(r31)
	PPC_STORE_U16(ctx.r31.u32 + 754, ctx.r10.u16);
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// addi r4,r8,-22464
	ctx.r4.s64 = ctx.r8.s64 + -22464;
	// bl 0x8218a540
	ctx.lr = 0x821A5EC0;
	sub_8218A540(ctx, base);
	// li r11,203
	ctx.r11.s64 = 203;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 784, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,786(r31)
	PPC_STORE_U16(ctx.r31.u32 + 786, ctx.r10.u16);
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// addi r4,r7,8800
	ctx.r4.s64 = ctx.r7.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x821A5EF0;
	sub_8218A540(ctx, base);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 816, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,818(r31)
	PPC_STORE_U16(ctx.r31.u32 + 818, ctx.r10.u16);
	// stw r9,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// addi r4,r6,-22348
	ctx.r4.s64 = ctx.r6.s64 + -22348;
	// bl 0x8218a540
	ctx.lr = 0x821A5F20;
	sub_8218A540(ctx, base);
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,848(r31)
	PPC_STORE_U16(ctx.r31.u32 + 848, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,850(r31)
	PPC_STORE_U16(ctx.r31.u32 + 850, ctx.r10.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// addi r4,r5,-22360
	ctx.r4.s64 = ctx.r5.s64 + -22360;
	// bl 0x8218a540
	ctx.lr = 0x821A5F50;
	sub_8218A540(ctx, base);
	// li r11,191
	ctx.r11.s64 = 191;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,880(r31)
	PPC_STORE_U16(ctx.r31.u32 + 880, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,882(r31)
	PPC_STORE_U16(ctx.r31.u32 + 882, ctx.r10.u16);
	// stw r9,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// addi r4,r4,-22372
	ctx.r4.s64 = ctx.r4.s64 + -22372;
	// bl 0x8218a540
	ctx.lr = 0x821A5F80;
	sub_8218A540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,912(r31)
	PPC_STORE_U16(ctx.r31.u32 + 912, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,914(r31)
	PPC_STORE_U16(ctx.r31.u32 + 914, ctx.r10.u16);
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// addi r4,r10,-22388
	ctx.r4.s64 = ctx.r10.s64 + -22388;
	// bl 0x8218a540
	ctx.lr = 0x821A5FB0;
	sub_8218A540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,944(r31)
	PPC_STORE_U16(ctx.r31.u32 + 944, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,946(r31)
	PPC_STORE_U16(ctx.r31.u32 + 946, ctx.r10.u16);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// addi r4,r9,-22476
	ctx.r4.s64 = ctx.r9.s64 + -22476;
	// bl 0x8218a540
	ctx.lr = 0x821A5FE0;
	sub_8218A540(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,976(r31)
	PPC_STORE_U16(ctx.r31.u32 + 976, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,978(r31)
	PPC_STORE_U16(ctx.r31.u32 + 978, ctx.r10.u16);
	// stw r9,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// addi r4,r8,-22492
	ctx.r4.s64 = ctx.r8.s64 + -22492;
	// bl 0x8218a540
	ctx.lr = 0x821A6010;
	sub_8218A540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1008(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1008, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,1010(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1010, ctx.r10.u16);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// addi r4,r7,-22508
	ctx.r4.s64 = ctx.r7.s64 + -22508;
	// bl 0x8218a540
	ctx.lr = 0x821A6040;
	sub_8218A540(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1040(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1040, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r10.u16);
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// addi r3,r31,1056
	ctx.r3.s64 = ctx.r31.s64 + 1056;
	// addi r4,r6,-22588
	ctx.r4.s64 = ctx.r6.s64 + -22588;
	// bl 0x8218a540
	ctx.lr = 0x821A6070;
	sub_8218A540(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1072, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,1074(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1074, ctx.r10.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r9,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r9.u32);
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// addi r4,r5,-23084
	ctx.r4.s64 = ctx.r5.s64 + -23084;
	// bl 0x8218a540
	ctx.lr = 0x821A60A0;
	sub_8218A540(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1104, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,1106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1106, ctx.r10.u16);
	// stw r9,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// addi r4,r4,-23100
	ctx.r4.s64 = ctx.r4.s64 + -23100;
	// bl 0x8218a540
	ctx.lr = 0x821A60D0;
	sub_8218A540(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,1136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1136, ctx.r11.u16);
	// sth r10,1138(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1138, ctx.r10.u16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r9.u32);
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// addi r4,r10,-23116
	ctx.r4.s64 = ctx.r10.s64 + -23116;
	// bl 0x8218a540
	ctx.lr = 0x821A60FC;
	sub_8218A540(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,1168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1168, ctx.r11.u16);
	// sth r10,1170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1170, ctx.r10.u16);
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// stw r9,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// addi r4,r9,-23132
	ctx.r4.s64 = ctx.r9.s64 + -23132;
	// bl 0x8218a540
	ctx.lr = 0x821A6128;
	sub_8218A540(ctx, base);
	// li r11,231
	ctx.r11.s64 = 231;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1200, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1202, ctx.r10.u16);
	// stw r9,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r11.u32);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// addi r4,r8,-23148
	ctx.r4.s64 = ctx.r8.s64 + -23148;
	// bl 0x8218a540
	ctx.lr = 0x821A6158;
	sub_8218A540(ctx, base);
	// li r11,232
	ctx.r11.s64 = 232;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1232, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1234(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1234, ctx.r10.u16);
	// stw r9,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// addi r4,r7,-22556
	ctx.r4.s64 = ctx.r7.s64 + -22556;
	// bl 0x8218a540
	ctx.lr = 0x821A6188;
	sub_8218A540(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1264, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,1266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1266, ctx.r10.u16);
	// stw r9,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// addi r3,r31,1280
	ctx.r3.s64 = ctx.r31.s64 + 1280;
	// addi r4,r6,-22572
	ctx.r4.s64 = ctx.r6.s64 + -22572;
	// bl 0x8218a540
	ctx.lr = 0x821A61B8;
	sub_8218A540(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1296, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,1298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1298, ctx.r10.u16);
	// stw r9,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// addi r4,r5,-23164
	ctx.r4.s64 = ctx.r5.s64 + -23164;
	// bl 0x8218a540
	ctx.lr = 0x821A61E8;
	sub_8218A540(ctx, base);
	// li r11,234
	ctx.r11.s64 = 234;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1328, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1330, ctx.r10.u16);
	// stw r9,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// addi r3,r31,1344
	ctx.r3.s64 = ctx.r31.s64 + 1344;
	// addi r4,r4,-23180
	ctx.r4.s64 = ctx.r4.s64 + -23180;
	// bl 0x8218a540
	ctx.lr = 0x821A6218;
	sub_8218A540(ctx, base);
	// li r11,235
	ctx.r11.s64 = 235;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1360, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1362(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1362, ctx.r10.u16);
	// stw r9,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// addi r3,r31,1376
	ctx.r3.s64 = ctx.r31.s64 + 1376;
	// addi r4,r10,-23196
	ctx.r4.s64 = ctx.r10.s64 + -23196;
	// bl 0x8218a540
	ctx.lr = 0x821A6248;
	sub_8218A540(ctx, base);
	// li r11,236
	ctx.r11.s64 = 236;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1392, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1394, ctx.r10.u16);
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// addi r4,r9,-23212
	ctx.r4.s64 = ctx.r9.s64 + -23212;
	// bl 0x8218a540
	ctx.lr = 0x821A6278;
	sub_8218A540(ctx, base);
	// li r11,237
	ctx.r11.s64 = 237;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1424, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1426(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1426, ctx.r10.u16);
	// stw r9,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// addi r4,r8,-23224
	ctx.r4.s64 = ctx.r8.s64 + -23224;
	// bl 0x8218a540
	ctx.lr = 0x821A62A8;
	sub_8218A540(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,1456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1456, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,1458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1458, ctx.r10.u16);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// addi r4,r7,-23236
	ctx.r4.s64 = ctx.r7.s64 + -23236;
	// bl 0x8218a540
	ctx.lr = 0x821A62D8;
	sub_8218A540(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,1488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1488, ctx.r11.u16);
	// sth r10,1490(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1490, ctx.r10.u16);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r9,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r9.u32);
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// addi r4,r6,-23252
	ctx.r4.s64 = ctx.r6.s64 + -23252;
	// bl 0x8218a540
	ctx.lr = 0x821A6304;
	sub_8218A540(ctx, base);
	// li r11,240
	ctx.r11.s64 = 240;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1520, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r10,1522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1522, ctx.r10.u16);
	// stw r9,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// addi r3,r31,1536
	ctx.r3.s64 = ctx.r31.s64 + 1536;
	// addi r4,r5,-23268
	ctx.r4.s64 = ctx.r5.s64 + -23268;
	// bl 0x8218a540
	ctx.lr = 0x821A6334;
	sub_8218A540(ctx, base);
	// li r11,241
	ctx.r11.s64 = 241;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1552, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1554(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1554, ctx.r10.u16);
	// stw r9,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r9.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// addi r3,r31,1568
	ctx.r3.s64 = ctx.r31.s64 + 1568;
	// addi r4,r4,-23284
	ctx.r4.s64 = ctx.r4.s64 + -23284;
	// bl 0x8218a540
	ctx.lr = 0x821A6364;
	sub_8218A540(ctx, base);
	// li r11,242
	ctx.r11.s64 = 242;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1584, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1586(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1586, ctx.r10.u16);
	// stw r9,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// addi r4,r10,-23300
	ctx.r4.s64 = ctx.r10.s64 + -23300;
	// bl 0x8218a540
	ctx.lr = 0x821A6394;
	sub_8218A540(ctx, base);
	// li r11,243
	ctx.r11.s64 = 243;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1616, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1618, ctx.r10.u16);
	// stw r9,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// addi r3,r31,1632
	ctx.r3.s64 = ctx.r31.s64 + 1632;
	// addi r4,r9,-23316
	ctx.r4.s64 = ctx.r9.s64 + -23316;
	// bl 0x8218a540
	ctx.lr = 0x821A63C4;
	sub_8218A540(ctx, base);
	// li r11,244
	ctx.r11.s64 = 244;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,1648(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1648, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,1650(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1650, ctx.r10.u16);
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
loc_821A63E4:
	// li r8,52
	ctx.r8.s64 = 52;
loc_821A63E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821a6428
	if (!ctx.cr6.gt) goto loc_821A6428;
	// ld r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r16.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821A63FC:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821a6418
	if (!ctx.cr6.eq) goto loc_821A6418;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,8(r16)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r16.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x821a6434
	if (ctx.cr6.eq) goto loc_821A6434;
loc_821A6418:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821a63fc
	if (ctx.cr6.lt) goto loc_821A63FC;
loc_821A6428:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
loc_821A6434:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_821A6444"))) PPC_WEAK_FUNC(sub_821A6444);
PPC_FUNC_IMPL(__imp__sub_821A6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6448"))) PPC_WEAK_FUNC(sub_821A6448);
PPC_FUNC_IMPL(__imp__sub_821A6448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23344
	ctx.r10.s64 = ctx.r11.s64 + -23344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19012(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19012, ctx.r11.u32);
	// bl 0x8218b208
	ctx.lr = 0x821A6484;
	sub_8218B208(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a64a0
	if (ctx.cr6.eq) goto loc_821A64A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A649C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A64A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A64B8"))) PPC_WEAK_FUNC(sub_821A64B8);
PPC_FUNC_IMPL(__imp__sub_821A64B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A64C0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x821A64D4;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-23344
	ctx.r10.s64 = ctx.r11.s64 + -23344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82182e90
	ctx.lr = 0x821A64E4;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A64EC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A64F8;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x821A650C;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821A6518;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821a6530
	if (ctx.cr6.eq) goto loc_821A6530;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x821A652C;
	sub_8218AE98(ctx, base);
	// b 0x821a6534
	goto loc_821A6534;
loc_821A6530:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6534:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821A6544;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821a655c
	if (ctx.cr6.eq) goto loc_821A655C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x821A6558;
	sub_8218AC78(ctx, base);
	// b 0x821a6560
	goto loc_821A6560;
loc_821A655C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6560:
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,-19012(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19012, ctx.r31.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x821A6578;
	sub_8218A7F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A6580;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A658C"))) PPC_WEAK_FUNC(sub_821A658C);
PPC_FUNC_IMPL(__imp__sub_821A658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6590"))) PPC_WEAK_FUNC(sub_821A6590);
PPC_FUNC_IMPL(__imp__sub_821A6590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A6598;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,-12412(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12412);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,-12412(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12412, ctx.r11.u32);
	// beq cr6,0x821a6778
	if (ctx.cr6.eq) goto loc_821A6778;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgt cr6,0x821a6684
	if (ctx.cr6.gt) goto loc_821A6684;
	// addi r30,r4,-16
	ctx.r30.s64 = ctx.r4.s64 + -16;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821a6778
	if (ctx.cr6.lt) goto loc_821A6778;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
loc_821A65F0:
	// ld r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// li r5,16
	ctx.r5.s64 = 16;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8224b2a0
	ctx.lr = 0x821A6614;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821a6650
	if (!ctx.cr6.lt) goto loc_821A6650;
loc_821A661C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x821a6650
	if (ctx.cr6.gt) goto loc_821A6650;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r10.u64);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b2a0
	ctx.lr = 0x821A6648;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a661c
	if (ctx.cr6.lt) goto loc_821A661C;
loc_821A6650:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// std r11,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r11.u64);
	// std r10,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r10.u64);
	// bge cr6,0x821a65f0
	if (!ctx.cr6.lt) goto loc_821A65F0;
	// lwz r11,-12412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12412);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-12412(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12412, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821A6684:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
loc_821A66B0:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b2a0
	ctx.lr = 0x821A66C0;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821a66e4
	if (!ctx.cr6.lt) goto loc_821A66E4;
loc_821A66C8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b2a0
	ctx.lr = 0x821A66DC;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a66c8
	if (ctx.cr6.lt) goto loc_821A66C8;
loc_821A66E4:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224b2a0
	ctx.lr = 0x821A66F4;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821a6718
	if (!ctx.cr6.lt) goto loc_821A6718;
loc_821A66FC:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224b2a0
	ctx.lr = 0x821A6710;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a66fc
	if (ctx.cr6.lt) goto loc_821A66FC;
loc_821A6718:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821a675c
	if (!ctx.cr6.lt) goto loc_821A675C;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// b 0x821a66b0
	goto loc_821A66B0;
loc_821A675C:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a6590
	ctx.lr = 0x821A6768;
	sub_821A6590(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6590
	ctx.lr = 0x821A6774;
	sub_821A6590(ctx, base);
	// lwz r11,-12412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12412);
loc_821A6778:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-12412(r26)
	PPC_STORE_U32(ctx.r26.u32 + -12412, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821A6788"))) PPC_WEAK_FUNC(sub_821A6788);
PPC_FUNC_IMPL(__imp__sub_821A6788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821A6790;
	sub_8224876C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r22,8(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r24,12(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// beq cr6,0x821a67c0
	if (ctx.cr6.eq) goto loc_821A67C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a6848
	if (ctx.cr6.eq) goto loc_821A6848;
loc_821A67C0:
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// dcbzl r0,r25
	memset(base + ((ctx.r25.u32) & ~127), 0, 128);
	// lwz r11,288(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a67f4
	if (!ctx.cr6.gt) goto loc_821A67F4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821A67DC:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,288(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a67dc
	if (ctx.cr6.lt) goto loc_821A67DC;
loc_821A67F4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,28232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a6810
	if (ctx.cr6.eq) goto loc_821A6810;
	// lwz r11,696(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a6848
	if (!ctx.cr6.eq) goto loc_821A6848;
loc_821A6810:
	// lwz r11,256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// dcbzl r0,r11
	memset(base + ((ctx.r11.u32) & ~127), 0, 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,292(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x821a6848
	if (!ctx.cr6.gt) goto loc_821A6848;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A682C:
	// lwz r9,256(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,292(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821a682c
	if (ctx.cr6.lt) goto loc_821A682C;
loc_821A6848:
	// lwz r30,700(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 700);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822be3d0
	ctx.lr = 0x821A6858;
	sub_822BE3D0(ctx, base);
	// lwz r9,692(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 692);
	// lwz r8,20(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r7,24(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r9,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// lwz r6,136(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// lwz r5,128(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r23,r6,r5
	ctx.r23.u64 = ctx.r6.u64 & ctx.r5.u64;
	// or r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 | ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a6af0
	if (ctx.cr6.eq) goto loc_821A6AF0;
	// lwz r9,300(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,296(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// lwz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x821a69c8
	if (ctx.cr6.eq) goto loc_821A69C8;
	// addi r31,r24,28
	ctx.r31.s64 = ctx.r24.s64 + 28;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a6918
	if (ctx.cr6.eq) goto loc_821A6918;
loc_821A68CC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821A6904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,16(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821a68cc
	if (ctx.cr6.lt) goto loc_821A68CC;
loc_821A6918:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a6988
	if (!ctx.cr6.gt) goto loc_821A6988;
loc_821A6928:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x821A6974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821a6928
	if (ctx.cr6.lt) goto loc_821A6928;
loc_821A6988:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a69c8
	if (!ctx.cr6.gt) goto loc_821A69C8;
loc_821A6998:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A69B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a6998
	if (ctx.cr6.lt) goto loc_821A6998;
loc_821A69C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a6af0
	if (ctx.cr6.eq) goto loc_821A6AF0;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r31,r29,140
	ctx.r31.s64 = ctx.r29.s64 + 140;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a6a34
	if (!ctx.cr6.gt) goto loc_821A6A34;
loc_821A69E4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// lwz r7,468(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 468);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821A6A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,128(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821a69e4
	if (ctx.cr6.lt) goto loc_821A69E4;
loc_821A6A34:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a6aa8
	if (!ctx.cr6.gt) goto loc_821A6AA8;
loc_821A6A44:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,468(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 468);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v60,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bctrl 
	ctx.lr = 0x821A6A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,132(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821a6a44
	if (ctx.cr6.lt) goto loc_821A6A44;
loc_821A6AA8:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821a6af0
	if (!ctx.cr6.gt) goto loc_821A6AF0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_821A6ABC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,-2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2);
	// lwz r8,468(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A6ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,136(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821a6abc
	if (ctx.cr6.lt) goto loc_821A6ABC;
loc_821A6AF0:
	// lwz r11,692(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 692);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a6bd0
	if (ctx.cr6.eq) goto loc_821A6BD0;
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v59,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r25,320
	ctx.r11.s64 = ctx.r25.s64 + 320;
	// lvx128 v58,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r25,384
	ctx.r10.s64 = ctx.r25.s64 + 384;
	// addi r9,r25,400
	ctx.r9.s64 = ctx.r25.s64 + 400;
	// addi r8,r25,416
	ctx.r8.s64 = ctx.r25.s64 + 416;
	// lvx128 v48,r29,r31
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r25,432
	ctx.r7.s64 = ctx.r25.s64 + 432;
	// addi r6,r25,448
	ctx.r6.s64 = ctx.r25.s64 + 448;
	// lvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r25,464
	ctx.r5.s64 = ctx.r25.s64 + 464;
	// lvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r25,480
	ctx.r4.s64 = ctx.r25.s64 + 480;
	// lvx128 v55,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r25,496
	ctx.r3.s64 = ctx.r25.s64 + 496;
	// lvx128 v54,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	ctx.r30.s64 = 32;
	// lvx128 v53,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,48
	ctx.r28.s64 = 48;
	// lvx128 v52,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,64
	ctx.r27.s64 = 64;
	// lvx128 v51,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,80
	ctx.r26.s64 = 80;
	// lvx128 v50,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,96
	ctx.r24.s64 = 96;
	// lvx128 v49,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,112
	ctx.r31.s64 = 112;
	// lvx128 v47,r29,r30
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r29,r28
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v45,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvx128 v44,r29,r27
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v43,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvx128 v42,r29,r26
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v55,v48
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v40,r29,r24
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v39,v54,v47
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvx128 v38,r29,r31
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v37,v53,v46
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vor128 v36,v52,v44
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// stvx128 v45,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v51,v42
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// stvx128 v43,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v34,v50,v40
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// stvx128 v41,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v49,v38
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// stvx128 v39,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_821A6BD0:
	// stw r22,536(r25)
	PPC_STORE_U32(ctx.r25.u32 + 536, ctx.r22.u32);
	// stw r21,532(r25)
	PPC_STORE_U32(ctx.r25.u32 + 532, ctx.r21.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821A6BE0"))) PPC_WEAK_FUNC(sub_821A6BE0);
PPC_FUNC_IMPL(__imp__sub_821A6BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,524(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a6c40
	if (ctx.cr6.eq) goto loc_821A6C40;
	// lwz r6,512(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r8,0
	ctx.r8.s64 = 0;
loc_821A6BF8:
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_821A6C04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x821a6c28
	if (ctx.cr6.eq) goto loc_821A6C28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a6c04
	if (ctx.cr6.eq) goto loc_821A6C04;
loc_821A6C28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a6c48
	if (ctx.cr6.eq) goto loc_821A6C48;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821a6bf8
	if (ctx.cr6.lt) goto loc_821A6BF8;
loc_821A6C40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A6C48:
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,65532
	ctx.r3.u64 = ctx.r3.u64 | 65532;
	// rlwimi r3,r7,18,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A6C58"))) PPC_WEAK_FUNC(sub_821A6C58);
PPC_FUNC_IMPL(__imp__sub_821A6C58) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A6C60;
	sub_82248788(ctx, base);
	// lwz r8,668(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// lwz r6,268(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,264(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// rlwinm r30,r4,16,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFC;
	// lwz r4,664(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// rlwinm r10,r31,17,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1FFF8;
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 & ctx.r11.u64;
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// and r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 & ctx.r11.u64;
	// andc r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r31,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r10,r6,27
	ctx.r10.u64 = ctx.r6.u32 & 0x1F;
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r7,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a6d3c
	if (!ctx.cr6.eq) goto loc_821A6D3C;
	// rlwinm r10,r10,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7;
	// rlwinm r10,r7,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r7,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r4,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// b 0x821a6d64
	goto loc_821A6D64;
loc_821A6D3C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r6,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFF;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
loc_821A6D64:
	// lwz r10,612(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821a6d9c
	if (!ctx.cr6.gt) goto loc_821A6D9C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a6d8c
	if (ctx.cr6.eq) goto loc_821A6D8C;
	// lwz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821A6D8C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821A6D9C:
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A6DA4"))) PPC_WEAK_FUNC(sub_821A6DA4);
PPC_FUNC_IMPL(__imp__sub_821A6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6DA8"))) PPC_WEAK_FUNC(sub_821A6DA8);
PPC_FUNC_IMPL(__imp__sub_821A6DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821A6DB0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a6f28
	if (ctx.cr6.eq) goto loc_821A6F28;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r29,700(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a6e6c
	if (ctx.cr6.eq) goto loc_821A6E6C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r26,r11,28264
	ctx.r26.s64 = ctx.r11.s64 + 28264;
loc_821A6DE8:
	// addi r11,r25,40
	ctx.r11.s64 = ctx.r25.s64 + 40;
	// rlwinm r31,r25,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r28,r10,r24
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r24.u32);
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x821a6e60
	if (ctx.cr6.eq) goto loc_821A6E60;
loc_821A6E00:
	// cntlzd r11,r28
	ctx.r11.u64 = ctx.r28.u64 == 0 ? 64 : __builtin_clzll(ctx.r28.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sld r9,r28,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r28.u64 << (ctx.r10.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzd r11,r8
	ctx.r11.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// add r30,r10,r26
	ctx.r30.u64 = ctx.r10.u64 + ctx.r26.u64;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sld r28,r9,r7
	ctx.r28.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r7.u8 & 0x7F));
loc_821A6E2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A6E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821a6e2c
	if (!ctx.cr6.eq) goto loc_821A6E2C;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// bne cr6,0x821a6e00
	if (!ctx.cr6.eq) goto loc_821A6E00;
loc_821A6E60:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// blt cr6,0x821a6de8
	if (ctx.cr6.lt) goto loc_821A6DE8;
loc_821A6E6C:
	// lwz r11,692(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 692);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a6f28
	if (ctx.cr6.eq) goto loc_821A6F28;
	// lwz r11,516(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 516);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a6f28
	if (ctx.cr6.eq) goto loc_821A6F28;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r11,28984
	ctx.r30.s64 = ctx.r11.s64 + 28984;
loc_821A6E98:
	// rlwinm r11,r27,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r26,r10,r24
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r24.u32);
	// cmpldi cr6,r26,0
	ctx.cr6.compare<uint64_t>(ctx.r26.u64, 0, ctx.xer);
	// beq cr6,0x821a6f1c
	if (ctx.cr6.eq) goto loc_821A6F1C;
loc_821A6EB4:
	// cntlzd r11,r26
	ctx.r11.u64 = ctx.r26.u64 == 0 ? 64 : __builtin_clzll(ctx.r26.u64);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sld r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r10.u8 & 0x7F));
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cntlzd r11,r8
	ctx.r11.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sld r26,r9,r7
	ctx.r26.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r7.u8 & 0x7F));
loc_821A6ED8:
	// rlwinm r10,r31,3,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xF8;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,468(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 468);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A6F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821a6ed8
	if (!ctx.cr6.eq) goto loc_821A6ED8;
	// cmpldi cr6,r26,0
	ctx.cr6.compare<uint64_t>(ctx.r26.u64, 0, ctx.xer);
	// bne cr6,0x821a6eb4
	if (!ctx.cr6.eq) goto loc_821A6EB4;
loc_821A6F1C:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821a6e98
	if (ctx.cr6.lt) goto loc_821A6E98;
loc_821A6F28:
	// stw r23,516(r24)
	PPC_STORE_U32(ctx.r24.u32 + 516, ctx.r23.u32);
	// stw r23,520(r24)
	PPC_STORE_U32(ctx.r24.u32 + 520, ctx.r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821A6F38"))) PPC_WEAK_FUNC(sub_821A6F38);
PPC_FUNC_IMPL(__imp__sub_821A6F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-19008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19008, ctx.r30.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r30,-19016(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19016, ctx.r30.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6f8c
	if (ctx.cr6.eq) goto loc_821A6F8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A6F80;
	sub_82183E40(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_821A6F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A6FA4"))) PPC_WEAK_FUNC(sub_821A6FA4);
PPC_FUNC_IMPL(__imp__sub_821A6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6FA8"))) PPC_WEAK_FUNC(sub_821A6FA8);
PPC_FUNC_IMPL(__imp__sub_821A6FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821A6FB0;
	sub_8224876C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r31,684(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 684);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// lwz r10,524(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r30,r31,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x821a6fec
	if (!ctx.cr6.gt) goto loc_821A6FEC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_821A6FEC:
	// bl 0x82183850
	ctx.lr = 0x821A6FF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a7008
	if (ctx.cr6.eq) goto loc_821A7008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A7004;
	sub_82183448(ctx, base);
	// b 0x821a7014
	goto loc_821A7014;
loc_821A7008:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A7014;
	sub_821845A0(ctx, base);
loc_821A7014:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// beq cr6,0x821a7048
	if (ctx.cr6.eq) goto loc_821A7048;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a7040
	if (ctx.cr0.lt) goto loc_821A7040;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821A7034:
	// std r21,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r21.u64);
	// stdu r21,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r21.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821a7034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A7034;
loc_821A7040:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x821a704c
	goto loc_821A704C;
loc_821A7048:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_821A704C:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// ori r24,r9,65535
	ctx.r24.u64 = ctx.r9.u64 | 65535;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x821a706c
	if (!ctx.cr6.gt) goto loc_821A706C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821A706C:
	// bl 0x82183850
	ctx.lr = 0x821A7070;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a7088
	if (ctx.cr6.eq) goto loc_821A7088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A7084;
	sub_82183448(ctx, base);
	// b 0x821a7094
	goto loc_821A7094;
loc_821A7088:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A7094;
	sub_821845A0(ctx, base);
loc_821A7094:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a710c
	if (!ctx.cr6.gt) goto loc_821A710C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_821A70B0:
	// lwz r11,680(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 680);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a70ec
	if (ctx.cr6.eq) goto loc_821A70EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a6c58
	ctx.lr = 0x821A70D0;
	sub_821A6C58(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8218a540
	ctx.lr = 0x821A70E0;
	sub_8218A540(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// b 0x821a70f4
	goto loc_821A70F4;
loc_821A70EC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stwx r21,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u32);
loc_821A70F4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a70b0
	if (ctx.cr6.lt) goto loc_821A70B0;
loc_821A710C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a7350
	if (!ctx.cr6.gt) goto loc_821A7350;
	// bl 0x82182e90
	ctx.lr = 0x821A711C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A7124;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A7130;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821A7134;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821A7140;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821A7148;
	sub_821830F8(ctx, base);
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r31,r30,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x821a715c
	if (!ctx.cr6.gt) goto loc_821A715C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821A715C:
	// bl 0x82183850
	ctx.lr = 0x821A7160;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a7178
	if (ctx.cr6.eq) goto loc_821A7178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A7174;
	sub_82183448(ctx, base);
	// b 0x821a7184
	goto loc_821A7184;
loc_821A7178:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A7184;
	sub_821845A0(ctx, base);
loc_821A7184:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a71b4
	if (ctx.cr6.eq) goto loc_821A71B4;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a71ac
	if (ctx.cr0.lt) goto loc_821A71AC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A71A0:
	// std r21,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r21.u64);
	// stdu r21,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r21.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821a71a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A71A0;
loc_821A71AC:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x821a71b8
	goto loc_821A71B8;
loc_821A71B4:
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_821A71B8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821a71cc
	if (!ctx.cr6.gt) goto loc_821A71CC;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821A71CC:
	// bl 0x82183850
	ctx.lr = 0x821A71D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a71e8
	if (ctx.cr6.eq) goto loc_821A71E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A71E4;
	sub_82183448(ctx, base);
	// b 0x821a71f4
	goto loc_821A71F4;
loc_821A71E8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A71F4;
	sub_821845A0(ctx, base);
loc_821A71F4:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x821a720c
	if (ctx.cr6.lt) goto loc_821A720C;
	// bne cr6,0x821a7214
	if (!ctx.cr6.eq) goto loc_821A7214;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a7210
	goto loc_821A7210;
loc_821A720C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A7210:
	// bl 0x821830f8
	ctx.lr = 0x821A7214;
	sub_821830F8(ctx, base);
loc_821A7214:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A721C;
	sub_821837D0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821847a8
	ctx.lr = 0x821A7230;
	sub_821847A8(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x821A7244;
	sub_821847A8(ctx, base);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x821a6590
	ctx.lr = 0x821A725C;
	sub_821A6590(ctx, base);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821a7328
	if (!ctx.cr6.gt) goto loc_821A7328;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_821A7274:
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r27,28(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// blt 0x821a7310
	if (ctx.cr0.lt) goto loc_821A7310;
loc_821A7298:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// ldx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r27.u32);
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x821a72cc
	if (!ctx.cr6.eq) goto loc_821A72CC;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x821a72f8
	if (ctx.cr6.eq) goto loc_821A72F8;
loc_821A72CC:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224b2a0
	ctx.lr = 0x821A72D8;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821a72e8
	if (!ctx.cr6.lt) goto loc_821A72E8;
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// b 0x821a72ec
	goto loc_821A72EC;
loc_821A72E8:
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
loc_821A72EC:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x821a7298
	if (!ctx.cr6.gt) goto loc_821A7298;
	// b 0x821a7310
	goto loc_821A7310;
loc_821A72F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821a7310
	if (ctx.cr6.lt) goto loc_821A7310;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_821A7310:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a7274
	if (ctx.cr6.lt) goto loc_821A7274;
loc_821A7328:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a733c
	if (ctx.cr6.eq) goto loc_821A733C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A733C;
	sub_82183E40(ctx, base);
loc_821A733C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821a7350
	if (ctx.cr6.eq) goto loc_821A7350;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A7350;
	sub_82183E40(ctx, base);
loc_821A7350:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821A7358"))) PPC_WEAK_FUNC(sub_821A7358);
PPC_FUNC_IMPL(__imp__sub_821A7358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A7360;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821a6be0
	ctx.lr = 0x821A737C;
	sub_821A6BE0(ctx, base);
	// lwz r10,512(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 512);
	// rlwinm r9,r3,16,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,692(r28)
	PPC_STORE_U32(ctx.r28.u32 + 692, ctx.r11.u32);
	// stw r11,540(r28)
	PPC_STORE_U32(ctx.r28.u32 + 540, ctx.r11.u32);
	// stw r3,520(r28)
	PPC_STORE_U32(ctx.r28.u32 + 520, ctx.r3.u32);
	// stw r6,516(r28)
	PPC_STORE_U32(ctx.r28.u32 + 516, ctx.r6.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,516(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwzx r4,r7,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x821a6788
	ctx.lr = 0x821A73B4;
	sub_821A6788(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821a73c4
	if (ctx.cr6.eq) goto loc_821A73C4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822be420
	ctx.lr = 0x821A73C4;
	sub_822BE420(ctx, base);
loc_821A73C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A73CC"))) PPC_WEAK_FUNC(sub_821A73CC);
PPC_FUNC_IMPL(__imp__sub_821A73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A73D0"))) PPC_WEAK_FUNC(sub_821A73D0);
PPC_FUNC_IMPL(__imp__sub_821A73D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A73D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfc r9,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r10,-21548
	ctx.r4.s64 = ctx.r10.s64 + -21548;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x821A7410;
	sub_8209EDA0(ctx, base);
	// rlwinm r6,r29,18,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r5,r6,3
	ctx.r5.u64 = ctx.r6.u64 | 196608;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// ori r5,r5,65532
	ctx.r5.u64 = ctx.r5.u64 | 65532;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,512(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 512);
	// rlwinm r3,r5,16,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFC;
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stw r11,692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 692, ctx.r11.u32);
	// stw r11,540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 540, ctx.r11.u32);
	// stw r5,520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 520, ctx.r5.u32);
	// stw r7,516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 516, ctx.r7.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,516(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x821a6788
	ctx.lr = 0x821A7458;
	sub_821A6788(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821a7468
	if (ctx.cr6.eq) goto loc_821A7468;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822be420
	ctx.lr = 0x821A7468;
	sub_822BE420(ctx, base);
loc_821A7468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A7470"))) PPC_WEAK_FUNC(sub_821A7470);
PPC_FUNC_IMPL(__imp__sub_821A7470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// stw r9,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r9.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x821a6da8
	sub_821A6DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A748C"))) PPC_WEAK_FUNC(sub_821A748C);
PPC_FUNC_IMPL(__imp__sub_821A748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7490"))) PPC_WEAK_FUNC(sub_821A7490);
PPC_FUNC_IMPL(__imp__sub_821A7490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a38e0
	ctx.lr = 0x821A74B0;
	sub_821A38E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a753c
	if (ctx.cr6.eq) goto loc_821A753C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r3,28,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r3,17,15,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0x1FFF8;
	// rlwinm r30,r3,31,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7;
	// lwz r31,268(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 268);
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// lwz r8,256(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 256);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lwz r3,300(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 300);
	// andc r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// lwz r6,264(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 264);
	// addi r4,r4,-23324
	ctx.r4.s64 = ctx.r4.s64 + -23324;
	// lwz r5,296(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 296);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// andc r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// lbzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// andc r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// or r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 | ctx.r31.u64;
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r6,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFF0;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v63,r4,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_821A753C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A7554"))) PPC_WEAK_FUNC(sub_821A7554);
PPC_FUNC_IMPL(__imp__sub_821A7554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7558"))) PPC_WEAK_FUNC(sub_821A7558);
PPC_FUNC_IMPL(__imp__sub_821A7558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A7560;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8211b248
	ctx.lr = 0x821A756C;
	sub_8211B248(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,-19008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19008);
	// bl 0x821a75f0
	ctx.lr = 0x821A7584;
	sub_821A75F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a75dc
	if (ctx.cr6.eq) goto loc_821A75DC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a75a4
	if (ctx.cr6.eq) goto loc_821A75A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A75A4;
	sub_82183E40(ctx, base);
loc_821A75A4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a75c0
	if (ctx.cr6.eq) goto loc_821A75C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A75C0;
	sub_82183E40(ctx, base);
loc_821A75C0:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A75D0;
	sub_82183E40(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A75DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A75EC"))) PPC_WEAK_FUNC(sub_821A75EC);
PPC_FUNC_IMPL(__imp__sub_821A75EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A75F0"))) PPC_WEAK_FUNC(sub_821A75F0);
PPC_FUNC_IMPL(__imp__sub_821A75F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821a7674
	if (!ctx.cr6.lt) goto loc_821A7674;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821a7674
	if (!ctx.cr6.eq) goto loc_821A7674;
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r8,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ld r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_821A7674:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A767C"))) PPC_WEAK_FUNC(sub_821A767C);
PPC_FUNC_IMPL(__imp__sub_821A767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7680"))) PPC_WEAK_FUNC(sub_821A7680);
PPC_FUNC_IMPL(__imp__sub_821A7680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A7688;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x821a76c0
	if (!ctx.cr6.gt) goto loc_821A76C0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_821A76C0:
	// bl 0x82183850
	ctx.lr = 0x821A76C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a76dc
	if (ctx.cr6.eq) goto loc_821A76DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821A76D8;
	sub_82183448(ctx, base);
	// b 0x821a76e8
	goto loc_821A76E8;
loc_821A76DC:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A76E8;
	sub_821845A0(ctx, base);
loc_821A76E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a772c
	if (ctx.cr6.eq) goto loc_821A772C;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a7724
	if (ctx.cr0.lt) goto loc_821A7724;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A7704:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a7704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A7704;
loc_821A7724:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821a7730
	goto loc_821A7730;
loc_821A772C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821A7730:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bl 0x82183078
	ctx.lr = 0x821A773C;
	sub_82183078(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-19020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19020, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A7758"))) PPC_WEAK_FUNC(sub_821A7758);
PPC_FUNC_IMPL(__imp__sub_821A7758) {
	PPC_FUNC_PROLOGUE();
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
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8218a588
	ctx.lr = 0x821A778C;
	sub_8218A588(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a7858
	if (!ctx.cr6.gt) goto loc_821A7858;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
loc_821A77A4:
	// lwz r11,-19008(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19008);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a7808
	if (!ctx.cr6.lt) goto loc_821A7808;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a7808
	if (!ctx.cr6.eq) goto loc_821A7808;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a780c
	goto loc_821A780C;
loc_821A7808:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A780C:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a7844
	if (ctx.cr6.eq) goto loc_821A7844;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x821a7844
	if (!ctx.cr6.eq) goto loc_821A7844;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x821a7894
	if (ctx.cr6.eq) goto loc_821A7894;
loc_821A7844:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a77a4
	if (ctx.cr6.lt) goto loc_821A77A4;
loc_821A7858:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_821A7878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
loc_821A7894:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x821a7878
	goto loc_821A7878;
}

__attribute__((alias("__imp__sub_821A78B0"))) PPC_WEAK_FUNC(sub_821A78B0);
PPC_FUNC_IMPL(__imp__sub_821A78B0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a7970
	if (!ctx.cr6.gt) goto loc_821A7970;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
loc_821A78D0:
	// lwz r11,-19224(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19224);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821a7934
	if (!ctx.cr6.lt) goto loc_821A7934;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821a7934
	if (!ctx.cr6.eq) goto loc_821A7934;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a7938
	goto loc_821A7938;
loc_821A7934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A7938:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a795c
	if (ctx.cr6.eq) goto loc_821A795C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821a799c
	if (ctx.cr6.eq) goto loc_821A799C;
loc_821A795C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a78d0
	if (ctx.cr6.lt) goto loc_821A78D0;
loc_821A7970:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_821A799C:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A79C0"))) PPC_WEAK_FUNC(sub_821A79C0);
PPC_FUNC_IMPL(__imp__sub_821A79C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8218a540
	ctx.lr = 0x821A79E4;
	sub_8218A540(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a7490
	ctx.lr = 0x821A79F4;
	sub_821A7490(ctx, base);
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

__attribute__((alias("__imp__sub_821A7A0C"))) PPC_WEAK_FUNC(sub_821A7A0C);
PPC_FUNC_IMPL(__imp__sub_821A7A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7A10"))) PPC_WEAK_FUNC(sub_821A7A10);
PPC_FUNC_IMPL(__imp__sub_821A7A10) {
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
	// bl 0x821aede8
	ctx.lr = 0x821A7A28;
	sub_821AEDE8(ctx, base);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-19016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19016, ctx.r31.u32);
	// stw r31,-19008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19008, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A7A54"))) PPC_WEAK_FUNC(sub_821A7A54);
PPC_FUNC_IMPL(__imp__sub_821A7A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7A58"))) PPC_WEAK_FUNC(sub_821A7A58);
PPC_FUNC_IMPL(__imp__sub_821A7A58) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,-19008(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19008);
	// bl 0x82112458
	ctx.lr = 0x821A7AA8;
	sub_82112458(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_821A7AFC"))) PPC_WEAK_FUNC(sub_821A7AFC);
PPC_FUNC_IMPL(__imp__sub_821A7AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7B00"))) PPC_WEAK_FUNC(sub_821A7B00);
PPC_FUNC_IMPL(__imp__sub_821A7B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A7B08;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a7bdc
	if (!ctx.cr6.gt) goto loc_821A7BDC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
loc_821A7B2C:
	// lwz r11,-19008(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19008);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a7b90
	if (!ctx.cr6.lt) goto loc_821A7B90;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a7b90
	if (!ctx.cr6.eq) goto loc_821A7B90;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a7b94
	goto loc_821A7B94;
loc_821A7B90:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821A7B94:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a7bc8
	if (ctx.cr6.eq) goto loc_821A7BC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7bbc
	if (ctx.cr6.eq) goto loc_821A7BBC;
	// bl 0x822be2a8
	ctx.lr = 0x821A7BBC;
	sub_822BE2A8(ctx, base);
loc_821A7BBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821a7558
	ctx.lr = 0x821A7BC8;
	sub_821A7558(ctx, base);
loc_821A7BC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a7b2c
	if (ctx.cr6.lt) goto loc_821A7B2C;
loc_821A7BDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7bf0
	if (ctx.cr6.eq) goto loc_821A7BF0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A7BF0;
	sub_82183E40(ctx, base);
loc_821A7BF0:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A7C00"))) PPC_WEAK_FUNC(sub_821A7C00);
PPC_FUNC_IMPL(__imp__sub_821A7C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821A7C08;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821a7b00
	ctx.lr = 0x821A7C14;
	sub_821A7B00(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a7d84
	if (!ctx.cr6.gt) goto loc_821A7D84;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
loc_821A7C30:
	// lwz r11,-19224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19224);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r28,r10
	ctx.r8.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a7c94
	if (!ctx.cr6.lt) goto loc_821A7C94;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a7c94
	if (!ctx.cr6.eq) goto loc_821A7C94;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a7c98
	goto loc_821A7C98;
loc_821A7C94:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A7C98:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a7d70
	if (ctx.cr6.eq) goto loc_821A7D70;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7cc4
	if (ctx.cr6.eq) goto loc_821A7CC4;
	// bl 0x82268fb0
	ctx.lr = 0x821A7CC0;
	sub_82268FB0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_821A7CC4:
	// lwz r11,-19224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19224);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r30,r28,r10
	ctx.r30.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821a7d28
	if (!ctx.cr6.lt) goto loc_821A7D28;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821a7d28
	if (!ctx.cr6.eq) goto loc_821A7D28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a7d2c
	goto loc_821A7D2C;
loc_821A7D28:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A7D2C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r3,-19224(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19224);
	// bl 0x821a75f0
	ctx.lr = 0x821A7D40;
	sub_821A75F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7d6c
	if (ctx.cr6.eq) goto loc_821A7D6C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7d60
	if (ctx.cr6.eq) goto loc_821A7D60;
	// bl 0x82268fb0
	ctx.lr = 0x821A7D5C;
	sub_82268FB0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_821A7D60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A7D6C;
	sub_82183E40(ctx, base);
loc_821A7D6C:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_821A7D70:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a7c30
	if (ctx.cr6.lt) goto loc_821A7C30;
loc_821A7D84:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7d98
	if (ctx.cr6.eq) goto loc_821A7D98;
	// bl 0x822b8888
	ctx.lr = 0x821A7D94;
	sub_822B8888(ctx, base);
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
loc_821A7D98:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7dac
	if (ctx.cr6.eq) goto loc_821A7DAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821A7DAC;
	sub_82183E40(ctx, base);
loc_821A7DAC:
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821A7DBC"))) PPC_WEAK_FUNC(sub_821A7DBC);
PPC_FUNC_IMPL(__imp__sub_821A7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7DC0"))) PPC_WEAK_FUNC(sub_821A7DC0);
PPC_FUNC_IMPL(__imp__sub_821A7DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A7DC8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821a7b00
	ctx.lr = 0x821A7DD8;
	sub_821A7B00(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// rlwinm r31,r30,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a7df4
	if (!ctx.cr6.gt) goto loc_821A7DF4;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821A7DF4:
	// bl 0x82183850
	ctx.lr = 0x821A7DF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821a7e10
	if (ctx.cr6.eq) goto loc_821A7E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821A7E0C;
	sub_82183448(ctx, base);
	// b 0x821a7e1c
	goto loc_821A7E1C;
loc_821A7E10:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821A7E1C;
	sub_821845A0(ctx, base);
loc_821A7E1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7e68
	if (ctx.cr6.eq) goto loc_821A7E68;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821a7e5c
	if (ctx.cr0.lt) goto loc_821A7E5C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821A7E3C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a7e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A7E3C;
loc_821A7E5C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821A7E68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A7E78"))) PPC_WEAK_FUNC(sub_821A7E78);
PPC_FUNC_IMPL(__imp__sub_821A7E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821A7E80;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A7E8C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821A7E94;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A7EA0;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b8798
	ctx.lr = 0x821A7EA8;
	sub_822B8798(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r24,48(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821a1448
	ctx.lr = 0x821A7EB8;
	sub_821A1448(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1118
	ctx.lr = 0x821A7EC0;
	sub_821A1118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a7edc
	if (!ctx.cr6.eq) goto loc_821A7EDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A7ED8;
	sub_82183E40(ctx, base);
	// b 0x821a8090
	goto loc_821A8090;
loc_821A7EDC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A7EE8;
	sub_821A2548(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,-19020(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// bl 0x821a7dc0
	ctx.lr = 0x821A7EFC;
	sub_821A7DC0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ble cr6,0x821a7fec
	if (!ctx.cr6.gt) goto loc_821A7FEC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_821A7F10:
	// bl 0x82183850
	ctx.lr = 0x821A7F14;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821a7f2c
	if (ctx.cr6.eq) goto loc_821A7F2C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x821A7F28;
	sub_82183448(ctx, base);
	// b 0x821a7f34
	goto loc_821A7F34;
loc_821A7F2C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821A7F34;
	sub_821845A0(ctx, base);
loc_821A7F34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7f60
	if (ctx.cr6.eq) goto loc_821A7F60;
	// std r26,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r26.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r26,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r26.u64);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// stw r26,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r26.u32);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r26.u32);
	// b 0x821a7f64
	goto loc_821A7F64;
loc_821A7F60:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_821A7F64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1170
	ctx.lr = 0x821A7F70;
	sub_821A1170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218a540
	ctx.lr = 0x821A7F7C;
	sub_8218A540(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218a588
	ctx.lr = 0x821A7F84;
	sub_8218A588(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bl 0x821a1130
	ctx.lr = 0x821A7FA0;
	sub_821A1130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822bddd0
	ctx.lr = 0x821A7FB4;
	sub_822BDDD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a6fa8
	ctx.lr = 0x821A7FC0;
	sub_821A6FA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,-19020(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// bl 0x821a7a58
	ctx.lr = 0x821A7FD0;
	sub_821A7A58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// stdx r8,r9,r28
	PPC_STORE_U64(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// blt cr6,0x821a7f10
	if (ctx.cr6.lt) goto loc_821A7F10;
loc_821A7FEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183e40
	ctx.lr = 0x821A7FF8;
	sub_82183E40(ctx, base);
	// lwz r11,-19020(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// ble cr6,0x821a8078
	if (!ctx.cr6.gt) goto loc_821A8078;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-19020(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lwz r10,-19008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19008);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_821A8024:
	// ldx r10,r26,r8
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821a8070
	if (!ctx.cr6.lt) goto loc_821A8070;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821A8070:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bdnz 0x821a8024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A8024;
loc_821A8078:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A8090:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a11e8
	ctx.lr = 0x821A8098;
	sub_821A11E8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A80A0;
	sub_821837D0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821A80A8"))) PPC_WEAK_FUNC(sub_821A80A8);
PPC_FUNC_IMPL(__imp__sub_821A80A8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,-19224(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19224);
	// bl 0x82112458
	ctx.lr = 0x821A80F8;
	sub_82112458(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_821A814C"))) PPC_WEAK_FUNC(sub_821A814C);
PPC_FUNC_IMPL(__imp__sub_821A814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8150"))) PPC_WEAK_FUNC(sub_821A8150);
PPC_FUNC_IMPL(__imp__sub_821A8150) {
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
	// bl 0x821a7c00
	ctx.lr = 0x821A8160;
	sub_821A7C00(ctx, base);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19020, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8180"))) PPC_WEAK_FUNC(sub_821A8180);
PPC_FUNC_IMPL(__imp__sub_821A8180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A8188;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821A819C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A81A8;
	sub_821837D0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a8248
	if (!ctx.cr6.gt) goto loc_821A8248;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
loc_821A81C0:
	// lwz r11,-19224(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19224);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821a8224
	if (!ctx.cr6.lt) goto loc_821A8224;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821a8224
	if (!ctx.cr6.eq) goto loc_821A8224;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821a8228
	goto loc_821A8228;
loc_821A8224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A8228:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a825c
	if (ctx.cr6.eq) goto loc_821A825C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a81c0
	if (ctx.cr6.lt) goto loc_821A81C0;
loc_821A8248:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821A8250;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821A825C:
	// bl 0x82183850
	ctx.lr = 0x821A8260;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821a8278
	if (ctx.cr6.eq) goto loc_821A8278;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x821A8274;
	sub_82183448(ctx, base);
	// b 0x821a8280
	goto loc_821A8280;
loc_821A8278:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821A8280;
	sub_821845A0(ctx, base);
loc_821A8280:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a82b0
	if (ctx.cr6.eq) goto loc_821A82B0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A8298;
	sub_821A2548(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822751b8
	ctx.lr = 0x821A82A4;
	sub_822751B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x821a82b4
	goto loc_821A82B4;
loc_821A82B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821A82B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a80a8
	ctx.lr = 0x821A82BC;
	sub_821A80A8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// bl 0x821837d0
	ctx.lr = 0x821A82E4;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A82F0"))) PPC_WEAK_FUNC(sub_821A82F0);
PPC_FUNC_IMPL(__imp__sub_821A82F0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a8370
	if (!ctx.cr6.eq) goto loc_821A8370;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A8330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f1,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821aa098
	ctx.lr = 0x821A8368;
	sub_821AA098(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821a8378
	goto loc_821A8378;
loc_821A8370:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821A8378:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8390"))) PPC_WEAK_FUNC(sub_821A8390);
PPC_FUNC_IMPL(__imp__sub_821A8390) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a8410
	if (!ctx.cr6.eq) goto loc_821A8410;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A83D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f1,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821aa098
	ctx.lr = 0x821A8408;
	sub_821AA098(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x821a8418
	goto loc_821A8418;
loc_821A8410:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821A8418:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8430"))) PPC_WEAK_FUNC(sub_821A8430);
PPC_FUNC_IMPL(__imp__sub_821A8430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821A8438;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821A84E4;
	sub_822AA648(ctx, base);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-19048(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19048);
	// lwz r25,300(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r24,304(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// bl 0x821d2978
	ctx.lr = 0x821A84FC;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A8508;
	sub_820DED28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r29,r5,390
	ctx.r29.u64 = ctx.r5.u64 | 390;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A854C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821A8554;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A8560;
	sub_820DED28(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r25,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r24,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A85A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821A85AC;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A85B8;
	sub_820DED28(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r9,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addze r28,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r8,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 2;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addze r27,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r27.s64 = temp.s64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A8604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821A860C;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A8618;
	sub_820DED28(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r29,r10,406
	ctx.r29.u64 = ctx.r10.u64 | 406;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A865C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821A8664;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821A8670;
	sub_820DED28(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A86AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-19048(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19048);
	// lwz r30,316(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a86fc
	if (ctx.cr6.eq) goto loc_821A86FC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821A86D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r3.u32);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A86F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r3.u32);
loc_821A86FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821A8708"))) PPC_WEAK_FUNC(sub_821A8708);
PPC_FUNC_IMPL(__imp__sub_821A8708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A8710;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8738
	if (ctx.cr6.eq) goto loc_821A8738;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
loc_821A8738:
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82092930
	ctx.lr = 0x821A8744;
	sub_82092930(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a8764
	if (ctx.cr6.eq) goto loc_821A8764;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A8764:
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82092930
	ctx.lr = 0x821A8770;
	sub_82092930(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a8790
	if (ctx.cr6.eq) goto loc_821A8790;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A8790:
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82092930
	ctx.lr = 0x821A879C;
	sub_82092930(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a87bc
	if (ctx.cr6.eq) goto loc_821A87BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A87BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A87BC:
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82092930
	ctx.lr = 0x821A87C8;
	sub_82092930(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a87e8
	if (ctx.cr6.eq) goto loc_821A87E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A87E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A87E8:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82092930
	ctx.lr = 0x821A87F4;
	sub_82092930(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a8814
	if (ctx.cr6.eq) goto loc_821A8814;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A8814:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A881C;
	sub_820DE3A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A8824;
	sub_820DE3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A882C;
	sub_820DE3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A8834;
	sub_820DE3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820de3a0
	ctx.lr = 0x821A883C;
	sub_820DE3A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821A8844"))) PPC_WEAK_FUNC(sub_821A8844);
PPC_FUNC_IMPL(__imp__sub_821A8844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8848"))) PPC_WEAK_FUNC(sub_821A8848);
PPC_FUNC_IMPL(__imp__sub_821A8848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A8850;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8874;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A88A0;
	sub_821AAF10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r6,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A88C4;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A88CC"))) PPC_WEAK_FUNC(sub_821A88CC);
PPC_FUNC_IMPL(__imp__sub_821A88CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A88D0"))) PPC_WEAK_FUNC(sub_821A88D0);
PPC_FUNC_IMPL(__imp__sub_821A88D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A88D8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A8908;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A893C;
	sub_821AAF10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8960;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A8968"))) PPC_WEAK_FUNC(sub_821A8968);
PPC_FUNC_IMPL(__imp__sub_821A8968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A8970;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8994;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A89BC;
	sub_821AAF10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A89E0;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A89E8"))) PPC_WEAK_FUNC(sub_821A89E8);
PPC_FUNC_IMPL(__imp__sub_821A89E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A89F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A8A20;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8A54;
	sub_821AAF10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8A78;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A8A80"))) PPC_WEAK_FUNC(sub_821A8A80);
PPC_FUNC_IMPL(__imp__sub_821A8A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,44
	ctx.r10.s64 = 44;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8AB4;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8AD8;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A8B08;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8B20"))) PPC_WEAK_FUNC(sub_821A8B20);
PPC_FUNC_IMPL(__imp__sub_821A8B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,43
	ctx.r10.s64 = 43;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8B54;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8B78;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A8BA8;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8BC0"))) PPC_WEAK_FUNC(sub_821A8BC0);
PPC_FUNC_IMPL(__imp__sub_821A8BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821A8BC8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A8BF8;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8C3C;
	sub_821AAF10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8C6C;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821A8C74"))) PPC_WEAK_FUNC(sub_821A8C74);
PPC_FUNC_IMPL(__imp__sub_821A8C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8C78"))) PPC_WEAK_FUNC(sub_821A8C78);
PPC_FUNC_IMPL(__imp__sub_821A8C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A8C80;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A8CB0;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8CF4;
	sub_821AAF10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8D24;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821A8D2C"))) PPC_WEAK_FUNC(sub_821A8D2C);
PPC_FUNC_IMPL(__imp__sub_821A8D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8D30"))) PPC_WEAK_FUNC(sub_821A8D30);
PPC_FUNC_IMPL(__imp__sub_821A8D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A8D38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8D5C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8D90;
	sub_821AAF10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8DB4;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A8DBC"))) PPC_WEAK_FUNC(sub_821A8DBC);
PPC_FUNC_IMPL(__imp__sub_821A8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8DC0"))) PPC_WEAK_FUNC(sub_821A8DC0);
PPC_FUNC_IMPL(__imp__sub_821A8DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A8DC8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8DEC;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r30,-8200(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8E20;
	sub_821AAF10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821A8E44;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A8E4C"))) PPC_WEAK_FUNC(sub_821A8E4C);
PPC_FUNC_IMPL(__imp__sub_821A8E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8E50"))) PPC_WEAK_FUNC(sub_821A8E50);
PPC_FUNC_IMPL(__imp__sub_821A8E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A8E58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,-8200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8E78;
	sub_821AAF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8E94;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r7.u32);
	// bl 0x821aafd0
	ctx.lr = 0x821A8EC0;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A8EC8"))) PPC_WEAK_FUNC(sub_821A8EC8);
PPC_FUNC_IMPL(__imp__sub_821A8EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A8ED0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A8EF8;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8F20;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A8F50;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A8F58"))) PPC_WEAK_FUNC(sub_821A8F58);
PPC_FUNC_IMPL(__imp__sub_821A8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A8F80;
	sub_821A2548(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82274b48
	ctx.lr = 0x821A8F90;
	sub_82274B48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8FA8"))) PPC_WEAK_FUNC(sub_821A8FA8);
PPC_FUNC_IMPL(__imp__sub_821A8FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A8FB0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,-8200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A8FD4;
	sub_821AAF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A8FF0;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82087ab0
	ctx.lr = 0x821A9018;
	sub_82087AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821A9024;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A902C"))) PPC_WEAK_FUNC(sub_821A902C);
PPC_FUNC_IMPL(__imp__sub_821A902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9030"))) PPC_WEAK_FUNC(sub_821A9030);
PPC_FUNC_IMPL(__imp__sub_821A9030) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A9058;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r11,r8,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r11.s64 = ctx.r8.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82274a10
	ctx.lr = 0x821A9090;
	sub_82274A10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A90A8"))) PPC_WEAK_FUNC(sub_821A90A8);
PPC_FUNC_IMPL(__imp__sub_821A90A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821A90B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,-8200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A90D4;
	sub_821AAF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A90F0;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82087ab0
	ctx.lr = 0x821A9118;
	sub_82087AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821A9124;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821A912C"))) PPC_WEAK_FUNC(sub_821A912C);
PPC_FUNC_IMPL(__imp__sub_821A912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9130"))) PPC_WEAK_FUNC(sub_821A9130);
PPC_FUNC_IMPL(__imp__sub_821A9130) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A9150;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-12400
	ctx.r11.s64 = ctx.r9.s64 + -12400;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,376
	ctx.r6.s64 = ctx.r9.s64 + 376;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6020(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6024(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A91CC"))) PPC_WEAK_FUNC(sub_821A91CC);
PPC_FUNC_IMPL(__imp__sub_821A91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A91D0"))) PPC_WEAK_FUNC(sub_821A91D0);
PPC_FUNC_IMPL(__imp__sub_821A91D0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A91F0;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-12400
	ctx.r11.s64 = ctx.r9.s64 + -12400;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,376
	ctx.r6.s64 = ctx.r9.s64 + 376;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6020(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6024(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,6028(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9270"))) PPC_WEAK_FUNC(sub_821A9270);
PPC_FUNC_IMPL(__imp__sub_821A9270) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A9290;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-12400
	ctx.r11.s64 = ctx.r9.s64 + -12400;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,376
	ctx.r6.s64 = ctx.r9.s64 + 376;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6020(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6024(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,6028(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9310"))) PPC_WEAK_FUNC(sub_821A9310);
PPC_FUNC_IMPL(__imp__sub_821A9310) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A9330;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-12400
	ctx.r11.s64 = ctx.r9.s64 + -12400;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,376
	ctx.r6.s64 = ctx.r9.s64 + 376;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6020(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6024(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,6028(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A93B0"))) PPC_WEAK_FUNC(sub_821A93B0);
PPC_FUNC_IMPL(__imp__sub_821A93B0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A93D8;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-12400
	ctx.r11.s64 = ctx.r9.s64 + -12400;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r9,376
	ctx.r10.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r6,r5,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6020(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6024(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,6028(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9470"))) PPC_WEAK_FUNC(sub_821A9470);
PPC_FUNC_IMPL(__imp__sub_821A9470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249924
	ctx.lr = 0x821A9484;
	sub_82249924(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,64
	ctx.r5.s64 = 64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x82248f70
	ctx.lr = 0x821A94A8;
	sub_82248F70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249f50
	ctx.lr = 0x821A94BC;
	sub_82249F50(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x821A94C8;
	sub_82249E70(ctx, base);
	// fsubs f13,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f29,f28
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fdivs f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fdivs f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f12.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fdivs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fdivs f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f30.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f6,56(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249970
	ctx.lr = 0x821A9510;
	sub_82249970(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9520"))) PPC_WEAK_FUNC(sub_821A9520);
PPC_FUNC_IMPL(__imp__sub_821A9520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,-21508
	ctx.r9.s64 = ctx.r11.s64 + -21508;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r30,-19048(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a60
	ctx.lr = 0x821A9554;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9570
	if (ctx.cr6.eq) goto loc_821A9570;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821a9570
	if (!ctx.cr6.eq) goto loc_821A9570;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a3870
	ctx.lr = 0x821A9570;
	sub_821A3870(ctx, base);
loc_821A9570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db958
	ctx.lr = 0x821A9578;
	sub_821DB958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9590"))) PPC_WEAK_FUNC(sub_821A9590);
PPC_FUNC_IMPL(__imp__sub_821A9590) {
	PPC_FUNC_PROLOGUE();
	// ld r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// ld r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A95A8"))) PPC_WEAK_FUNC(sub_821A95A8);
PPC_FUNC_IMPL(__imp__sub_821A95A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r4.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// stw r5,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// stw r6,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r6.u32);
	// stw r7,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r7.u32);
	// lfs f31,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// ble cr6,0x821a961c
	if (!ctx.cr6.gt) goto loc_821A961C;
	// bl 0x82249f50
	ctx.lr = 0x821A95FC;
	sub_82249F50(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82249e70
	ctx.lr = 0x821A9608;
	sub_82249E70(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x821a963c
	goto loc_821A963C;
loc_821A961C:
	// bl 0x82249f50
	ctx.lr = 0x821A9620;
	sub_82249F50(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82249e70
	ctx.lr = 0x821A962C;
	sub_82249E70(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_821A963C:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,508(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9678"))) PPC_WEAK_FUNC(sub_821A9678);
PPC_FUNC_IMPL(__imp__sub_821A9678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// lwz r9,472(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// stfs f1,512(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lfs f31,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// ble cr6,0x821a96e4
	if (!ctx.cr6.gt) goto loc_821A96E4;
	// bl 0x82249f50
	ctx.lr = 0x821A96C4;
	sub_82249F50(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82249e70
	ctx.lr = 0x821A96D0;
	sub_82249E70(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x821a9704
	goto loc_821A9704;
loc_821A96E4:
	// bl 0x82249f50
	ctx.lr = 0x821A96E8;
	sub_82249F50(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82249e70
	ctx.lr = 0x821A96F4;
	sub_82249E70(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_821A9704:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,508(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9740"))) PPC_WEAK_FUNC(sub_821A9740);
PPC_FUNC_IMPL(__imp__sub_821A9740) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,176
	ctx.r5.s64 = ctx.r3.s64 + 176;
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// b 0x82289c50
	sub_82289C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A9750"))) PPC_WEAK_FUNC(sub_821A9750);
PPC_FUNC_IMPL(__imp__sub_821A9750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821A9758;
	sub_82248788(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,-19048(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r9,r3,232
	ctx.r9.s64 = ctx.r3.s64 + 232;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A978C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a978c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A978C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r3,168
	ctx.r11.s64 = ctx.r3.s64 + 168;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821A97A8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a97a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A97A8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82289c50
	ctx.lr = 0x821A97C4;
	sub_82289C50(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// ble cr6,0x821a9868
	if (!ctx.cr6.gt) goto loc_821A9868;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
loc_821A9810:
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82187400
	ctx.lr = 0x821A9820;
	sub_82187400(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f8,f11,f13,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fnmsubs f7,f10,f13,f31
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f5,-8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// fmuls f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f4,-4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x821a9810
	if (!ctx.cr0.eq) goto loc_821A9810;
loc_821A9868:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821A987C"))) PPC_WEAK_FUNC(sub_821A987C);
PPC_FUNC_IMPL(__imp__sub_821A987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9880"))) PPC_WEAK_FUNC(sub_821A9880);
PPC_FUNC_IMPL(__imp__sub_821A9880) {
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
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82096f18
	ctx.lr = 0x821A98B0;
	sub_82096F18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r31,608
	ctx.r5.s64 = ctx.r31.s64 + 608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f30,616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x821A98E0;
	sub_82187400(ctx, base);
	// stfs f31,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f30,628(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// addi r5,r31,624
	ctx.r5.s64 = ctx.r31.s64 + 624;
	// stfs f31,632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f31,636(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82187400
	ctx.lr = 0x821A9900;
	sub_82187400(ctx, base);
	// lfs f2,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82249c38
	ctx.lr = 0x821A990C;
	sub_82249C38(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a9934
	if (!ctx.cr6.lt) goto loc_821A9934;
loc_821A9928:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821a9968
	goto loc_821A9968;
loc_821A9934:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x821a9928
	if (ctx.cr6.gt) goto loc_821A9928;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82249a80
	ctx.lr = 0x821A9944;
	sub_82249A80(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// bge cr6,0x821a996c
	if (!ctx.cr6.lt) goto loc_821A996C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_821A9968:
	// stfs f0,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
loc_821A996C:
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

__attribute__((alias("__imp__sub_821A998C"))) PPC_WEAK_FUNC(sub_821A998C);
PPC_FUNC_IMPL(__imp__sub_821A998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9990"))) PPC_WEAK_FUNC(sub_821A9990);
PPC_FUNC_IMPL(__imp__sub_821A9990) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821db8f8
	ctx.lr = 0x821A99B4;
	sub_821DB8F8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r10,r11,-21508
	ctx.r10.s64 = ctx.r11.s64 + -21508;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820804f8
	ctx.lr = 0x821A99C8;
	sub_820804F8(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x820804f8
	ctx.lr = 0x821A99D0;
	sub_820804F8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,-21444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21444);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// lfs f13,-21448(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21448);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,500(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f13,504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// lwz r11,-19048(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a9a24
	if (ctx.cr6.eq) goto loc_821A9A24;
	// lwz r7,304(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r6,300(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x821a9a2c
	goto loc_821A9A2C;
loc_821A9A24:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_821A9A2C:
	// bl 0x821a95a8
	ctx.lr = 0x821A9A30;
	sub_821A95A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// stfs f30,488(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f30,432(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stfs f30,436(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,440(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stfs f31,444(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x821A9A78;
	sub_820804F8(ctx, base);
	// stfs f31,616(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f30,620(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stfs f31,632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f31,624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f30,636(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_821A9AC4"))) PPC_WEAK_FUNC(sub_821A9AC4);
PPC_FUNC_IMPL(__imp__sub_821A9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9AC8"))) PPC_WEAK_FUNC(sub_821A9AC8);
PPC_FUNC_IMPL(__imp__sub_821A9AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821a9520
	ctx.lr = 0x821A9AE8;
	sub_821A9520(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a9b04
	if (ctx.cr6.eq) goto loc_821A9B04;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821A9B00;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821A9B04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9B1C"))) PPC_WEAK_FUNC(sub_821A9B1C);
PPC_FUNC_IMPL(__imp__sub_821A9B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9B20"))) PPC_WEAK_FUNC(sub_821A9B20);
PPC_FUNC_IMPL(__imp__sub_821A9B20) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a9b5c
	if (ctx.cr6.lt) goto loc_821A9B5C;
	// bne cr6,0x821a9b78
	if (!ctx.cr6.eq) goto loc_821A9B78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,17348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17348);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821a9b64
	goto loc_821A9B64;
loc_821A9B5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,17344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17344);
	ctx.f2.f64 = double(temp.f32);
loc_821A9B64:
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// lfs f4,504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a9470
	ctx.lr = 0x821A9B78;
	sub_821A9470(ctx, base);
loc_821A9B78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,196(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,200(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f6,204(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// bl 0x821dba40
	ctx.lr = 0x821A9BB8;
	sub_821DBA40(ctx, base);
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82096f18
	ctx.lr = 0x821A9BC8;
	sub_82096F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dbbf0
	ctx.lr = 0x821A9BD0;
	sub_821DBBF0(ctx, base);
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82289c50
	ctx.lr = 0x821A9BE0;
	sub_82289C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9880
	ctx.lr = 0x821A9BE8;
	sub_821A9880(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9C00"))) PPC_WEAK_FUNC(sub_821A9C00);
PPC_FUNC_IMPL(__imp__sub_821A9C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821A9C20;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82272d60
	ctx.lr = 0x821A9C34;
	sub_82272D60(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// bl 0x82272a88
	ctx.lr = 0x821A9C44;
	sub_82272A88(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9C68"))) PPC_WEAK_FUNC(sub_821A9C68);
PPC_FUNC_IMPL(__imp__sub_821A9C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,38
	ctx.r10.s64 = 38;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A9C98;
	sub_8209EDA0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9CAC;
	sub_821AAF10(ctx, base);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9CCC;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9CE4"))) PPC_WEAK_FUNC(sub_821A9CE4);
PPC_FUNC_IMPL(__imp__sub_821A9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9CE8"))) PPC_WEAK_FUNC(sub_821A9CE8);
PPC_FUNC_IMPL(__imp__sub_821A9CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A9CF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A9D18;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9D40;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9D70;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A9D78"))) PPC_WEAK_FUNC(sub_821A9D78);
PPC_FUNC_IMPL(__imp__sub_821A9D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821A9D80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821A9DA8;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9DD0;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9E00;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821A9E08"))) PPC_WEAK_FUNC(sub_821A9E08);
PPC_FUNC_IMPL(__imp__sub_821A9E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A9E3C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9E60;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9E90;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9EA8"))) PPC_WEAK_FUNC(sub_821A9EA8);
PPC_FUNC_IMPL(__imp__sub_821A9EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A9EDC;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9F00;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9F30;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9F48"))) PPC_WEAK_FUNC(sub_821A9F48);
PPC_FUNC_IMPL(__imp__sub_821A9F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821A9F7C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821A9FA0;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821A9FD0;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9FE8"))) PPC_WEAK_FUNC(sub_821A9FE8);
PPC_FUNC_IMPL(__imp__sub_821A9FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821A9FF0;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821AA02C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r30,-8200(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821AA064;
	sub_821AAF10(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821AA074:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821aa074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AA074;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821AA08C;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821AA098"))) PPC_WEAK_FUNC(sub_821AA098);
PPC_FUNC_IMPL(__imp__sub_821AA098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821AA0A0;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// bl 0x8209eda0
	ctx.lr = 0x821AA0E4;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r30,-8200(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821AA134;
	sub_821AAF10(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821AA144:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821aa144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AA144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821AA15C;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821AA168"))) PPC_WEAK_FUNC(sub_821AA168);
PPC_FUNC_IMPL(__imp__sub_821AA168) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA180"))) PPC_WEAK_FUNC(sub_821AA180);
PPC_FUNC_IMPL(__imp__sub_821AA180) {
	PPC_FUNC_PROLOGUE();
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA188"))) PPC_WEAK_FUNC(sub_821AA188);
PPC_FUNC_IMPL(__imp__sub_821AA188) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA1A8;
	sub_821A2548(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AA1C0;
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

__attribute__((alias("__imp__sub_821AA1D4"))) PPC_WEAK_FUNC(sub_821AA1D4);
PPC_FUNC_IMPL(__imp__sub_821AA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA1D8"))) PPC_WEAK_FUNC(sub_821AA1D8);
PPC_FUNC_IMPL(__imp__sub_821AA1D8) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA1F8;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r9,r4,95
	ctx.xer.ca = ctx.r4.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r4.s64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r9,21846
	ctx.r11.s64 = ctx.r9.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82271e50
	ctx.lr = 0x821AA22C;
	sub_82271E50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA240"))) PPC_WEAK_FUNC(sub_821AA240);
PPC_FUNC_IMPL(__imp__sub_821AA240) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA260;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r10,4432
	ctx.r11.s64 = ctx.r10.s64 + 4432;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82275cc0
	ctx.lr = 0x821AA294;
	sub_82275CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA2A8"))) PPC_WEAK_FUNC(sub_821AA2A8);
PPC_FUNC_IMPL(__imp__sub_821AA2A8) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA2C8;
	sub_821A2548(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82268330
	ctx.lr = 0x821AA2DC;
	sub_82268330(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA2F4"))) PPC_WEAK_FUNC(sub_821AA2F4);
PPC_FUNC_IMPL(__imp__sub_821AA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA2F8"))) PPC_WEAK_FUNC(sub_821AA2F8);
PPC_FUNC_IMPL(__imp__sub_821AA2F8) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA318;
	sub_821A2548(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,28(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82268408
	ctx.lr = 0x821AA330;
	sub_82268408(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA348"))) PPC_WEAK_FUNC(sub_821AA348);
PPC_FUNC_IMPL(__imp__sub_821AA348) {
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
	// bl 0x821a2548
	ctx.lr = 0x821AA368;
	sub_821A2548(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// bl 0x8226b640
	ctx.lr = 0x821AA388;
	sub_8226B640(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA39C"))) PPC_WEAK_FUNC(sub_821AA39C);
PPC_FUNC_IMPL(__imp__sub_821AA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA3A0"))) PPC_WEAK_FUNC(sub_821AA3A0);
PPC_FUNC_IMPL(__imp__sub_821AA3A0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AA3C0;
	sub_821A2548(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82273fe0
	ctx.lr = 0x821AA3E0;
	sub_82273FE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA3F4"))) PPC_WEAK_FUNC(sub_821AA3F4);
PPC_FUNC_IMPL(__imp__sub_821AA3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA3F8"))) PPC_WEAK_FUNC(sub_821AA3F8);
PPC_FUNC_IMPL(__imp__sub_821AA3F8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AA41C;
	sub_821A2548(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x8226d358
	ctx.lr = 0x821AA450;
	sub_8226D358(ctx, base);
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

__attribute__((alias("__imp__sub_821AA468"))) PPC_WEAK_FUNC(sub_821AA468);
PPC_FUNC_IMPL(__imp__sub_821AA468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AA490;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AA4A0;
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

__attribute__((alias("__imp__sub_821AA4B8"))) PPC_WEAK_FUNC(sub_821AA4B8);
PPC_FUNC_IMPL(__imp__sub_821AA4B8) {
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
	ctx.lr = 0x821AA4C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821aa4e0
	if (ctx.cr6.eq) goto loc_821AA4E0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x821AA4DC;
	sub_82183448(ctx, base);
	// b 0x821aa4e8
	goto loc_821AA4E8;
loc_821AA4E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821AA4E8;
	sub_821845A0(ctx, base);
loc_821AA4E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa50c
	if (ctx.cr6.eq) goto loc_821AA50C;
	// bl 0x821b1ae0
	ctx.lr = 0x821AA4F4;
	sub_821B1AE0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-3296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821AA50C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA528"))) PPC_WEAK_FUNC(sub_821AA528);
PPC_FUNC_IMPL(__imp__sub_821AA528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821AA530;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8218e200
	ctx.lr = 0x821AA558;
	sub_8218E200(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r8,r10,-21440
	ctx.r8.s64 = ctx.r10.s64 + -21440;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r7,640
	ctx.r7.s64 = 640;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// std r24,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r24.u64);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// bl 0x82183078
	ctx.lr = 0x821AA5C0;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821AA5CC;
	sub_821837D0(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// subfic r3,r4,3
	ctx.xer.ca = ctx.r4.u32 <= 3;
	ctx.r3.s64 = 3 - ctx.r4.s64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821aa640
	if (!ctx.cr6.gt) goto loc_821AA640;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_821AA604:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// rlwinm r3,r9,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// bl 0x82184710
	ctx.lr = 0x821AA620;
	sub_82184710(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subfic r5,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r5.s64 = 3 - ctx.r6.s64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821aa604
	if (ctx.cr6.lt) goto loc_821AA604;
loc_821AA640:
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// lwz r29,108(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r27,r11,29127
	ctx.r27.u64 = ctx.r11.u64 | 29127;
	// li r26,-5
	ctx.r26.s64 = -5;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x821aa674
	if (ctx.cr6.gt) goto loc_821AA674;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x821aa678
	if (!ctx.cr6.gt) goto loc_821AA678;
loc_821AA674:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_821AA678:
	// bl 0x82183850
	ctx.lr = 0x821AA67C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821aa694
	if (ctx.cr6.eq) goto loc_821AA694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821AA690;
	sub_82183448(ctx, base);
	// b 0x821aa6a0
	goto loc_821AA6A0;
loc_821AA694:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AA6A0;
	sub_821845A0(ctx, base);
loc_821AA6A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa6f4
	if (ctx.cr6.eq) goto loc_821AA6F4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x821aa6ec
	if (ctx.cr0.lt) goto loc_821AA6EC;
loc_821AA6BC:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bge 0x821aa6bc
	if (!ctx.cr0.lt) goto loc_821AA6BC;
loc_821AA6EC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x821aa6f8
	goto loc_821AA6F8;
loc_821AA6F4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821AA6F8:
	// lwz r29,108(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x821aa720
	if (ctx.cr6.gt) goto loc_821AA720;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x821aa724
	if (!ctx.cr6.gt) goto loc_821AA724;
loc_821AA720:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_821AA724:
	// bl 0x82183850
	ctx.lr = 0x821AA728;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821aa740
	if (ctx.cr6.eq) goto loc_821AA740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821AA73C;
	sub_82183448(ctx, base);
	// b 0x821aa74c
	goto loc_821AA74C;
loc_821AA740:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AA74C;
	sub_821845A0(ctx, base);
loc_821AA74C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa7a0
	if (ctx.cr6.eq) goto loc_821AA7A0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x821aa798
	if (ctx.cr0.lt) goto loc_821AA798;
loc_821AA768:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bge 0x821aa768
	if (!ctx.cr0.lt) goto loc_821AA768;
loc_821AA798:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x821aa7a4
	goto loc_821AA7A4;
loc_821AA7A0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_821AA7A4:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821aa7c4
	if (!ctx.cr6.gt) goto loc_821AA7C4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_821AA7C4:
	// bl 0x82183850
	ctx.lr = 0x821AA7C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821aa7e0
	if (ctx.cr6.eq) goto loc_821AA7E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821AA7DC;
	sub_82183448(ctx, base);
	// b 0x821aa7ec
	goto loc_821AA7EC;
loc_821AA7E0:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AA7EC;
	sub_821845A0(ctx, base);
loc_821AA7EC:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821aa820
	if (!ctx.cr6.gt) goto loc_821AA820;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821AA804:
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821aa804
	if (ctx.cr6.lt) goto loc_821AA804;
loc_821AA820:
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,-8200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8200, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x821AA834;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821AA840"))) PPC_WEAK_FUNC(sub_821AA840);
PPC_FUNC_IMPL(__imp__sub_821AA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AA848;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-21440
	ctx.r9.s64 = ctx.r10.s64 + -21440;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821aa874
	if (ctx.cr6.eq) goto loc_821AA874;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82183e40
	ctx.lr = 0x821AA874;
	sub_82183E40(ctx, base);
loc_821AA874:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa894
	if (ctx.cr6.eq) goto loc_821AA894;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82183e40
	ctx.lr = 0x821AA894;
	sub_82183E40(ctx, base);
loc_821AA894:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r8,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821aa8e0
	if (!ctx.cr6.gt) goto loc_821AA8E0;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
loc_821AA8B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82183e40
	ctx.lr = 0x821AA8C4;
	sub_82183E40(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r8,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r9.s64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821aa8b8
	if (ctx.cr6.lt) goto loc_821AA8B8;
loc_821AA8E0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa8f4
	if (ctx.cr6.eq) goto loc_821AA8F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AA8F4;
	sub_82183E40(ctx, base);
loc_821AA8F4:
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-8200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8200, ctx.r28.u32);
	// bl 0x8218dd78
	ctx.lr = 0x821AA910;
	sub_8218DD78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AA918"))) PPC_WEAK_FUNC(sub_821AA918);
PPC_FUNC_IMPL(__imp__sub_821AA918) {
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
	ctx.lr = 0x821AA930;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821aa948
	if (ctx.cr6.eq) goto loc_821AA948;
	// li r3,780
	ctx.r3.s64 = 780;
	// bl 0x82183448
	ctx.lr = 0x821AA944;
	sub_82183448(ctx, base);
	// b 0x821aa950
	goto loc_821AA950;
loc_821AA948:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x821845a0
	ctx.lr = 0x821AA950;
	sub_821845A0(ctx, base);
loc_821AA950:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa95c
	if (ctx.cr6.eq) goto loc_821AA95C;
	// bl 0x821ae3d8
	ctx.lr = 0x821AA95C;
	sub_821AE3D8(ctx, base);
loc_821AA95C:
	// bl 0x82183850
	ctx.lr = 0x821AA960;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821aa97c
	if (ctx.cr6.eq) goto loc_821AA97C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,53316
	ctx.r3.u64 = ctx.r3.u64 | 53316;
	// bl 0x82183448
	ctx.lr = 0x821AA978;
	sub_82183448(ctx, base);
	// b 0x821aa984
	goto loc_821AA984;
loc_821AA97C:
	// li r3,3333
	ctx.r3.s64 = 3333;
	// bl 0x821845a0
	ctx.lr = 0x821AA984;
	sub_821845A0(ctx, base);
loc_821AA984:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa990
	if (ctx.cr6.eq) goto loc_821AA990;
	// bl 0x821ae4f0
	ctx.lr = 0x821AA990;
	sub_821AE4F0(ctx, base);
loc_821AA990:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa9a4
	if (ctx.cr6.eq) goto loc_821AA9A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AA9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AA9A4:
	// bl 0x821aa4b8
	ctx.lr = 0x821AA9A8;
	sub_821AA4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA9BC"))) PPC_WEAK_FUNC(sub_821AA9BC);
PPC_FUNC_IMPL(__imp__sub_821AA9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA9C0"))) PPC_WEAK_FUNC(sub_821AA9C0);
PPC_FUNC_IMPL(__imp__sub_821AA9C0) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa9ec
	if (ctx.cr6.eq) goto loc_821AA9EC;
	// bl 0x821ae6a8
	ctx.lr = 0x821AA9E4;
	sub_821AE6A8(ctx, base);
	// lwz r3,-7480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7480);
	// bl 0x821ae9a8
	ctx.lr = 0x821AA9EC;
	sub_821AE9A8(ctx, base);
loc_821AA9EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAA00"))) PPC_WEAK_FUNC(sub_821AAA00);
PPC_FUNC_IMPL(__imp__sub_821AAA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-7484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821ae020
	sub_821AE020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AAA14"))) PPC_WEAK_FUNC(sub_821AAA14);
PPC_FUNC_IMPL(__imp__sub_821AAA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAA18"))) PPC_WEAK_FUNC(sub_821AAA18);
PPC_FUNC_IMPL(__imp__sub_821AAA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AAA20;
	sub_82248788(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821AAA34;
	sub_822AA648(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ble cr6,0x821aaa6c
	if (!ctx.cr6.gt) goto loc_821AAA6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821AAA50:
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821aaa50
	if (ctx.cr6.lt) goto loc_821AAA50;
loc_821AAA6C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aaac0
	if (ctx.cr6.eq) goto loc_821AAAC0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_821AAA80:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821AAAA0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821aaaa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AAAA0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aaa80
	if (ctx.cr6.lt) goto loc_821AAA80;
loc_821AAAC0:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821aab84
	if (!ctx.cr6.eq) goto loc_821AAB84;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r6,r9,10
	ctx.r6.s64 = ctx.r9.s64 + 10;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r3,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r3.u32);
	// stwx r3,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x821aab74
	if (!ctx.cr6.gt) goto loc_821AAB74;
	// li r9,36
	ctx.r9.s64 = 36;
loc_821AAB28:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stwx r3,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x821aab28
	if (ctx.cr6.lt) goto loc_821AAB28;
loc_821AAB74:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821AAB84:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821aabac
	if (ctx.cr6.eq) goto loc_821AABAC;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
loc_821AAB98:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x821aab98
	if (!ctx.cr6.eq) goto loc_821AAB98;
loc_821AABAC:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aac4c
	if (ctx.cr6.eq) goto loc_821AAC4C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_821AABC8:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r29,124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// mullw r4,r29,r4
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bne cr6,0x821aabf0
	if (!ctx.cr6.eq) goto loc_821AABF0;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_821AABF0:
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// addi r5,r5,6
	ctx.r5.s64 = ctx.r5.s64 + 6;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r6,10
	ctx.r6.s64 = ctx.r6.s64 + 10;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stwx r3,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aabc8
	if (ctx.cr6.lt) goto loc_821AABC8;
loc_821AAC4C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aaca4
	if (ctx.cr6.eq) goto loc_821AACA4;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821aaca4
	if (!ctx.cr6.gt) goto loc_821AACA4;
loc_821AAC68:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821aac84
	if (ctx.cr6.eq) goto loc_821AAC84;
loc_821AAC78:
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821aac78
	if (!ctx.cr6.eq) goto loc_821AAC78;
loc_821AAC84:
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r8,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821aac68
	if (ctx.cr6.lt) goto loc_821AAC68;
loc_821AACA4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AACAC"))) PPC_WEAK_FUNC(sub_821AACAC);
PPC_FUNC_IMPL(__imp__sub_821AACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AACB0"))) PPC_WEAK_FUNC(sub_821AACB0);
PPC_FUNC_IMPL(__imp__sub_821AACB0) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r4,256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x821a3010
	ctx.lr = 0x821AACD4;
	sub_821A3010(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821aacec
	if (ctx.cr6.eq) goto loc_821AACEC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-7460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// bl 0x821afca0
	ctx.lr = 0x821AACEC;
	sub_821AFCA0(ctx, base);
loc_821AACEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAD00"))) PPC_WEAK_FUNC(sub_821AAD00);
PPC_FUNC_IMPL(__imp__sub_821AAD00) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r31,-19048(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a25d8
	ctx.lr = 0x821AAD28;
	sub_821A25D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a25e8
	ctx.lr = 0x821AAD34;
	sub_821A25E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAD48"))) PPC_WEAK_FUNC(sub_821AAD48);
PPC_FUNC_IMPL(__imp__sub_821AAD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-8200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aad80
	if (!ctx.cr6.eq) goto loc_821AAD80;
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x821aadec
	goto loc_821AADEC;
loc_821AAD80:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821aadc0
	if (ctx.cr6.eq) goto loc_821AADC0;
loc_821AAD8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821aadb0
	if (!ctx.cr6.eq) goto loc_821AADB0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821aadb0
	if (ctx.cr6.lt) goto loc_821AADB0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821aadc8
	if (ctx.cr6.lt) goto loc_821AADC8;
loc_821AADB0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821aad8c
	if (!ctx.cr6.eq) goto loc_821AAD8C;
loc_821AADC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821aadec
	goto loc_821AADEC;
loc_821AADC8:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821aade8
	if (!ctx.cr6.eq) goto loc_821AADE8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8218d888
	ctx.lr = 0x821AADD8;
	sub_8218D888(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
loc_821AADE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821AADEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAE04"))) PPC_WEAK_FUNC(sub_821AAE04);
PPC_FUNC_IMPL(__imp__sub_821AAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAE08"))) PPC_WEAK_FUNC(sub_821AAE08);
PPC_FUNC_IMPL(__imp__sub_821AAE08) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821AAE28;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aae34
	if (ctx.cr6.eq) goto loc_821AAE34;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AAE34:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821aae7c
	if (ctx.cr6.eq) goto loc_821AAE7C;
	// bl 0x8218d888
	ctx.lr = 0x821AAE50;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aae5c
	if (ctx.cr6.eq) goto loc_821AAE5C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AAE5C:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821AAE7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ad0f8
	ctx.lr = 0x821AAE88;
	sub_821AD0F8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821AAEB8"))) PPC_WEAK_FUNC(sub_821AAEB8);
PPC_FUNC_IMPL(__imp__sub_821AAEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821aa840
	ctx.lr = 0x821AAED8;
	sub_821AA840(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aaef4
	if (ctx.cr6.eq) goto loc_821AAEF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821AAEF0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821AAEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAF0C"))) PPC_WEAK_FUNC(sub_821AAF0C);
PPC_FUNC_IMPL(__imp__sub_821AAF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAF10"))) PPC_WEAK_FUNC(sub_821AAF10);
PPC_FUNC_IMPL(__imp__sub_821AAF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AAF18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821AAF2C;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aaf38
	if (ctx.cr6.eq) goto loc_821AAF38;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AAF38:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821aaf84
	if (ctx.cr6.eq) goto loc_821AAF84;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821AAF54;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aaf60
	if (ctx.cr6.eq) goto loc_821AAF60;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AAF60:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821aaf88
	goto loc_821AAF88;
loc_821AAF84:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821AAF88:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821aafb8
	if (ctx.cr6.eq) goto loc_821AAFB8;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8218d888
	ctx.lr = 0x821AAF98;
	sub_8218D888(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821aafb8
	if (ctx.cr6.lt) goto loc_821AAFB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821AAFB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AAFD0"))) PPC_WEAK_FUNC(sub_821AAFD0);
PPC_FUNC_IMPL(__imp__sub_821AAFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AAFD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821AAFEC;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aaff8
	if (ctx.cr6.eq) goto loc_821AAFF8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AAFF8:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821ab040
	if (ctx.cr6.eq) goto loc_821AB040;
	// bl 0x8218d888
	ctx.lr = 0x821AB014;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ab020
	if (ctx.cr6.eq) goto loc_821AB020;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AB020:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821AB040:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8218d888
	ctx.lr = 0x821AB048;
	sub_8218D888(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AB078"))) PPC_WEAK_FUNC(sub_821AB078);
PPC_FUNC_IMPL(__imp__sub_821AB078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AB098;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ab0a4
	if (ctx.cr6.eq) goto loc_821AB0A4;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821AB0A4:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821ab0bc
	if (ctx.cr6.eq) goto loc_821AB0BC;
	// bl 0x8218d888
	ctx.lr = 0x821AB0BC;
	sub_8218D888(ctx, base);
loc_821AB0BC:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821ab0dc
	if (!ctx.cr6.gt) goto loc_821AB0DC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_821AB0D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821ab0d0
	if (ctx.cr6.lt) goto loc_821AB0D0;
loc_821AB0DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r3,-7484(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ab108
	if (ctx.cr6.eq) goto loc_821AB108;
	// bl 0x821adeb8
	ctx.lr = 0x821AB108;
	sub_821ADEB8(ctx, base);
loc_821AB108:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ab15c
	if (!ctx.cr6.eq) goto loc_821AB15C;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// mulhwu r8,r9,r11
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulhwu r3,r4,r7
	ctx.r3.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x821ab174
	goto loc_821AB174;
loc_821AB15C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_821AB174:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r3,21780(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21780);
	// bl 0x8218dad8
	ctx.lr = 0x821AB194;
	sub_8218DAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaa18
	ctx.lr = 0x821AB19C;
	sub_821AAA18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AB1B4"))) PPC_WEAK_FUNC(sub_821AB1B4);
PPC_FUNC_IMPL(__imp__sub_821AB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB1B8"))) PPC_WEAK_FUNC(sub_821AB1B8);
PPC_FUNC_IMPL(__imp__sub_821AB1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-8200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_821AB1E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ab1fc
	if (ctx.cr6.eq) goto loc_821AB1FC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ab210
	if (ctx.cr6.eq) goto loc_821AB210;
loc_821AB1FC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821ab1e0
	if (!ctx.cr6.eq) goto loc_821AB1E0;
	// blr 
	return;
loc_821AB210:
	// b 0x821aae08
	sub_821AAE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AB214"))) PPC_WEAK_FUNC(sub_821AB214);
PPC_FUNC_IMPL(__imp__sub_821AB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB218"))) PPC_WEAK_FUNC(sub_821AB218);
PPC_FUNC_IMPL(__imp__sub_821AB218) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB238;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a73d0
	ctx.lr = 0x821AB254;
	sub_821A73D0(ctx, base);
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

__attribute__((alias("__imp__sub_821AB268"))) PPC_WEAK_FUNC(sub_821AB268);
PPC_FUNC_IMPL(__imp__sub_821AB268) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB288;
	sub_821A2548(ctx, base);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a7358
	ctx.lr = 0x821AB2A4;
	sub_821A7358(ctx, base);
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

__attribute__((alias("__imp__sub_821AB2B8"))) PPC_WEAK_FUNC(sub_821AB2B8);
PPC_FUNC_IMPL(__imp__sub_821AB2B8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB2D8;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a7358
	ctx.lr = 0x821AB2F4;
	sub_821A7358(ctx, base);
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

__attribute__((alias("__imp__sub_821AB308"))) PPC_WEAK_FUNC(sub_821AB308);
PPC_FUNC_IMPL(__imp__sub_821AB308) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB328;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822750b0
	ctx.lr = 0x821AB33C;
	sub_822750B0(ctx, base);
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

__attribute__((alias("__imp__sub_821AB350"))) PPC_WEAK_FUNC(sub_821AB350);
PPC_FUNC_IMPL(__imp__sub_821AB350) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB370;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a79c0
	ctx.lr = 0x821AB388;
	sub_821A79C0(ctx, base);
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

__attribute__((alias("__imp__sub_821AB39C"))) PPC_WEAK_FUNC(sub_821AB39C);
PPC_FUNC_IMPL(__imp__sub_821AB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB3A0"))) PPC_WEAK_FUNC(sub_821AB3A0);
PPC_FUNC_IMPL(__imp__sub_821AB3A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// bgt cr6,0x821abc58
	if (ctx.cr6.gt) goto loc_821ABC58;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19496
	ctx.r12.s64 = ctx.r12.s64 + -19496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-19228(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19228);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-19200(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19200);
	// lwz r16,-19144(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19144);
	// lwz r16,-19032(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19032);
	// lwz r16,-18880(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18880);
	// lwz r16,-18852(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18852);
	// lwz r16,-18824(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18824);
	// lwz r16,-18796(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18796);
	// lwz r16,-18748(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18748);
	// lwz r16,-18700(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18700);
	// lwz r16,-18976(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18976);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-18936(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18936);
	// lwz r16,-18908(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18908);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-19004(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19004);
	// lwz r16,-18672(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18672);
	// lwz r16,-18644(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18644);
	// lwz r16,-18616(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18616);
	// lwz r16,-18588(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18588);
	// lwz r16,-18560(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18560);
	// lwz r16,-18532(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18532);
	// lwz r16,-18504(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18504);
	// lwz r16,-18476(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18476);
	// lwz r16,-18448(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18448);
	// lwz r16,-18420(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18420);
	// lwz r16,-18392(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18392);
	// lwz r16,-18364(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18364);
	// lwz r16,-18336(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18336);
	// lwz r16,-18308(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18308);
	// lwz r16,-18280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18280);
	// lwz r16,-19116(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19116);
	// lwz r16,-19060(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19060);
	// lwz r16,-18240(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18240);
	// lwz r16,-18192(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18192);
	// lwz r16,-18144(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18144);
	// lwz r16,-18116(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18116);
	// lwz r16,-18072(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18072);
	// lwz r16,-17984(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17984);
	// lwz r16,-17836(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17836);
	// lwz r16,-17956(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17956);
	// lwz r16,-17956(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17956);
	// lwz r16,-17808(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17808);
	// lwz r16,-17920(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17920);
	// lwz r16,-17756(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17756);
	// lwz r16,-17868(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17868);
	// lwz r16,-18028(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18028);
	// lwz r16,-17724(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17724);
	// lwz r16,-17696(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17696);
	// lwz r16,-17668(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17668);
	// lwz r16,-17640(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17640);
	// lwz r16,-17612(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17612);
	// lwz r16,-17584(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17584);
	// lwz r16,-17556(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17556);
	// lwz r16,-17528(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17528);
	// lwz r16,-17500(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17500);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r16,-17472(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17472);
	// lwz r16,-17424(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17424);
	// lwz r16,-17396(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17396);
	// lwz r16,-17368(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17368);
	// lwz r16,-17340(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17340);
	// lwz r16,-19172(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19172);
	// lwz r16,-17320(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acf28
	ctx.lr = 0x821AB4EC;
	sub_821ACF28(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa188
	ctx.lr = 0x821AB508;
	sub_821AA188(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0368
	ctx.lr = 0x821AB524;
	sub_821E0368(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0208
	ctx.lr = 0x821AB540;
	sub_821E0208(ctx, base);
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
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AB578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa348
	ctx.lr = 0x821AB594;
	sub_821AA348(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab308
	ctx.lr = 0x821AB5B0;
	sub_821AB308(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dc830
	ctx.lr = 0x821AB5CC;
	sub_821DC830(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB5EC;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82271f70
	ctx.lr = 0x821AB5F4;
	sub_82271F70(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa1d8
	ctx.lr = 0x821AB610;
	sub_821AA1D8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa240
	ctx.lr = 0x821AB62C;
	sub_821AA240(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab218
	ctx.lr = 0x821AB648;
	sub_821AB218(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab268
	ctx.lr = 0x821AB664;
	sub_821AB268(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab2b8
	ctx.lr = 0x821AB680;
	sub_821AB2B8(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB6A0;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a7470
	ctx.lr = 0x821AB6B0;
	sub_821A7470(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB6D0;
	sub_821A2548(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3948
	ctx.lr = 0x821AB6E0;
	sub_821A3948(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab350
	ctx.lr = 0x821AB6FC;
	sub_821AB350(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1640
	ctx.lr = 0x821AB718;
	sub_821B1640(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1730
	ctx.lr = 0x821AB734;
	sub_821B1730(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b17d0
	ctx.lr = 0x821AB750;
	sub_821B17D0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1870
	ctx.lr = 0x821AB76C;
	sub_821B1870(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1910
	ctx.lr = 0x821AB788;
	sub_821B1910(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b19b0
	ctx.lr = 0x821AB7A4;
	sub_821B19B0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1568
	ctx.lr = 0x821AB7C0;
	sub_821B1568(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9030
	ctx.lr = 0x821AB7DC;
	sub_821A9030(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9130
	ctx.lr = 0x821AB7F8;
	sub_821A9130(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a91d0
	ctx.lr = 0x821AB814;
	sub_821A91D0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9270
	ctx.lr = 0x821AB830;
	sub_821A9270(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9310
	ctx.lr = 0x821AB84C;
	sub_821A9310(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a93b0
	ctx.lr = 0x821AB868;
	sub_821A93B0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a8f58
	ctx.lr = 0x821AB884;
	sub_821A8F58(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB8A4;
	sub_821A2548(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x822725c8
	ctx.lr = 0x821AB8AC;
	sub_822725C8(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB8CC;
	sub_821A2548(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82272d60
	ctx.lr = 0x821AB8DC;
	sub_82272D60(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB8FC;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82272000
	ctx.lr = 0x821AB908;
	sub_82272000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9c00
	ctx.lr = 0x821AB928;
	sub_821A9C00(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB948;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82272a88
	ctx.lr = 0x821AB954;
	sub_82272A88(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB974;
	sub_821A2548(ctx, base);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82272048
	ctx.lr = 0x821AB97C;
	sub_82272048(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AB9A0;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82268fb0
	ctx.lr = 0x821AB9AC;
	sub_82268FB0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa2f8
	ctx.lr = 0x821AB9C8;
	sub_821AA2F8(ctx, base);
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821abc58
	if (ctx.cr6.eq) goto loc_821ABC58;
	// bl 0x82268fb0
	ctx.lr = 0x821AB9EC;
	sub_82268FB0(ctx, base);
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82269560
	ctx.lr = 0x821ABA1C;
	sub_82269560(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822684b8
	ctx.lr = 0x821ABA40;
	sub_822684B8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa2a8
	ctx.lr = 0x821ABA5C;
	sub_821AA2A8(ctx, base);
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82269510
	ctx.lr = 0x821ABA8C;
	sub_82269510(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822683f8
	ctx.lr = 0x821ABAB0;
	sub_822683F8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd048
	ctx.lr = 0x821ABACC;
	sub_821DD048(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd180
	ctx.lr = 0x821ABAE8;
	sub_821DD180(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821ABB04;
	sub_821AA3A0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3f8
	ctx.lr = 0x821ABB20;
	sub_821AA3F8(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821ABB3C;
	sub_8209EDA0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821ABB58;
	sub_8209EDA0(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa468
	ctx.lr = 0x821ABB74;
	sub_821AA468(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0108
	ctx.lr = 0x821ABB90;
	sub_821E0108(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0178
	ctx.lr = 0x821ABBAC;
	sub_821E0178(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821ABBCC;
	sub_821A2548(ctx, base);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82275238
	ctx.lr = 0x821ABBDC;
	sub_82275238(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acf38
	ctx.lr = 0x821ABBF8;
	sub_821ACF38(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acf48
	ctx.lr = 0x821ABC14;
	sub_821ACF48(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acf58
	ctx.lr = 0x821ABC30;
	sub_821ACF58(ctx, base);
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821ABC50;
	sub_821A2548(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82271d08
	ctx.lr = 0x821ABC58;
	sub_82271D08(ctx, base);
loc_821ABC58:
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

__attribute__((alias("__imp__sub_821ABC6C"))) PPC_WEAK_FUNC(sub_821ABC6C);
PPC_FUNC_IMPL(__imp__sub_821ABC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ABC70"))) PPC_WEAK_FUNC(sub_821ABC70);
PPC_FUNC_IMPL(__imp__sub_821ABC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821ABC78;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8218d888
	ctx.lr = 0x821ABC88;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821abc94
	if (ctx.cr6.eq) goto loc_821ABC94;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_821ABC94:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821abcac
	if (ctx.cr6.eq) goto loc_821ABCAC;
	// bl 0x8218d888
	ctx.lr = 0x821ABCAC;
	sub_8218D888(ctx, base);
loc_821ABCAC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821abd68
	if (!ctx.cr6.gt) goto loc_821ABD68;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821ABCC4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf. r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821abd54
	if (ctx.cr0.eq) goto loc_821ABD54;
loc_821ABCE4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r9,10
	ctx.r5.s64 = ctx.r9.s64 + 10;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r9,r4,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x821abd68
	if (ctx.cr6.eq) goto loc_821ABD68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x821abd54
	if (ctx.cr6.eq) goto loc_821ABD54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab3a0
	ctx.lr = 0x821ABD3C;
	sub_821AB3A0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x821abce4
	goto loc_821ABCE4;
loc_821ABD54:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821abcc4
	if (ctx.cr6.lt) goto loc_821ABCC4;
loc_821ABD68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821ABD70"))) PPC_WEAK_FUNC(sub_821ABD70);
PPC_FUNC_IMPL(__imp__sub_821ABD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821ABD78;
	sub_8224876C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821a2ce8
	ctx.lr = 0x821ABD90;
	sub_821A2CE8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r27,21788(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21788);
	// bl 0x82088650
	ctx.lr = 0x821ABD9C;
	sub_82088650(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,21584(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21584, ctx.r11.u64);
	// bl 0x82088650
	ctx.lr = 0x821ABDAC;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x821ABDB4;
	sub_82182F58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821ABDBC;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a25d8
	ctx.lr = 0x821ABDC8;
	sub_821A25D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a25e8
	ctx.lr = 0x821ABDD4;
	sub_821A25E8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// addi r31,r11,-8128
	ctx.r31.s64 = ctx.r11.s64 + -8128;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x82086e70
	ctx.lr = 0x821ABDFC;
	sub_82086E70(ctx, base);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82086e70
	ctx.lr = 0x821ABE08;
	sub_82086E70(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,-28928
	ctx.r4.s64 = -28928;
	// addi r29,r11,-8184
	ctx.r29.s64 = ctx.r11.s64 + -8184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82086e70
	ctx.lr = 0x821ABE1C;
	sub_82086E70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a2410
	ctx.lr = 0x821ABE24;
	sub_821A2410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a2d78
	ctx.lr = 0x821ABE2C;
	sub_821A2D78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2410
	ctx.lr = 0x821ABE34;
	sub_821A2410(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218dec8
	ctx.lr = 0x821ABE3C;
	sub_8218DEC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218dfa0
	ctx.lr = 0x821ABE44;
	sub_8218DFA0(ctx, base);
	// lis r23,-32179
	ctx.r23.s64 = -2108882944;
	// lwz r3,21780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21780);
	// bl 0x8218dad8
	ctx.lr = 0x821ABE50;
	sub_8218DAD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaa18
	ctx.lr = 0x821ABE58;
	sub_821AAA18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821ABE60;
	sub_8209EDA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a2410
	ctx.lr = 0x821ABE68;
	sub_821A2410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a3690
	ctx.lr = 0x821ABE70;
	sub_821A3690(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2410
	ctx.lr = 0x821ABE78;
	sub_821A2410(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// addi r26,r11,-7560
	ctx.r26.s64 = ctx.r11.s64 + -7560;
loc_821ABE8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218dff8
	ctx.lr = 0x821ABE94;
	sub_8218DFF8(ctx, base);
	// lfs f0,32(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7248(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 7248, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82088248
	ctx.lr = 0x821ABEA4;
	sub_82088248(ctx, base);
	// ld r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// ld r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 320);
	// ld r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x821abecc
	if (!ctx.cr6.lt) goto loc_821ABECC;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// b 0x821abedc
	goto loc_821ABEDC;
loc_821ABECC:
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// bge 0x821abee0
	if (!ctx.cr0.lt) goto loc_821ABEE0;
loc_821ABEDC:
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
loc_821ABEE0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,32(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7248(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 7248, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r10,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r10.u64);
	// std r11,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r11.u64);
	// bl 0x82088248
	ctx.lr = 0x821ABF00;
	sub_82088248(ctx, base);
	// ld r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 368);
	// ld r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 376);
	// ld r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 352);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x821abf28
	if (!ctx.cr6.lt) goto loc_821ABF28;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// b 0x821abf38
	goto loc_821ABF38;
loc_821ABF28:
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// bge 0x821abf3c
	if (!ctx.cr0.lt) goto loc_821ABF3C;
loc_821ABF38:
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
loc_821ABF3C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r10,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r10.u64);
	// std r11,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r11.u64);
	// bl 0x82088248
	ctx.lr = 0x821ABF54;
	sub_82088248(ctx, base);
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// ld r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// ld r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x821abf7c
	if (!ctx.cr6.lt) goto loc_821ABF7C;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// b 0x821abf8c
	goto loc_821ABF8C;
loc_821ABF7C:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// bge 0x821abf90
	if (!ctx.cr0.lt) goto loc_821ABF90;
loc_821ABF8C:
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
loc_821ABF90:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,-7484(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -7484);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// beq cr6,0x821abfb0
	if (ctx.cr6.eq) goto loc_821ABFB0;
	// bl 0x821ae0a0
	ctx.lr = 0x821ABFB0;
	sub_821AE0A0(ctx, base);
loc_821ABFB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a2410
	ctx.lr = 0x821ABFB8;
	sub_821A2410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a2d78
	ctx.lr = 0x821ABFC0;
	sub_821A2D78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2410
	ctx.lr = 0x821ABFC8;
	sub_821A2410(ctx, base);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x821837d0
	ctx.lr = 0x821ABFD0;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821abc70
	ctx.lr = 0x821ABFD8;
	sub_821ABC70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a2d30
	ctx.lr = 0x821ABFE0;
	sub_821A2D30(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82088248
	ctx.lr = 0x821ABFE8;
	sub_82088248(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// bl 0x8218dfa0
	ctx.lr = 0x821ABFF8;
	sub_8218DFA0(ctx, base);
	// lwz r3,-19048(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19048);
	// bl 0x821a25b0
	ctx.lr = 0x821AC000;
	sub_821A25B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a2ce8
	ctx.lr = 0x821AC008;
	sub_821A2CE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218dec8
	ctx.lr = 0x821AC010;
	sub_8218DEC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821AC018;
	sub_8209EDA0(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// lwz r3,21780(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21780);
	// bl 0x8218dad8
	ctx.lr = 0x821AC030;
	sub_8218DAD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaa18
	ctx.lr = 0x821AC038;
	sub_821AAA18(ctx, base);
	// lwz r3,-7480(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac050
	if (ctx.cr6.eq) goto loc_821AC050;
	// bl 0x821ae6a8
	ctx.lr = 0x821AC048;
	sub_821AE6A8(ctx, base);
	// lwz r3,-7480(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7480);
	// bl 0x821ae9a8
	ctx.lr = 0x821AC050;
	sub_821AE9A8(ctx, base);
loc_821AC050:
	// lwz r3,-7484(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -7484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac060
	if (ctx.cr6.eq) goto loc_821AC060;
	// bl 0x821ae020
	ctx.lr = 0x821AC060;
	sub_821AE020(ctx, base);
loc_821AC060:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82088248
	ctx.lr = 0x821AC068;
	sub_82088248(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r11.u64);
	// bl 0x821a2410
	ctx.lr = 0x821AC078;
	sub_821A2410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a3690
	ctx.lr = 0x821AC080;
	sub_821A3690(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2410
	ctx.lr = 0x821AC088;
	sub_821A2410(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82088248
	ctx.lr = 0x821AC090;
	sub_82088248(ctx, base);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r11.u64);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x821abe8c
	goto loc_821ABE8C;
}

__attribute__((alias("__imp__sub_821AC0A8"))) PPC_WEAK_FUNC(sub_821AC0A8);
PPC_FUNC_IMPL(__imp__sub_821AC0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC0B8"))) PPC_WEAK_FUNC(sub_821AC0B8);
PPC_FUNC_IMPL(__imp__sub_821AC0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821AC0C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC0EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AC0F0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ac120
	if (ctx.cr6.eq) goto loc_821AC120;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x821ac0f0
	if (ctx.cr6.lt) goto loc_821AC0F0;
	// b 0x821ac180
	goto loc_821AC180;
loc_821AC120:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r27,180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 180, ctx.r27.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,172(r7)
	PPC_STORE_U32(ctx.r7.u32 + 172, ctx.r29.u32);
loc_821AC180:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC194;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821AC1A0"))) PPC_WEAK_FUNC(sub_821AC1A0);
PPC_FUNC_IMPL(__imp__sub_821AC1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821AC1A8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ac234
	if (!ctx.cr6.gt) goto loc_821AC234;
	// addi r27,r3,52
	ctx.r27.s64 = ctx.r3.s64 + 52;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821AC1CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC1D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac214
	if (ctx.cr6.eq) goto loc_821AC214;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC1F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AC208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC214;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821AC214:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC21C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ac1cc
	if (ctx.cr6.lt) goto loc_821AC1CC;
loc_821AC234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821AC23C"))) PPC_WEAK_FUNC(sub_821AC23C);
PPC_FUNC_IMPL(__imp__sub_821AC23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC240"))) PPC_WEAK_FUNC(sub_821AC240);
PPC_FUNC_IMPL(__imp__sub_821AC240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821AC248;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ac2d4
	if (!ctx.cr6.gt) goto loc_821AC2D4;
	// addi r27,r3,52
	ctx.r27.s64 = ctx.r3.s64 + 52;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821AC26C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC274;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac2b4
	if (ctx.cr6.eq) goto loc_821AC2B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC290;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AC2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC2B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821AC2B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC2BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ac26c
	if (ctx.cr6.lt) goto loc_821AC26C;
loc_821AC2D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821AC2DC"))) PPC_WEAK_FUNC(sub_821AC2DC);
PPC_FUNC_IMPL(__imp__sub_821AC2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC2E0"))) PPC_WEAK_FUNC(sub_821AC2E0);
PPC_FUNC_IMPL(__imp__sub_821AC2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC30C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821AC310:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r5,168(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 168);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821ac368
	if (ctx.cr6.eq) goto loc_821AC368;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821AC368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AC368:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x821ac310
	if (ctx.cr6.lt) goto loc_821AC310;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC388;
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

__attribute__((alias("__imp__sub_821AC3A0"))) PPC_WEAK_FUNC(sub_821AC3A0);
PPC_FUNC_IMPL(__imp__sub_821AC3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AC3A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x821AC3C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,-16216
	ctx.r6.s64 = ctx.r10.s64 + -16216;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x8224a2a0
	ctx.lr = 0x821AC3E8;
	sub_8224A2A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_821AC3F0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r5,172(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 172);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821ac448
	if (ctx.cr6.eq) goto loc_821AC448;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821AC448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AC448:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// blt cr6,0x821ac3f0
	if (ctx.cr6.lt) goto loc_821AC3F0;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821AC460:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 180, ctx.r30.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r30.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,172(r7)
	PPC_STORE_U32(ctx.r7.u32 + 172, ctx.r30.u32);
	// bdnz 0x821ac460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AC460;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821AC4DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AC4E4"))) PPC_WEAK_FUNC(sub_821AC4E4);
PPC_FUNC_IMPL(__imp__sub_821AC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC4E8"))) PPC_WEAK_FUNC(sub_821AC4E8);
PPC_FUNC_IMPL(__imp__sub_821AC4E8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8241dd2c
	ctx.lr = 0x821AC504;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AC518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8241dd3c
	ctx.lr = 0x821AC520;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC534"))) PPC_WEAK_FUNC(sub_821AC534);
PPC_FUNC_IMPL(__imp__sub_821AC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC538"))) PPC_WEAK_FUNC(sub_821AC538);
PPC_FUNC_IMPL(__imp__sub_821AC538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821AC540;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218e200
	ctx.lr = 0x821AC554;
	sub_8218E200(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21436
	ctx.r9.s64 = ctx.r11.s64 + -21436;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x821AC58C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821AC594;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821AC5A0;
	sub_821837D0(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x8241dd4c
	ctx.lr = 0x821AC5AC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd4c
	ctx.lr = 0x821AC5B8;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8241dd4c
	ctx.lr = 0x821AC5C4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8241dd4c
	ctx.lr = 0x821AC5D0;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r27,r8,65535
	ctx.r27.u64 = ctx.r8.u64 | 65535;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x821ac5f0
	if (!ctx.cr6.gt) goto loc_821AC5F0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821AC5F0:
	// bl 0x82183850
	ctx.lr = 0x821AC5F4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821ac60c
	if (ctx.cr6.eq) goto loc_821AC60C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821AC608;
	sub_82183448(ctx, base);
	// b 0x821ac618
	goto loc_821AC618;
loc_821AC60C:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AC618;
	sub_821845A0(ctx, base);
loc_821AC618:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821ac630
	if (!ctx.cr6.gt) goto loc_821AC630;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821AC630:
	// bl 0x82183850
	ctx.lr = 0x821AC634;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821ac64c
	if (ctx.cr6.eq) goto loc_821AC64C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821AC648;
	sub_82183448(ctx, base);
	// b 0x821ac658
	goto loc_821AC658;
loc_821AC64C:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AC658;
	sub_821845A0(ctx, base);
loc_821AC658:
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// ori r9,r10,37449
	ctx.r9.u64 = ctx.r10.u64 | 37449;
	// mulli r28,r11,28
	ctx.r28.s64 = ctx.r11.s64 * 28;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821ac678
	if (!ctx.cr6.gt) goto loc_821AC678;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821AC678:
	// bl 0x82183850
	ctx.lr = 0x821AC67C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821ac694
	if (ctx.cr6.eq) goto loc_821AC694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821AC690;
	sub_82183448(ctx, base);
	// b 0x821ac6a0
	goto loc_821AC6A0;
loc_821AC694:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AC6A0;
	sub_821845A0(ctx, base);
loc_821AC6A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x821ac6b4
	if (ctx.cr6.gt) goto loc_821AC6B4;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821AC6B4:
	// bl 0x82183850
	ctx.lr = 0x821AC6B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821ac6d0
	if (ctx.cr6.eq) goto loc_821AC6D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821AC6CC;
	sub_82183448(ctx, base);
	// b 0x821ac6dc
	goto loc_821AC6DC;
loc_821AC6D0:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AC6DC;
	sub_821845A0(ctx, base);
loc_821AC6DC:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821AC6EC;
	sub_822AA648(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821AC6FC;
	sub_822AA648(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x821AC70C;
	sub_822AA648(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x821ac744
	if (!ctx.cr6.gt) goto loc_821AC744;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821AC720:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8241dd4c
	ctx.lr = 0x821AC730;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ac720
	if (ctx.cr6.lt) goto loc_821AC720;
loc_821AC744:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_821AC748:
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821AC754:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r10,11
	ctx.r7.s64 = ctx.r10.s64 + 11;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// stw r30,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r30.u32);
	// stw r30,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r30.u32);
	// stw r30,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r30.u32);
	// bdnz 0x821ac754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AC754;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// blt cr6,0x821ac748
	if (ctx.cr6.lt) goto loc_821AC748;
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,-8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8196, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x821AC7A4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821AC7B0"))) PPC_WEAK_FUNC(sub_821AC7B0);
PPC_FUNC_IMPL(__imp__sub_821AC7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AC7B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,-21436
	ctx.r9.s64 = ctx.r11.s64 + -21436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ac81c
	if (!ctx.cr6.gt) goto loc_821AC81C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821AC7E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac800
	if (ctx.cr6.eq) goto loc_821AC800;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x821AC800;
	sub_82183E40(ctx, base);
loc_821AC800:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ac7e4
	if (ctx.cr6.lt) goto loc_821AC7E4;
loc_821AC81C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac830
	if (ctx.cr6.eq) goto loc_821AC830;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AC830;
	sub_82183E40(ctx, base);
loc_821AC830:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac848
	if (ctx.cr6.eq) goto loc_821AC848;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AC848;
	sub_82183E40(ctx, base);
loc_821AC848:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac860
	if (ctx.cr6.eq) goto loc_821AC860;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AC860;
	sub_82183E40(ctx, base);
loc_821AC860:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ac894
	if (!ctx.cr6.gt) goto loc_821AC894;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821AC878:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821ac878
	if (ctx.cr6.lt) goto loc_821AC878;
loc_821AC894:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac8a8
	if (ctx.cr6.eq) goto loc_821AC8A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AC8A8;
	sub_82183E40(ctx, base);
loc_821AC8A8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,-8196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8196, ctx.r28.u32);
	// bl 0x8218dd78
	ctx.lr = 0x821AC8C0;
	sub_8218DD78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AC8C8"))) PPC_WEAK_FUNC(sub_821AC8C8);
PPC_FUNC_IMPL(__imp__sub_821AC8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AC8D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ac944
	if (!ctx.cr6.gt) goto loc_821AC944;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821AC8EC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac930
	if (ctx.cr6.eq) goto loc_821AC930;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AC914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r5,r3,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r4,184(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// bl 0x82087ab0
	ctx.lr = 0x821AC930;
	sub_82087AB0(ctx, base);
loc_821AC930:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ac8ec
	if (ctx.cr6.lt) goto loc_821AC8EC;
loc_821AC944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AC94C"))) PPC_WEAK_FUNC(sub_821AC94C);
PPC_FUNC_IMPL(__imp__sub_821AC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC950"))) PPC_WEAK_FUNC(sub_821AC950);
PPC_FUNC_IMPL(__imp__sub_821AC950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821ac7b0
	ctx.lr = 0x821AC970;
	sub_821AC7B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac98c
	if (ctx.cr6.eq) goto loc_821AC98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821AC988;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821AC98C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC9A4"))) PPC_WEAK_FUNC(sub_821AC9A4);
PPC_FUNC_IMPL(__imp__sub_821AC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AC9A8"))) PPC_WEAK_FUNC(sub_821AC9A8);
PPC_FUNC_IMPL(__imp__sub_821AC9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AC9B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82088650
	ctx.lr = 0x821AC9BC;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x821AC9C4;
	sub_82182F58(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r30,21788(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21788);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e120
	ctx.lr = 0x821AC9D4;
	sub_8218E120(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x821AC9D8;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821AC9E0;
	sub_82183078(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821AC9E8;
	sub_821837D0(ctx, base);
loc_821AC9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac240
	ctx.lr = 0x821AC9F0;
	sub_821AC240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac3a0
	ctx.lr = 0x821AC9F8;
	sub_821AC3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e120
	ctx.lr = 0x821ACA00;
	sub_8218E120(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x821ac9e8
	goto loc_821AC9E8;
}

__attribute__((alias("__imp__sub_821ACA10"))) PPC_WEAK_FUNC(sub_821ACA10);
PPC_FUNC_IMPL(__imp__sub_821ACA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821ACA18;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821aca90
	if (!ctx.cr6.gt) goto loc_821ACA90;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
loc_821ACA3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aca78
	if (ctx.cr6.eq) goto loc_821ACA78;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r8,-15128
	ctx.r4.s64 = ctx.r8.s64 + -15128;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// stw r11,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r11.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r3,-7484(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7484);
	// bl 0x821adf18
	ctx.lr = 0x821ACA78;
	sub_821ADF18(ctx, base);
loc_821ACA78:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aca3c
	if (ctx.cr6.lt) goto loc_821ACA3C;
loc_821ACA90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821ACA98"))) PPC_WEAK_FUNC(sub_821ACA98);
PPC_FUNC_IMPL(__imp__sub_821ACA98) {
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// bl 0x821ac1a0
	ctx.lr = 0x821ACAC0;
	sub_821AC1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac2e0
	ctx.lr = 0x821ACAC8;
	sub_821AC2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac8c8
	ctx.lr = 0x821ACAD0;
	sub_821AC8C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aca10
	ctx.lr = 0x821ACAD8;
	sub_821ACA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACAEC"))) PPC_WEAK_FUNC(sub_821ACAEC);
PPC_FUNC_IMPL(__imp__sub_821ACAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACAF0"))) PPC_WEAK_FUNC(sub_821ACAF0);
PPC_FUNC_IMPL(__imp__sub_821ACAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bgt cr6,0x821acbd4
	if (ctx.cr6.gt) {
		sub_821ACBD4(ctx, base);
		return;
	}
	// beq cr6,0x821acbc4
	if (ctx.cr6.eq) {
		sub_821ACBC4(ctx, base);
		return;
	}
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13524
	ctx.r12.s64 = ctx.r12.s64 + -13524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821ACB2C"))) PPC_WEAK_FUNC(sub_821ACB2C);
PPC_FUNC_IMPL(__imp__sub_821ACB2C) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-13460(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13460);
	// lwz r16,-13460(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13460);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13444(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13444);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13388(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13388);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13280(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13280);
	// lwz r16,-13404(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13404);
	// li r10,640
	ctx.r10.s64 = 640;
	// li r9,480
	ctx.r9.s64 = 480;
	// li r8,240
	ctx.r8.s64 = 240;
	// b 0x821acc08
	// ERROR 821ACC08
	return;
}

__attribute__((alias("__imp__sub_821ACB7C"))) PPC_WEAK_FUNC(sub_821ACB7C);
PPC_FUNC_IMPL(__imp__sub_821ACB7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,640
	ctx.r10.s64 = 640;
	// li r9,576
	ctx.r9.s64 = 576;
	// li r8,288
	ctx.r8.s64 = 288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACBA4"))) PPC_WEAK_FUNC(sub_821ACBA4);
PPC_FUNC_IMPL(__imp__sub_821ACBA4) {
	PPC_FUNC_PROLOGUE();
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,576
	ctx.r9.s64 = 576;
	// li r8,288
	ctx.r8.s64 = 288;
	// b 0x821acc08
	// ERROR 821ACC08
	return;
}

__attribute__((alias("__imp__sub_821ACBB4"))) PPC_WEAK_FUNC(sub_821ACBB4);
PPC_FUNC_IMPL(__imp__sub_821ACBB4) {
	PPC_FUNC_PROLOGUE();
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,480
	ctx.r9.s64 = 480;
	// li r8,240
	ctx.r8.s64 = 240;
	// b 0x821acc08
	// ERROR 821ACC08
	return;
}

__attribute__((alias("__imp__sub_821ACBC4"))) PPC_WEAK_FUNC(sub_821ACBC4);
PPC_FUNC_IMPL(__imp__sub_821ACBC4) {
	PPC_FUNC_PROLOGUE();
	// li r10,1920
	ctx.r10.s64 = 1920;
	// li r9,1080
	ctx.r9.s64 = 1080;
	// li r8,540
	ctx.r8.s64 = 540;
	// b 0x821acc08
	// ERROR 821ACC08
	return;
}

__attribute__((alias("__imp__sub_821ACBD4"))) PPC_WEAK_FUNC(sub_821ACBD4);
PPC_FUNC_IMPL(__imp__sub_821ACBD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x821acbfc
	if (ctx.cr6.eq) goto loc_821ACBFC;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x821acbc4
	if (ctx.cr6.eq) {
		sub_821ACBC4(ctx, base);
		return;
	}
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,480
	ctx.r10.s64 = 480;
	// li r9,272
	ctx.r9.s64 = 272;
	// li r8,136
	ctx.r8.s64 = 136;
	// b 0x821acc08
	goto loc_821ACC08;
loc_821ACBFC:
	// li r10,1280
	ctx.r10.s64 = 1280;
	// li r9,720
	ctx.r9.s64 = 720;
	// li r8,360
	ctx.r8.s64 = 360;
loc_821ACC08:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACC24"))) PPC_WEAK_FUNC(sub_821ACC24);
PPC_FUNC_IMPL(__imp__sub_821ACC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACC28"))) PPC_WEAK_FUNC(sub_821ACC28);
PPC_FUNC_IMPL(__imp__sub_821ACC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// bgt cr6,0x821accc4
	if (ctx.cr6.gt) goto loc_821ACCC4;
	// beq cr6,0x821acc88
	if (ctx.cr6.eq) goto loc_821ACC88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821accd4
	if (ctx.cr6.eq) goto loc_821ACCD4;
	// cmplwi cr6,r3,25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 25, ctx.xer);
	// bne cr6,0x821acd44
	if (!ctx.cr6.eq) goto loc_821ACD44;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,25
	ctx.r10.s64 = 25;
	// lfs f0,11080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8312(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8312);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f12,-21428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21428);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,14584(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14584);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x821acd4c
	goto loc_821ACD4C;
loc_821ACC88:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,30
	ctx.r10.s64 = 30;
	// lfs f0,10184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f12,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,11488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11488);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x821acd4c
	goto loc_821ACD4C;
loc_821ACCC4:
	// cmplwi cr6,r3,50
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 50, ctx.xer);
	// beq cr6,0x821acd08
	if (ctx.cr6.eq) goto loc_821ACD08;
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// bne cr6,0x821acd44
	if (!ctx.cr6.eq) goto loc_821ACD44;
loc_821ACCD4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,60
	ctx.r10.s64 = 60;
	// lfs f0,25476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25476);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11492);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x821acd4c
	goto loc_821ACD4C;
loc_821ACD08:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,50
	ctx.r10.s64 = 50;
	// lfs f0,8620(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13532(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13532);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f12,-21432(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21432);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x821acd4c
	goto loc_821ACD4C;
loc_821ACD44:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_821ACD4C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// twllei r10,0
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lfs f13,10412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACD70"))) PPC_WEAK_FUNC(sub_821ACD70);
PPC_FUNC_IMPL(__imp__sub_821ACD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821ACD78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,-7560
	ctx.r29.s64 = ctx.r30.s64 + -7560;
	// stw r11,-7492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7492, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x821ACDA0;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x821ACDB0;
	sub_821847A8(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x821acc28
	ctx.lr = 0x821ACDB8;
	sub_821ACC28(ctx, base);
	// lwz r3,-7560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7560);
	// bl 0x821acaf0
	ctx.lr = 0x821ACDC0;
	sub_821ACAF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821ACDC8"))) PPC_WEAK_FUNC(sub_821ACDC8);
PPC_FUNC_IMPL(__imp__sub_821ACDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// beq cr6,0x821ace18
	if (ctx.cr6.eq) goto loc_821ACE18;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f0,10184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// li r10,30
	ctx.r10.s64 = 30;
	// lfs f13,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// li r9,33
	ctx.r9.s64 = 33;
	// lfs f12,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,11488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-21420(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21420);
	ctx.f10.f64 = double(temp.f32);
	// b 0x821ace48
	goto loc_821ACE48;
loc_821ACE18:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f0,11080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11080);
	ctx.f0.f64 = double(temp.f32);
	// li r10,25
	ctx.r10.s64 = 25;
	// lfs f13,8312(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8312);
	ctx.f13.f64 = double(temp.f32);
	// li r9,40
	ctx.r9.s64 = 40;
	// lfs f12,-21428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21428);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,14584(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14584);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-21424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21424);
	ctx.f10.f64 = double(temp.f32);
loc_821ACE48:
	// stfs f10,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACE68"))) PPC_WEAK_FUNC(sub_821ACE68);
PPC_FUNC_IMPL(__imp__sub_821ACE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// beq cr6,0x821aced8
	if (ctx.cr6.eq) goto loc_821ACED8;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f13,25476(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f12,11492(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11492);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lfs f11,-21416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21416);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
loc_821ACED8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,8620(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,20
	ctx.r9.s64 = 20;
	// lfs f13,13532(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-21432(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21432);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f11,19128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19128);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lfs f10,7884(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7884);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACF28"))) PPC_WEAK_FUNC(sub_821ACF28);
PPC_FUNC_IMPL(__imp__sub_821ACF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// b 0x821a2d78
	sub_821A2D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ACF34"))) PPC_WEAK_FUNC(sub_821ACF34);
PPC_FUNC_IMPL(__imp__sub_821ACF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACF38"))) PPC_WEAK_FUNC(sub_821ACF38);
PPC_FUNC_IMPL(__imp__sub_821ACF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// b 0x821a27d0
	sub_821A27D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ACF44"))) PPC_WEAK_FUNC(sub_821ACF44);
PPC_FUNC_IMPL(__imp__sub_821ACF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACF48"))) PPC_WEAK_FUNC(sub_821ACF48);
PPC_FUNC_IMPL(__imp__sub_821ACF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// b 0x821a24c0
	sub_821A24C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ACF54"))) PPC_WEAK_FUNC(sub_821ACF54);
PPC_FUNC_IMPL(__imp__sub_821ACF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACF58"))) PPC_WEAK_FUNC(sub_821ACF58);
PPC_FUNC_IMPL(__imp__sub_821ACF58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,-19048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// stw r9,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r9.u32);
	// lwz r11,-19048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACF78"))) PPC_WEAK_FUNC(sub_821ACF78);
PPC_FUNC_IMPL(__imp__sub_821ACF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821ACFA8;
	sub_8209EDA0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821ACFBC;
	sub_821AAF10(ctx, base);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821ACFDC;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACFF4"))) PPC_WEAK_FUNC(sub_821ACFF4);
PPC_FUNC_IMPL(__imp__sub_821ACFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACFF8"))) PPC_WEAK_FUNC(sub_821ACFF8);
PPC_FUNC_IMPL(__imp__sub_821ACFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821AD028;
	sub_8209EDA0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821AD03C;
	sub_821AAF10(ctx, base);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821AD05C;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD074"))) PPC_WEAK_FUNC(sub_821AD074);
PPC_FUNC_IMPL(__imp__sub_821AD074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD078"))) PPC_WEAK_FUNC(sub_821AD078);
PPC_FUNC_IMPL(__imp__sub_821AD078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,67
	ctx.r10.s64 = 67;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821AD0A8;
	sub_8209EDA0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821AD0BC;
	sub_821AAF10(ctx, base);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821AD0DC;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD0F4"))) PPC_WEAK_FUNC(sub_821AD0F4);
PPC_FUNC_IMPL(__imp__sub_821AD0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD0F8"))) PPC_WEAK_FUNC(sub_821AD0F8);
PPC_FUNC_IMPL(__imp__sub_821AD0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821AD12C;
	sub_8209EDA0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8200(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// bl 0x821aaf10
	ctx.lr = 0x821AD140;
	sub_821AAF10(ctx, base);
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD168"))) PPC_WEAK_FUNC(sub_821AD168);
PPC_FUNC_IMPL(__imp__sub_821AD168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AD170;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821AD198;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821AD1C0;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821AD1F0;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AD1F8"))) PPC_WEAK_FUNC(sub_821AD1F8);
PPC_FUNC_IMPL(__imp__sub_821AD1F8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD214;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD228;
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

__attribute__((alias("__imp__sub_821AD23C"))) PPC_WEAK_FUNC(sub_821AD23C);
PPC_FUNC_IMPL(__imp__sub_821AD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD240"))) PPC_WEAK_FUNC(sub_821AD240);
PPC_FUNC_IMPL(__imp__sub_821AD240) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD25C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD270;
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

__attribute__((alias("__imp__sub_821AD284"))) PPC_WEAK_FUNC(sub_821AD284);
PPC_FUNC_IMPL(__imp__sub_821AD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD288"))) PPC_WEAK_FUNC(sub_821AD288);
PPC_FUNC_IMPL(__imp__sub_821AD288) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD2A4;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD2B8;
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

__attribute__((alias("__imp__sub_821AD2CC"))) PPC_WEAK_FUNC(sub_821AD2CC);
PPC_FUNC_IMPL(__imp__sub_821AD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD2D0"))) PPC_WEAK_FUNC(sub_821AD2D0);
PPC_FUNC_IMPL(__imp__sub_821AD2D0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD2EC;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD300;
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

__attribute__((alias("__imp__sub_821AD314"))) PPC_WEAK_FUNC(sub_821AD314);
PPC_FUNC_IMPL(__imp__sub_821AD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD318"))) PPC_WEAK_FUNC(sub_821AD318);
PPC_FUNC_IMPL(__imp__sub_821AD318) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD334;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD348;
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

__attribute__((alias("__imp__sub_821AD35C"))) PPC_WEAK_FUNC(sub_821AD35C);
PPC_FUNC_IMPL(__imp__sub_821AD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD360"))) PPC_WEAK_FUNC(sub_821AD360);
PPC_FUNC_IMPL(__imp__sub_821AD360) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD37C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD390;
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

__attribute__((alias("__imp__sub_821AD3A4"))) PPC_WEAK_FUNC(sub_821AD3A4);
PPC_FUNC_IMPL(__imp__sub_821AD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD3A8"))) PPC_WEAK_FUNC(sub_821AD3A8);
PPC_FUNC_IMPL(__imp__sub_821AD3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD3CC;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD3E4;
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

__attribute__((alias("__imp__sub_821AD3FC"))) PPC_WEAK_FUNC(sub_821AD3FC);
PPC_FUNC_IMPL(__imp__sub_821AD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD400"))) PPC_WEAK_FUNC(sub_821AD400);
PPC_FUNC_IMPL(__imp__sub_821AD400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AD408;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD424;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AD44C"))) PPC_WEAK_FUNC(sub_821AD44C);
PPC_FUNC_IMPL(__imp__sub_821AD44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD450"))) PPC_WEAK_FUNC(sub_821AD450);
PPC_FUNC_IMPL(__imp__sub_821AD450) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD46C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD480;
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

__attribute__((alias("__imp__sub_821AD494"))) PPC_WEAK_FUNC(sub_821AD494);
PPC_FUNC_IMPL(__imp__sub_821AD494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD498"))) PPC_WEAK_FUNC(sub_821AD498);
PPC_FUNC_IMPL(__imp__sub_821AD498) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD4B4;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD4C8;
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

__attribute__((alias("__imp__sub_821AD4DC"))) PPC_WEAK_FUNC(sub_821AD4DC);
PPC_FUNC_IMPL(__imp__sub_821AD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD4E0"))) PPC_WEAK_FUNC(sub_821AD4E0);
PPC_FUNC_IMPL(__imp__sub_821AD4E0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD4FC;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD510;
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

__attribute__((alias("__imp__sub_821AD524"))) PPC_WEAK_FUNC(sub_821AD524);
PPC_FUNC_IMPL(__imp__sub_821AD524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD528"))) PPC_WEAK_FUNC(sub_821AD528);
PPC_FUNC_IMPL(__imp__sub_821AD528) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD544;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD558;
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

