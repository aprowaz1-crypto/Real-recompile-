#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821E0DE0"))) PPC_WEAK_FUNC(sub_821E0DE0);
PPC_FUNC_IMPL(__imp__sub_821E0DE0) {
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
	// bl 0x821e0cf8
	ctx.lr = 0x821E0DF8;
	sub_821E0CF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e0e18
	if (!ctx.cr6.eq) goto loc_821E0E18;
loc_821E0E04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088648
	ctx.lr = 0x821E0E0C;
	sub_82088648(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e0e04
	if (ctx.cr6.eq) goto loc_821E0E04;
loc_821E0E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0E2C"))) PPC_WEAK_FUNC(sub_821E0E2C);
PPC_FUNC_IMPL(__imp__sub_821E0E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0E30"))) PPC_WEAK_FUNC(sub_821E0E30);
PPC_FUNC_IMPL(__imp__sub_821E0E30) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// rlwinm r8,r10,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r4,r7,3552
	ctx.r4.s64 = ctx.r7.s64 + 3552;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r3,-7484(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7484);
	// bl 0x821adfc0
	ctx.lr = 0x821E0E80;
	sub_821ADFC0(ctx, base);
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

__attribute__((alias("__imp__sub_821E0E98"))) PPC_WEAK_FUNC(sub_821E0E98);
PPC_FUNC_IMPL(__imp__sub_821E0E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E0EA0;
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
	ctx.lr = 0x821E0EC0;
	sub_821AAF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821E0EDC;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// bl 0x821aafd0
	ctx.lr = 0x821E0EFC;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E0F04"))) PPC_WEAK_FUNC(sub_821E0F04);
PPC_FUNC_IMPL(__imp__sub_821E0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0F08"))) PPC_WEAK_FUNC(sub_821E0F08);
PPC_FUNC_IMPL(__imp__sub_821E0F08) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x821E0F28;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-11520
	ctx.r10.s64 = ctx.r11.s64 + -11520;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0F4C"))) PPC_WEAK_FUNC(sub_821E0F4C);
PPC_FUNC_IMPL(__imp__sub_821E0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0F50"))) PPC_WEAK_FUNC(sub_821E0F50);
PPC_FUNC_IMPL(__imp__sub_821E0F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-11520
	ctx.r10.s64 = ctx.r11.s64 + -11520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185a50
	ctx.lr = 0x821E0F7C;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e0f98
	if (ctx.cr6.eq) goto loc_821E0F98;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E0F94;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E0F98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0FB0"))) PPC_WEAK_FUNC(sub_821E0FB0);
PPC_FUNC_IMPL(__imp__sub_821E0FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E0FB8;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r11,-1196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1196);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e1058
	if (ctx.cr6.eq) goto loc_821E1058;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r11,-1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1200);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821aa098
	ctx.lr = 0x821E1010;
	sub_821AA098(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r30,-1740(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1740);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821e1050
	if (!ctx.cr6.gt) goto loc_821E1050;
loc_821E1028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d12d0
	ctx.lr = 0x821E1034;
	sub_821D12D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E1044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821e1028
	if (ctx.cr6.lt) goto loc_821E1028;
loc_821E1050:
	// lwz r11,-1196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1196);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_821E1058:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E1060"))) PPC_WEAK_FUNC(sub_821E1060);
PPC_FUNC_IMPL(__imp__sub_821E1060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-11512
	ctx.r9.s64 = ctx.r11.s64 + -11512;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-1192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1192, ctx.r11.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x821E1098;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e10b4
	if (ctx.cr6.eq) goto loc_821E10B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E10B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E10B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E10CC"))) PPC_WEAK_FUNC(sub_821E10CC);
PPC_FUNC_IMPL(__imp__sub_821E10CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E10D0"))) PPC_WEAK_FUNC(sub_821E10D0);
PPC_FUNC_IMPL(__imp__sub_821E10D0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-7560
	ctx.r30.s64 = ctx.r11.s64 + -7560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfd f31,29648(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 29648);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// bl 0x8224b9b0
	ctx.lr = 0x821E1124;
	sub_8224B9B0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f30,f0
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f13,7292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821e11a8
	if (ctx.cr6.lt) goto loc_821E11A8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fadds f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x8224b9b0
	ctx.lr = 0x821E1174;
	sub_8224B9B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-11472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11472);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f1,52(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// bl 0x8224b9b0
	ctx.lr = 0x821E11A0;
	sub_8224B9B0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_821E11A8:
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

__attribute__((alias("__imp__sub_821E11C8"))) PPC_WEAK_FUNC(sub_821E11C8);
PPC_FUNC_IMPL(__imp__sub_821E11C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E11D0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E11DC;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-11512
	ctx.r10.s64 = ctx.r11.s64 + -11512;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r8,-11468
	ctx.r4.s64 = ctx.r8.s64 + -11468;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r30,-19020(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E1220;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E1230;
	sub_821A7758(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r31,-1192(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1192, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E1270"))) PPC_WEAK_FUNC(sub_821E1270);
PPC_FUNC_IMPL(__imp__sub_821E1270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E1278;
	sub_82248784(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-1744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e12a0
	if (!ctx.cr6.eq) goto loc_821E12A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E12A0:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-12408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// bl 0x821a82f0
	ctx.lr = 0x821E12AC;
	sub_821A82F0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E12C0;
	sub_821AD1F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad240
	ctx.lr = 0x821E12CC;
	sub_821AD240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x821E12D8;
	sub_821AD288(ctx, base);
	// lwz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E1314;
	sub_821A8E50(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// ld r7,320(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 320);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E1348;
	sub_821A8E50(ctx, base);
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r6,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// ld r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E137C;
	sub_821A8E50(ctx, base);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ld r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 336);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E13B0;
	sub_821A8E50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E13C0;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E13D0;
	sub_821AD6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad648
	ctx.lr = 0x821E13E0;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad6a0
	ctx.lr = 0x821E13F0;
	sub_821AD6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821ad648
	ctx.lr = 0x821E1400;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821ad6a0
	ctx.lr = 0x821E1410;
	sub_821AD6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ad648
	ctx.lr = 0x821E1420;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E1430;
	sub_821AD6A0(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r8,-11456
	ctx.r5.s64 = ctx.r8.s64 + -11456;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// bl 0x821a8c78
	ctx.lr = 0x821E146C;
	sub_821A8C78(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-19048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19048);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f0,3688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E14C8;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,352
	ctx.r5.s64 = ctx.r30.s64 + 352;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821a90a8
	ctx.lr = 0x821E14DC;
	sub_821A90A8(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e15a8
	if (ctx.cr6.eq) goto loc_821E15A8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,-19048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19048);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lwz r3,304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fcfid f2,f11
	ctx.f2.f64 = double(ctx.f11.s64);
	// lfs f0,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// fdivs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// b 0x821e15c0
	goto loc_821E15C0;
loc_821E15A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_821E15C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821dda68
	ctx.lr = 0x821E15C8;
	sub_821DDA68(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E15F0;
	sub_821A8DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E15FC"))) PPC_WEAK_FUNC(sub_821E15FC);
PPC_FUNC_IMPL(__imp__sub_821E15FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1600"))) PPC_WEAK_FUNC(sub_821E1600);
PPC_FUNC_IMPL(__imp__sub_821E1600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-11444
	ctx.r9.s64 = ctx.r11.s64 + -11444;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-1188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1188, ctx.r11.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x821E1638;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e1654
	if (ctx.cr6.eq) goto loc_821E1654;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E1650;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E1654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E166C"))) PPC_WEAK_FUNC(sub_821E166C);
PPC_FUNC_IMPL(__imp__sub_821E166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1670"))) PPC_WEAK_FUNC(sub_821E1670);
PPC_FUNC_IMPL(__imp__sub_821E1670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E1678;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E1684;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-11444
	ctx.r10.s64 = ctx.r11.s64 + -11444;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r8,-11432
	ctx.r4.s64 = ctx.r8.s64 + -11432;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r30,-19020(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E16C8;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E16D8;
	sub_821A7758(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r31,-1188(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1188, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E1704"))) PPC_WEAK_FUNC(sub_821E1704);
PPC_FUNC_IMPL(__imp__sub_821E1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1708"))) PPC_WEAK_FUNC(sub_821E1708);
PPC_FUNC_IMPL(__imp__sub_821E1708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E1710;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-1744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e1740
	if (!ctx.cr6.eq) goto loc_821E1740;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E1740:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-12408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// bl 0x821a82f0
	ctx.lr = 0x821E174C;
	sub_821A82F0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E1760;
	sub_821AD1F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad240
	ctx.lr = 0x821E176C;
	sub_821AD240(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x821E1778;
	sub_821AD288(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E17B4;
	sub_821A8E50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E17C4;
	sub_821AD648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E17D4;
	sub_821AD6A0(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// ld r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E180C;
	sub_821A8E50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad648
	ctx.lr = 0x821E181C;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E182C;
	sub_821AD6A0(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// addi r5,r5,-11424
	ctx.r5.s64 = ctx.r5.s64 + -11424;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821a8c78
	ctx.lr = 0x821E1868;
	sub_821A8C78(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,308(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,-19048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lfs f31,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f8,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f6.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E18DC;
	sub_821A90A8(ctx, base);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821e19a8
	if (ctx.cr6.eq) goto loc_821E19A8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-19048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r4,300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r5,304(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// lfs f0,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fdivs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// b 0x821e19bc
	goto loc_821E19BC;
loc_821E19A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f4,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
loc_821E19BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821dda68
	ctx.lr = 0x821E19C4;
	sub_821DDA68(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
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
	ctx.lr = 0x821E19EC;
	sub_821A8DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E19FC"))) PPC_WEAK_FUNC(sub_821E19FC);
PPC_FUNC_IMPL(__imp__sub_821E19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1A00"))) PPC_WEAK_FUNC(sub_821E1A00);
PPC_FUNC_IMPL(__imp__sub_821E1A00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9ce8
	ctx.lr = 0x821E1A2C;
	sub_821A9CE8(ctx, base);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9e08
	ctx.lr = 0x821E1A3C;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1a54
	if (ctx.cr6.eq) goto loc_821E1A54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E1A54;
	sub_821A9F48(ctx, base);
loc_821E1A54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1a6c
	if (ctx.cr6.eq) goto loc_821E1A6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E1A6C;
	sub_821A9F48(ctx, base);
loc_821E1A6C:
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

__attribute__((alias("__imp__sub_821E1A84"))) PPC_WEAK_FUNC(sub_821E1A84);
PPC_FUNC_IMPL(__imp__sub_821E1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1A88"))) PPC_WEAK_FUNC(sub_821E1A88);
PPC_FUNC_IMPL(__imp__sub_821E1A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f3,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f10,-11476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11476);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,-11480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11480);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-11484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11484);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f7,-11488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11488);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-11492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -11492);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f13,f7,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f2.f64));
	// lfs f5,-11496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11496);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-11500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11500);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f11.f64 = double(temp.f32);
	// stfs f3,12(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f8,f0,f6,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f7,f12,f5,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f6,f12,f4,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f5,f12,f11,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f4,f0,f11,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1B24"))) PPC_WEAK_FUNC(sub_821E1B24);
PPC_FUNC_IMPL(__imp__sub_821E1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1B28"))) PPC_WEAK_FUNC(sub_821E1B28);
PPC_FUNC_IMPL(__imp__sub_821E1B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-11412
	ctx.r10.s64 = ctx.r11.s64 + -11412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x821E1B54;
	sub_821E6DC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e1b70
	if (ctx.cr6.eq) goto loc_821E1B70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E1B6C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E1B70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1B88"))) PPC_WEAK_FUNC(sub_821E1B88);
PPC_FUNC_IMPL(__imp__sub_821E1B88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E1BA4;
	sub_821E6DA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11412
	ctx.r9.s64 = ctx.r10.s64 + -11412;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r4,r7,-11400
	ctx.r4.s64 = ctx.r7.s64 + -11400;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r31,-19020(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E1BF0;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E1C00;
	sub_821A7758(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_821E1C2C"))) PPC_WEAK_FUNC(sub_821E1C2C);
PPC_FUNC_IMPL(__imp__sub_821E1C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1C30"))) PPC_WEAK_FUNC(sub_821E1C30);
PPC_FUNC_IMPL(__imp__sub_821E1C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E1C38;
	sub_82248784(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-1744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e1c60
	if (!ctx.cr6.eq) goto loc_821E1C60;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E1C60:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r28,-7488(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// lwz r27,-12408(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12408);
	// lwz r29,-19048(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// bl 0x821a9d78
	ctx.lr = 0x821E1C88;
	sub_821A9D78(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9ea8
	ctx.lr = 0x821E1C94;
	sub_821A9EA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a24f8
	ctx.lr = 0x821E1C9C;
	sub_821A24F8(ctx, base);
	// ld r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
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
	ctx.lr = 0x821E1CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821a8ec8
	ctx.lr = 0x821E1CC8;
	sub_821A8EC8(ctx, base);
	// ld r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E1CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821a8ec8
	ctx.lr = 0x821E1CF4;
	sub_821A8EC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E1D04;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E1D14;
	sub_821AD6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad648
	ctx.lr = 0x821E1D24;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E1D34;
	sub_821AD6A0(ctx, base);
	// addi r5,r30,288
	ctx.r5.s64 = ctx.r30.s64 + 288;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821e1a88
	ctx.lr = 0x821E1D4C;
	sub_821E1A88(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r8,-11388
	ctx.r5.s64 = ctx.r8.s64 + -11388;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8c78
	ctx.lr = 0x821E1D8C;
	sub_821A8C78(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a90a8
	ctx.lr = 0x821E1DA0;
	sub_821A90A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a90a8
	ctx.lr = 0x821E1DB4;
	sub_821A90A8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f4,2144(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E1DD4;
	sub_821DDA68(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E1DFC;
	sub_821A8DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1a00
	ctx.lr = 0x821E1E04;
	sub_821E1A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E1E10"))) PPC_WEAK_FUNC(sub_821E1E10);
PPC_FUNC_IMPL(__imp__sub_821E1E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E1E18;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E1E24;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,-11356
	ctx.r10.s64 = ctx.r11.s64 + -11356;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821b2118
	ctx.lr = 0x821E1E3C;
	sub_821B2118(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E1E48;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lfs f2,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// lwz r6,304(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lfs f3,-15620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15620);
	ctx.f3.f64 = double(temp.f32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,224(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,228(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E1EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E1EB8"))) PPC_WEAK_FUNC(sub_821E1EB8);
PPC_FUNC_IMPL(__imp__sub_821E1EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-11356
	ctx.r10.s64 = ctx.r11.s64 + -11356;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821b1d48
	ctx.lr = 0x821E1EE8;
	sub_821B1D48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6dc0
	ctx.lr = 0x821E1EF0;
	sub_821E6DC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e1f0c
	if (ctx.cr6.eq) goto loc_821E1F0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E1F08;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E1F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E1F24"))) PPC_WEAK_FUNC(sub_821E1F24);
PPC_FUNC_IMPL(__imp__sub_821E1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1F28"))) PPC_WEAK_FUNC(sub_821E1F28);
PPC_FUNC_IMPL(__imp__sub_821E1F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E1F30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1744);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821e1f58
	if (ctx.cr6.gt) goto loc_821E1F58;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E1F58:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E1F6C;
	sub_821AD1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x821E1F78;
	sub_821AD240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x821E1F84;
	sub_821AD2D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad528
	ctx.lr = 0x821E1F90;
	sub_821AD528(ctx, base);
	// lwz r11,-1744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1744);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// ld r8,256(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// std r8,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r8.u64);
	// ld r6,264(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 264);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// std r6,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r6.u64);
	// bctrl 
	ctx.lr = 0x821E1FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E1FCC"))) PPC_WEAK_FUNC(sub_821E1FCC);
PPC_FUNC_IMPL(__imp__sub_821E1FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E1FD0"))) PPC_WEAK_FUNC(sub_821E1FD0);
PPC_FUNC_IMPL(__imp__sub_821E1FD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9ce8
	ctx.lr = 0x821E1FFC;
	sub_821A9CE8(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9e08
	ctx.lr = 0x821E200C;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2024
	if (ctx.cr6.eq) goto loc_821E2024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E2024;
	sub_821A9F48(ctx, base);
loc_821E2024:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e203c
	if (ctx.cr6.eq) goto loc_821E203C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E203C;
	sub_821A9F48(ctx, base);
loc_821E203C:
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

__attribute__((alias("__imp__sub_821E2054"))) PPC_WEAK_FUNC(sub_821E2054);
PPC_FUNC_IMPL(__imp__sub_821E2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2058"))) PPC_WEAK_FUNC(sub_821E2058);
PPC_FUNC_IMPL(__imp__sub_821E2058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-11344
	ctx.r9.s64 = ctx.r11.s64 + -11344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-7480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7480);
	// bl 0x821ae208
	ctx.lr = 0x821E2090;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6dc0
	ctx.lr = 0x821E2098;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e20b4
	if (ctx.cr6.eq) goto loc_821E20B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E20B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E20B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E20CC"))) PPC_WEAK_FUNC(sub_821E20CC);
PPC_FUNC_IMPL(__imp__sub_821E20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E20D0"))) PPC_WEAK_FUNC(sub_821E20D0);
PPC_FUNC_IMPL(__imp__sub_821E20D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E20EC;
	sub_821E6DA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11344
	ctx.r9.s64 = ctx.r10.s64 + -11344;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E212C;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// lwz r3,300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x821E2158;
	sub_8226B2C0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-11332
	ctx.r4.s64 = ctx.r10.s64 + -11332;
	// lwz r31,-19020(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E2174;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E2184;
	sub_821A7758(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_821E21B0"))) PPC_WEAK_FUNC(sub_821E21B0);
PPC_FUNC_IMPL(__imp__sub_821E21B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E21B8;
	sub_8224878C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E21CC;
	sub_8211B248(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e21e4
	if (!ctx.cr6.eq) goto loc_821E21E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E21E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a8ec8
	ctx.lr = 0x821E21F4;
	sub_821A8EC8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E220C;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E221C;
	sub_821AD6A0(ctx, base);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-11320
	ctx.r5.s64 = ctx.r10.s64 + -11320;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a8c78
	ctx.lr = 0x821E2258;
	sub_821A8C78(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,-1744(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1744);
	// lfs f0,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E228C;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a90a8
	ctx.lr = 0x821E22A0;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a90a8
	ctx.lr = 0x821E22B4;
	sub_821A90A8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f4,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E22D4;
	sub_821DDA68(ctx, base);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E22FC;
	sub_821A8DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E2308"))) PPC_WEAK_FUNC(sub_821E2308);
PPC_FUNC_IMPL(__imp__sub_821E2308) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e23cc
	if (ctx.cr6.eq) goto loc_821E23CC;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9d78
	ctx.lr = 0x821E2344;
	sub_821A9D78(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9ea8
	ctx.lr = 0x821E2350;
	sub_821A9EA8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a24f8
	ctx.lr = 0x821E235C;
	sub_821A24F8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-7488(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E2370;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E237C;
	sub_821AD240(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E23B4;
	sub_821AA098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e21b0
	ctx.lr = 0x821E23BC;
	sub_821E21B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821e23d4
	if (!ctx.cr6.eq) goto loc_821E23D4;
	// bl 0x821e1fd0
	ctx.lr = 0x821E23CC;
	sub_821E1FD0(ctx, base);
loc_821E23CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e23f4
	goto loc_821E23F4;
loc_821E23D4:
	// bl 0x821e1fd0
	ctx.lr = 0x821E23D8;
	sub_821E1FD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E23E4;
	sub_821AD1F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E23F0;
	sub_821AD240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E23F4:
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

__attribute__((alias("__imp__sub_821E240C"))) PPC_WEAK_FUNC(sub_821E240C);
PPC_FUNC_IMPL(__imp__sub_821E240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2410"))) PPC_WEAK_FUNC(sub_821E2410);
PPC_FUNC_IMPL(__imp__sub_821E2410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E2454;
	sub_821AA098(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2464"))) PPC_WEAK_FUNC(sub_821E2464);
PPC_FUNC_IMPL(__imp__sub_821E2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2468"))) PPC_WEAK_FUNC(sub_821E2468);
PPC_FUNC_IMPL(__imp__sub_821E2468) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,-1744(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e2628
	if (ctx.cr6.eq) goto loc_821E2628;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e255c
	if (ctx.cr6.eq) goto loc_821E255C;
	// lwz r9,368(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e2554
	if (!ctx.cr6.eq) goto loc_821E2554;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// ld r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// lfs f0,14876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,21040(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21040);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r7,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// lfs f2,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821E2540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r3,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r3.u32);
	// stw r4,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r4.u32);
	// b 0x821e2628
	goto loc_821E2628;
loc_821E2554:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e2568
	if (!ctx.cr6.eq) goto loc_821E2568;
loc_821E255C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
	// b 0x821e2628
	goto loc_821E2628;
loc_821E2568:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r8,92
	ctx.r8.s64 = 92;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r9,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// stw r5,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r5.u32);
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f11.u32);
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,-19048(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19048);
	// lfs f2,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e25bc
	if (!ctx.cr6.lt) goto loc_821E25BC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821E25BC:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x821e25c8
	if (!ctx.cr6.lt) goto loc_821E25C8;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_821E25C8:
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821e25ec
	if (!ctx.cr6.gt) goto loc_821E25EC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821E25EC:
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x821e2610
	if (!ctx.cr6.gt) goto loc_821E2610;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_821E2610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f3,21040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21040);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E2628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E2628:
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

__attribute__((alias("__imp__sub_821E2640"))) PPC_WEAK_FUNC(sub_821E2640);
PPC_FUNC_IMPL(__imp__sub_821E2640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821E2648;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E2658;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-11296
	ctx.r10.s64 = ctx.r11.s64 + -11296;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r4,r5,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x821b29d0
	ctx.lr = 0x821E26B0;
	sub_821B29D0(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E26C0;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// lwz r27,300(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// lwz r26,304(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x821E26F4;
	sub_8226B2C0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821E2700;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820ded28
	ctx.lr = 0x821E270C;
	sub_820DED28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x82092930
	ctx.lr = 0x821E2728;
	sub_82092930(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821e2758
	if (ctx.cr6.eq) goto loc_821E2758;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E2758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E2758:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-11284
	ctx.r4.s64 = ctx.r10.s64 + -11284;
	// lwz r25,-19020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E2770;
	sub_8218A540(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a7758
	ctx.lr = 0x821E2780;
	sub_821A7758(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x821d25f8
	ctx.lr = 0x821E27A0;
	sub_821D25F8(ctx, base);
	// extsw r5,r26
	ctx.r5.s64 = ctx.r26.s32;
	// extsw r6,r27
	ctx.r6.s64 = ctx.r27.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,208(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// lfs f31,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f3,21040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21040);
	ctx.f3.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,212(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E27FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,192(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// stfs f31,196(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 196, temp.u32);
	// stfs f0,200(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821E2834"))) PPC_WEAK_FUNC(sub_821E2834);
PPC_FUNC_IMPL(__imp__sub_821E2834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2838"))) PPC_WEAK_FUNC(sub_821E2838);
PPC_FUNC_IMPL(__imp__sub_821E2838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-11296
	ctx.r9.s64 = ctx.r11.s64 + -11296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-7480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7480);
	// bl 0x821ae208
	ctx.lr = 0x821E2870;
	sub_821AE208(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x820de3a0
	ctx.lr = 0x821E2878;
	sub_820DE3A0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821b1dc0
	ctx.lr = 0x821E2880;
	sub_821B1DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6dc0
	ctx.lr = 0x821E2888;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e28a4
	if (ctx.cr6.eq) goto loc_821E28A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E28A0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E28A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E28BC"))) PPC_WEAK_FUNC(sub_821E28BC);
PPC_FUNC_IMPL(__imp__sub_821E28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E28C0"))) PPC_WEAK_FUNC(sub_821E28C0);
PPC_FUNC_IMPL(__imp__sub_821E28C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821E28C8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e28f0
	if (!ctx.cr6.eq) goto loc_821E28F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821E28F0:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8211b248
	ctx.lr = 0x821E28F8;
	sub_8211B248(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e2910
	if (!ctx.cr6.eq) goto loc_821E2910;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821E2910:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821addc0
	ctx.lr = 0x821E2920;
	sub_821ADDC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821add20
	ctx.lr = 0x821E292C;
	sub_821ADD20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x821E293C;
	sub_821AD1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x821E2948;
	sub_821AD600(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x821E2954;
	sub_821AD498(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,21040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21040);
	ctx.f3.f64 = double(temp.f32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lfs f13,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lfs f2,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821E29A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,224(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 224);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r4,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r4.u64);
	// ld r9,232(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 232);
	// li r11,92
	ctx.r11.s64 = 92;
	// std r9,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r9.u64);
	// lfs f12,208(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,14876(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f10.u32);
	// bctrl 
	ctx.lr = 0x821E29E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821ad600
	ctx.lr = 0x821E29EC;
	sub_821AD600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad498
	ctx.lr = 0x821E29F8;
	sub_821AD498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821E2A04"))) PPC_WEAK_FUNC(sub_821E2A04);
PPC_FUNC_IMPL(__imp__sub_821E2A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2A08"))) PPC_WEAK_FUNC(sub_821E2A08);
PPC_FUNC_IMPL(__imp__sub_821E2A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E2A10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1744);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e2a3c
	if (!ctx.cr6.eq) goto loc_821E2A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E2A3C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E2A50;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E2A5C;
	sub_821AD240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e28c0
	ctx.lr = 0x821E2A64;
	sub_821E28C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e2a74
	if (!ctx.cr6.eq) goto loc_821E2A74;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E2A74:
	// lwz r11,-1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1744);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e2a8c
	if (ctx.cr6.eq) goto loc_821E2A8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e2410
	ctx.lr = 0x821E2A8C;
	sub_821E2410(ctx, base);
loc_821E2A8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E2A98;
	sub_821AD1F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E2AA4;
	sub_821AD240(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E2AB0"))) PPC_WEAK_FUNC(sub_821E2AB0);
PPC_FUNC_IMPL(__imp__sub_821E2AB0) {
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
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// bl 0x821d0d50
	ctx.lr = 0x821E2ACC;
	sub_821D0D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x821E2ADC;
	sub_82248F70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2B20"))) PPC_WEAK_FUNC(sub_821E2B20);
PPC_FUNC_IMPL(__imp__sub_821E2B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821E2B28;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r31,r10,7520
	ctx.r31.s64 = ctx.r10.s64 + 7520;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82260040
	ctx.lr = 0x821E2B50;
	sub_82260040(ctx, base);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lfsx f0,r29,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// stfs f0,256(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lfsx f13,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// stfs f13,260(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 260, temp.u32);
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// lfsx f12,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// stfs f12,264(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lfsx f11,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfs f11,268(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 268, temp.u32);
	// addi r3,r30,304
	ctx.r3.s64 = ctx.r30.s64 + 304;
	// lfsx f10,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,7304
	ctx.r11.s64 = ctx.r11.s64 + 7304;
	// stfs f10,272(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// lfsx f9,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r25,r11,28
	ctx.r25.s64 = ctx.r11.s64 + 28;
	// stfs f9,276(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 276, temp.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lfsx f8,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r24,r11,24
	ctx.r24.s64 = ctx.r11.s64 + 24;
	// stfs f8,280(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 280, temp.u32);
	// addi r23,r11,20
	ctx.r23.s64 = ctx.r11.s64 + 20;
	// lfsx f7,r29,r28
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r22,r11,16
	ctx.r22.s64 = ctx.r11.s64 + 16;
	// stfs f7,284(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// addi r21,r11,12
	ctx.r21.s64 = ctx.r11.s64 + 12;
	// lfsx f6,r29,r27
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r20,r11,8
	ctx.r20.s64 = ctx.r11.s64 + 8;
	// stfs f6,288(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 288, temp.u32);
	// addi r19,r11,32
	ctx.r19.s64 = ctx.r11.s64 + 32;
	// lfsx f5,r29,r26
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,292(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 292, temp.u32);
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// lfsx f4,r10,r24
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f4.f64 = double(temp.f32);
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfsx f3,r10,r23
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	ctx.f3.f64 = double(temp.f32);
	// lwzx r6,r10,r20
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// lfsx f2,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r10,r21
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r10,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x821d0da0
	ctx.lr = 0x821E2C38;
	sub_821D0DA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821E2C44"))) PPC_WEAK_FUNC(sub_821E2C44);
PPC_FUNC_IMPL(__imp__sub_821E2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2C48"))) PPC_WEAK_FUNC(sub_821E2C48);
PPC_FUNC_IMPL(__imp__sub_821E2C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f12,-11264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11264);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// lfs f10,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,10384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 10384);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f11,8064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8064);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
loc_821E2CC0:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f9,60(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,48(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsu f1,64(r11)
	// bdnz 0x821e2cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E2CC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2D14"))) PPC_WEAK_FUNC(sub_821E2D14);
PPC_FUNC_IMPL(__imp__sub_821E2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2D18"))) PPC_WEAK_FUNC(sub_821E2D18);
PPC_FUNC_IMPL(__imp__sub_821E2D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// lfs f12,8064(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8064);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fdivs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_821E2D78:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsu f5,32(r11)
	// bdnz 0x821e2d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E2D78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2DB4"))) PPC_WEAK_FUNC(sub_821E2DB4);
PPC_FUNC_IMPL(__imp__sub_821E2DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2DB8"))) PPC_WEAK_FUNC(sub_821E2DB8);
PPC_FUNC_IMPL(__imp__sub_821E2DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-1744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// addic. r11,r31,368
	ctx.xer.ca = ctx.r31.u32 > 4294966927;
	ctx.r11.s64 = ctx.r31.s64 + 368;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2e44
	if (ctx.cr0.eq) goto loc_821E2E44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e2e44
	if (ctx.cr6.eq) goto loc_821E2E44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f13,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E2E1C;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,400
	ctx.r5.s64 = ctx.r31.s64 + 400;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a90a8
	ctx.lr = 0x821E2E30;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,404
	ctx.r5.s64 = ctx.r31.s64 + 404;
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a90a8
	ctx.lr = 0x821E2E44;
	sub_821A90A8(ctx, base);
loc_821E2E44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2E58"))) PPC_WEAK_FUNC(sub_821E2E58);
PPC_FUNC_IMPL(__imp__sub_821E2E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E2E90;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a90a8
	ctx.lr = 0x821E2EA4;
	sub_821A90A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2EB4"))) PPC_WEAK_FUNC(sub_821E2EB4);
PPC_FUNC_IMPL(__imp__sub_821E2EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2EB8"))) PPC_WEAK_FUNC(sub_821E2EB8);
PPC_FUNC_IMPL(__imp__sub_821E2EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E2EC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,912(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-7480(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae208
	ctx.lr = 0x821E2EDC;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,928(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// bl 0x821ae380
	ctx.lr = 0x821E2EE8;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,848(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// bl 0x821ae208
	ctx.lr = 0x821E2EF4;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,852(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// bl 0x821ae208
	ctx.lr = 0x821E2F00;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// bl 0x821ae380
	ctx.lr = 0x821E2F0C;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// bl 0x821ae208
	ctx.lr = 0x821E2F18;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// bl 0x821ae380
	ctx.lr = 0x821E2F24;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,860(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// bl 0x821ae208
	ctx.lr = 0x821E2F30;
	sub_821AE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,920(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	// bl 0x821ae380
	ctx.lr = 0x821E2F3C;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,924(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// bl 0x821ae380
	ctx.lr = 0x821E2F48;
	sub_821AE380(ctx, base);
	// addi r29,r30,860
	ctx.r29.s64 = ctx.r30.s64 + 860;
	// li r30,12
	ctx.r30.s64 = 12;
loc_821E2F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x821ae208
	ctx.lr = 0x821E2F5C;
	sub_821AE208(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821e2f50
	if (!ctx.cr0.eq) goto loc_821E2F50;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E2F6C"))) PPC_WEAK_FUNC(sub_821E2F6C);
PPC_FUNC_IMPL(__imp__sub_821E2F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2F70"))) PPC_WEAK_FUNC(sub_821E2F70);
PPC_FUNC_IMPL(__imp__sub_821E2F70) {
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
	// lwz r4,860(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a8ec8
	ctx.lr = 0x821E2F94;
	sub_821A8EC8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// bl 0x821a8ec8
	ctx.lr = 0x821E2FA4;
	sub_821A8EC8(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x821a8ec8
	ctx.lr = 0x821E2FB4;
	sub_821A8EC8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E2FCC;
	sub_821AD648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821ad648
	ctx.lr = 0x821E2FDC;
	sub_821AD648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x821ad648
	ctx.lr = 0x821E2FEC;
	sub_821AD648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x821ad6a0
	ctx.lr = 0x821E2FFC;
	sub_821AD6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821ad6a0
	ctx.lr = 0x821E300C;
	sub_821AD6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E301C;
	sub_821AD6A0(ctx, base);
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

__attribute__((alias("__imp__sub_821E3030"))) PPC_WEAK_FUNC(sub_821E3030);
PPC_FUNC_IMPL(__imp__sub_821E3030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821E3038;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249914
	ctx.lr = 0x821E3040;
	sub_82249914(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stfs f1,332(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,-16272
	ctx.r6.s64 = ctx.r9.s64 + -16272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f23,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f23.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lvx128 v127,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,-2
	ctx.r27.s64 = -2;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f27,-11256(r11)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11256);
	// lfs f28,8064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8064);
	ctx.f28.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// lfs f24,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f24.f64 = double(temp.f32);
	// fdivs f26,f23,f9
	ctx.f26.f64 = double(float(ctx.f23.f64 / ctx.f9.f64));
	// fdivs f25,f23,f10
	ctx.f25.f64 = double(float(ctx.f23.f64 / ctx.f10.f64));
loc_821E30C8:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r28,-2
	ctx.r28.s64 = -2;
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
loc_821E30F0:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// bgt cr6,0x821e3174
	if (ctx.cr6.gt) goto loc_821E3174;
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f30,12(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfsu f30,16(r31)
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// bl 0x8224b8d0
	ctx.lr = 0x821E3140;
	sub_8224B8D0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsqrts f8,f27
	ctx.f8.f64 = double(float(sqrt(ctx.f27.f64)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmulfp128 v61,v127,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,0(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f29,f29,f6
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f6.f64));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_821E3174:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x821e30f0
	if (!ctx.cr6.gt) goto loc_821E30F0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// ble cr6,0x821e30c8
	if (!ctx.cr6.gt) goto loc_821E30C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x821e3248
	if (ctx.cr6.lt) goto loc_821E3248;
	// addi r10,r1,332
	ctx.r10.s64 = ctx.r1.s64 + 332;
	// fdivs f0,f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 / ctx.f29.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r29,-3
	ctx.r7.s64 = ctx.r29.s64 + -3;
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// li r6,-32
	ctx.r6.s64 = -32;
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-32
	ctx.r5.s64 = -32;
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,-32
	ctx.r4.s64 = -32;
	// li r3,-32
	ctx.r3.s64 = -32;
	// vspltw128 v63,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v62,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r10,16
	ctx.r10.s64 = 16;
loc_821E31D8:
	// lvx128 v58,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// vmulfp128 v57,v58,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// stvx128 v57,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v55,v56,v63
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v55,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v54,v62
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v52,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// stvx128 v53,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v52,v63
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v51,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v50,v62
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v48,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v47,v48,v63
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v47,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v45,v46,v62
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v44,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// stvx128 v45,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v44,v63
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v43,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// blt cr6,0x821e31d8
	if (ctx.cr6.lt) goto loc_821E31D8;
loc_821E3248:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821e32a0
	if (!ctx.cr6.lt) goto loc_821E32A0;
	// addi r10,r1,332
	ctx.r10.s64 = ctx.r1.s64 + 332;
	// fdivs f0,f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 / ctx.f29.f64));
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r8,r8,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r8.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v41,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// vspltw128 v62,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
loc_821E3280:
	// lvx128 v40,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v39,v40,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v38,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// stvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v37,v38,v63
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v37,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x821e3280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E3280;
loc_821E32A0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249960
	ctx.lr = 0x821E32B4;
	sub_82249960(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821E32B8"))) PPC_WEAK_FUNC(sub_821E32B8);
PPC_FUNC_IMPL(__imp__sub_821E32B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821E32C0;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249924
	ctx.lr = 0x821E32C8;
	sub_82249924(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,28412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28412);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f28,f31,f11
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fdivs f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// bl 0x8224b8d0
	ctx.lr = 0x821E3324;
	sub_8224B8D0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f9,f27
	ctx.f9.f64 = double(float(sqrt(ctx.f27.f64)));
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r6,-11248
	ctx.r4.s64 = ctx.r6.s64 + -11248;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r27,r30,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lfs f0,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsqrts f7,f27
	ctx.f7.f64 = double(float(sqrt(ctx.f27.f64)));
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f31,f31,f7
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_821E3390:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f27,f13
	ctx.f27.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f27,f27
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fdivs f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f29.f64));
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// bl 0x8224b8d0
	ctx.lr = 0x821E33B4;
	sub_8224B8D0(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f10,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r27,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// blt cr6,0x821e3390
	if (ctx.cr6.lt) goto loc_821E3390;
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// li r25,32
	ctx.r25.s64 = 32;
	// vslw128 v58,v59,v59
	ctx.v58.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// li r26,48
	ctx.r26.s64 = 48;
	// lvx128 v57,r31,r9
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,160
	ctx.r27.s64 = 160;
	// lvx128 v55,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v54,v59,v59
	ctx.v54.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vxor128 v53,v55,v58
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// li r28,64
	ctx.r28.s64 = 64;
	// stvx128 v53,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,176
	ctx.r29.s64 = 176;
	// lvx128 v52,r31,r25
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v51,v59,v59
	ctx.v51.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v51.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v51.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v51.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v52,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,80
	ctx.r3.s64 = 80;
	// lvx128 v50,r30,r25
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v49,v50,v56
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// stvx128 v49,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,192
	ctx.r4.s64 = 192;
	// lvx128 v48,r31,r26
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v47,v59,v59
	ctx.v47.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v47.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v47.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v47.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v48,r31,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v46,r30,r26
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v45,v46,v54
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// stvx128 v45,r30,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,208
	ctx.r6.s64 = 208;
	// lvx128 v44,r31,r28
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v43,v59,v59
	ctx.v43.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v43.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v43.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v43.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v44,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-16
	ctx.r7.s64 = -16;
	// lvx128 v42,r30,r28
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v41,v42,v51
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvx128 v41,r30,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,224
	ctx.r8.s64 = 224;
	// lvx128 v40,r31,r3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v39,v59,v59
	ctx.v39.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v39.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v39.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v39.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v40,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r3
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v37,v38,v47
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v37,r30,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r31,r5
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r30,r5
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v34,v35,v43
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// stvx128 v34,r30,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v63,v32,v39
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// stvx128 v63,r30,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249970
	ctx.lr = 0x821E34EC;
	sub_82249970(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821E34F0"))) PPC_WEAK_FUNC(sub_821E34F0);
PPC_FUNC_IMPL(__imp__sub_821E34F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-1744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e35b4
	if (ctx.cr6.eq) goto loc_821E35B4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x821E3520;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e35b4
	if (ctx.cr6.eq) goto loc_821E35B4;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lfs f7,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fdivs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E357C;
	sub_821A90A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f3,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r4,21
	ctx.r4.s64 = 21;
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E35B4;
	sub_821A90A8(ctx, base);
loc_821E35B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E35C8"))) PPC_WEAK_FUNC(sub_821E35C8);
PPC_FUNC_IMPL(__imp__sub_821E35C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,14524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// addi r5,r11,152
	ctx.r5.s64 = ctx.r11.s64 + 152;
	// bl 0x821a90a8
	ctx.lr = 0x821E35F0;
	sub_821A90A8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x821E35FC;
	sub_821A2A60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8208e480
	ctx.lr = 0x821E360C;
	sub_8208E480(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a90a8
	ctx.lr = 0x821E3620;
	sub_821A90A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E3630"))) PPC_WEAK_FUNC(sub_821E3630);
PPC_FUNC_IMPL(__imp__sub_821E3630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E3638;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E3650;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r9.u32);
	// bl 0x82184800
	ctx.lr = 0x821E369C;
	sub_82184800(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821e2b20
	ctx.lr = 0x821E36A8;
	sub_821E2B20(ctx, base);
	// lis r8,11682
	ctx.r8.s64 = 765591552;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r30,r8,43940
	ctx.r30.u64 = ctx.r8.u64 | 43940;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8226b2c0
	ctx.lr = 0x821E36D4;
	sub_8226B2C0(ctx, base);
	// stw r3,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8226b3e0
	ctx.lr = 0x821E36F0;
	sub_8226B3E0(ctx, base);
	// stw r3,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8226b2c0
	ctx.lr = 0x821E3718;
	sub_8226B2C0(ctx, base);
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8226b2c0
	ctx.lr = 0x821E3740;
	sub_8226B2C0(ctx, base);
	// stw r3,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r3.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8226b3e0
	ctx.lr = 0x821E375C;
	sub_8226B3E0(ctx, base);
	// stw r3,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r3.u32);
	// lwz r7,1032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// lwz r5,1036(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// ori r30,r6,390
	ctx.r30.u64 = ctx.r6.u64 | 390;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x821E379C;
	sub_8226B2C0(ctx, base);
	// stw r3,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r3.u32);
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,1036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8226b3e0
	ctx.lr = 0x821E37C8;
	sub_8226B3E0(ctx, base);
	// stw r3,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r3.u32);
	// lwz r7,1032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,1036(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// li r10,3
	ctx.r10.s64 = 3;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x821E3800;
	sub_8226B2C0(ctx, base);
	// stw r3,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r3.u32);
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r10,1036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x821E382C;
	sub_8226B3E0(ctx, base);
	// stw r3,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r3.u32);
	// addi r28,r31,860
	ctx.r28.s64 = ctx.r31.s64 + 860;
	// li r29,12
	ctx.r29.s64 = 12;
loc_821E3838:
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r7,1032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x821E386C;
	sub_8226B2C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// bne 0x821e3838
	if (!ctx.cr0.eq) goto loc_821E3838;
	// lwz r11,1036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// li r6,0
	ctx.r6.s64 = 0;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x8226b3e0
	ctx.lr = 0x821E38A0;
	sub_8226B3E0(ctx, base);
	// stw r3,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r3.u32);
	// lwz r30,848(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226b130
	ctx.lr = 0x821E38C0;
	sub_8226B130(ctx, base);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r7,19,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1FFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// bl 0x82184800
	ctx.lr = 0x821E38DC;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822696e0
	ctx.lr = 0x821E38E8;
	sub_822696E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,852(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b130
	ctx.lr = 0x821E3904;
	sub_8226B130(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x82184800
	ctx.lr = 0x821E3920;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822696e0
	ctx.lr = 0x821E392C;
	sub_822696E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,856(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b130
	ctx.lr = 0x821E3948;
	sub_8226B130(ctx, base);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r8,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1FFF;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// bl 0x82184800
	ctx.lr = 0x821E3964;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822696e0
	ctx.lr = 0x821E3970;
	sub_822696E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,860(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b130
	ctx.lr = 0x821E398C;
	sub_8226B130(ctx, base);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r5,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1FFF;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82184800
	ctx.lr = 0x821E39A8;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822696e0
	ctx.lr = 0x821E39B4;
	sub_822696E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r30,912(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b130
	ctx.lr = 0x821E39D0;
	sub_8226B130(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r9,19,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bl 0x82184800
	ctx.lr = 0x821E39EC;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822696e0
	ctx.lr = 0x821E39F8;
	sub_822696E0(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r5,-11208
	ctx.r4.s64 = ctx.r5.s64 + -11208;
	// lwz r30,-19020(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E3A10;
	sub_8218A540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821a7758
	ctx.lr = 0x821E3A20;
	sub_821A7758(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-23460
	ctx.r4.s64 = ctx.r10.s64 + -23460;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r8.u32);
	// bl 0x8218a540
	ctx.lr = 0x821E3A44;
	sub_8218A540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821a7758
	ctx.lr = 0x821E3A54;
	sub_821A7758(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r6,-11220
	ctx.r4.s64 = ctx.r6.s64 + -11220;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r5.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// bl 0x8218a540
	ctx.lr = 0x821E3A78;
	sub_8218A540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821a7758
	ctx.lr = 0x821E3A88;
	sub_821A7758(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r9,-11232
	ctx.r4.s64 = ctx.r9.s64 + -11232;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r7.u32);
	// bl 0x8218a540
	ctx.lr = 0x821E3AAC;
	sub_8218A540(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821a7758
	ctx.lr = 0x821E3ABC;
	sub_821A7758(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r6,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r5.u32);
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r10,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r10.u32);
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E3B1C"))) PPC_WEAK_FUNC(sub_821E3B1C);
PPC_FUNC_IMPL(__imp__sub_821E3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3B20"))) PPC_WEAK_FUNC(sub_821E3B20);
PPC_FUNC_IMPL(__imp__sub_821E3B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821E3B28;
	sub_82248780(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// li r29,1
	ctx.r29.s64 = 1;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// std r30,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r30.u64);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// lwz r26,-7488(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// lwz r27,14524(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14524);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// beq cr6,0x821e3b7c
	if (ctx.cr6.eq) goto loc_821E3B7C;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
loc_821E3B7C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821e3b88
	if (ctx.cr6.eq) goto loc_821E3B88;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_821E3B88:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821e3ba0
	if (!ctx.cr6.eq) goto loc_821E3BA0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821e3ba0
	if (!ctx.cr6.eq) goto loc_821E3BA0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821e3bb4
	if (ctx.cr6.eq) goto loc_821E3BB4;
loc_821E3BA0:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x821e2f70
	ctx.lr = 0x821E3BB4;
	sub_821E2F70(ctx, base);
loc_821E3BB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821e3bd0
	if (ctx.cr6.eq) goto loc_821E3BD0;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_821E3BD0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r28,-12408(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12408);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821e3d78
	if (ctx.cr6.eq) goto loc_821E3D78;
	// ld r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
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
	ctx.lr = 0x821E3BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
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
	ctx.lr = 0x821E3C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E3C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821E3C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,776(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 776);
	// li r28,11
	ctx.r28.s64 = 11;
	// std r30,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r30.u64);
	// li r10,10
	ctx.r10.s64 = 10;
	// std r30,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r30.u64);
	// std r30,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r30.u64);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r7,784(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 784);
	// li r8,13
	ctx.r8.s64 = 13;
	// lwz r6,780(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 780);
	// lwz r5,788(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r30,r1,148
	ctx.r30.s64 = ctx.r1.s64 + 148;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r5,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r5.u32);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r8,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
loc_821E3D28:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e3d68
	if (ctx.cr6.eq) goto loc_821E3D68;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E3D48;
	sub_821AD648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x821ad6a0
	ctx.lr = 0x821E3D58;
	sub_821AD6A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x821a8ec8
	ctx.lr = 0x821E3D68;
	sub_821A8EC8(ctx, base);
loc_821E3D68:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x821e3d28
	if (!ctx.cr0.eq) goto loc_821E3D28;
loc_821E3D78:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821E3D80"))) PPC_WEAK_FUNC(sub_821E3D80);
PPC_FUNC_IMPL(__imp__sub_821E3D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-11196
	ctx.r10.s64 = ctx.r11.s64 + -11196;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821e2eb8
	ctx.lr = 0x821E3DB0;
	sub_821E2EB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x821E3DC4;
	sub_821E6DC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e3de0
	if (ctx.cr6.eq) goto loc_821E3DE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E3DDC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E3DE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E3DF8"))) PPC_WEAK_FUNC(sub_821E3DF8);
PPC_FUNC_IMPL(__imp__sub_821E3DF8) {
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
	// bl 0x821e2ab0
	ctx.lr = 0x821E3E14;
	sub_821E2AB0(ctx, base);
	// lwz r10,936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// lwz r8,936(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r7.u32);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// lwz r6,944(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r5.u32);
	// lwz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r3.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// lwz r8,952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r7.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// lwz r6,960(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r5.u32);
	// lwz r4,960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E3EA0"))) PPC_WEAK_FUNC(sub_821E3EA0);
PPC_FUNC_IMPL(__imp__sub_821E3EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E3EA8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E3EB4;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,-11196
	ctx.r10.s64 = ctx.r11.s64 + -11196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821e3df8
	ctx.lr = 0x821E3ECC;
	sub_821E3DF8(ctx, base);
	// lwz r7,1056(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r6,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r6.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r5,1056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// addi r4,r8,-11232
	ctx.r4.s64 = ctx.r8.s64 + -11232;
	// stw r11,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lwz r29,-19020(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E3F0C;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E3F1C;
	sub_821A7758(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r6.u32);
	// lwz r11,-19048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// stw r5,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r5.u32);
	// lwz r11,-19048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// bl 0x821e3630
	ctx.lr = 0x821E3F58;
	sub_821E3630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E3F64"))) PPC_WEAK_FUNC(sub_821E3F64);
PPC_FUNC_IMPL(__imp__sub_821E3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3F68"))) PPC_WEAK_FUNC(sub_821E3F68);
PPC_FUNC_IMPL(__imp__sub_821E3F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E3F70;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f1,332(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e3fa0
	if (!ctx.cr6.eq) goto loc_821E3FA0;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e4118
	if (ctx.cr6.eq) goto loc_821E4118;
loc_821E3FA0:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r5,r31,932
	ctx.r5.s64 = ctx.r31.s64 + 932;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
	// bl 0x821a9ce8
	ctx.lr = 0x821E3FC0;
	sub_821A9CE8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x821E3FE8;
	sub_821A9FE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,852(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// bl 0x821a8ec8
	ctx.lr = 0x821E3FF8;
	sub_821A8EC8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x821a8ec8
	ctx.lr = 0x821E4008;
	sub_821A8EC8(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7488);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E4020;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad648
	ctx.lr = 0x821E4030;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E4040;
	sub_821AD6A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E4050;
	sub_821AD6A0(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// addi r29,r31,960
	ctx.r29.s64 = ctx.r31.s64 + 960;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// addi r5,r6,-11184
	ctx.r5.s64 = ctx.r6.s64 + -11184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821a8c78
	ctx.lr = 0x821E4090;
	sub_821A8C78(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,332
	ctx.r5.s64 = ctx.r1.s64 + 332;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a90a8
	ctx.lr = 0x821E40A4;
	sub_821A90A8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f2,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E40C0;
	sub_821DDA68(ctx, base);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E40E8;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821E4118;
	sub_821AA098(ctx, base);
loc_821E4118:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E4128"))) PPC_WEAK_FUNC(sub_821E4128);
PPC_FUNC_IMPL(__imp__sub_821E4128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E4130;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,936
	ctx.r28.s64 = ctx.r3.s64 + 936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E4148;
	sub_8211B248(ctx, base);
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e4164
	if (!ctx.cr6.eq) goto loc_821E4164;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821E4164:
	// addi r5,r31,916
	ctx.r5.s64 = ctx.r31.s64 + 916;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x821E4174;
	sub_821A9CE8(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,-12408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12408);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E41B4;
	sub_821A8E50(ctx, base);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,-7488(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E41CC;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E41DC;
	sub_821AD6A0(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r11,-11160
	ctx.r5.s64 = ctx.r11.s64 + -11160;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8c78
	ctx.lr = 0x821E4214;
	sub_821A8C78(ctx, base);
	// lwz r10,1036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r9,1032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x821e2d18
	ctx.lr = 0x821E4240;
	sub_821E2D18(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x821E4254;
	sub_821A90A8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E4278;
	sub_821A90A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E429C;
	sub_821DDA68(ctx, base);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E42C4;
	sub_821A8DC0(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,856(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x821E42F4;
	sub_821AA098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E4304"))) PPC_WEAK_FUNC(sub_821E4304);
PPC_FUNC_IMPL(__imp__sub_821E4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4308"))) PPC_WEAK_FUNC(sub_821E4308);
PPC_FUNC_IMPL(__imp__sub_821E4308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E4310;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249928
	ctx.lr = 0x821E4318;
	sub_82249928(ctx, base);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,944
	ctx.r29.s64 = ctx.r3.s64 + 944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E432C;
	sub_8211B248(ctx, base);
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e434c
	if (!ctx.cr6.eq) goto loc_821E434C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x821E4348;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E434C:
	// addi r5,r31,920
	ctx.r5.s64 = ctx.r31.s64 + 920;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9ce8
	ctx.lr = 0x821E435C;
	sub_821A9CE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821e4728
	if (!ctx.cr6.gt) goto loc_821E4728;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821e4728
	if (!ctx.cr6.gt) goto loc_821E4728;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,856(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,-7488(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// bl 0x821a8ec8
	ctx.lr = 0x821E4394;
	sub_821A8EC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E43A4;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E43B4;
	sub_821AD6A0(ctx, base);
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-11128
	ctx.r5.s64 = ctx.r10.s64 + -11128;
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821a8c78
	ctx.lr = 0x821E43F0;
	sub_821A8C78(ctx, base);
	// lwz r8,1036(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r4,1032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x821e3030
	ctx.lr = 0x821E4424;
	sub_821E3030(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E4438;
	sub_821A90A8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E444C;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E4464;
	sub_821DDA68(ctx, base);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E448C;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,860(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E44BC;
	sub_821AA098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// bl 0x821a8ec8
	ctx.lr = 0x821E44CC;
	sub_821A8EC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E44DC;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E44EC;
	sub_821AD6A0(ctx, base);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r27,r5,-11136
	ctx.r27.s64 = ctx.r5.s64 + -11136;
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821a8c78
	ctx.lr = 0x821E4528;
	sub_821A8C78(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lfs f28,8332(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8332);
	ctx.f28.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f29,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f29.f64 = double(temp.f32);
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x821e32b8
	ctx.lr = 0x821E455C;
	sub_821E32B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E4570;
	sub_821A90A8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E4584;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E459C;
	sub_821DDA68(ctx, base);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E45C4;
	sub_821A8DC0(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,860(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E45F4;
	sub_821AA098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// bl 0x821a8ec8
	ctx.lr = 0x821E4604;
	sub_821A8EC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E4614;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E4624;
	sub_821AD6A0(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821a8c78
	ctx.lr = 0x821E4658;
	sub_821A8C78(ctx, base);
	// lwz r7,1036(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x821e32b8
	ctx.lr = 0x821E467C;
	sub_821E32B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E4690;
	sub_821A90A8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E46A4;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E46BC;
	sub_821DDA68(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E46E4;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,860(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E4714;
	sub_821AA098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x821E4724;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E4728:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x821E4750;
	sub_821A9FE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,860(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821aa098
	ctx.lr = 0x821E4784;
	sub_821AA098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x821E4794;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E4798"))) PPC_WEAK_FUNC(sub_821E4798);
PPC_FUNC_IMPL(__imp__sub_821E4798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x821E47A0;
	sub_8224875C(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82249900
	ctx.lr = 0x821E47A8;
	sub_82249900(ctx, base);
	// li r12,-272
	ctx.r12.s64 = -272;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-256
	ctx.r12.s64 = -256;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r17,r3,944
	ctx.r17.s64 = ctx.r3.s64 + 944;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E47CC;
	sub_8211B248(ctx, base);
	// lwz r11,948(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e47e0
	if (!ctx.cr6.eq) goto loc_821E47E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e4ef4
	goto loc_821E4EF4;
loc_821E47E0:
	// addi r5,r24,924
	ctx.r5.s64 = ctx.r24.s64 + 924;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x821E47F0;
	sub_821A9CE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f25,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f25.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x821E4818;
	sub_821A9FE8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,864(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 864);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821aa098
	ctx.lr = 0x821E484C;
	sub_821AA098(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,272(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f24.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// ble cr6,0x821e4ef0
	if (!ctx.cr6.gt) goto loc_821E4EF0;
	// lfs f0,288(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// ble cr6,0x821e4ef0
	if (!ctx.cr6.gt) goto loc_821E4EF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r24,320
	ctx.r19.s64 = ctx.r24.s64 + 320;
	// lfd f1,-23336(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23336);
	// bl 0x82249b50
	ctx.lr = 0x821E487C;
	sub_82249B50(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e0e98
	ctx.lr = 0x821E4890;
	sub_821E0E98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e0e98
	ctx.lr = 0x821E48A0;
	sub_821E0E98(ctx, base);
	// lwz r10,1032(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1032);
	// lwz r9,1036(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1036);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// addi r26,r19,400
	ctx.r26.s64 = ctx.r19.s64 + 400;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lfs f27,30932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30932);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// addi r25,r10,-1184
	ctx.r25.s64 = ctx.r10.s64 + -1184;
	// addi r28,r9,-11072
	ctx.r28.s64 = ctx.r9.s64 + -11072;
loc_821E4908:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f12,f27
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
loc_821E4930:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82186cd8
	ctx.lr = 0x821E4948;
	sub_82186CD8(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,296(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82186cd8
	ctx.lr = 0x821E4968;
	sub_82186CD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x821e4930
	if (ctx.cr6.lt) goto loc_821E4930;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x821e4908
	if (ctx.cr6.lt) goto loc_821E4908;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f0,388(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// lis r20,-32178
	ctx.r20.s64 = -2108817408;
	// lfs f13,292(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r31,-7488(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f20,f11,f13
	ctx.f20.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x821ad648
	ctx.lr = 0x821E49B8;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E49C8;
	sub_821AD6A0(ctx, base);
	// lwz r9,368(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r23,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-11092
	ctx.r5.s64 = ctx.r10.s64 + -11092;
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// bl 0x821a8c78
	ctx.lr = 0x821E4A00;
	sub_821A8C78(ctx, base);
	// lwz r9,256(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x821e4d3c
	if (!ctx.cr6.gt) goto loc_821E4D3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fdivs f22,f25,f30
	ctx.f22.f64 = double(float(ctx.f25.f64 / ctx.f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fdivs f23,f25,f31
	ctx.f23.f64 = double(float(ctx.f25.f64 / ctx.f31.f64));
	// addi r22,r24,880
	ctx.r22.s64 = ctx.r24.s64 + 880;
	// addi r29,r19,264
	ctx.r29.s64 = ctx.r19.s64 + 264;
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// lfs f0,-23340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13532(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13532);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r18,r11,7952
	ctx.r18.s64 = ctx.r11.s64 + 7952;
	// lfs f19,7952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7952);
	ctx.f19.f64 = double(temp.f32);
	// lfs f26,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f21,f9,f13
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_821E4A68:
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,856(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 856);
	// fadds f31,f0,f20
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x821E4A7C;
	sub_82249E70(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f23,f13
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82249f50
	ctx.lr = 0x821E4A98;
	sub_82249F50(ctx, base);
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// fmuls f8,f22,f10
	ctx.f8.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// li r27,1
	ctx.r27.s64 = 1;
	// fmr f27,f21
	ctx.f27.f64 = ctx.f21.f64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f29,f8,f9
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ble cr6,0x821e4d24
	if (!ctx.cr6.gt) goto loc_821E4D24;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvlx128 v63,r0,r18
	temp.u32 = ctx.r18.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v126,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x821e4ae0
	goto loc_821E4AE0;
loc_821E4AD8:
	// lfs f29,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
loc_821E4AE0:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f31,f12,f25
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
loc_821E4B00:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f18,f13
	ctx.f18.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f18,f27
	ctx.f2.f64 = double(float(ctx.f18.f64 * ctx.f27.f64));
	// bl 0x8224aab0
	ctx.lr = 0x821E4B20;
	sub_8224AAB0(ctx, base);
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f18,f28
	ctx.f11.f64 = double(float(ctx.f18.f64 * ctx.f28.f64));
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// fmuls f0,f18,f29
	ctx.f0.f64 = double(float(ctx.f18.f64 * ctx.f29.f64));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f11,r31,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r1,708
	ctx.r8.s64 = ctx.r1.s64 + 708;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f10,f26
	ctx.cr6.compare(ctx.f10.f64, ctx.f26.f64);
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f2,f7,f31
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f11,f1,f30
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// bge cr6,0x821e4bd0
	if (!ctx.cr6.lt) goto loc_821E4BD0;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x821e4c04
	if (ctx.cr6.lt) goto loc_821E4C04;
loc_821E4BD0:
	// addi r11,r1,456
	ctx.r11.s64 = ctx.r1.s64 + 456;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// stfsx f24,r31,r9
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfsx f24,r31,r8
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f24
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmuls f9,f11,f24
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_821E4C04:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x821e4b00
	if (ctx.cr6.lt) goto loc_821E4B00;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// bl 0x821a8d30
	ctx.lr = 0x821E4C3C;
	sub_821A8D30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a8ec8
	ctx.lr = 0x821E4C4C;
	sub_821A8EC8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a90a8
	ctx.lr = 0x821E4C60;
	sub_821A90A8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a90a8
	ctx.lr = 0x821E4C74;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E4C8C;
	sub_821DDA68(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bne cr6,0x821e4cd0
	if (!ctx.cr6.eq) goto loc_821E4CD0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x821aa098
	ctx.lr = 0x821E4CCC;
	sub_821AA098(ctx, base);
	// b 0x821e4ce8
	goto loc_821E4CE8;
loc_821E4CD0:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r11,r27,216
	ctx.r11.s64 = ctx.r27.s64 + 216;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// bl 0x821aa098
	ctx.lr = 0x821E4CE8;
	sub_821AA098(ctx, base);
loc_821E4CE8:
	// vmulfp128 v127,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v127.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v126.f32)));
	// addi r11,r27,216
	ctx.r11.s64 = ctx.r27.s64 + 216;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// fmuls f27,f27,f19
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f19.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// lwzx r26,r9,r24
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// stvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x821e4d14
	if (!ctx.cr6.gt) goto loc_821E4D14;
	// li r27,1
	ctx.r27.s64 = 1;
loc_821E4D14:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e4ad8
	if (ctx.cr6.lt) goto loc_821E4AD8;
loc_821E4D24:
	// lwz r11,256(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e4a68
	if (ctx.cr6.lt) goto loc_821E4A68;
loc_821E4D3C:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E4D64;
	sub_821A8DC0(ctx, base);
	// lwz r11,256(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4e34
	if (ctx.cr6.eq) goto loc_821E4E34;
	// stfs f25,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r31,r1,448
	ctx.r31.s64 = ctx.r1.s64 + 448;
	// stfs f25,148(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r28,r24,876
	ctx.r28.s64 = ctx.r24.s64 + 876;
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f25,156(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_821E4D8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a8ec8
	ctx.lr = 0x821E4D9C;
	sub_821A8EC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,-7488(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E4DB0;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E4DC0;
	sub_821AD6A0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r11,256(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f25,f12
	ctx.f9.f64 = double(float(ctx.f25.f64 / ctx.f12.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r4.u64);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// blt cr6,0x821e4d8c
	if (ctx.cr6.lt) goto loc_821E4D8C;
loc_821E4E34:
	// lwz r10,416(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r10,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r9,-11108
	ctx.r5.s64 = ctx.r9.s64 + -11108;
	// stw r8,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r8.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x821a8c78
	ctx.lr = 0x821E4E6C;
	sub_821A8C78(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821a90a8
	ctx.lr = 0x821E4E80;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E4E98;
	sub_821DDA68(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E4EC0;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,864(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 864);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821aa098
	ctx.lr = 0x821E4EF0;
	sub_821AA098(ctx, base);
loc_821E4EF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E4EF4:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// li r0,-272
	ctx.r0.s64 = -272;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-256
	ctx.r0.s64 = -256;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8224994c
	ctx.lr = 0x821E4F10;
	sub_8224994C(ctx, base);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_821E4F14"))) PPC_WEAK_FUNC(sub_821E4F14);
PPC_FUNC_IMPL(__imp__sub_821E4F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4F18"))) PPC_WEAK_FUNC(sub_821E4F18);
PPC_FUNC_IMPL(__imp__sub_821E4F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E4F20;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,1056
	ctx.r31.s64 = ctx.r3.s64 + 1056;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r9,-11056
	ctx.r5.s64 = ctx.r9.s64 + -11056;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a8c78
	ctx.lr = 0x821E4F68;
	sub_821A8C78(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f6,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821ddb08
	ctx.lr = 0x821E4F94;
	sub_821DDB08(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E4FBC;
	sub_821A8DC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E4FC4"))) PPC_WEAK_FUNC(sub_821E4FC4);
PPC_FUNC_IMPL(__imp__sub_821E4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4FC8"))) PPC_WEAK_FUNC(sub_821E4FC8);
PPC_FUNC_IMPL(__imp__sub_821E4FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E4FD0;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e551c
	if (ctx.cr6.eq) goto loc_821E551C;
	// addi r29,r3,952
	ctx.r29.s64 = ctx.r3.s64 + 952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E5000;
	sub_8211B248(ctx, base);
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e5020
	if (!ctx.cr6.eq) goto loc_821E5020;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E5020:
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r1,516
	ctx.r11.s64 = ctx.r1.s64 + 516;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-10976(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10976);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10980(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_821E5048:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfsu f0,48(r11)
	// bdnz 0x821e5048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E5048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,64
	ctx.r28.s64 = 64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r5,r31,928
	ctx.r5.s64 = ctx.r31.s64 + 928;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x821E50B8;
	sub_821A9CE8(ctx, base);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,-12408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12408);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E50F4;
	sub_821A8E50(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E510C;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E511C;
	sub_821AD6A0(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e6e20
	ctx.lr = 0x821E5130;
	sub_821E6E20(ctx, base);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r9,-11000
	ctx.r5.s64 = ctx.r9.s64 + -11000;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821a8c78
	ctx.lr = 0x821E5168;
	sub_821A8C78(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a90a8
	ctx.lr = 0x821E517C;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E5194;
	sub_821DDA68(ctx, base);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r7.u32);
	// lwz r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E51BC;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r5,r31,968
	ctx.r5.s64 = ctx.r31.s64 + 968;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821E51EC;
	sub_821AA098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x821a8ec8
	ctx.lr = 0x821E51FC;
	sub_821A8EC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E520C;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E521C;
	sub_821AD6A0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x821e6e20
	ctx.lr = 0x821E5234;
	sub_821E6E20(ctx, base);
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r28,r4,-11024
	ctx.r28.s64 = ctx.r4.s64 + -11024;
	// stw r10,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,496(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821a8c78
	ctx.lr = 0x821E5270;
	sub_821A8C78(ctx, base);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c48
	ctx.lr = 0x821E5284;
	sub_821E2C48(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a90a8
	ctx.lr = 0x821E5298;
	sub_821A90A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E52B0;
	sub_821DDA68(ctx, base);
	// lwz r7,288(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E52D8;
	sub_821A8DC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r31,984
	ctx.r5.s64 = ctx.r31.s64 + 984;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821E5308;
	sub_821AA098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a8ec8
	ctx.lr = 0x821E5318;
	sub_821A8EC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E5328;
	sub_821AD648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E5338;
	sub_821AD6A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x821e6e20
	ctx.lr = 0x821E5350;
	sub_821E6E20(ctx, base);
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821a8c78
	ctx.lr = 0x821E5384;
	sub_821A8C78(ctx, base);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c48
	ctx.lr = 0x821E5398;
	sub_821E2C48(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a90a8
	ctx.lr = 0x821E53AC;
	sub_821A90A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f4,8308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8308);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E53C8;
	sub_821DDA68(ctx, base);
	// lwz r3,956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// bl 0x821a7470
	ctx.lr = 0x821E53D0;
	sub_821A7470(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r31,1000
	ctx.r5.s64 = ctx.r31.s64 + 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821E5400;
	sub_821AA098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x821a8ec8
	ctx.lr = 0x821E5410;
	sub_821A8EC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E5420;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E5430;
	sub_821AD6A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x821e6e20
	ctx.lr = 0x821E5448;
	sub_821E6E20(ctx, base);
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r9,-11044
	ctx.r5.s64 = ctx.r9.s64 + -11044;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821a8c78
	ctx.lr = 0x821E5480;
	sub_821A8C78(ctx, base);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c48
	ctx.lr = 0x821E5494;
	sub_821E2C48(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a90a8
	ctx.lr = 0x821E54A8;
	sub_821A90A8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f4,-11048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11048);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E54C4;
	sub_821DDA68(ctx, base);
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E54EC;
	sub_821A8DC0(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,1016
	ctx.r5.s64 = ctx.r31.s64 + 1016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821E551C;
	sub_821AA098(ctx, base);
loc_821E551C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E5530"))) PPC_WEAK_FUNC(sub_821E5530);
PPC_FUNC_IMPL(__imp__sub_821E5530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x821E5538;
	sub_8224875C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r31,-1744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r30,14524(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14524);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e57d4
	if (ctx.cr6.eq) goto loc_821E57D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e57d4
	if (ctx.cr6.eq) goto loc_821E57D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5584
	if (ctx.cr6.eq) goto loc_821E5584;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x821E5578;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r24,1
	ctx.r24.s64 = 1;
	// bne cr6,0x821e5588
	if (!ctx.cr6.eq) goto loc_821E5588;
loc_821E5584:
	// li r24,0
	ctx.r24.s64 = 0;
loc_821E5588:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r23,368(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r20,156(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r22,164(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r18,160(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// beq cr6,0x821e55b8
	if (ctx.cr6.eq) goto loc_821E55B8;
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x821E55AC;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// bne cr6,0x821e55bc
	if (!ctx.cr6.eq) goto loc_821E55BC;
loc_821E55B8:
	// li r21,0
	ctx.r21.s64 = 0;
loc_821E55BC:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821e55cc
	if (ctx.cr6.eq) goto loc_821E55CC;
	// li r19,1
	ctx.r19.s64 = 1;
loc_821E55CC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x821e55d8
	if (ctx.cr6.eq) goto loc_821E55D8;
	// ori r19,r19,2
	ctx.r19.u64 = ctx.r19.u64 | 2;
loc_821E55D8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x821e55e4
	if (ctx.cr6.eq) goto loc_821E55E4;
	// ori r19,r19,4
	ctx.r19.u64 = ctx.r19.u64 | 4;
loc_821E55E4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x821e55f0
	if (ctx.cr6.eq) goto loc_821E55F0;
	// ori r19,r19,8
	ctx.r19.u64 = ctx.r19.u64 | 8;
loc_821E55F0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821e55fc
	if (ctx.cr6.eq) goto loc_821E55FC;
	// ori r19,r19,16
	ctx.r19.u64 = ctx.r19.u64 | 16;
loc_821E55FC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821e5608
	if (ctx.cr6.eq) goto loc_821E5608;
	// ori r19,r19,32
	ctx.r19.u64 = ctx.r19.u64 | 32;
loc_821E5608:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x821E5618;
	sub_821ADC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x821E5624;
	sub_821ADC30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821E5630;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821E563C;
	sub_821ADDC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x821E5648;
	sub_821ADE68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x821E5654;
	sub_821ADCA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad240
	ctx.lr = 0x821E5664;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821E5670;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x821E567C;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x821E5688;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821E5694;
	sub_821AD6F8(ctx, base);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e3b20
	ctx.lr = 0x821E56B4;
	sub_821E3B20(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x821E56E0;
	sub_821B16B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a90a8
	ctx.lr = 0x821E56F4;
	sub_821A90A8(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821e5704
	if (ctx.cr6.eq) goto loc_821E5704;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e34f0
	ctx.lr = 0x821E5704;
	sub_821E34F0(ctx, base);
loc_821E5704:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821e5714
	if (ctx.cr6.eq) goto loc_821E5714;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e2db8
	ctx.lr = 0x821E5714;
	sub_821E2DB8(ctx, base);
loc_821E5714:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x821e5724
	if (ctx.cr6.eq) goto loc_821E5724;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e2e58
	ctx.lr = 0x821E5724;
	sub_821E2E58(ctx, base);
loc_821E5724:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x821e574c
	if (ctx.cr6.eq) goto loc_821E574C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,13412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E574C;
	sub_821A90A8(ctx, base);
loc_821E574C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821e575c
	if (ctx.cr6.eq) goto loc_821E575C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e35c8
	ctx.lr = 0x821E575C;
	sub_821E35C8(ctx, base);
loc_821E575C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821e4f18
	ctx.lr = 0x821E5768;
	sub_821E4F18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a9fe8
	ctx.lr = 0x821E578C;
	sub_821A9FE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E5798;
	sub_821AD240(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E57A4;
	sub_821AD1F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821E57B0;
	sub_821AD498(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821E57BC;
	sub_821AD600(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821E57C8;
	sub_821AD6F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x821E57D4;
	sub_821AD288(ctx, base);
loc_821E57D4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_821E57DC"))) PPC_WEAK_FUNC(sub_821E57DC);
PPC_FUNC_IMPL(__imp__sub_821E57DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E57E0"))) PPC_WEAK_FUNC(sub_821E57E0);
PPC_FUNC_IMPL(__imp__sub_821E57E0) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r31,-7488(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e582c
	if (!ctx.cr6.eq) goto loc_821E582C;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e582c
	if (!ctx.cr6.eq) goto loc_821E582C;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e58ec
	if (ctx.cr6.eq) goto loc_821E58EC;
loc_821E582C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E5838;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E5844;
	sub_821AD240(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E5854;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E5864;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E5874;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E5884;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e4fc8
	ctx.lr = 0x821E588C;
	sub_821E4FC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-13712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13712);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e3f68
	ctx.lr = 0x821E589C;
	sub_821E3F68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e4128
	ctx.lr = 0x821E58A4;
	sub_821E4128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e4308
	ctx.lr = 0x821E58AC;
	sub_821E4308(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e4798
	ctx.lr = 0x821E58B4;
	sub_821E4798(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E58C0;
	sub_821AD1F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E58CC;
	sub_821AD240(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad880
	ctx.lr = 0x821E58DC;
	sub_821AD880(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad880
	ctx.lr = 0x821E58EC;
	sub_821AD880(ctx, base);
loc_821E58EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E5904"))) PPC_WEAK_FUNC(sub_821E5904);
PPC_FUNC_IMPL(__imp__sub_821E5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5908"))) PPC_WEAK_FUNC(sub_821E5908);
PPC_FUNC_IMPL(__imp__sub_821E5908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821E5910;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E5928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r30,-7488(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7488);
	// bl 0x821e57e0
	ctx.lr = 0x821E5938;
	sub_821E57E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adc58
	ctx.lr = 0x821E5940;
	sub_821ADC58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adc30
	ctx.lr = 0x821E594C;
	sub_821ADC30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821add20
	ctx.lr = 0x821E5958;
	sub_821ADD20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821addc0
	ctx.lr = 0x821E5964;
	sub_821ADDC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ade68
	ctx.lr = 0x821E5970;
	sub_821ADE68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adca8
	ctx.lr = 0x821E597C;
	sub_821ADCA8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x821E598C;
	sub_821AD240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821E5998;
	sub_821AD1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x821E59A4;
	sub_821AD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x821E59B0;
	sub_821AD600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6f8
	ctx.lr = 0x821E59BC;
	sub_821AD6F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x821E59C8;
	sub_821AD288(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9c68
	ctx.lr = 0x821E59D0;
	sub_821A9C68(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-19048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// stw r7,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r7.u32);
	// bl 0x821e5530
	ctx.lr = 0x821E59E8;
	sub_821E5530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E59F4;
	sub_821AD240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E5A00;
	sub_821AD1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x821E5A0C;
	sub_821AD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821ad600
	ctx.lr = 0x821E5A18;
	sub_821AD600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821E5A24;
	sub_821AD6F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad288
	ctx.lr = 0x821E5A30;
	sub_821AD288(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821E5A3C"))) PPC_WEAK_FUNC(sub_821E5A3C);
PPC_FUNC_IMPL(__imp__sub_821E5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5A40"))) PPC_WEAK_FUNC(sub_821E5A40);
PPC_FUNC_IMPL(__imp__sub_821E5A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9ce8
	ctx.lr = 0x821E5A6C;
	sub_821A9CE8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9e08
	ctx.lr = 0x821E5A7C;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5a94
	if (ctx.cr6.eq) goto loc_821E5A94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E5A94;
	sub_821A9F48(ctx, base);
loc_821E5A94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5aac
	if (ctx.cr6.eq) goto loc_821E5AAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9f48
	ctx.lr = 0x821E5AAC;
	sub_821A9F48(ctx, base);
loc_821E5AAC:
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

__attribute__((alias("__imp__sub_821E5AC4"))) PPC_WEAK_FUNC(sub_821E5AC4);
PPC_FUNC_IMPL(__imp__sub_821E5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5AC8"))) PPC_WEAK_FUNC(sub_821E5AC8);
PPC_FUNC_IMPL(__imp__sub_821E5AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-10696
	ctx.r9.s64 = ctx.r11.s64 + -10696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-7480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7480);
	// bl 0x821ae380
	ctx.lr = 0x821E5B00;
	sub_821AE380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6dc0
	ctx.lr = 0x821E5B08;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e5b24
	if (ctx.cr6.eq) goto loc_821E5B24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E5B20;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E5B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E5B3C"))) PPC_WEAK_FUNC(sub_821E5B3C);
PPC_FUNC_IMPL(__imp__sub_821E5B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5B40"))) PPC_WEAK_FUNC(sub_821E5B40);
PPC_FUNC_IMPL(__imp__sub_821E5B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E5B48;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E5B54;
	sub_821E6DA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-10696
	ctx.r9.s64 = ctx.r10.s64 + -10696;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r3,r4,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E5BB0;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r30,300(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,304(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184800
	ctx.lr = 0x821E5BCC;
	sub_82184800(ctx, base);
	// srawi r8,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 2;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x8226b3e0
	ctx.lr = 0x821E5BF0;
	sub_8226B3E0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-11208
	ctx.r4.s64 = ctx.r10.s64 + -11208;
	// lwz r30,-19020(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E5C0C;
	sub_8218A540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E5C1C;
	sub_821A7758(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r8,-23460
	ctx.r4.s64 = ctx.r8.s64 + -23460;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// bl 0x8218a540
	ctx.lr = 0x821E5C40;
	sub_8218A540(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E5C50;
	sub_821A7758(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E5C6C"))) PPC_WEAK_FUNC(sub_821E5C6C);
PPC_FUNC_IMPL(__imp__sub_821E5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5C70"))) PPC_WEAK_FUNC(sub_821E5C70);
PPC_FUNC_IMPL(__imp__sub_821E5C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821E5C78;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249914
	ctx.lr = 0x821E5C80;
	sub_82249914(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// std r4,1240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1240, ctx.r4.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E5CA0;
	sub_8211B248(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e5cb4
	if (!ctx.cr6.eq) goto loc_821E5CB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e6190
	goto loc_821E6190;
loc_821E5CB4:
	// addi r5,r25,8
	ctx.r5.s64 = ctx.r25.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821a9ce8
	ctx.lr = 0x821E5CC4;
	sub_821A9CE8(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E5D04;
	sub_821A8E50(ctx, base);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-7488(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E5D1C;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E5D2C;
	sub_821AD6A0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-1744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lfs f29,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f23.f64 = double(temp.f32);
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e5e9c
	if (ctx.cr6.lt) goto loc_821E5E9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821e6104
	if (!ctx.cr6.lt) goto loc_821E6104;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x821e5dcc
	if (!ctx.cr6.eq) goto loc_821E5DCC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5da0
	if (ctx.cr6.eq) goto loc_821E5DA0;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-10644
	ctx.r5.s64 = ctx.r10.s64 + -10644;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r4.u32);
	// b 0x821e5e28
	goto loc_821E5E28;
loc_821E5DA0:
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-10656
	ctx.r5.s64 = ctx.r10.s64 + -10656;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// b 0x821e5e28
	goto loc_821E5E28;
loc_821E5DCC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5e00
	if (ctx.cr6.eq) goto loc_821E5E00;
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-10672
	ctx.r5.s64 = ctx.r10.s64 + -10672;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// b 0x821e5e28
	goto loc_821E5E28;
loc_821E5E00:
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r27.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-10684
	ctx.r5.s64 = ctx.r10.s64 + -10684;
	// stw r9,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r4.u32);
loc_821E5E28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821a8c78
	ctx.lr = 0x821E5E30;
	sub_821A8C78(ctx, base);
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f23,f9
	ctx.f7.f64 = double(float(ctx.f23.f64 / ctx.f9.f64));
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fdivs f8,f23,f10
	ctx.f8.f64 = double(float(ctx.f23.f64 / ctx.f10.f64));
	// stfs f8,208(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// b 0x821e60fc
	goto loc_821E60FC;
loc_821E5E9C:
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-11128
	ctx.r5.s64 = ctx.r10.s64 + -11128;
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821a8c78
	ctx.lr = 0x821E5ED4;
	sub_821A8C78(ctx, base);
	// lwz r11,-12408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12408);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r9,r10,-16272
	ctx.r9.s64 = ctx.r10.s64 + -16272;
	// li r28,-2
	ctx.r28.s64 = -2;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfs f24,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f24.f64 = double(temp.f32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,40(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f27,-11256(r11)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11256);
	// lfs f28,8064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8064);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f25,f23,f9
	ctx.f25.f64 = double(float(ctx.f23.f64 / ctx.f9.f64));
	// fdivs f26,f23,f10
	ctx.f26.f64 = double(float(ctx.f23.f64 / ctx.f10.f64));
loc_821E5F58:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r29,-2
	ctx.r29.s64 = -2;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r31,r30,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_821E5F74:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f24
	ctx.cr6.compare(ctx.f9.f64, ctx.f24.f64);
	// bgt cr6,0x821e6008
	if (ctx.cr6.gt) goto loc_821E6008;
	// addi r11,r1,804
	ctx.r11.s64 = ctx.r1.s64 + 804;
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fmuls f11,f31,f26
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f10,f0,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// bl 0x8224b8d0
	ctx.lr = 0x821E5FCC;
	sub_8224B8D0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsqrts f8,f27
	ctx.f8.f64 = double(float(sqrt(ctx.f27.f64)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmulfp128 v61,v127,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f30,f6,f30
	ctx.f30.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
loc_821E6008:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x821e5f74
	if (!ctx.cr6.gt) goto loc_821E5F74;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x821e5f58
	if (!ctx.cr6.gt) goto loc_821E5F58;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x821e6098
	if (ctx.cr6.lt) goto loc_821E6098;
	// fdivs f0,f23,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 / ctx.f30.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r30,-3
	ctx.r7.s64 = ctx.r30.s64 + -3;
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r5,-16
	ctx.r5.s64 = -16;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltw128 v63,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
loc_821E6058:
	// lvx128 v59,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// vmulfp128 v58,v59,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// stvx128 v58,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v56,v57,v63
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v56,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v54,v55,v63
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v54,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v52,v53,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v52,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// blt cr6,0x821e6058
	if (ctx.cr6.lt) goto loc_821E6058;
loc_821E6098:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821e60dc
	if (!ctx.cr6.lt) goto loc_821E60DC;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fdivs f0,f23,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 / ctx.f30.f64));
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// vspltw128 v63,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
loc_821E60C8:
	// lvx128 v50,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v50,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x821e60c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E60C8;
loc_821E60DC:
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821a90a8
	ctx.lr = 0x821E60F0;
	sub_821A90A8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// li r4,16
	ctx.r4.s64 = 16;
loc_821E60FC:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821a90a8
	ctx.lr = 0x821E6104;
	sub_821A90A8(ctx, base);
loc_821E6104:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// fmr f4,f23
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E611C;
	sub_821DDA68(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E6144;
	sub_821A8DC0(ctx, base);
	// lwz r11,1244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821E615C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821aa098
	ctx.lr = 0x821E618C;
	sub_821AA098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E6190:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249960
	ctx.lr = 0x821E61A4;
	sub_82249960(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821E61A8"))) PPC_WEAK_FUNC(sub_821E61A8);
PPC_FUNC_IMPL(__imp__sub_821E61A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E61B0;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211b248
	ctx.lr = 0x821E61C8;
	sub_8211B248(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e61e4
	if (!ctx.cr6.eq) goto loc_821E61E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E61E4:
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x821E61F4;
	sub_821A9CE8(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,-12408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12408);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E6234;
	sub_821A8E50(ctx, base);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E624C;
	sub_821AD648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821E625C;
	sub_821AD6A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821E6268;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad240
	ctx.lr = 0x821E6274;
	sub_821AD240(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r11,-10628
	ctx.r5.s64 = ctx.r11.s64 + -10628;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8c78
	ctx.lr = 0x821E62AC;
	sub_821A8C78(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82184800
	ctx.lr = 0x821E62BC;
	sub_82184800(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r1,292
	ctx.r10.s64 = ctx.r1.s64 + 292;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lfs f31,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,7948(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-19048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// lwz r5,304(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r4,300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f31,f8
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fdivs f12,f31,f10
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
loc_821E6328:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// stfs f11,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmsubs f7,f8,f13,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f31.f64));
	// fmsubs f6,f8,f13,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f31.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsu f4,32(r10)
	// bdnz 0x821e6328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6328;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x821E6378;
	sub_821A90A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821dda68
	ctx.lr = 0x821E6398;
	sub_821DDA68(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E63C0;
	sub_821A8DC0(ctx, base);
	// lwz r11,-12408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12408);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821E63E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821aa098
	ctx.lr = 0x821E6410;
	sub_821AA098(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E6420"))) PPC_WEAK_FUNC(sub_821E6420);
PPC_FUNC_IMPL(__imp__sub_821E6420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E6428;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e6474
	if (ctx.cr6.eq) goto loc_821E6474;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e6474
	if (ctx.cr6.eq) goto loc_821E6474;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e6474
	if (ctx.cr6.eq) goto loc_821E6474;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e647c
	if (!ctx.cr6.eq) goto loc_821E647C;
loc_821E6474:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_821E647C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad648
	ctx.lr = 0x821E6494;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E64A4;
	sub_821AD6A0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-12408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// bl 0x821a8390
	ctx.lr = 0x821E64B0;
	sub_821A8390(ctx, base);
	// lwz r11,-12408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r3,-12408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// bl 0x821a82f0
	ctx.lr = 0x821E64C0;
	sub_821A82F0(ctx, base);
	// lwz r11,-12408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bne cr6,0x821e64d8
	if (!ctx.cr6.eq) goto loc_821E64D8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821e652c
	if (ctx.cr6.eq) goto loc_821E652C;
loc_821E64D8:
	// addi r5,r28,28
	ctx.r5.s64 = ctx.r28.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9d78
	ctx.lr = 0x821E64E8;
	sub_821A9D78(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9ea8
	ctx.lr = 0x821E64F4;
	sub_821A9EA8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821e650c
	if (ctx.cr6.eq) goto loc_821E650C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e61a8
	ctx.lr = 0x821E6504;
	sub_821E61A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e6524
	if (ctx.cr6.eq) goto loc_821E6524;
loc_821E650C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821e6524
	if (ctx.cr6.eq) goto loc_821E6524;
	// lwz r11,-12408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x821e5c70
	ctx.lr = 0x821E6524;
	sub_821E5C70(ctx, base);
loc_821E6524:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e5a40
	ctx.lr = 0x821E652C;
	sub_821E5A40(ctx, base);
loc_821E652C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E6538"))) PPC_WEAK_FUNC(sub_821E6538);
PPC_FUNC_IMPL(__imp__sub_821E6538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-10612
	ctx.r9.s64 = ctx.r11.s64 + -10612;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -800, ctx.r11.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x821E6570;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e658c
	if (ctx.cr6.eq) goto loc_821E658C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E6588;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E658C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E65A4"))) PPC_WEAK_FUNC(sub_821E65A4);
PPC_FUNC_IMPL(__imp__sub_821E65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E65A8"))) PPC_WEAK_FUNC(sub_821E65A8);
PPC_FUNC_IMPL(__imp__sub_821E65A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E65B0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e6da8
	ctx.lr = 0x821E65BC;
	sub_821E6DA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-10612
	ctx.r10.s64 = ctx.r11.s64 + -10612;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r8,-10596
	ctx.r4.s64 = ctx.r8.s64 + -10596;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r29,-19020(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x821E6600;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821E6610;
	sub_821A7758(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r31,-800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -800, ctx.r31.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E663C"))) PPC_WEAK_FUNC(sub_821E663C);
PPC_FUNC_IMPL(__imp__sub_821E663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6640"))) PPC_WEAK_FUNC(sub_821E6640);
PPC_FUNC_IMPL(__imp__sub_821E6640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E6648;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e6680
	if (!ctx.cr6.eq) goto loc_821E6680;
loc_821E666C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821E6680:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821e66bc
	if (!ctx.cr6.eq) goto loc_821E66BC;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821e66bc
	if (!ctx.cr6.eq) goto loc_821E66BC;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e66bc
	if (!ctx.cr6.eq) goto loc_821E66BC;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e66bc
	if (!ctx.cr6.eq) goto loc_821E66BC;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e666c
	if (ctx.cr6.eq) goto loc_821E666C;
loc_821E66BC:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-12408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12408);
	// bl 0x821a82f0
	ctx.lr = 0x821E66C8;
	sub_821A82F0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821E66DC;
	sub_821AD1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad240
	ctx.lr = 0x821E66E8;
	sub_821AD240(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad288
	ctx.lr = 0x821E66F4;
	sub_821AD288(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-12408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12408);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821E6730;
	sub_821A8E50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821E6740;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x821E6750;
	sub_821AD6A0(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// addi r5,r5,-10580
	ctx.r5.s64 = ctx.r5.s64 + -10580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8c78
	ctx.lr = 0x821E678C;
	sub_821A8C78(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f30,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,304(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821a90a8
	ctx.lr = 0x821E6800;
	sub_821A90A8(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e68c4
	if (ctx.cr6.eq) goto loc_821E68C4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r4,304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r6,300(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fdivs f10,f31,f2
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// fdivs f9,f31,f1
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// b 0x821e68d4
	goto loc_821E68D4;
loc_821E68C4:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_821E68D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821dda68
	ctx.lr = 0x821E68DC;
	sub_821DDA68(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821E6904;
	sub_821A8DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E6918"))) PPC_WEAK_FUNC(sub_821E6918);
PPC_FUNC_IMPL(__imp__sub_821E6918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E6920;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821E694C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x821e6974
	if (ctx.cr6.eq) goto loc_821E6974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821E6974:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,-8200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E6990;
	sub_821AAF10(ctx, base);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// bl 0x82087ab0
	ctx.lr = 0x821E69C4;
	sub_82087AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821E69D0;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E69D8"))) PPC_WEAK_FUNC(sub_821E69D8);
PPC_FUNC_IMPL(__imp__sub_821E69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-10560
	ctx.r9.s64 = ctx.r10.s64 + -10560;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E69F4"))) PPC_WEAK_FUNC(sub_821E69F4);
PPC_FUNC_IMPL(__imp__sub_821E69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E69F8"))) PPC_WEAK_FUNC(sub_821E69F8);
PPC_FUNC_IMPL(__imp__sub_821E69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-10560
	ctx.r10.s64 = ctx.r11.s64 + -10560;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6A08"))) PPC_WEAK_FUNC(sub_821E6A08);
PPC_FUNC_IMPL(__imp__sub_821E6A08) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-10560
	ctx.r9.s64 = ctx.r11.s64 + -10560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821e6a40
	if (ctx.cr6.eq) goto loc_821E6A40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E6A3C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E6A40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6A54"))) PPC_WEAK_FUNC(sub_821E6A54);
PPC_FUNC_IMPL(__imp__sub_821E6A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6A58"))) PPC_WEAK_FUNC(sub_821E6A58);
PPC_FUNC_IMPL(__imp__sub_821E6A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 + 44;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
loc_821E6AC4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwzu r8,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x821e6ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6AC4;
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r4,216
	ctx.r10.s64 = ctx.r4.s64 + 216;
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// lwz r8,84(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// lwz r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,92(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// lwz r5,96(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lwz r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// lwz r6,108(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// lwz r5,112(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// lwz r7,124(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r7,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// lwz r6,204(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r6,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r6.u32);
	// lwz r5,128(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// lwz r8,208(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// lwz r7,132(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r7,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r7.u32);
	// lwz r6,212(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r6,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r6.u32);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lwz r4,216(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
loc_821E6B94:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821e6b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6B94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6BB0"))) PPC_WEAK_FUNC(sub_821E6BB0);
PPC_FUNC_IMPL(__imp__sub_821E6BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,64
	ctx.r10.s64 = 64;
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
	ctx.lr = 0x821E6BE4;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E6C24;
	sub_821AAF10(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// ld r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821E6C54;
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

__attribute__((alias("__imp__sub_821E6C6C"))) PPC_WEAK_FUNC(sub_821E6C6C);
PPC_FUNC_IMPL(__imp__sub_821E6C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6C70"))) PPC_WEAK_FUNC(sub_821E6C70);
PPC_FUNC_IMPL(__imp__sub_821E6C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E6C78;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,60
	ctx.r10.s64 = 60;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821E6CA4;
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
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E6CD0;
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
	ctx.lr = 0x821E6D00;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E6D08"))) PPC_WEAK_FUNC(sub_821E6D08);
PPC_FUNC_IMPL(__imp__sub_821E6D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-10416
	ctx.r9.s64 = ctx.r10.s64 + -10416;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6D24"))) PPC_WEAK_FUNC(sub_821E6D24);
PPC_FUNC_IMPL(__imp__sub_821E6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6D28"))) PPC_WEAK_FUNC(sub_821E6D28);
PPC_FUNC_IMPL(__imp__sub_821E6D28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6D34"))) PPC_WEAK_FUNC(sub_821E6D34);
PPC_FUNC_IMPL(__imp__sub_821E6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6D38"))) PPC_WEAK_FUNC(sub_821E6D38);
PPC_FUNC_IMPL(__imp__sub_821E6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10416
	ctx.r9.s64 = ctx.r11.s64 + -10416;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6D50"))) PPC_WEAK_FUNC(sub_821E6D50);
PPC_FUNC_IMPL(__imp__sub_821E6D50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-10416
	ctx.r9.s64 = ctx.r11.s64 + -10416;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e6d90
	if (ctx.cr6.eq) goto loc_821E6D90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E6D8C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E6D90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6DA4"))) PPC_WEAK_FUNC(sub_821E6DA4);
PPC_FUNC_IMPL(__imp__sub_821E6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6DA8"))) PPC_WEAK_FUNC(sub_821E6DA8);
PPC_FUNC_IMPL(__imp__sub_821E6DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6DBC"))) PPC_WEAK_FUNC(sub_821E6DBC);
PPC_FUNC_IMPL(__imp__sub_821E6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6DC0"))) PPC_WEAK_FUNC(sub_821E6DC0);
PPC_FUNC_IMPL(__imp__sub_821E6DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6DD0"))) PPC_WEAK_FUNC(sub_821E6DD0);
PPC_FUNC_IMPL(__imp__sub_821E6DD0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-10280
	ctx.r9.s64 = ctx.r11.s64 + -10280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821e6e08
	if (ctx.cr6.eq) goto loc_821E6E08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E6E04;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E6E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6E1C"))) PPC_WEAK_FUNC(sub_821E6E1C);
PPC_FUNC_IMPL(__imp__sub_821E6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6E20"))) PPC_WEAK_FUNC(sub_821E6E20);
PPC_FUNC_IMPL(__imp__sub_821E6E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,33
	ctx.r10.s64 = 33;
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
	ctx.lr = 0x821E6E54;
	sub_8209EDA0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_821E6E70:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821e6e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6E70;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-8200(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E6E90;
	sub_821AAF10(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E6EA0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821e6ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6EA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821E6EB8;
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

__attribute__((alias("__imp__sub_821E6ED0"))) PPC_WEAK_FUNC(sub_821E6ED0);
PPC_FUNC_IMPL(__imp__sub_821E6ED0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6EDC"))) PPC_WEAK_FUNC(sub_821E6EDC);
PPC_FUNC_IMPL(__imp__sub_821E6EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6EE0"))) PPC_WEAK_FUNC(sub_821E6EE0);
PPC_FUNC_IMPL(__imp__sub_821E6EE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6EEC"))) PPC_WEAK_FUNC(sub_821E6EEC);
PPC_FUNC_IMPL(__imp__sub_821E6EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6EF0"))) PPC_WEAK_FUNC(sub_821E6EF0);
PPC_FUNC_IMPL(__imp__sub_821E6EF0) {
	PPC_FUNC_PROLOGUE();
	// std r4,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6EF8"))) PPC_WEAK_FUNC(sub_821E6EF8);
PPC_FUNC_IMPL(__imp__sub_821E6EF8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F00"))) PPC_WEAK_FUNC(sub_821E6F00);
PPC_FUNC_IMPL(__imp__sub_821E6F00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,21756
	ctx.r3.s64 = ctx.r3.s64 + 21756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F08"))) PPC_WEAK_FUNC(sub_821E6F08);
PPC_FUNC_IMPL(__imp__sub_821E6F08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22072, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F10"))) PPC_WEAK_FUNC(sub_821E6F10);
PPC_FUNC_IMPL(__imp__sub_821E6F10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22228, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F18"))) PPC_WEAK_FUNC(sub_821E6F18);
PPC_FUNC_IMPL(__imp__sub_821E6F18) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,22076
	ctx.r3.s64 = ctx.r3.s64 + 22076;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6F28"))) PPC_WEAK_FUNC(sub_821E6F28);
PPC_FUNC_IMPL(__imp__sub_821E6F28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22204, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F30"))) PPC_WEAK_FUNC(sub_821E6F30);
PPC_FUNC_IMPL(__imp__sub_821E6F30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22208, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F38"))) PPC_WEAK_FUNC(sub_821E6F38);
PPC_FUNC_IMPL(__imp__sub_821E6F38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22212, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F40"))) PPC_WEAK_FUNC(sub_821E6F40);
PPC_FUNC_IMPL(__imp__sub_821E6F40) {
	PPC_FUNC_PROLOGUE();
	// stw r4,22220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F48"))) PPC_WEAK_FUNC(sub_821E6F48);
PPC_FUNC_IMPL(__imp__sub_821E6F48) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r11,18
	ctx.r11.s64 = 18;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82256770
	ctx.lr = 0x821E6F70;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6f80
	if (ctx.cr6.eq) goto loc_821E6F80;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E6F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6F94"))) PPC_WEAK_FUNC(sub_821E6F94);
PPC_FUNC_IMPL(__imp__sub_821E6F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6F98"))) PPC_WEAK_FUNC(sub_821E6F98);
PPC_FUNC_IMPL(__imp__sub_821E6F98) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,22064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// bl 0x8225fa80
	ctx.lr = 0x821E6FB8;
	sub_8225FA80(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821e6ff8
	if (!ctx.cr6.eq) goto loc_821E6FF8;
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// stw r10,22224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22224, ctx.r10.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E6FF8:
	// stw r3,22224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22224, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_821E7014"))) PPC_WEAK_FUNC(sub_821E7014);
PPC_FUNC_IMPL(__imp__sub_821E7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7018"))) PPC_WEAK_FUNC(sub_821E7018);
PPC_FUNC_IMPL(__imp__sub_821E7018) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82256778
	ctx.lr = 0x821E7034;
	sub_82256778(ctx, base);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rldicr r3,r9,0,43
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFF00000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7054"))) PPC_WEAK_FUNC(sub_821E7054);
PPC_FUNC_IMPL(__imp__sub_821E7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7058"))) PPC_WEAK_FUNC(sub_821E7058);
PPC_FUNC_IMPL(__imp__sub_821E7058) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82256778
	ctx.lr = 0x821E7074;
	sub_82256778(ctx, base);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rldicl r8,r9,44,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 44) & 0xFFFFFFFFFFF;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7098"))) PPC_WEAK_FUNC(sub_821E7098);
PPC_FUNC_IMPL(__imp__sub_821E7098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821E70A0;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r3,112
	ctx.r26.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r26,-8
	ctx.r11.s64 = ctx.r26.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E70C0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821e70c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E70C0;
	// addi r28,r31,21756
	ctx.r28.s64 = ctx.r31.s64 + 21756;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248f70
	ctx.lr = 0x821E70DC;
	sub_82248F70(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,70
	ctx.r7.s64 = 70;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82256760
	ctx.lr = 0x821E70FC;
	sub_82256760(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7134
	if (ctx.cr6.eq) goto loc_821E7134;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,87
	ctx.r10.u64 = ctx.r11.u64 | 87;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e7124
	if (ctx.cr6.eq) goto loc_821E7124;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821E7124:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821E7134:
	// stw r29,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,21560
	ctx.r5.s64 = 21560;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x82256f58
	ctx.lr = 0x821E7150;
	sub_82256F58(ctx, base);
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7178
	if (ctx.cr6.eq) goto loc_821E7178;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x821e716c
	if (ctx.cr6.eq) goto loc_821E716C;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// b 0x821e71e4
	goto loc_821E71E4;
loc_821E716C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821e71e4
	goto loc_821E71E4;
loc_821E7178:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r11.u32);
	// ble cr6,0x821e71e4
	if (!ctx.cr6.gt) goto loc_821E71E4;
	// addi r30,r31,456
	ctx.r30.s64 = ctx.r31.s64 + 456;
loc_821E7194:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// bl 0x8218a360
	ctx.lr = 0x821E71A4;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e71c4
	if (ctx.cr6.eq) goto loc_821E71C4;
	// lwz r11,21752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21752);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,308
	ctx.r30.s64 = ctx.r30.s64 + 308;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7194
	if (ctx.cr6.lt) goto loc_821E7194;
	// b 0x821e71e4
	goto loc_821E71E4;
loc_821E71C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r29,308
	ctx.r11.s64 = ctx.r29.s64 * 308;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x821E71E4;
	sub_82248A40(ctx, base);
loc_821E71E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82088268
	ctx.lr = 0x821E71EC;
	sub_82088268(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256770
	ctx.lr = 0x821E71F8;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7204
	if (ctx.cr6.eq) goto loc_821E7204;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
loc_821E7204:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821E720C"))) PPC_WEAK_FUNC(sub_821E720C);
PPC_FUNC_IMPL(__imp__sub_821E720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7210"))) PPC_WEAK_FUNC(sub_821E7210);
PPC_FUNC_IMPL(__imp__sub_821E7210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x821E7218;
	sub_82248768(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r21,r3,112
	ctx.r21.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E7238:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821e7238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E7238;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,21756
	ctx.r3.s64 = ctx.r31.s64 + 21756;
	// bl 0x82248f70
	ctx.lr = 0x821E7250;
	sub_82248F70(ctx, base);
	// li r5,32200
	ctx.r5.s64 = 32200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,22072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// bl 0x82248f70
	ctx.lr = 0x821E7260;
	sub_82248F70(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,70
	ctx.r7.s64 = 70;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82256760
	ctx.lr = 0x821E7280;
	sub_82256760(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e72b8
	if (ctx.cr6.eq) goto loc_821E72B8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,87
	ctx.r10.u64 = ctx.r11.u64 | 87;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e72a8
	if (ctx.cr6.eq) goto loc_821E72A8;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_821E72A8:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_821E72B8:
	// stw r25,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,21560
	ctx.r5.s64 = 21560;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x82256f58
	ctx.lr = 0x821E72D4;
	sub_82256F58(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bgt cr6,0x821e7320
	if (ctx.cr6.gt) goto loc_821E7320;
	// beq cr6,0x821e7314
	if (ctx.cr6.eq) goto loc_821E7314;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x821e7308
	if (ctx.cr6.eq) goto loc_821E7308;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// bne cr6,0x821e7340
	if (!ctx.cr6.eq) goto loc_821E7340;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,225
	ctx.r3.s64 = ctx.r11.s64 + 225;
	// b 0x821e7330
	goto loc_821E7330;
loc_821E7308:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,55
	ctx.r3.s64 = ctx.r11.s64 + 55;
	// b 0x821e7330
	goto loc_821E7330;
loc_821E7314:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,395
	ctx.r3.s64 = ctx.r11.s64 + 395;
	// b 0x821e7330
	goto loc_821E7330;
loc_821E7320:
	// cmpwi cr6,r11,131
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 131, ctx.xer);
	// bne cr6,0x821e7340
	if (!ctx.cr6.eq) goto loc_821E7340;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,565
	ctx.r3.s64 = ctx.r11.s64 + 565;
loc_821E7330:
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x8218a4f8
	ctx.lr = 0x821E733C;
	sub_8218A4F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_821E7340:
	// li r22,22
	ctx.r22.s64 = 22;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e7368
	if (ctx.cr6.eq) goto loc_821E7368;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x821e735c
	if (ctx.cr6.eq) goto loc_821E735C;
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
	// b 0x821e74a0
	goto loc_821E74A0;
loc_821E735C:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821e74a0
	goto loc_821E74A0;
loc_821E7368:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,21
	ctx.r10.s64 = 21;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r11.u32);
	// ble cr6,0x821e74a0
	if (!ctx.cr6.gt) goto loc_821E74A0;
	// addi r27,r31,456
	ctx.r27.s64 = ctx.r31.s64 + 456;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821E738C:
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218a4f8
	ctx.lr = 0x821E739C;
	sub_8218A4F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218a360
	ctx.lr = 0x821E73A8;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e748c
	if (!ctx.cr6.eq) goto loc_821E748C;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r20,22072(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r30,r11,-528
	ctx.r30.s64 = ctx.r11.s64 + -528;
	// addi r5,r27,-256
	ctx.r5.s64 = ctx.r27.s64 + -256;
	// addi r4,r30,230
	ctx.r4.s64 = ctx.r30.s64 + 230;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r30,460
	ctx.r28.s64 = ctx.r30.s64 + 460;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r26,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r26.u32);
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r25,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u32);
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r26,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r26.u32);
	// bl 0x82257058
	ctx.lr = 0x821E7428;
	sub_82257058(ctx, base);
	// lbz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// bne cr6,0x821e7444
	if (!ctx.cr6.eq) goto loc_821E7444;
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r26,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r26.u32);
	// lwz r10,22072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r26,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u32);
loc_821E7444:
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x821e7460
	if (!ctx.cr6.eq) goto loc_821E7460;
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r25,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r25.u32);
	// lwz r10,22072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// stwx r26,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u32);
loc_821E7460:
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a4f8
	ctx.lr = 0x821E7470;
	sub_8218A4F8(ctx, base);
	// lwz r10,22072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,2760
	ctx.r3.s64 = ctx.r11.s64 + 2760;
	// bl 0x8218a128
	ctx.lr = 0x821E748C;
	sub_8218A128(ctx, base);
loc_821E748C:
	// lwz r11,21752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21752);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,308
	ctx.r27.s64 = ctx.r27.s64 + 308;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e738c
	if (ctx.cr6.lt) goto loc_821E738C;
loc_821E74A0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82088268
	ctx.lr = 0x821E74A8;
	sub_82088268(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256770
	ctx.lr = 0x821E74B4;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e74c0
	if (ctx.cr6.eq) goto loc_821E74C0;
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
loc_821E74C0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_821E74C8"))) PPC_WEAK_FUNC(sub_821E74C8);
PPC_FUNC_IMPL(__imp__sub_821E74C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E74D0;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184800
	ctx.lr = 0x821E74F4;
	sub_82184800(ctx, base);
loc_821E74F4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82256620
	ctx.lr = 0x821E7510;
	sub_82256620(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x821e74f4
	if (!ctx.cr6.eq) goto loc_821E74F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x821E7520;
	sub_822565C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821E7528:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e0ac
	ctx.lr = 0x821E7540;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7564
	if (ctx.cr6.eq) goto loc_821E7564;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821e7564
	if (!ctx.cr6.eq) goto loc_821E7564;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821e7564
	if (!ctx.cr6.eq) goto loc_821E7564;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821E7564:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821e7528
	if (ctx.cr6.eq) goto loc_821E7528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088268
	ctx.lr = 0x821E7578;
	sub_82088268(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208a480
	ctx.lr = 0x821E7588;
	sub_8208A480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e75a4
	if (!ctx.cr6.eq) goto loc_821E75A4;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// b 0x821e75b8
	goto loc_821E75B8;
loc_821E75A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,19
	ctx.r11.s64 = 19;
	// beq cr6,0x821e75b4
	if (ctx.cr6.eq) goto loc_821E75B4;
	// li r11,20
	ctx.r11.s64 = 20;
loc_821E75B4:
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_821E75B8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x821e760c
	if (!ctx.cr6.eq) goto loc_821E760C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x821E75C8;
	sub_822565C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821E75CC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e0ac
	ctx.lr = 0x821E75E4;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e75cc
	if (ctx.cr6.eq) goto loc_821E75CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x821e75cc
	if (!ctx.cr6.eq) goto loc_821E75CC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e75cc
	if (!ctx.cr6.eq) goto loc_821E75CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088268
	ctx.lr = 0x821E760C;
	sub_82088268(ctx, base);
loc_821E760C:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// bne cr6,0x821e7640
	if (!ctx.cr6.eq) goto loc_821E7640;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821e7640
	if (!ctx.cr6.eq) goto loc_821E7640;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82256770
	ctx.lr = 0x821E7630;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7640
	if (ctx.cr6.eq) goto loc_821E7640;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_821E7640:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E7648"))) PPC_WEAK_FUNC(sub_821E7648);
PPC_FUNC_IMPL(__imp__sub_821E7648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821E7650;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,21756
	ctx.r30.s64 = ctx.r3.s64 + 21756;
	// stw r4,22068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22068, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,22216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22216, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82248f70
	ctx.lr = 0x821E7694;
	sub_82248F70(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r31,22020
	ctx.r3.s64 = ctx.r31.s64 + 22020;
	// bl 0x8224bb38
	ctx.lr = 0x821E76A4;
	sub_8224BB38(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,21764
	ctx.r3.s64 = ctx.r31.s64 + 21764;
	// bl 0x8224bbf0
	ctx.lr = 0x821E76B4;
	sub_8224BBF0(ctx, base);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r7,22216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22216);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,21760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21760, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,21756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21756, ctx.r8.u32);
	// bne cr6,0x821e76f8
	if (!ctx.cr6.eq) goto loc_821E76F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822569b0
	ctx.lr = 0x821E76F4;
	sub_822569B0(ctx, base);
	// b 0x821e771c
	goto loc_821E771C;
loc_821E76F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x821e7714
	if (ctx.cr6.eq) goto loc_821E7714;
	// addi r6,r31,22064
	ctx.r6.s64 = ctx.r31.s64 + 22064;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822568d0
	ctx.lr = 0x821E7710;
	sub_822568D0(ctx, base);
	// b 0x821e771c
	goto loc_821E771C;
loc_821E7714:
	// addi r5,r31,22064
	ctx.r5.s64 = ctx.r31.s64 + 22064;
	// bl 0x822567f8
	ctx.lr = 0x821E771C;
	sub_822567F8(ctx, base);
loc_821E771C:
	// cmplwi cr6,r3,183
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 183, ctx.xer);
	// bgt cr6,0x821e77a4
	if (ctx.cr6.gt) goto loc_821E77A4;
	// beq cr6,0x821e7794
	if (ctx.cr6.eq) goto loc_821E7794;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bgt cr6,0x821e7768
	if (ctx.cr6.gt) goto loc_821E7768;
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e77d4
	if (ctx.cr6.eq) goto loc_821E77D4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x821e7770
	if (!ctx.cr6.eq) goto loc_821E7770;
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne cr6,0x821e78ac
	if (!ctx.cr6.eq) goto loc_821E78AC;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821E7768:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
loc_821E7770:
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne cr6,0x821e78ac
	if (!ctx.cr6.eq) goto loc_821E78AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821E7794:
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821e78a4
	goto loc_821E78A4;
loc_821E77A4:
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// bgt cr6,0x821e7880
	if (ctx.cr6.gt) goto loc_821E7880;
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
	// cmplwi cr6,r3,1392
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1392, ctx.xer);
	// bne cr6,0x821e7770
	if (!ctx.cr6.eq) goto loc_821E7770;
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e786c
	if (ctx.cr6.eq) goto loc_821E786C;
loc_821E77D4:
	// lwz r11,22216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e781c
	if (!ctx.cr6.eq) goto loc_821E781C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-10268
	ctx.r5.s64 = ctx.r11.s64 + -10268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a5f0
	ctx.lr = 0x821E77F8;
	sub_8218A5F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822569f0
	ctx.lr = 0x821E7818;
	sub_822569F0(ctx, base);
	// stw r3,22064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22064, ctx.r3.u32);
loc_821E781C:
	// lwz r11,22064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22064);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e7860
	if (!ctx.cr6.eq) goto loc_821E7860;
	// bl 0x8208db08
	ctx.lr = 0x821E782C;
	sub_8208DB08(ctx, base);
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// bgt cr6,0x821e7858
	if (ctx.cr6.gt) goto loc_821E7858;
	// beq cr6,0x821e7898
	if (ctx.cr6.eq) goto loc_821E7898;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821e7848
	if (ctx.cr6.eq) goto loc_821E7848;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// b 0x821e7894
	goto loc_821E7894;
loc_821E7848:
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821e78a4
	goto loc_821E78A4;
loc_821E7858:
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// b 0x821e7894
	goto loc_821E7894;
loc_821E7860:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821E786C:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821E7880:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,21
	ctx.r10.u64 = ctx.r11.u64 | 21;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e7898
	if (ctx.cr0.eq) goto loc_821E7898;
	// cmplwi cr6,r11,1089
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1089, ctx.xer);
loc_821E7894:
	// bne cr6,0x821e7770
	if (!ctx.cr6.eq) goto loc_821E7770;
loc_821E7898:
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
loc_821E78A4:
	// bne cr6,0x821e78ac
	if (!ctx.cr6.eq) goto loc_821E78AC;
	// li r11,13
	ctx.r11.s64 = 13;
loc_821E78AC:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821E78BC"))) PPC_WEAK_FUNC(sub_821E78BC);
PPC_FUNC_IMPL(__imp__sub_821E78BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E78C0"))) PPC_WEAK_FUNC(sub_821E78C0);
PPC_FUNC_IMPL(__imp__sub_821E78C0) {
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
	// lwz r3,22064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821e7948
	if (ctx.cr6.eq) goto loc_821E7948;
	// bl 0x82088268
	ctx.lr = 0x821E78E4;
	sub_82088268(ctx, base);
	// lwz r10,22216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22216);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,22064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22064, ctx.r11.u32);
	// beq cr6,0x821e7948
	if (ctx.cr6.eq) goto loc_821E7948;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82256750
	ctx.lr = 0x821E7904;
	sub_82256750(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7948
	if (ctx.cr6.eq) goto loc_821E7948;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,140
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 140, ctx.xer);
	// beq cr6,0x821e7948
	if (ctx.cr6.eq) goto loc_821E7948;
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne cr6,0x821e792c
	if (!ctx.cr6.eq) goto loc_821E792C;
	// li r11,10
	ctx.r11.s64 = 10;
loc_821E792C:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E7948:
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

__attribute__((alias("__imp__sub_821E7960"))) PPC_WEAK_FUNC(sub_821E7960);
PPC_FUNC_IMPL(__imp__sub_821E7960) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,22064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// bl 0x8225fc20
	ctx.lr = 0x821E798C;
	sub_8225FC20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7a1c
	if (!ctx.cr6.eq) goto loc_821E7A1C;
	// bl 0x8208db08
	ctx.lr = 0x821E7998;
	sub_8208DB08(ctx, base);
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// bgt cr6,0x821e79d4
	if (ctx.cr6.gt) goto loc_821E79D4;
	// beq cr6,0x821e79fc
	if (ctx.cr6.eq) goto loc_821E79FC;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x821e79fc
	if (ctx.cr6.eq) goto loc_821E79FC;
	// cmplwi cr6,r3,112
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 112, ctx.xer);
	// bne cr6,0x821e79dc
	if (!ctx.cr6.eq) goto loc_821E79DC;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E79D4:
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// beq cr6,0x821e79fc
	if (ctx.cr6.eq) goto loc_821E79FC;
loc_821E79DC:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E79FC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E7A1C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821E7A34"))) PPC_WEAK_FUNC(sub_821E7A34);
PPC_FUNC_IMPL(__imp__sub_821E7A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7A38"))) PPC_WEAK_FUNC(sub_821E7A38);
PPC_FUNC_IMPL(__imp__sub_821E7A38) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,22064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// bl 0x8225fe50
	ctx.lr = 0x821E7A5C;
	sub_8225FE50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7ad0
	if (!ctx.cr6.eq) goto loc_821E7AD0;
	// bl 0x8208db08
	ctx.lr = 0x821E7A68;
	sub_8208DB08(ctx, base);
	// cmplwi cr6,r3,1393
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1393, ctx.xer);
	// bgt cr6,0x821e7aa4
	if (ctx.cr6.gt) goto loc_821E7AA4;
	// beq cr6,0x821e7a84
	if (ctx.cr6.eq) goto loc_821E7A84;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x821e7ab0
	if (ctx.cr6.eq) goto loc_821E7AB0;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// b 0x821e7aa8
	goto loc_821E7AA8;
loc_821E7A84:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E7AA4:
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
loc_821E7AA8:
	// li r11,10
	ctx.r11.s64 = 10;
	// bne cr6,0x821e7ab4
	if (!ctx.cr6.eq) goto loc_821E7AB4;
loc_821E7AB0:
	// li r11,13
	ctx.r11.s64 = 13;
loc_821E7AB4:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821E7AD0:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821E7AE8"))) PPC_WEAK_FUNC(sub_821E7AE8);
PPC_FUNC_IMPL(__imp__sub_821E7AE8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,22064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// bl 0x82260088
	ctx.lr = 0x821E7B14;
	sub_82260088(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821e7bd0
	if (!ctx.cr6.eq) goto loc_821E7BD0;
	// bl 0x8208db08
	ctx.lr = 0x821E7B20;
	sub_8208DB08(ctx, base);
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// cmplwi cr6,r3,112
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 112, ctx.xer);
	// beq cr6,0x821e7ba4
	if (ctx.cr6.eq) goto loc_821E7BA4;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// beq cr6,0x821e7b5c
	if (ctx.cr6.eq) goto loc_821E7B5C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e7bb0
	if (ctx.cr6.eq) goto loc_821E7BB0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821E7B5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e7b84
	if (ctx.cr6.eq) goto loc_821E7B84;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821E7B84:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821E7BA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x821e7bb4
	if (!ctx.cr6.eq) goto loc_821E7BB4;
loc_821E7BB0:
	// li r11,10
	ctx.r11.s64 = 10;
loc_821E7BB4:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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
loc_821E7BD0:
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

__attribute__((alias("__imp__sub_821E7BE8"))) PPC_WEAK_FUNC(sub_821E7BE8);
PPC_FUNC_IMPL(__imp__sub_821E7BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821E7BF0;
	sub_82248778(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,3
	ctx.r25.s64 = 3;
loc_821E7C10:
	// lwz r11,22072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22072);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e7c2c
	if (!ctx.cr6.eq) goto loc_821E7C2C;
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// stwx r27,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x821e7d60
	goto loc_821E7D60;
loc_821E7C2C:
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,565
	ctx.r5.s64 = ctx.r11.s64 + 565;
	// bl 0x8218a5f0
	ctx.lr = 0x821E7C48;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E7C68;
	sub_82256BE8(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7648
	ctx.lr = 0x821E7C94;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7cb4
	if (!ctx.cr6.eq) goto loc_821E7CB4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821e7d70
	if (!ctx.cr6.eq) goto loc_821E7D70;
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// stwx r26,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x821e7d60
	goto loc_821E7D60;
loc_821E7CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e7a38
	ctx.lr = 0x821E7CC4;
	sub_821E7A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7cf4
	if (!ctx.cr6.eq) goto loc_821E7CF4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821e7d70
	if (ctx.cr6.eq) goto loc_821E7D70;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821e7ce8
	if (!ctx.cr6.eq) goto loc_821E7CE8;
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// stwx r26,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r26.u32);
loc_821E7CE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e78c0
	ctx.lr = 0x821E7CF0;
	sub_821E78C0(ctx, base);
	// b 0x821e7d60
	goto loc_821E7D60;
loc_821E7CF4:
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239cf8
	ctx.lr = 0x821E7D00;
	sub_82239CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7d1c
	if (!ctx.cr6.eq) goto loc_821E7D1C;
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r26,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r26.u32);
	// bl 0x821e78c0
	ctx.lr = 0x821E7D18;
	sub_821E78C0(ctx, base);
	// b 0x821e7d60
	goto loc_821E7D60;
loc_821E7D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e78c0
	ctx.lr = 0x821E7D24;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7d38
	if (!ctx.cr6.eq) goto loc_821E7D38;
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x821e7d60
	goto loc_821E7D60;
loc_821E7D38:
	// lwz r10,22228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// stwx r25,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r25.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,22228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-28(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28, ctx.r9.u32);
	// lwz r7,22228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
loc_821E7D60:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 28, ctx.xer);
	// blt cr6,0x821e7c10
	if (ctx.cr6.lt) goto loc_821E7C10;
loc_821E7D70:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821E7D80"))) PPC_WEAK_FUNC(sub_821E7D80);
PPC_FUNC_IMPL(__imp__sub_821E7D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821E7D88;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x821e7dac
	if (!ctx.cr6.eq) goto loc_821E7DAC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821E7DAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821E7DB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e7dec
	if (!ctx.cr6.eq) goto loc_821E7DEC;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821E7DDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821E7DEC:
	// bl 0x8241dd3c
	ctx.lr = 0x821E7DF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821E7E00"))) PPC_WEAK_FUNC(sub_821E7E00);
PPC_FUNC_IMPL(__imp__sub_821E7E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,24998
	ctx.r4.s64 = 24998;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E7E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r8,128
	ctx.r8.s64 = 128;
	// bl 0x82256be8
	ctx.lr = 0x821E7E50;
	sub_82256BE8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// li r7,2066
	ctx.r7.s64 = 2066;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13
	ctx.r5.s64 = ctx.r11.s64 + 13;
	// bl 0x821e7648
	ctx.lr = 0x821E7E80;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7ed0
	if (ctx.cr6.eq) goto loc_821E7ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x821e7960
	ctx.lr = 0x821E7E98;
	sub_821E7960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821e7ebc
	if (!ctx.cr6.eq) goto loc_821E7EBC;
	// bl 0x821e78c0
	ctx.lr = 0x821E7EA8;
	sub_821E78C0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E7EBC:
	// bl 0x821e78c0
	ctx.lr = 0x821E7EC0;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7ed0
	if (ctx.cr6.eq) goto loc_821E7ED0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E7ED0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7EE4"))) PPC_WEAK_FUNC(sub_821E7EE4);
PPC_FUNC_IMPL(__imp__sub_821E7EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7EE8"))) PPC_WEAK_FUNC(sub_821E7EE8);
PPC_FUNC_IMPL(__imp__sub_821E7EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,24998
	ctx.r4.s64 = 24998;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E7F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r8,128
	ctx.r8.s64 = 128;
	// bl 0x82256be8
	ctx.lr = 0x821E7F38;
	sub_82256BE8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13
	ctx.r5.s64 = ctx.r11.s64 + 13;
	// bl 0x821e7648
	ctx.lr = 0x821E7F68;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7fa8
	if (ctx.cr6.eq) goto loc_821E7FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e7a38
	ctx.lr = 0x821E7F80;
	sub_821E7A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821e7f94
	if (!ctx.cr6.eq) goto loc_821E7F94;
	// bl 0x821e78c0
	ctx.lr = 0x821E7F90;
	sub_821E78C0(ctx, base);
	// b 0x821e7fa8
	goto loc_821E7FA8;
loc_821E7F94:
	// bl 0x821e78c0
	ctx.lr = 0x821E7F98;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7fa8
	if (ctx.cr6.eq) goto loc_821E7FA8;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E7FA8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821e7fd0
	if (!ctx.cr6.eq) goto loc_821E7FD0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256770
	ctx.lr = 0x821E7FC0;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7fd0
	if (ctx.cr6.eq) goto loc_821E7FD0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E7FD0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7FE4"))) PPC_WEAK_FUNC(sub_821E7FE4);
PPC_FUNC_IMPL(__imp__sub_821E7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7FE8"))) PPC_WEAK_FUNC(sub_821E7FE8);
PPC_FUNC_IMPL(__imp__sub_821E7FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821E7FF0;
	sub_82248774(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r3,112
	ctx.r23.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r23,-8
	ctx.r11.s64 = ctx.r23.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E8010:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821e8010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8010;
	// addi r25,r31,21756
	ctx.r25.s64 = ctx.r31.s64 + 21756;
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82248f70
	ctx.lr = 0x821E802C;
	sub_82248F70(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,70
	ctx.r7.s64 = 70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82256760
	ctx.lr = 0x821E804C;
	sub_82256760(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e8258
	if (!ctx.cr6.eq) goto loc_821E8258;
	// stw r27,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r27.u32);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,21560
	ctx.r5.s64 = 21560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82256f58
	ctx.lr = 0x821E8074;
	sub_82256F58(ctx, base);
	// li r24,20
	ctx.r24.s64 = 20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e808c
	if (ctx.cr6.eq) goto loc_821E808C;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// b 0x821e821c
	goto loc_821E821C;
loc_821E808C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r11.u32);
	// ble cr6,0x821e81a8
	if (!ctx.cr6.gt) goto loc_821E81A8;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_821E80B0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// bl 0x8218a360
	ctx.lr = 0x821E80C0;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e8194
	if (!ctx.cr6.eq) goto loc_821E8194;
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// li r4,24998
	ctx.r4.s64 = 24998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E80E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r8,128
	ctx.r8.s64 = 128;
	// bl 0x82256be8
	ctx.lr = 0x821E8100;
	sub_82256BE8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r11,13
	ctx.r5.s64 = ctx.r11.s64 + 13;
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x821e7648
	ctx.lr = 0x821E8134;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8254
	if (ctx.cr6.eq) goto loc_821E8254;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r3,22064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22064);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822602e8
	ctx.lr = 0x821E8150;
	sub_822602E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821e8250
	if (ctx.cr6.eq) goto loc_821E8250;
	// bl 0x821e78c0
	ctx.lr = 0x821E8160;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8254
	if (ctx.cr6.eq) goto loc_821E8254;
	// lwz r11,21752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21752);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e8188
	if (ctx.cr6.eq) goto loc_821E8188;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822602a0
	ctx.lr = 0x821E8180;
	sub_822602A0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821e8194
	if (!ctx.cr6.eq) goto loc_821E8194;
loc_821E8188:
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
loc_821E8194:
	// lwz r11,21752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21752);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,308
	ctx.r30.s64 = ctx.r30.s64 + 308;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e80b0
	if (ctx.cr6.lt) goto loc_821E80B0;
loc_821E81A8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821E81B0:
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x821E81BC;
	sub_822AA648(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256770
	ctx.lr = 0x821E81C8;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e81d4
	if (!ctx.cr6.eq) goto loc_821E81D4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821E81D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// blt cr6,0x821e81b0
	if (ctx.cr6.lt) goto loc_821E81B0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bgt cr6,0x821e8254
	if (ctx.cr6.gt) goto loc_821E8254;
	// lwz r11,21752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21752);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e8254
	if (ctx.cr6.eq) goto loc_821E8254;
	// li r10,18
	ctx.r10.s64 = 18;
	// mulli r11,r26,308
	ctx.r11.s64 = ctx.r26.s64 * 308;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82248a40
	ctx.lr = 0x821E8214;
	sub_82248A40(ctx, base);
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_821E821C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82088268
	ctx.lr = 0x821E8224;
	sub_82088268(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821e8260
	if (!ctx.cr6.eq) goto loc_821E8260;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256770
	ctx.lr = 0x821E823C;
	sub_82256770(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8260
	if (ctx.cr6.eq) goto loc_821E8260;
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821E8250:
	// bl 0x821e78c0
	ctx.lr = 0x821E8254;
	sub_821E78C0(ctx, base);
loc_821E8254:
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
loc_821E8258:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E8260:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821E8268"))) PPC_WEAK_FUNC(sub_821E8268);
PPC_FUNC_IMPL(__imp__sub_821E8268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E8270;
	sub_82248788(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e82e8
	if (ctx.cr6.eq) goto loc_821E82E8;
	// lwz r11,22208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22208);
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x821e82c8
	if (ctx.cr6.eq) goto loc_821E82C8;
	// bctrl 
	ctx.lr = 0x821E82AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,-10208
	ctx.r5.s64 = ctx.r9.s64 + -10208;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8218a5f0
	ctx.lr = 0x821E82C4;
	sub_8218A5F0(ctx, base);
	// b 0x821e82fc
	goto loc_821E82FC;
loc_821E82C8:
	// bctrl 
	ctx.lr = 0x821E82CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r9,-10216
	ctx.r5.s64 = ctx.r9.s64 + -10216;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8218a5f0
	ctx.lr = 0x821E82E4;
	sub_8218A5F0(ctx, base);
	// b 0x821e82fc
	goto loc_821E82FC;
loc_821E82E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10220
	ctx.r5.s64 = ctx.r11.s64 + -10220;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8218a5f0
	ctx.lr = 0x821E82FC;
	sub_8218A5F0(ctx, base);
loc_821E82FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r29,16384
	ctx.r29.s64 = 1073741824;
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// bgt cr6,0x821e84c4
	if (ctx.cr6.gt) goto loc_821E84C4;
	// beq cr6,0x821e84a0
	if (ctx.cr6.eq) goto loc_821E84A0;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x821e83b8
	if (ctx.cr6.eq) goto loc_821E83B8;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bne cr6,0x821e8528
	if (!ctx.cr6.eq) goto loc_821E8528;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r11,225
	ctx.r5.s64 = ctx.r11.s64 + 225;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8338;
	sub_8218A5F0(ctx, base);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r9,-10228
	ctx.r5.s64 = ctx.r9.s64 + -10228;
	// addi r6,r31,22076
	ctx.r6.s64 = ctx.r31.s64 + 22076;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8218a5f0
	ctx.lr = 0x821E836C;
	sub_8218A5F0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,267
	ctx.r5.s64 = ctx.r10.s64 + 267;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8390;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E83B0;
	sub_82256BE8(ctx, base);
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// b 0x821e8528
	goto loc_821E8528;
loc_821E83B8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r11,55
	ctx.r5.s64 = ctx.r11.s64 + 55;
	// bl 0x8218a5f0
	ctx.lr = 0x821E83D0;
	sub_8218A5F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218f0b8
	ctx.lr = 0x821E83D8;
	sub_8218F0B8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,26852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e8410
	if (ctx.cr6.eq) goto loc_821E8410;
	// bl 0x8218f0b0
	ctx.lr = 0x821E83F4;
	sub_8218F0B0(ctx, base);
	// addi r30,r3,-2000
	ctx.r30.s64 = ctx.r3.s64 + -2000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8234a248
	ctx.lr = 0x821E8400;
	sub_8234A248(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82229b40
	ctx.lr = 0x821E840C;
	sub_82229B40(ctx, base);
	// b 0x821e842c
	goto loc_821E842C;
loc_821E8410:
	// bl 0x8218f0b0
	ctx.lr = 0x821E8414;
	sub_8218F0B0(ctx, base);
	// addi r30,r3,-2000
	ctx.r30.s64 = ctx.r3.s64 + -2000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82229b40
	ctx.lr = 0x821E8420;
	sub_82229B40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8234a248
	ctx.lr = 0x821E842C;
	sub_8234A248(ctx, base);
loc_821E842C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r31,22076
	ctx.r6.s64 = ctx.r31.s64 + 22076;
	// addi r5,r11,-10248
	ctx.r5.s64 = ctx.r11.s64 + -10248;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8450;
	sub_8218A5F0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,97
	ctx.r5.s64 = ctx.r10.s64 + 97;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8474;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E8494;
	sub_82256BE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8209eda0
	ctx.lr = 0x821E849C;
	sub_8209EDA0(ctx, base);
	// b 0x821e8528
	goto loc_821E8528;
loc_821E84A0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r11,395
	ctx.r5.s64 = ctx.r11.s64 + 395;
	// bl 0x8218a5f0
	ctx.lr = 0x821E84B8;
	sub_8218A5F0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,437
	ctx.r5.s64 = ctx.r11.s64 + 437;
	// b 0x821e84ec
	goto loc_821E84EC;
loc_821E84C4:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x821e8528
	if (!ctx.cr6.eq) goto loc_821E8528;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r11,565
	ctx.r5.s64 = ctx.r11.s64 + 565;
	// bl 0x8218a5f0
	ctx.lr = 0x821E84E4;
	sub_8218A5F0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,607
	ctx.r5.s64 = ctx.r11.s64 + 607;
loc_821E84EC:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r31,22076
	ctx.r8.s64 = ctx.r31.s64 + 22076;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8508;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E8528;
	sub_82256BE8(ctx, base);
loc_821E8528:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256768
	ctx.lr = 0x821E8534;
	sub_82256768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8550
	if (ctx.cr6.eq) goto loc_821E8550;
	// li r11,7
	ctx.r11.s64 = 7;
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821E8550:
	// lwz r11,22212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22212);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,2066
	ctx.r7.s64 = 2066;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7648
	ctx.lr = 0x821E857C;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e858c
	if (ctx.cr6.eq) goto loc_821E858C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E858C:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E8594"))) PPC_WEAK_FUNC(sub_821E8594);
PPC_FUNC_IMPL(__imp__sub_821E8594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8598"))) PPC_WEAK_FUNC(sub_821E8598);
PPC_FUNC_IMPL(__imp__sub_821E8598) {
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
	// bl 0x821e78c0
	ctx.lr = 0x821E85B0;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8610
	if (ctx.cr6.eq) goto loc_821E8610;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,140
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 140, ctx.xer);
	// beq cr6,0x821e8610
	if (ctx.cr6.eq) goto loc_821E8610;
	// lwz r11,22068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22068);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// beq cr6,0x821e85f4
	if (ctx.cr6.eq) goto loc_821E85F4;
	// li r11,5
	ctx.r11.s64 = 5;
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
loc_821E85F4:
	// li r11,9
	ctx.r11.s64 = 9;
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
loc_821E8610:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E862C"))) PPC_WEAK_FUNC(sub_821E862C);
PPC_FUNC_IMPL(__imp__sub_821E862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8630"))) PPC_WEAK_FUNC(sub_821E8630);
PPC_FUNC_IMPL(__imp__sub_821E8630) {
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
	// bl 0x821e78c0
	ctx.lr = 0x821E8648;
	sub_821E78C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r31,21756
	ctx.r4.s64 = ctx.r31.s64 + 21756;
	// bl 0x82256748
	ctx.lr = 0x821E8658;
	sub_82256748(ctx, base);
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// bgt cr6,0x821e8684
	if (ctx.cr6.gt) goto loc_821E8684;
	// beq cr6,0x821e86a8
	if (ctx.cr6.eq) goto loc_821E86A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e867c
	if (ctx.cr6.eq) goto loc_821E867C;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x821e86a8
	if (ctx.cr6.eq) goto loc_821E86A8;
	// cmplwi cr6,r3,1110
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1110, ctx.xer);
	// b 0x821e86a0
	goto loc_821E86A0;
loc_821E867C:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821e86ac
	goto loc_821E86AC;
loc_821E8684:
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// beq cr6,0x821e86a8
	if (ctx.cr6.eq) goto loc_821E86A8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,21
	ctx.r10.u64 = ctx.r11.u64 | 21;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e86a8
	if (ctx.cr0.eq) goto loc_821E86A8;
	// cmplwi cr6,r11,1089
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1089, ctx.xer);
loc_821E86A0:
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x821e86ac
	if (!ctx.cr6.eq) goto loc_821E86AC;
loc_821E86A8:
	// li r11,17
	ctx.r11.s64 = 17;
loc_821E86AC:
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

__attribute__((alias("__imp__sub_821E86C4"))) PPC_WEAK_FUNC(sub_821E86C4);
PPC_FUNC_IMPL(__imp__sub_821E86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E86C8"))) PPC_WEAK_FUNC(sub_821E86C8);
PPC_FUNC_IMPL(__imp__sub_821E86C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,22220(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e7ae8
	ctx.lr = 0x821E86E8;
	sub_821E7AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8710
	if (ctx.cr6.eq) goto loc_821E8710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x821e7960
	ctx.lr = 0x821E8700;
	sub_821E7960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8710
	if (ctx.cr6.eq) goto loc_821E8710;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E8710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8724"))) PPC_WEAK_FUNC(sub_821E8724);
PPC_FUNC_IMPL(__imp__sub_821E8724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8728"))) PPC_WEAK_FUNC(sub_821E8728);
PPC_FUNC_IMPL(__imp__sub_821E8728) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,22220(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e7ae8
	ctx.lr = 0x821E8748;
	sub_821E7AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8770
	if (ctx.cr6.eq) goto loc_821E8770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e7a38
	ctx.lr = 0x821E8760;
	sub_821E7A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8770
	if (ctx.cr6.eq) goto loc_821E8770;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E8770:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8784"))) PPC_WEAK_FUNC(sub_821E8784);
PPC_FUNC_IMPL(__imp__sub_821E8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8788"))) PPC_WEAK_FUNC(sub_821E8788);
PPC_FUNC_IMPL(__imp__sub_821E8788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E8790;
	sub_82248788(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821E87A4:
	// lwz r11,22228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22228);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821e885c
	if (!ctx.cr6.eq) goto loc_821E885C;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,565
	ctx.r5.s64 = ctx.r11.s64 + 565;
	// bl 0x8218a5f0
	ctx.lr = 0x821E87D0;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E87F0;
	sub_82256BE8(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7648
	ctx.lr = 0x821E8818;
	sub_821E7648(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e8834
	if (ctx.cr6.eq) goto loc_821E8834;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821e8834
	if (ctx.cr6.eq) goto loc_821E8834;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821e887c
	if (!ctx.cr6.eq) goto loc_821E887C;
loc_821E8834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e78c0
	ctx.lr = 0x821E883C;
	sub_821E78C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e887c
	if (ctx.cr6.eq) goto loc_821E887C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8630
	ctx.lr = 0x821E884C;
	sub_821E8630(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821e8874
	if (!ctx.cr6.eq) goto loc_821E8874;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_821E885C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,28
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 28, ctx.xer);
	// blt cr6,0x821e87a4
	if (ctx.cr6.lt) goto loc_821E87A4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E8874:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821E887C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E888C"))) PPC_WEAK_FUNC(sub_821E888C);
PPC_FUNC_IMPL(__imp__sub_821E888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8890"))) PPC_WEAK_FUNC(sub_821E8890);
PPC_FUNC_IMPL(__imp__sub_821E8890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,128
	ctx.r30.s64 = 128;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// bgt cr6,0x821e8928
	if (ctx.cr6.gt) goto loc_821E8928;
	// beq cr6,0x821e891c
	if (ctx.cr6.eq) goto loc_821E891C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x821e8910
	if (ctx.cr6.eq) goto loc_821E8910;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x821e8968
	if (!ctx.cr6.eq) goto loc_821E8968;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r11,225
	ctx.r5.s64 = ctx.r11.s64 + 225;
	// bl 0x8218a5f0
	ctx.lr = 0x821E88E4;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E8904;
	sub_82256BE8(ctx, base);
	// lis r30,24576
	ctx.r30.s64 = 1610612736;
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
	// b 0x821e8968
	goto loc_821E8968;
loc_821E8910:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,55
	ctx.r5.s64 = ctx.r11.s64 + 55;
	// b 0x821e8938
	goto loc_821E8938;
loc_821E891C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,395
	ctx.r5.s64 = ctx.r11.s64 + 395;
	// b 0x821e8938
	goto loc_821E8938;
loc_821E8928:
	// cmpwi cr6,r11,133
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 133, ctx.xer);
	// bne cr6,0x821e8968
	if (!ctx.cr6.eq) goto loc_821E8968;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,565
	ctx.r5.s64 = ctx.r11.s64 + 565;
loc_821E8938:
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a5f0
	ctx.lr = 0x821E8948;
	sub_8218A5F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x821E8968;
	sub_82256BE8(ctx, base);
loc_821E8968:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82256768
	ctx.lr = 0x821E8974;
	sub_82256768(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8988
	if (ctx.cr6.eq) goto loc_821E8988;
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821e89f0
	goto loc_821E89F0;
loc_821E8988:
	// lwz r11,22212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22212);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7648
	ctx.lr = 0x821E89B4;
	sub_821E7648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e89f4
	if (ctx.cr6.eq) goto loc_821E89F4;
	// lwz r11,22216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e89ec
	if (ctx.cr6.eq) goto loc_821E89EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6f98
	ctx.lr = 0x821E89D0;
	sub_821E6F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e89ec
	if (!ctx.cr6.eq) goto loc_821E89EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x821e8598
	ctx.lr = 0x821E89E4;
	sub_821E8598(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// b 0x821e89f4
	goto loc_821E89F4;
loc_821E89EC:
	// li r11,9
	ctx.r11.s64 = 9;
loc_821E89F0:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821E89F4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8A0C"))) PPC_WEAK_FUNC(sub_821E8A0C);
PPC_FUNC_IMPL(__imp__sub_821E8A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8A10"))) PPC_WEAK_FUNC(sub_821E8A10);
PPC_FUNC_IMPL(__imp__sub_821E8A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E8A18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8218e200
	ctx.lr = 0x821E8A28;
	sub_8218E200(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x821E8A3C;
	sub_82081590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r8,r9,-10200
	ctx.r8.s64 = ctx.r9.s64 + -10200;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,22064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22064, ctx.r11.u32);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r30.u32);
	// stw r30,22072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22072, ctx.r30.u32);
	// stw r30,22220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22220, ctx.r30.u32);
	// stw r30,22224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22224, ctx.r30.u32);
	// stw r30,22228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22228, ctx.r30.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_821E8A98:
	// stdu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821e8a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8A98;
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-796(r11)
	PPC_STORE_U32(ctx.r11.u32 + -796, ctx.r31.u32);
	// bl 0x8218dd90
	ctx.lr = 0x821E8AB8;
	sub_8218DD90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E8AC4"))) PPC_WEAK_FUNC(sub_821E8AC4);
PPC_FUNC_IMPL(__imp__sub_821E8AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8AC8"))) PPC_WEAK_FUNC(sub_821E8AC8);
PPC_FUNC_IMPL(__imp__sub_821E8AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E8AD0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-10200
	ctx.r10.s64 = ctx.r11.s64 + -10200;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-796(r9)
	PPC_STORE_U32(ctx.r9.u32 + -796, ctx.r29.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821e8b18
	if (ctx.cr6.eq) goto loc_821E8B18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821E8B14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_821E8B18:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e8b28
	if (ctx.cr6.eq) goto loc_821E8B28;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_821E8B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218dd78
	ctx.lr = 0x821E8B30;
	sub_8218DD78(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e8b4c
	if (ctx.cr6.eq) goto loc_821E8B4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E8B48;
	sub_82183E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E8B4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E8B54"))) PPC_WEAK_FUNC(sub_821E8B54);
PPC_FUNC_IMPL(__imp__sub_821E8B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8B58"))) PPC_WEAK_FUNC(sub_821E8B58);
PPC_FUNC_IMPL(__imp__sub_821E8B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82183850
	ctx.lr = 0x821E8B78;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e8b90
	if (ctx.cr6.eq) goto loc_821E8B90;
	// li r3,22232
	ctx.r3.s64 = 22232;
	// bl 0x82183448
	ctx.lr = 0x821E8B8C;
	sub_82183448(ctx, base);
	// b 0x821e8b98
	goto loc_821E8B98;
loc_821E8B90:
	// li r3,1390
	ctx.r3.s64 = 1390;
	// bl 0x821845a0
	ctx.lr = 0x821E8B98;
	sub_821845A0(ctx, base);
loc_821E8B98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8ba8
	if (ctx.cr6.eq) goto loc_821E8BA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e8a10
	ctx.lr = 0x821E8BA8;
	sub_821E8A10(ctx, base);
loc_821E8BA8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8BCC"))) PPC_WEAK_FUNC(sub_821E8BCC);
PPC_FUNC_IMPL(__imp__sub_821E8BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8BD0"))) PPC_WEAK_FUNC(sub_821E8BD0);
PPC_FUNC_IMPL(__imp__sub_821E8BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821E8BD8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82088650
	ctx.lr = 0x821E8BE0;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x821E8BE8;
	sub_82182F58(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,9
	ctx.r28.s64 = 9;
	// li r26,5
	ctx.r26.s64 = 5;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,-796(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
loc_821E8C00:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e8c18
	if (!ctx.cr6.eq) goto loc_821E8C18;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82088648
	ctx.lr = 0x821E8C14;
	sub_82088648(ctx, base);
	// b 0x821e8c00
	goto loc_821E8C00;
loc_821E8C18:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bgt cr6,0x821e8e18
	if (ctx.cr6.gt) goto loc_821E8E18;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29628
	ctx.r12.s64 = ctx.r12.s64 + -29628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-29464(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29464);
	// lwz r16,-29452(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29452);
	// lwz r16,-29452(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29452);
	// lwz r16,-29440(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29440);
	// lwz r16,-29440(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29440);
	// lwz r16,-29160(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29160);
	// lwz r16,-29428(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29428);
	// lwz r16,-29428(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29428);
	// lwz r16,-29416(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29416);
	// lwz r16,-29404(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29404);
	// lwz r16,-29392(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29392);
	// lwz r16,-29360(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29360);
	// lwz r16,-29328(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29328);
	// lwz r16,-29316(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29316);
	// lwz r16,-29304(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29304);
	// lwz r16,-29292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	// lwz r16,-29280(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29280);
	// lwz r16,-29248(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29248);
	// lwz r16,-29328(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29328);
	// lwz r16,-29316(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29316);
	// lwz r16,-29304(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29304);
	// lwz r16,-29292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	// lwz r16,-29204(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29204);
	// lwz r16,-29192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29192);
	// lwz r16,-29216(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29216);
	// lwz r16,-29328(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29328);
	// lwz r16,-29316(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29316);
	// lwz r16,-29304(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29304);
	// lwz r16,-29292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	// lwz r16,-29280(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29280);
	// lwz r16,-29248(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29248);
	// lwz r16,-29328(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29328);
	// lwz r16,-29316(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29316);
	// lwz r16,-29304(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29304);
	// lwz r16,-29292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	// lwz r16,-29280(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29280);
	// lwz r16,-29248(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29248);
	// lwz r16,-29216(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29216);
	// lwz r16,-29180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29180);
	// lwz r16,-29168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29168);
	// lwz r16,-29292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7098
	ctx.lr = 0x821E8CF0;
	sub_821E7098(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7e00
	ctx.lr = 0x821E8CFC;
	sub_821E7E00(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7ee8
	ctx.lr = 0x821E8D08;
	sub_821E7EE8(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e74c8
	ctx.lr = 0x821E8D14;
	sub_821E74C8(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7fe8
	ctx.lr = 0x821E8D20;
	sub_821E7FE8(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6f48
	ctx.lr = 0x821E8D2C;
	sub_821E6F48(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,22220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7ae8
	ctx.lr = 0x821E8D40;
	sub_821E7AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8e18
	if (ctx.cr6.eq) goto loc_821E8E18;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// b 0x821e8e18
	goto loc_821E8E18;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,22220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7ae8
	ctx.lr = 0x821E8D60;
	sub_821E7AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8e18
	if (ctx.cr6.eq) goto loc_821E8E18;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7210
	ctx.lr = 0x821E8D78;
	sub_821E7210(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8268
	ctx.lr = 0x821E8D84;
	sub_821E8268(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8890
	ctx.lr = 0x821E8D90;
	sub_821E8890(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8598
	ctx.lr = 0x821E8D9C;
	sub_821E8598(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x821e7960
	ctx.lr = 0x821E8DB0;
	sub_821E7960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8e18
	if (ctx.cr6.eq) goto loc_821E8E18;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821e7a38
	ctx.lr = 0x821E8DD0;
	sub_821E7A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8e18
	if (ctx.cr6.eq) goto loc_821E8E18;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8630
	ctx.lr = 0x821E8DE8;
	sub_821E8630(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e86c8
	ctx.lr = 0x821E8DF4;
	sub_821E86C8(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8728
	ctx.lr = 0x821E8E00;
	sub_821E8728(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7be8
	ctx.lr = 0x821E8E0C;
	sub_821E7BE8(ctx, base);
	// b 0x821e8e18
	goto loc_821E8E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8788
	ctx.lr = 0x821E8E18;
	sub_821E8788(ctx, base);
loc_821E8E18:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821E8E24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821E8E34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// b 0x821e8c00
	goto loc_821E8C00;
}

__attribute__((alias("__imp__sub_821E8E3C"))) PPC_WEAK_FUNC(sub_821E8E3C);
PPC_FUNC_IMPL(__imp__sub_821E8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8E40"))) PPC_WEAK_FUNC(sub_821E8E40);
PPC_FUNC_IMPL(__imp__sub_821E8E40) {
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
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8e74
	if (ctx.cr6.eq) goto loc_821E8E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8E74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -792, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8E90"))) PPC_WEAK_FUNC(sub_821E8E90);
PPC_FUNC_IMPL(__imp__sub_821E8E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E8E98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821E8EA8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821e8ef8
	if (ctx.cr6.eq) goto loc_821E8EF8;
	// lwz r3,-52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8ed0
	if (ctx.cr6.eq) goto loc_821E8ED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8ED0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8ef4
	if (ctx.cr6.eq) goto loc_821E8EF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8EF4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_821E8EF8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// blt cr6,0x821e8ea8
	if (ctx.cr6.lt) goto loc_821E8EA8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E8F10"))) PPC_WEAK_FUNC(sub_821E8F10);
PPC_FUNC_IMPL(__imp__sub_821E8F10) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821e8f4c
	if (ctx.cr6.lt) goto loc_821E8F4C;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x821e8f4c
	if (!ctx.cr6.lt) goto loc_821E8F4C;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e8f4c
	if (ctx.cr6.eq) goto loc_821E8F4C;
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821E8F4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8F54"))) PPC_WEAK_FUNC(sub_821E8F54);
PPC_FUNC_IMPL(__imp__sub_821E8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8F58"))) PPC_WEAK_FUNC(sub_821E8F58);
PPC_FUNC_IMPL(__imp__sub_821E8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E8F60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821e8fe0
	if (ctx.cr6.lt) goto loc_821E8FE0;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x821e8fe0
	if (!ctx.cr6.lt) goto loc_821E8FE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8fe0
	if (ctx.cr6.eq) goto loc_821E8FE0;
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8fac
	if (ctx.cr6.eq) goto loc_821E8FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8FAC:
	// addi r11,r30,13
	ctx.r11.s64 = ctx.r30.s64 + 13;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8fdc
	if (ctx.cr6.eq) goto loc_821E8FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E8FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E8FDC:
	// stwx r28,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u32);
loc_821E8FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E8FE8"))) PPC_WEAK_FUNC(sub_821E8FE8);
PPC_FUNC_IMPL(__imp__sub_821E8FE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821e9008
	if (ctx.cr6.lt) goto loc_821E9008;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x821e9008
	if (!ctx.cr6.lt) goto loc_821E9008;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_821E9008:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9010"))) PPC_WEAK_FUNC(sub_821E9010);
PPC_FUNC_IMPL(__imp__sub_821E9010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-10196
	ctx.r10.s64 = ctx.r11.s64 + -10196;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821e8e90
	ctx.lr = 0x821E9038;
	sub_821E8E90(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9058
	if (ctx.cr6.eq) goto loc_821E9058;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9058:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9080
	if (ctx.cr6.eq) goto loc_821E9080;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9080:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b208
	ctx.lr = 0x821E908C;
	sub_8218B208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E90A4"))) PPC_WEAK_FUNC(sub_821E90A4);
PPC_FUNC_IMPL(__imp__sub_821E90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E90A8"))) PPC_WEAK_FUNC(sub_821E90A8);
PPC_FUNC_IMPL(__imp__sub_821E90A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821e90fc
	if (ctx.cr6.lt) goto loc_821E90FC;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bge cr6,0x821e90fc
	if (!ctx.cr6.lt) goto loc_821E90FC;
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e90fc
	if (ctx.cr6.eq) goto loc_821E90FC;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e90fc
	if (ctx.cr6.eq) goto loc_821E90FC;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e90fc
	if (ctx.cr6.eq) goto loc_821E90FC;
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821E90FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9104"))) PPC_WEAK_FUNC(sub_821E9104);
PPC_FUNC_IMPL(__imp__sub_821E9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9108"))) PPC_WEAK_FUNC(sub_821E9108);
PPC_FUNC_IMPL(__imp__sub_821E9108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e911c
	if (ctx.cr6.eq) goto loc_821E911C;
	// lwz r3,208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// blr 
	return;
loc_821E911C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9124"))) PPC_WEAK_FUNC(sub_821E9124);
PPC_FUNC_IMPL(__imp__sub_821E9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9128"))) PPC_WEAK_FUNC(sub_821E9128);
PPC_FUNC_IMPL(__imp__sub_821E9128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9130;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r11,26852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,-10108
	ctx.r11.s64 = ctx.r10.s64 + -10108;
	// addi r10,r8,-10116
	ctx.r10.s64 = ctx.r8.s64 + -10116;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r7,-10124
	ctx.r11.s64 = ctx.r7.s64 + -10124;
	// addi r3,r9,-10132
	ctx.r3.s64 = ctx.r9.s64 + -10132;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r7,r5,-10140
	ctx.r7.s64 = ctx.r5.s64 + -10140;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r9,r6,-10148
	ctx.r9.s64 = ctx.r6.s64 + -10148;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r6,r4,-10156
	ctx.r6.s64 = ctx.r4.s64 + -10156;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r28,-10164
	ctx.r5.s64 = ctx.r28.s64 + -10164;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwzx r6,r8,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8218a5f0
	ctx.lr = 0x821E91C8;
	sub_8218A5F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188748
	ctx.lr = 0x821E91D4;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e91f4
	if (!ctx.cr6.eq) goto loc_821E91F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-10176
	ctx.r5.s64 = ctx.r11.s64 + -10176;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821E91F4;
	sub_8218A5F0(ctx, base);
loc_821E91F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E91FC"))) PPC_WEAK_FUNC(sub_821E91FC);
PPC_FUNC_IMPL(__imp__sub_821E91FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9200"))) PPC_WEAK_FUNC(sub_821E9200);
PPC_FUNC_IMPL(__imp__sub_821E9200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e9218
	if (!ctx.cr6.eq) goto loc_821E9218;
loc_821E9210:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E9218:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e9210
	if (ctx.cr6.eq) goto loc_821E9210;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e9210
	if (ctx.cr6.eq) goto loc_821E9210;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e9210
	if (ctx.cr6.eq) goto loc_821E9210;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e9210
	if (ctx.cr6.eq) goto loc_821E9210;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
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

__attribute__((alias("__imp__sub_821E9260"))) PPC_WEAK_FUNC(sub_821E9260);
PPC_FUNC_IMPL(__imp__sub_821E9260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821e9010
	ctx.lr = 0x821E9280;
	sub_821E9010(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e929c
	if (ctx.cr6.eq) goto loc_821E929C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E9298;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E929C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E92B4"))) PPC_WEAK_FUNC(sub_821E92B4);
PPC_FUNC_IMPL(__imp__sub_821E92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E92B8"))) PPC_WEAK_FUNC(sub_821E92B8);
PPC_FUNC_IMPL(__imp__sub_821E92B8) {
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
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e9334
	if (ctx.cr6.eq) goto loc_821E9334;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9334
	if (ctx.cr6.eq) goto loc_821E9334;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e9334
	if (ctx.cr6.eq) goto loc_821E9334;
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e9334
	if (ctx.cr6.eq) goto loc_821E9334;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9318
	if (ctx.cr6.eq) goto loc_821E9318;
	// bl 0x820ed3d8
	ctx.lr = 0x821E9310;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e9334
	if (ctx.cr6.eq) goto loc_821E9334;
loc_821E9318:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e9334
	if (!ctx.cr6.eq) goto loc_821E9334;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x821E9334;
	sub_82109E00(ctx, base);
loc_821E9334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9348"))) PPC_WEAK_FUNC(sub_821E9348);
PPC_FUNC_IMPL(__imp__sub_821E9348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9350;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9378
	if (ctx.cr6.eq) goto loc_821E9378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9378:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e93a0
	if (ctx.cr6.eq) goto loc_821E93A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E93A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E93A0:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E93AC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E93B8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E93BC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e93d4
	if (ctx.cr6.eq) goto loc_821E93D4;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E93D0;
	sub_82183448(ctx, base);
	// b 0x821e93dc
	goto loc_821E93DC;
loc_821E93D4:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E93DC;
	sub_821845A0(ctx, base);
loc_821E93DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e93f0
	if (ctx.cr6.eq) goto loc_821E93F0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E93EC;
	sub_8210B8A8(ctx, base);
	// b 0x821e93f4
	goto loc_821E93F4;
loc_821E93F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E93F4:
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E93FC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9414
	if (ctx.cr6.eq) goto loc_821E9414;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9410;
	sub_82183448(ctx, base);
	// b 0x821e941c
	goto loc_821E941C;
loc_821E9414:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E941C;
	sub_821845A0(ctx, base);
loc_821E941C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9434
	if (ctx.cr6.eq) goto loc_821E9434;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9430;
	sub_82110860(ctx, base);
	// b 0x821e9438
	goto loc_821E9438;
loc_821E9434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9438:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9444;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// bl 0x821e9128
	ctx.lr = 0x821E9454;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9470;
	sub_8210FFA0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E94A8;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E94C4;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E94E0;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-10100
	ctx.r4.s64 = ctx.r11.s64 + -10100;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E94F8;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9500"))) PPC_WEAK_FUNC(sub_821E9500);
PPC_FUNC_IMPL(__imp__sub_821E9500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9508;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9530
	if (ctx.cr6.eq) goto loc_821E9530;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9530:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9558
	if (ctx.cr6.eq) goto loc_821E9558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9558:
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9564;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9570;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9574;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e958c
	if (ctx.cr6.eq) goto loc_821E958C;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E9588;
	sub_82183448(ctx, base);
	// b 0x821e9594
	goto loc_821E9594;
loc_821E958C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E9594;
	sub_821845A0(ctx, base);
loc_821E9594:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e95a8
	if (ctx.cr6.eq) goto loc_821E95A8;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E95A4;
	sub_8210B8A8(ctx, base);
	// b 0x821e95ac
	goto loc_821E95AC;
loc_821E95A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E95AC:
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E95B4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e95cc
	if (ctx.cr6.eq) goto loc_821E95CC;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E95C8;
	sub_82183448(ctx, base);
	// b 0x821e95d4
	goto loc_821E95D4;
loc_821E95CC:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E95D4;
	sub_821845A0(ctx, base);
loc_821E95D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e95ec
	if (ctx.cr6.eq) goto loc_821E95EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E95E8;
	sub_82110860(ctx, base);
	// b 0x821e95f0
	goto loc_821E95F0;
loc_821E95EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E95F0:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E95FC;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-10068
	ctx.r3.s64 = ctx.r11.s64 + -10068;
	// bl 0x821e9128
	ctx.lr = 0x821E960C;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9628;
	sub_8210FFA0(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9660;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E967C;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10080
	ctx.r4.s64 = ctx.r11.s64 + -10080;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9694;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E969C"))) PPC_WEAK_FUNC(sub_821E969C);
PPC_FUNC_IMPL(__imp__sub_821E969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E96A0"))) PPC_WEAK_FUNC(sub_821E96A0);
PPC_FUNC_IMPL(__imp__sub_821E96A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E96A8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e96d0
	if (ctx.cr6.eq) goto loc_821E96D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E96D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E96D0:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e96f8
	if (ctx.cr6.eq) goto loc_821E96F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E96F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E96F8:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9704;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9710;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9714;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e972c
	if (ctx.cr6.eq) goto loc_821E972C;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E9728;
	sub_82183448(ctx, base);
	// b 0x821e9734
	goto loc_821E9734;
loc_821E972C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E9734;
	sub_821845A0(ctx, base);
loc_821E9734:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9748
	if (ctx.cr6.eq) goto loc_821E9748;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E9744;
	sub_8210B8A8(ctx, base);
	// b 0x821e974c
	goto loc_821E974C;
loc_821E9748:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E974C:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E9754;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e976c
	if (ctx.cr6.eq) goto loc_821E976C;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9768;
	sub_82183448(ctx, base);
	// b 0x821e9774
	goto loc_821E9774;
loc_821E976C:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E9774;
	sub_821845A0(ctx, base);
loc_821E9774:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e978c
	if (ctx.cr6.eq) goto loc_821E978C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9788;
	sub_82110860(ctx, base);
	// b 0x821e9790
	goto loc_821E9790;
loc_821E978C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9790:
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E979C;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// bl 0x821e9128
	ctx.lr = 0x821E97AC;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E97C8;
	sub_8210FFA0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9800;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E981C;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9838;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9850;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9858"))) PPC_WEAK_FUNC(sub_821E9858);
PPC_FUNC_IMPL(__imp__sub_821E9858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9860;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9888
	if (ctx.cr6.eq) goto loc_821E9888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9888:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e98b0
	if (ctx.cr6.eq) goto loc_821E98B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E98B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E98B0:
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E98BC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E98C8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E98CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e98e4
	if (ctx.cr6.eq) goto loc_821E98E4;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E98E0;
	sub_82183448(ctx, base);
	// b 0x821e98ec
	goto loc_821E98EC;
loc_821E98E4:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E98EC;
	sub_821845A0(ctx, base);
loc_821E98EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9900
	if (ctx.cr6.eq) goto loc_821E9900;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E98FC;
	sub_8210B8A8(ctx, base);
	// b 0x821e9904
	goto loc_821E9904;
loc_821E9900:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9904:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E990C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9924
	if (ctx.cr6.eq) goto loc_821E9924;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9920;
	sub_82183448(ctx, base);
	// b 0x821e992c
	goto loc_821E992C;
loc_821E9924:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E992C;
	sub_821845A0(ctx, base);
loc_821E992C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9944
	if (ctx.cr6.eq) goto loc_821E9944;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9940;
	sub_82110860(ctx, base);
	// b 0x821e9948
	goto loc_821E9948;
loc_821E9944:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9948:
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9954;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-10028
	ctx.r3.s64 = ctx.r11.s64 + -10028;
	// bl 0x821e9128
	ctx.lr = 0x821E9964;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9980;
	sub_8210FFA0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E99B8;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E99D4;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E99F0;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10040
	ctx.r4.s64 = ctx.r11.s64 + -10040;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9A08;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9A10"))) PPC_WEAK_FUNC(sub_821E9A10);
PPC_FUNC_IMPL(__imp__sub_821E9A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9A18;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9a40
	if (ctx.cr6.eq) goto loc_821E9A40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9A40:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9a68
	if (ctx.cr6.eq) goto loc_821E9A68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9A68:
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9A74;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9A80;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9A84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9a9c
	if (ctx.cr6.eq) goto loc_821E9A9C;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E9A98;
	sub_82183448(ctx, base);
	// b 0x821e9aa4
	goto loc_821E9AA4;
loc_821E9A9C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E9AA4;
	sub_821845A0(ctx, base);
loc_821E9AA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9ab8
	if (ctx.cr6.eq) goto loc_821E9AB8;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E9AB4;
	sub_8210B8A8(ctx, base);
	// b 0x821e9abc
	goto loc_821E9ABC;
loc_821E9AB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9ABC:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E9AC4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9adc
	if (ctx.cr6.eq) goto loc_821E9ADC;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9AD8;
	sub_82183448(ctx, base);
	// b 0x821e9ae4
	goto loc_821E9AE4;
loc_821E9ADC:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E9AE4;
	sub_821845A0(ctx, base);
loc_821E9AE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9afc
	if (ctx.cr6.eq) goto loc_821E9AFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9AF8;
	sub_82110860(ctx, base);
	// b 0x821e9b00
	goto loc_821E9B00;
loc_821E9AFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9B00:
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9B0C;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// bl 0x821e9128
	ctx.lr = 0x821E9B1C;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9B38;
	sub_8210FFA0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9B70;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9B8C;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9BA8;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10020
	ctx.r4.s64 = ctx.r11.s64 + -10020;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9BC0;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9BC8"))) PPC_WEAK_FUNC(sub_821E9BC8);
PPC_FUNC_IMPL(__imp__sub_821E9BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9BD0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9bf8
	if (ctx.cr6.eq) goto loc_821E9BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9BF8:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9c20
	if (ctx.cr6.eq) goto loc_821E9C20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9C20:
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9C2C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9C38;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9C3C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9c54
	if (ctx.cr6.eq) goto loc_821E9C54;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E9C50;
	sub_82183448(ctx, base);
	// b 0x821e9c5c
	goto loc_821E9C5C;
loc_821E9C54:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E9C5C;
	sub_821845A0(ctx, base);
loc_821E9C5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9c70
	if (ctx.cr6.eq) goto loc_821E9C70;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E9C6C;
	sub_8210B8A8(ctx, base);
	// b 0x821e9c74
	goto loc_821E9C74;
loc_821E9C70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9C74:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E9C7C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9c94
	if (ctx.cr6.eq) goto loc_821E9C94;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9C90;
	sub_82183448(ctx, base);
	// b 0x821e9c9c
	goto loc_821E9C9C;
loc_821E9C94:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E9C9C;
	sub_821845A0(ctx, base);
loc_821E9C9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9cb4
	if (ctx.cr6.eq) goto loc_821E9CB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9CB0;
	sub_82110860(ctx, base);
	// b 0x821e9cb8
	goto loc_821E9CB8;
loc_821E9CB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9CB8:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9CC4;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-9988
	ctx.r3.s64 = ctx.r11.s64 + -9988;
	// bl 0x821e9128
	ctx.lr = 0x821E9CD4;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9CF0;
	sub_8210FFA0(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9D28;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9D44;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9D60;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10000
	ctx.r4.s64 = ctx.r11.s64 + -10000;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9D78;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9D80"))) PPC_WEAK_FUNC(sub_821E9D80);
PPC_FUNC_IMPL(__imp__sub_821E9D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9D88;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9db0
	if (ctx.cr6.eq) goto loc_821E9DB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9DB0:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9dd8
	if (ctx.cr6.eq) goto loc_821E9DD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E9DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9DD8:
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9DE4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9DF0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9DF4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9e0c
	if (ctx.cr6.eq) goto loc_821E9E0C;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821E9E08;
	sub_82183448(ctx, base);
	// b 0x821e9e14
	goto loc_821E9E14;
loc_821E9E0C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821E9E14;
	sub_821845A0(ctx, base);
loc_821E9E14:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9e28
	if (ctx.cr6.eq) goto loc_821E9E28;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821E9E24;
	sub_8210B8A8(ctx, base);
	// b 0x821e9e2c
	goto loc_821E9E2C;
loc_821E9E28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9E2C:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821E9E34;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e9e4c
	if (ctx.cr6.eq) goto loc_821E9E4C;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821E9E48;
	sub_82183448(ctx, base);
	// b 0x821e9e54
	goto loc_821E9E54;
loc_821E9E4C:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821E9E54;
	sub_821845A0(ctx, base);
loc_821E9E54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9e6c
	if (ctx.cr6.eq) goto loc_821E9E6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821E9E68;
	sub_82110860(ctx, base);
	// b 0x821e9e70
	goto loc_821E9E70;
loc_821E9E6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E9E70:
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9E7C;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// bl 0x821e9128
	ctx.lr = 0x821E9E8C;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x821E9EA8;
	sub_8210FFA0(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r4,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9EE0;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9EFC;
	sub_82109308(ctx, base);
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821E9F18;
	sub_82109308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-9980
	ctx.r4.s64 = ctx.r11.s64 + -9980;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x821E9F30;
	sub_82106D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E9F38"))) PPC_WEAK_FUNC(sub_821E9F38);
PPC_FUNC_IMPL(__imp__sub_821E9F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E9F40;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x821E9F54;
	sub_8218AA18(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x821E9F58;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821E9F60;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9F6C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821E9F70;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821E9F7C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821E9F84;
	sub_821830F8(ctx, base);
	// li r4,7000
	ctx.r4.s64 = 7000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x821E9F90;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821e9fac
	if (ctx.cr6.eq) goto loc_821E9FAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x821E9FA4;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821e9fb0
	goto loc_821E9FB0;
loc_821E9FAC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E9FB0:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x821e9fc4
	if (ctx.cr6.lt) goto loc_821E9FC4;
	// bne cr6,0x821e9fcc
	if (!ctx.cr6.eq) goto loc_821E9FCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e9fc8
	goto loc_821E9FC8;
loc_821E9FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9FC8:
	// bl 0x821830f8
	ctx.lr = 0x821E9FCC;
	sub_821830F8(ctx, base);
loc_821E9FCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9FD4;
	sub_821837D0(ctx, base);
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821E9FDC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E9FE8;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8210b940
	ctx.lr = 0x821E9FF8;
	sub_8210B940(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821EA004;
	sub_82183E40(ctx, base);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82111408
	ctx.lr = 0x821EA018;
	sub_82111408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA020;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x821EA028;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EA034"))) PPC_WEAK_FUNC(sub_821EA034);
PPC_FUNC_IMPL(__imp__sub_821EA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA038"))) PPC_WEAK_FUNC(sub_821EA038);
PPC_FUNC_IMPL(__imp__sub_821EA038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821EA040;
	sub_82248770(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x821EA050;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r9,r11,-10196
	ctx.r9.s64 = ctx.r11.s64 + -10196;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,156
	ctx.r29.s64 = ctx.r31.s64 + 156;
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// addi r23,r31,104
	ctx.r23.s64 = ctx.r31.s64 + 104;
	// stw r24,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r24.u32);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r3,r4,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// addi r26,r29,24
	ctx.r26.s64 = ctx.r29.s64 + 24;
	// stw r24,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r24.u32);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// stw r24,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r24.u32);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r3,r4,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// stw r24,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r24.u32);
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
	// stw r24,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r24.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
loc_821EA114:
	// stw r24,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r24.u32);
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ea114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EA114;
	// lwz r22,48(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x821EA128;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA134;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821EA138;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ea150
	if (ctx.cr6.eq) goto loc_821EA150;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821EA14C;
	sub_82183448(ctx, base);
	// b 0x821ea158
	goto loc_821EA158;
loc_821EA150:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821EA158;
	sub_821845A0(ctx, base);
loc_821EA158:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea16c
	if (ctx.cr6.eq) goto loc_821EA16C;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8210b8a8
	ctx.lr = 0x821EA168;
	sub_8210B8A8(ctx, base);
	// b 0x821ea170
	goto loc_821EA170;
loc_821EA16C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821EA170:
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821EA178;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ea190
	if (ctx.cr6.eq) goto loc_821EA190;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x821EA18C;
	sub_82183448(ctx, base);
	// b 0x821ea198
	goto loc_821EA198;
loc_821EA190:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x821EA198;
	sub_821845A0(ctx, base);
loc_821EA198:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea1b0
	if (ctx.cr6.eq) goto loc_821EA1B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82110860
	ctx.lr = 0x821EA1AC;
	sub_82110860(ctx, base);
	// b 0x821ea1b4
	goto loc_821EA1B4;
loc_821EA1B0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821EA1B4:
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA1C0;
	sub_821837D0(ctx, base);
	// lwz r25,52(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,624(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea1d8
	if (ctx.cr6.eq) goto loc_821EA1D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821EA1D8;
	sub_82183E40(ctx, base);
loc_821EA1D8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r24,628(r25)
	PPC_STORE_U32(ctx.r25.u32 + 628, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,8880
	ctx.r9.s64 = ctx.r11.s64 + 8880;
	// stw r10,632(r25)
	PPC_STORE_U32(ctx.r25.u32 + 632, ctx.r10.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,624(r25)
	PPC_STORE_U32(ctx.r25.u32 + 624, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-9960
	ctx.r3.s64 = ctx.r8.s64 + -9960;
	// bl 0x821e9128
	ctx.lr = 0x821EA200;
	sub_821E9128(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x821EA210;
	sub_8218B2D0(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r3.u32);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821EA23C;
	sub_82109308(ctx, base);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82109308
	ctx.lr = 0x821EA258;
	sub_82109308(ctx, base);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821EA274;
	sub_82109308(ctx, base);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821EA290;
	sub_82109308(ctx, base);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821EA2AC;
	sub_82109308(ctx, base);
	// lwz r11,-780(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821EA2C8;
	sub_82109308(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821EA314"))) PPC_WEAK_FUNC(sub_821EA314);
PPC_FUNC_IMPL(__imp__sub_821EA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA318"))) PPC_WEAK_FUNC(sub_821EA318);
PPC_FUNC_IMPL(__imp__sub_821EA318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EA320;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ea384
	if (!ctx.cr6.eq) goto loc_821EA384;
	// bl 0x82183078
	ctx.lr = 0x821EA33C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA348;
	sub_821837D0(ctx, base);
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82080000
	ctx.lr = 0x821EA350;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea374
	if (ctx.cr6.eq) goto loc_821EA374;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ea038
	ctx.lr = 0x821EA360;
	sub_821EA038(ctx, base);
	// stw r3,-792(r30)
	PPC_STORE_U32(ctx.r30.u32 + -792, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA36C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821EA374:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-792(r30)
	PPC_STORE_U32(ctx.r30.u32 + -792, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821EA384;
	sub_821837D0(ctx, base);
loc_821EA384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EA38C"))) PPC_WEAK_FUNC(sub_821EA38C);
PPC_FUNC_IMPL(__imp__sub_821EA38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA390"))) PPC_WEAK_FUNC(sub_821EA390);
PPC_FUNC_IMPL(__imp__sub_821EA390) {
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
	// lwz r3,-788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea3c4
	if (ctx.cr6.eq) goto loc_821EA3C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EA3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EA3C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -788, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA3E0"))) PPC_WEAK_FUNC(sub_821EA3E0);
PPC_FUNC_IMPL(__imp__sub_821EA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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

__attribute__((alias("__imp__sub_821EA3F0"))) PPC_WEAK_FUNC(sub_821EA3F0);
PPC_FUNC_IMPL(__imp__sub_821EA3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA404"))) PPC_WEAK_FUNC(sub_821EA404);
PPC_FUNC_IMPL(__imp__sub_821EA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA408"))) PPC_WEAK_FUNC(sub_821EA408);
PPC_FUNC_IMPL(__imp__sub_821EA408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EA410;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82185740
	ctx.lr = 0x821EA428;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821859a0
	ctx.lr = 0x821EA43C;
	sub_821859A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-9920
	ctx.r8.s64 = ctx.r10.s64 + -9920;
	// addi r7,r9,-9928
	ctx.r7.s64 = ctx.r9.s64 + -9928;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EA48C"))) PPC_WEAK_FUNC(sub_821EA48C);
PPC_FUNC_IMPL(__imp__sub_821EA48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA490"))) PPC_WEAK_FUNC(sub_821EA490);
PPC_FUNC_IMPL(__imp__sub_821EA490) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821ea580
	sub_821EA580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA498"))) PPC_WEAK_FUNC(sub_821EA498);
PPC_FUNC_IMPL(__imp__sub_821EA498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821EA4A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -788);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ea514
	if (!ctx.cr6.eq) goto loc_821EA514;
	// bl 0x82183078
	ctx.lr = 0x821EA4C4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA4D0;
	sub_821837D0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x821EA4D8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea504
	if (ctx.cr6.eq) goto loc_821EA504;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ea408
	ctx.lr = 0x821EA4F0;
	sub_821EA408(ctx, base);
	// stw r3,-788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -788, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EA4FC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821EA504:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,-788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -788, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821EA514;
	sub_821837D0(ctx, base);
loc_821EA514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821EA51C"))) PPC_WEAK_FUNC(sub_821EA51C);
PPC_FUNC_IMPL(__imp__sub_821EA51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA520"))) PPC_WEAK_FUNC(sub_821EA520);
PPC_FUNC_IMPL(__imp__sub_821EA520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EA528;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,-792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x821EA54C;
	sub_821E8F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ea55c
	if (!ctx.cr6.eq) goto loc_821EA55C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9500
	ctx.lr = 0x821EA55C;
	sub_821E9500(ctx, base);
loc_821EA55C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EA570"))) PPC_WEAK_FUNC(sub_821EA570);
PPC_FUNC_IMPL(__imp__sub_821EA570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// b 0x821e90a8
	sub_821E90A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA580"))) PPC_WEAK_FUNC(sub_821EA580);
PPC_FUNC_IMPL(__imp__sub_821EA580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EA588;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-9920
	ctx.r9.s64 = ctx.r11.s64 + -9920;
	// addi r8,r10,-9928
	ctx.r8.s64 = ctx.r10.s64 + -9928;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-792(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// bl 0x821e8f58
	ctx.lr = 0x821EA5C0;
	sub_821E8F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x821EA5C8;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821EA5D0;
	sub_821857F0(ctx, base);
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ea5ec
	if (ctx.cr6.eq) goto loc_821EA5EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EA5E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EA5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EA5F4"))) PPC_WEAK_FUNC(sub_821EA5F4);
PPC_FUNC_IMPL(__imp__sub_821EA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA5F8"))) PPC_WEAK_FUNC(sub_821EA5F8);
PPC_FUNC_IMPL(__imp__sub_821EA5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821EA600;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ea6b8
	if (ctx.cr6.eq) goto loc_821EA6B8;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821EA624;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ea6b8
	if (ctx.cr6.eq) goto loc_821EA6B8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ea6b8
	if (ctx.cr6.eq) goto loc_821EA6B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821EA644;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821EA650;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821EA660;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821EA66C;
	sub_821AD498(ctx, base);
	// lwz r10,-792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// blt cr6,0x821ea690
	if (ctx.cr6.lt) goto loc_821EA690;
	// bne cr6,0x821ea694
	if (!ctx.cr6.eq) goto loc_821EA694;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x821ea694
	goto loc_821EA694;
loc_821EA690:
	// li r4,7
	ctx.r4.s64 = 7;
loc_821EA694:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x821EA6A0;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821EA6AC;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821EA6B8;
	sub_821AD498(ctx, base);
loc_821EA6B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821EA6C0"))) PPC_WEAK_FUNC(sub_821EA6C0);
PPC_FUNC_IMPL(__imp__sub_821EA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f1,1236(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1236, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA6D8"))) PPC_WEAK_FUNC(sub_821EA6D8);
PPC_FUNC_IMPL(__imp__sub_821EA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,1220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA6F0"))) PPC_WEAK_FUNC(sub_821EA6F0);
PPC_FUNC_IMPL(__imp__sub_821EA6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f1,1492(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1492, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f1,1748(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1748, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA710"))) PPC_WEAK_FUNC(sub_821EA710);
PPC_FUNC_IMPL(__imp__sub_821EA710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EA718;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r29,64(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821ea834
	if (ctx.cr6.eq) goto loc_821EA834;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r11,-9952
	ctx.r31.s64 = ctx.r11.s64 + -9952;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ea770
	if (ctx.cr6.lt) goto loc_821EA770;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_821EA770:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ea7a0
	if (ctx.cr6.lt) goto loc_821EA7A0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_821EA7A0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ea7d0
	if (ctx.cr6.lt) goto loc_821EA7D0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_821EA7D0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82106eb0
	ctx.lr = 0x821EA7F0;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea7fc
	if (ctx.cr6.eq) goto loc_821EA7FC;
	// bl 0x821d38e8
	ctx.lr = 0x821EA7FC;
	sub_821D38E8(ctx, base);
loc_821EA7FC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ea830
	if (ctx.cr6.lt) goto loc_821EA830;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_821EA830:
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
loc_821EA834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EA83C"))) PPC_WEAK_FUNC(sub_821EA83C);
PPC_FUNC_IMPL(__imp__sub_821EA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA840"))) PPC_WEAK_FUNC(sub_821EA840);
PPC_FUNC_IMPL(__imp__sub_821EA840) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea8a4
	if (ctx.cr6.eq) goto loc_821EA8A4;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,-9952
	ctx.r7.s64 = ctx.r8.s64 + -9952;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x82106eb0
	ctx.lr = 0x821EA88C;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ea8a4
	if (ctx.cr6.eq) goto loc_821EA8A4;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ea8a8
	if (!ctx.cr6.eq) goto loc_821EA8A8;
loc_821EA8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EA8A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA8B8"))) PPC_WEAK_FUNC(sub_821EA8B8);
PPC_FUNC_IMPL(__imp__sub_821EA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821EA8C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ea9b0
	if (ctx.cr6.eq) goto loc_821EA9B0;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82185ba0
	ctx.lr = 0x821EA8E0;
	sub_82185BA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ea710
	ctx.lr = 0x821EA8F4;
	sub_821EA710(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r10,8096
	ctx.r11.s64 = ctx.r10.s64 + 8096;
	// stw r30,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r30.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
loc_821EA914:
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821EA920;
	sub_822AA648(ctx, base);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EA938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a288
	ctx.lr = 0x821EA948;
	sub_8218A288(ctx, base);
	// lwz r10,-792(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -792);
	// lwz r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r31.u32);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r26.u32);
	// bne 0x821ea914
	if (!ctx.cr0.eq) goto loc_821EA914;
	// lwz r11,-792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -792);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,1492(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1492, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,1748(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1748, temp.u32);
	// lwz r6,52(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821ea9b0
	if (ctx.cr6.eq) goto loc_821EA9B0;
	// li r3,10015
	ctx.r3.s64 = 10015;
	// bl 0x8208f658
	ctx.lr = 0x821EA9B0;
	sub_8208F658(ctx, base);
loc_821EA9B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821EA9B8"))) PPC_WEAK_FUNC(sub_821EA9B8);
PPC_FUNC_IMPL(__imp__sub_821EA9B8) {
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
	// beq cr6,0x821eaa2c
	if (ctx.cr6.eq) goto loc_821EAA2C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821eaa04
	if (ctx.cr6.eq) goto loc_821EAA04;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EAA04:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea710
	ctx.lr = 0x821EAA10;
	sub_821EA710(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,5
	ctx.r11.s64 = 5;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// beq cr6,0x821eaa2c
	if (ctx.cr6.eq) goto loc_821EAA2C;
	// li r3,10016
	ctx.r3.s64 = 10016;
	// bl 0x8208f658
	ctx.lr = 0x821EAA2C;
	sub_8208F658(ctx, base);
loc_821EAA2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAA40"))) PPC_WEAK_FUNC(sub_821EAA40);
PPC_FUNC_IMPL(__imp__sub_821EAA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821eab30
	if (ctx.cr6.gt) goto loc_821EAB30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821eab30
	// bdzf 4*cr6+eq,0x821eaabc
	// bdzf 4*cr6+eq,0x821eab30
	// bdzf 4*cr6+eq,0x821eaae4
	// bne cr6,0x821eab08
	if (!ctx.cr6.eq) goto loc_821EAB08;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821EAA94;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eab30
	if (ctx.cr6.eq) goto loc_821EAB30;
	// lwz r11,-792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82109e00
	ctx.lr = 0x821EAAB0;
	sub_82109E00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x821eab30
	goto loc_821EAB30;
loc_821EAABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea840
	ctx.lr = 0x821EAAC4;
	sub_821EA840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eab30
	if (ctx.cr6.eq) goto loc_821EAB30;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea710
	ctx.lr = 0x821EAAD8;
	sub_821EA710(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x821eab30
	goto loc_821EAB30;
loc_821EAAE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea840
	ctx.lr = 0x821EAAEC;
	sub_821EA840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eab30
	if (ctx.cr6.eq) goto loc_821EAB30;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x821eab30
	goto loc_821EAB30;
loc_821EAB08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821eab28
	if (!ctx.cr6.gt) goto loc_821EAB28;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x821eab2c
	goto loc_821EAB2C;
loc_821EAB28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821EAB2C:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_821EAB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAB48"))) PPC_WEAK_FUNC(sub_821EAB48);
PPC_FUNC_IMPL(__imp__sub_821EAB48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821ead28
	sub_821EAD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAB50"))) PPC_WEAK_FUNC(sub_821EAB50);
PPC_FUNC_IMPL(__imp__sub_821EAB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EAB58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-9624
	ctx.r8.s64 = ctx.r11.s64 + -9624;
	// addi r7,r10,-9632
	ctx.r7.s64 = ctx.r10.s64 + -9632;
	// addi r6,r9,-9768
	ctx.r6.s64 = ctx.r9.s64 + -9768;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eabac
	if (ctx.cr6.eq) goto loc_821EABAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EABAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EABAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-9776
	ctx.r8.s64 = ctx.r11.s64 + -9776;
	// addi r7,r10,-9912
	ctx.r7.s64 = ctx.r10.s64 + -9912;
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// stw r8,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r8.u32);
	// addi r30,r31,2924
	ctx.r30.s64 = ctx.r31.s64 + 2924;
	// stw r7,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r7.u32);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x823c52a0
	ctx.lr = 0x821EABD8;
	sub_823C52A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x821EABE0;
	sub_821857F0(ctx, base);
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// bl 0x82200c38
	ctx.lr = 0x821EABE8;
	sub_82200C38(ctx, base);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// bl 0x82201f70
	ctx.lr = 0x821EABF0;
	sub_82201F70(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x821883b8
	ctx.lr = 0x821EABF8;
	sub_821883B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821EAC00;
	sub_823C52A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x821EAC08;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x821EAC10;
	sub_821883B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EAC18"))) PPC_WEAK_FUNC(sub_821EAC18);
PPC_FUNC_IMPL(__imp__sub_821EAC18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x821eb110
	sub_821EB110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAC20"))) PPC_WEAK_FUNC(sub_821EAC20);
PPC_FUNC_IMPL(__imp__sub_821EAC20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x821eb110
	sub_821EB110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAC28"))) PPC_WEAK_FUNC(sub_821EAC28);
PPC_FUNC_IMPL(__imp__sub_821EAC28) {
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
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1720(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821eac70
	if (ctx.cr6.eq) goto loc_821EAC70;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EAC70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAC84"))) PPC_WEAK_FUNC(sub_821EAC84);
PPC_FUNC_IMPL(__imp__sub_821EAC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAC88"))) PPC_WEAK_FUNC(sub_821EAC88);
PPC_FUNC_IMPL(__imp__sub_821EAC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EAC9C"))) PPC_WEAK_FUNC(sub_821EAC9C);
PPC_FUNC_IMPL(__imp__sub_821EAC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EACA0"))) PPC_WEAK_FUNC(sub_821EACA0);
PPC_FUNC_IMPL(__imp__sub_821EACA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EACC0"))) PPC_WEAK_FUNC(sub_821EACC0);
PPC_FUNC_IMPL(__imp__sub_821EACC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EACC4"))) PPC_WEAK_FUNC(sub_821EACC4);
PPC_FUNC_IMPL(__imp__sub_821EACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EACC8"))) PPC_WEAK_FUNC(sub_821EACC8);
PPC_FUNC_IMPL(__imp__sub_821EACC8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ead10
	if (ctx.cr6.eq) goto loc_821EAD10;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EACF4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ead10
	if (ctx.cr6.eq) goto loc_821EAD10;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EAD10:
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

