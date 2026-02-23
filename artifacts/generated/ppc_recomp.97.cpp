#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823DB8B0"))) PPC_WEAK_FUNC(sub_823DB8B0);
PPC_FUNC_IMPL(__imp__sub_823DB8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823db8c0
	if (ctx.cr6.eq) goto loc_823DB8C0;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
loc_823DB8C0:
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// ori r8,r10,26215
	ctx.r8.u64 = ctx.r10.u64 | 26215;
	// divw r10,r4,r9
	ctx.r10.s32 = ctx.r4.s32 / ctx.r9.s32;
	// mulhw r7,r4,r8
	ctx.r7.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r9,r7,37336
	ctx.r9.u64 = ctx.r7.u64 | 37336;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r7,r3,72
	ctx.r7.s64 = ctx.r3.s64 + 72;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subfe r11,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB94C"))) PPC_WEAK_FUNC(sub_823DB94C);
PPC_FUNC_IMPL(__imp__sub_823DB94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB950"))) PPC_WEAK_FUNC(sub_823DB950);
PPC_FUNC_IMPL(__imp__sub_823DB950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823da7a8
	ctx.lr = 0x823DB970;
	sub_823DA7A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823db98c
	if (ctx.cr6.eq) goto loc_823DB98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823DB988;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823DB98C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB9A4"))) PPC_WEAK_FUNC(sub_823DB9A4);
PPC_FUNC_IMPL(__imp__sub_823DB9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB9A8"))) PPC_WEAK_FUNC(sub_823DB9A8);
PPC_FUNC_IMPL(__imp__sub_823DB9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DB9B0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,37332
	ctx.r8.u64 = ctx.r11.u64 | 37332;
	// ori r6,r9,44484
	ctx.r6.u64 = ctx.r9.u64 | 44484;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r9,r7,44740
	ctx.r9.u64 = ctx.r7.u64 | 44740;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r8,r4,44996
	ctx.r8.u64 = ctx.r4.u64 | 44996;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ori r5,r10,45252
	ctx.r5.u64 = ctx.r10.u64 | 45252;
	// stwx r11,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r6,r4,43460
	ctx.r6.u64 = ctx.r4.u64 | 43460;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwx r11,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r10,r10,43716
	ctx.r10.u64 = ctx.r10.u64 | 43716;
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r5,r3,43972
	ctx.r5.u64 = ctx.r3.u64 | 43972;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r3,r7,44228
	ctx.r3.u64 = ctx.r7.u64 | 44228;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,686
	ctx.r4.s64 = 686;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r8,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DBA9C;
	sub_82106EB0(ctx, base);
	// li r4,682
	ctx.r4.s64 = 682;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DBAAC;
	sub_82106EB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r29,2
	ctx.r29.s64 = 2;
loc_823DBAB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823dbac8
	if (ctx.cr6.eq) goto loc_823DBAC8;
	// bl 0x821d38e8
	ctx.lr = 0x823DBAC8;
	sub_821D38E8(ctx, base);
loc_823DBAC8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823dbab8
	if (!ctx.cr0.eq) goto loc_823DBAB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ccfa8
	ctx.lr = 0x823DBADC;
	sub_823CCFA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DBAE4"))) PPC_WEAK_FUNC(sub_823DBAE4);
PPC_FUNC_IMPL(__imp__sub_823DBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBAE8"))) PPC_WEAK_FUNC(sub_823DBAE8);
PPC_FUNC_IMPL(__imp__sub_823DBAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DBAF0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,37332
	ctx.r8.u64 = ctx.r11.u64 | 37332;
	// ori r6,r9,44484
	ctx.r6.u64 = ctx.r9.u64 | 44484;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r9,r7,44740
	ctx.r9.u64 = ctx.r7.u64 | 44740;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r8,r4,44996
	ctx.r8.u64 = ctx.r4.u64 | 44996;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ori r5,r10,45252
	ctx.r5.u64 = ctx.r10.u64 | 45252;
	// stwx r11,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r6,r4,43460
	ctx.r6.u64 = ctx.r4.u64 | 43460;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwx r11,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r10,r10,43716
	ctx.r10.u64 = ctx.r10.u64 | 43716;
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r5,r3,43972
	ctx.r5.u64 = ctx.r3.u64 | 43972;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r3,r7,44228
	ctx.r3.u64 = ctx.r7.u64 | 44228;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,686
	ctx.r4.s64 = 686;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r8,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DBBDC;
	sub_82106EB0(ctx, base);
	// li r4,682
	ctx.r4.s64 = 682;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DBBEC;
	sub_82106EB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r29,2
	ctx.r29.s64 = 2;
loc_823DBBF8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823dbc08
	if (ctx.cr6.eq) goto loc_823DBC08;
	// bl 0x821d38e8
	ctx.lr = 0x823DBC08;
	sub_821D38E8(ctx, base);
loc_823DBC08:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823dbbf8
	if (!ctx.cr0.eq) goto loc_823DBBF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ccff0
	ctx.lr = 0x823DBC1C;
	sub_823CCFF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DBC24"))) PPC_WEAK_FUNC(sub_823DBC24);
PPC_FUNC_IMPL(__imp__sub_823DBC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBC28"))) PPC_WEAK_FUNC(sub_823DBC28);
PPC_FUNC_IMPL(__imp__sub_823DBC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DBC30;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cdb10
	ctx.lr = 0x823DBC3C;
	sub_823CDB10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,-23400
	ctx.r8.s64 = ctx.r11.s64 + -23400;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r8,12
	ctx.r7.s64 = ctx.r8.s64 + 12;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823dbca4
	if (!ctx.cr6.eq) goto loc_823DBCA4;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823dbca4
	if (!ctx.cr6.eq) goto loc_823DBCA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-17504
	ctx.r11.s64 = ctx.r11.s64 + -17504;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x823DBC9C;
	sub_821EB290(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823DBCA4:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-28224
	ctx.r10.s64 = ctx.r10.s64 + -28224;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge 0x823dbcc8
	if (!ctx.cr0.lt) goto loc_823DBCC8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x823dbce0
	goto loc_823DBCE0;
loc_823DBCC8:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r6,r9,37308
	ctx.r6.u64 = ctx.r9.u64 | 37308;
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823dbce0
	if (!ctx.cr6.gt) goto loc_823DBCE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823DBCE0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823dbd14
	if (ctx.cr6.eq) goto loc_823DBD14;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823db6b8
	ctx.lr = 0x823DBD10;
	sub_823DB6B8(ctx, base);
	// b 0x823dbe34
	goto loc_823DBE34;
loc_823DBD14:
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823dbe34
	if (ctx.cr6.eq) goto loc_823DBE34;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,820(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// ori r6,r10,37332
	ctx.r6.u64 = ctx.r10.u64 | 37332;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r3,3
	ctx.r3.s64 = 3;
	// ori r5,r8,44484
	ctx.r5.u64 = ctx.r8.u64 | 44484;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwx r3,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r6,r4,44740
	ctx.r6.u64 = ctx.r4.u64 | 44740;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwx r10,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r8,r8,44996
	ctx.r8.u64 = ctx.r8.u64 | 44996;
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r4,r3,45252
	ctx.r4.u64 = ctx.r3.u64 | 45252;
	// stwx r10,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r3,820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// ori r11,r5,43460
	ctx.r11.u64 = ctx.r5.u64 | 43460;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r3,820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// ori r6,r6,43716
	ctx.r6.u64 = ctx.r6.u64 | 43716;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r5,r5,43972
	ctx.r5.u64 = ctx.r5.u64 | 43972;
	// stwx r10,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r4,820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// ori r9,r9,44228
	ctx.r9.u64 = ctx.r9.u64 | 44228;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// li r4,684
	ctx.r4.s64 = 684;
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r5,820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r8,820(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r7,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r7.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r3,820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// bl 0x82106eb0
	ctx.lr = 0x823DBE0C;
	sub_82106EB0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r29,2
	ctx.r29.s64 = 2;
loc_823DBE18:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823dbe28
	if (ctx.cr6.eq) goto loc_823DBE28;
	// bl 0x821d38e8
	ctx.lr = 0x823DBE28;
	sub_821D38E8(ctx, base);
loc_823DBE28:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823dbe18
	if (!ctx.cr0.eq) goto loc_823DBE18;
loc_823DBE34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// bl 0x823ca688
	ctx.lr = 0x823DBE40;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,37324
	ctx.r8.u64 = ctx.r11.u64 | 37324;
	// ori r7,r10,37316
	ctx.r7.u64 = ctx.r10.u64 | 37316;
	// ori r6,r9,37340
	ctx.r6.u64 = ctx.r9.u64 | 37340;
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r9,r31,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r8,r31,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r11,-4752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4752);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823DBE8C;
	sub_823CA5C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DBE94"))) PPC_WEAK_FUNC(sub_823DBE94);
PPC_FUNC_IMPL(__imp__sub_823DBE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBE98"))) PPC_WEAK_FUNC(sub_823DBE98);
PPC_FUNC_IMPL(__imp__sub_823DBE98) {
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
	// bl 0x823db5b0
	ctx.lr = 0x823DBEB0;
	sub_823DB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dabb8
	ctx.lr = 0x823DBEB8;
	sub_823DABB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823DBEC0;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DBED4"))) PPC_WEAK_FUNC(sub_823DBED4);
PPC_FUNC_IMPL(__imp__sub_823DBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBED8"))) PPC_WEAK_FUNC(sub_823DBED8);
PPC_FUNC_IMPL(__imp__sub_823DBED8) {
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
	// bl 0x823db5b0
	ctx.lr = 0x823DBEF0;
	sub_823DB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dabb8
	ctx.lr = 0x823DBEF8;
	sub_823DABB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823DBF00;
	sub_823CDC48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DBF14"))) PPC_WEAK_FUNC(sub_823DBF14);
PPC_FUNC_IMPL(__imp__sub_823DBF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBF18"))) PPC_WEAK_FUNC(sub_823DBF18);
PPC_FUNC_IMPL(__imp__sub_823DBF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823DBF20;
	sub_82248764(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r19,-784(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823DBF38;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823DBF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r22,r8,37336
	ctx.r22.u64 = ctx.r8.u64 | 37336;
	// beq cr6,0x823dc1ec
	if (ctx.cr6.eq) goto loc_823DC1EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35904
	ctx.r9.u64 = ctx.r10.u64 | 35904;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DBF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DBF80;
	sub_82163DF0(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// ori r10,r6,37320
	ctx.r10.u64 = ctx.r6.u64 | 37320;
	// addi r26,r26,-28220
	ctx.r26.s64 = ctx.r26.s64 + -28220;
	// lwz r11,-8540(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8540);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x823DBFB0;
	sub_820C79C8(ctx, base);
	// lis r21,-32177
	ctx.r21.s64 = -2108751872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-4760(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823DBFC4;
	sub_82163E58(ctx, base);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r24,r24,-28212
	ctx.r24.s64 = ctx.r24.s64 + -28212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82164d80
	ctx.lr = 0x823DBFDC;
	sub_82164D80(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x823dc0e0
	if (ctx.cr6.lt) goto loc_823DC0E0;
	// bne cr6,0x823dc1ec
	if (!ctx.cr6.eq) goto loc_823DC1EC;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DC000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dc1ec
	if (ctx.cr6.eq) goto loc_823DC1EC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ec830
	ctx.lr = 0x823DC010;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823dc1dc
	if (!ctx.cr6.eq) goto loc_823DC1DC;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r25,-28196
	ctx.r25.s64 = ctx.r25.s64 + -28196;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r27,r31,r22
	ctx.r27.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x820c77c0
	ctx.lr = 0x823DC03C;
	sub_820C77C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82165128
	ctx.lr = 0x823DC04C;
	sub_82165128(ctx, base);
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823dc060
	if (!ctx.cr6.gt) goto loc_823DC060;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823dc068
	goto loc_823DC068;
loc_823DC060:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_823DC068:
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c7740
	ctx.lr = 0x823DC07C;
	sub_820C7740(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x823da758
	ctx.lr = 0x823DC090;
	sub_823DA758(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82163d90
	ctx.lr = 0x823DC09C;
	sub_82163D90(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823dc0c4
	if (!ctx.cr6.eq) goto loc_823DC0C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82165710
	ctx.lr = 0x823DC0BC;
	sub_82165710(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x823dc1c0
	goto loc_823DC1C0;
loc_823DC0C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823dc0d4
	if (!ctx.cr6.gt) goto loc_823DC0D4;
	// li r11,100
	ctx.r11.s64 = 100;
loc_823DC0D4:
	// sth r11,4(r20)
	PPC_STORE_U16(ctx.r20.u32 + 4, ctx.r11.u16);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x823dc1c0
	goto loc_823DC1C0;
loc_823DC0E0:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DC0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dc1ec
	if (ctx.cr6.eq) goto loc_823DC1EC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821ec830
	ctx.lr = 0x823DC104;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823dc1dc
	if (!ctx.cr6.eq) goto loc_823DC1DC;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r27,-28196
	ctx.r27.s64 = ctx.r27.s64 + -28196;
	// add r29,r31,r22
	ctx.r29.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x820c7648
	ctx.lr = 0x823DC12C;
	sub_820C7648(ctx, base);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf. r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823dc144
	if (!ctx.cr0.lt) goto loc_823DC144;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823dc158
	goto loc_823DC158;
loc_823DC144:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823dc158
	if (!ctx.cr6.gt) goto loc_823DC158;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823DC158:
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c76b0
	ctx.lr = 0x823DC164;
	sub_820C76B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x823da758
	ctx.lr = 0x823DC178;
	sub_823DA758(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82163d90
	ctx.lr = 0x823DC184;
	sub_82163D90(ctx, base);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823dc1a8
	if (!ctx.cr6.eq) goto loc_823DC1A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82165710
	ctx.lr = 0x823DC1A4;
	sub_82165710(ctx, base);
	// b 0x823dc1bc
	goto loc_823DC1BC;
loc_823DC1A8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823dc1b8
	if (!ctx.cr6.gt) goto loc_823DC1B8;
	// li r11,100
	ctx.r11.s64 = 100;
loc_823DC1B8:
	// sth r11,4(r20)
	PPC_STORE_U16(ctx.r20.u32 + 4, ctx.r11.u16);
loc_823DC1BC:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_823DC1C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823db8b0
	ctx.lr = 0x823DC1C8;
	sub_823DB8B0(ctx, base);
	// li r3,10010
	ctx.r3.s64 = 10010;
	// bl 0x8208f658
	ctx.lr = 0x823DC1D0;
	sub_8208F658(ctx, base);
	// lwz r11,-4760(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4760);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
loc_823DC1DC:
	// lwz r10,88(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 88);
	// addi r11,r19,28
	ctx.r11.s64 = ctx.r19.s64 + 28;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,88(r19)
	PPC_STORE_U32(ctx.r19.u32 + 88, ctx.r9.u32);
loc_823DC1EC:
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823dc224
	if (ctx.cr6.gt) goto loc_823DC224;
	// li r11,9
	ctx.r11.s64 = 9;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r9,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DC21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_823DC224:
	// bl 0x823db5b0
	ctx.lr = 0x823DC228;
	sub_823DB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dabb8
	ctx.lr = 0x823DC230;
	sub_823DABB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823DC238;
	sub_823CDC68(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_823DC240"))) PPC_WEAK_FUNC(sub_823DC240);
PPC_FUNC_IMPL(__imp__sub_823DC240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823DC248;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,-4760(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x8223a960
	ctx.lr = 0x823DC260;
	sub_8223A960(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r27,r27,-28216
	ctx.r27.s64 = ctx.r27.s64 + -28216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823DC278;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236510
	ctx.lr = 0x823DC28C;
	sub_82236510(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,45508
	ctx.r7.u64 = ctx.r9.u64 | 45508;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r5,r8,45764
	ctx.r5.u64 = ctx.r8.u64 | 45764;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r30,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r30,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r30.u32);
	// bl 0x8218b408
	ctx.lr = 0x823DC2C4;
	sub_8218B408(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r11,r6,45772
	ctx.r11.u64 = ctx.r6.u64 | 45772;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r5,r7,45768
	ctx.r5.u64 = ctx.r7.u64 | 45768;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f31,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r8,r4,45776
	ctx.r8.u64 = ctx.r4.u64 | 45776;
	// ori r6,r6,46020
	ctx.r6.u64 = ctx.r6.u64 | 46020;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,37316
	ctx.r4.u64 = ctx.r4.u64 | 37316;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r7,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r7,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x823c9120
	ctx.lr = 0x823DC384;
	sub_823C9120(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r6,46044
	ctx.r11.u64 = ctx.r6.u64 | 46044;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// ori r10,r4,46276
	ctx.r10.u64 = ctx.r4.u64 | 46276;
	// li r4,692
	ctx.r4.s64 = 692;
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// bl 0x82106f58
	ctx.lr = 0x823DC3BC;
	sub_82106F58(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r6,37324
	ctx.r5.u64 = ctx.r6.u64 | 37324;
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x823cd3e0
	ctx.lr = 0x823DC3D0;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823dc3e0
	if (!ctx.cr6.eq) goto loc_823DC3E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DC3E0:
	// bl 0x8218b408
	ctx.lr = 0x823DC3E4;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,46280
	ctx.r5.u64 = ctx.r9.u64 | 46280;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r4,r7,46284
	ctx.r4.u64 = ctx.r7.u64 | 46284;
	// ori r7,r3,46288
	ctx.r7.u64 = ctx.r3.u64 | 46288;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r6,r9,46532
	ctx.r6.u64 = ctx.r9.u64 | 46532;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ori r9,r9,47300
	ctx.r9.u64 = ctx.r9.u64 | 47300;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r5,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r8,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r30.u32);
	// lbz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823DC4A4;
	sub_823C93F0(ctx, base);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r5,47324
	ctx.r10.u64 = ctx.r5.u64 | 47324;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x823c9440
	ctx.lr = 0x823DC4C8;
	sub_823C9440(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ori r5,r7,42460
	ctx.r5.u64 = ctx.r7.u64 | 42460;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// bl 0x823db6b8
	ctx.lr = 0x823DC4EC;
	sub_823DB6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823db5b0
	ctx.lr = 0x823DC4F4;
	sub_823DB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dabb8
	ctx.lr = 0x823DC4FC;
	sub_823DABB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823DC508"))) PPC_WEAK_FUNC(sub_823DC508);
PPC_FUNC_IMPL(__imp__sub_823DC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823DC510;
	sub_82248778(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823DC51C;
	sub_823CD7E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-17312
	ctx.r5.s64 = ctx.r11.s64 + -17312;
	// addi r3,r9,-17456
	ctx.r3.s64 = ctx.r9.s64 + -17456;
	// addi r4,r10,-17448
	ctx.r4.s64 = ctx.r10.s64 + -17448;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addi r8,r8,-28244
	ctx.r8.s64 = ctx.r8.s64 + -28244;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-28220
	ctx.r28.s64 = ctx.r28.s64 + -28220;
	// addi r6,r6,-28216
	ctx.r6.s64 = ctx.r6.s64 + -28216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r9,r9,-28208
	ctx.r9.s64 = ctx.r9.s64 + -28208;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// ori r7,r7,37332
	ctx.r7.u64 = ctx.r7.u64 | 37332;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// addi r27,r27,-28200
	ctx.r27.s64 = ctx.r27.s64 + -28200;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// addi r26,r26,-28196
	ctx.r26.s64 = ctx.r26.s64 + -28196;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r29.u32);
	// lis r4,-32177
	ctx.r4.s64 = -2108751872;
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// li r3,154
	ctx.r3.s64 = 154;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r25,r25,-28212
	ctx.r25.s64 = ctx.r25.s64 + -28212;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// lwz r11,-4760(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4760);
	// addi r10,r11,1964
	ctx.r10.s64 = ctx.r11.s64 + 1964;
	// lwz r10,1964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r8,1968(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r7,1972(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// rotlwi r24,r7,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// lwz r6,1984(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1984);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DC600;
	sub_82163DF0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82164d80
	ctx.lr = 0x823DC608;
	sub_82164D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// bl 0x823db8b0
	ctx.lr = 0x823DC618;
	sub_823DB8B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// subfc r4,r30,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r30.u32;
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// bl 0x823ca688
	ctx.lr = 0x823DC67C;
	sub_823CA688(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r11,-4752(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823DC6B0;
	sub_823CA5C8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f2,14876(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,10376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823DC6D0;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dc240
	ctx.lr = 0x823DC6D8;
	sub_823DC240(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823DC6E0;
	sub_823C8DF0(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r5,-17504
	ctx.r11.s64 = ctx.r5.s64 + -17504;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x821eb290
	ctx.lr = 0x823DC700;
	sub_821EB290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,691
	ctx.r4.s64 = 691;
	// bl 0x823cdf48
	ctx.lr = 0x823DC70C;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,696
	ctx.r4.s64 = 696;
	// bl 0x823cdf48
	ctx.lr = 0x823DC718;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,677
	ctx.r4.s64 = 677;
	// bl 0x823cdf48
	ctx.lr = 0x823DC724;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823DC730"))) PPC_WEAK_FUNC(sub_823DC730);
PPC_FUNC_IMPL(__imp__sub_823DC730) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cdcc0
	sub_823CDCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DC734"))) PPC_WEAK_FUNC(sub_823DC734);
PPC_FUNC_IMPL(__imp__sub_823DC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DC738"))) PPC_WEAK_FUNC(sub_823DC738);
PPC_FUNC_IMPL(__imp__sub_823DC738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r10.u32);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r11,1964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823dc7b4
	if (ctx.cr6.gt) goto loc_823DC7B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dc784
	if (ctx.cr6.eq) goto loc_823DC784;
	// bdz 0x823dc78c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DC78C;
	// bdz 0x823dc77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DC77C;
	// bdz 0x823dc79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DC79C;
	// bdz 0x823dc794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DC794;
	// bdz 0x823dc7ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DC7AC;
	// b 0x823dc7a4
	goto loc_823DC7A4;
loc_823DC77C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC784:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC78C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC794:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC79C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC7A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823dc7b0
	goto loc_823DC7B0;
loc_823DC7AC:
	// li r11,7
	ctx.r11.s64 = 7;
loc_823DC7B0:
	// stw r11,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, ctx.r11.u32);
loc_823DC7B4:
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823DC7C8"))) PPC_WEAK_FUNC(sub_823DC7C8);
PPC_FUNC_IMPL(__imp__sub_823DC7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DC7D0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10011
	ctx.r3.s64 = 10011;
	// bl 0x8208f658
	ctx.lr = 0x823DC7E0;
	sub_8208F658(ctx, base);
	// bl 0x8223a8c8
	ctx.lr = 0x823DC7E4;
	sub_8223A8C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823DC7EC;
	sub_823CA688(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28204
	ctx.r30.s64 = ctx.r30.s64 + -28204;
	// addi r31,r31,-28212
	ctx.r31.s64 = ctx.r31.s64 + -28212;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823DC828;
	sub_823CA5C8(ctx, base);
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823DC838;
	sub_82163E58(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82165798
	ctx.lr = 0x823DC844;
	sub_82165798(ctx, base);
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DC858"))) PPC_WEAK_FUNC(sub_823DC858);
PPC_FUNC_IMPL(__imp__sub_823DC858) {
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
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-16944
	ctx.r8.s64 = ctx.r11.s64 + -16944;
	// addi r5,r9,-17088
	ctx.r5.s64 = ctx.r9.s64 + -17088;
	// addi r7,r10,-17080
	ctx.r7.s64 = ctx.r10.s64 + -17080;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823DC8A8;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823DC8AC;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823DC8B4;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DC8C8"))) PPC_WEAK_FUNC(sub_823DC8C8);
PPC_FUNC_IMPL(__imp__sub_823DC8C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823dd088
	sub_823DD088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DC8D0"))) PPC_WEAK_FUNC(sub_823DC8D0);
PPC_FUNC_IMPL(__imp__sub_823DC8D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823dd088
	sub_823DD088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DC8D8"))) PPC_WEAK_FUNC(sub_823DC8D8);
PPC_FUNC_IMPL(__imp__sub_823DC8D8) {
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
	// bl 0x823cdb10
	ctx.lr = 0x823DC8F0;
	sub_823CDB10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-17152
	ctx.r11.s64 = ctx.r11.s64 + -17152;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x823DC910;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DC924"))) PPC_WEAK_FUNC(sub_823DC924);
PPC_FUNC_IMPL(__imp__sub_823DC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DC928"))) PPC_WEAK_FUNC(sub_823DC928);
PPC_FUNC_IMPL(__imp__sub_823DC928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823DC930;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823DC944;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823DC950;
	sub_8218B408(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823DC960;
	sub_823C3280(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-28240
	ctx.r11.s64 = ctx.r11.s64 + -28240;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r5,r7,37304
	ctx.r5.u64 = ctx.r7.u64 | 37304;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ori r9,r4,37312
	ctx.r9.u64 = ctx.r4.u64 | 37312;
	// stwx r8,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// ori r8,r6,37320
	ctx.r8.u64 = ctx.r6.u64 | 37320;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f31,11300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r9,r6,-17152
	ctx.r9.s64 = ctx.r6.s64 + -17152;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823DCA08:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dca2c
	if (ctx.cr6.lt) goto loc_823DCA2C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823DCA2C:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dca58
	if (ctx.cr6.lt) goto loc_823DCA58;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
loc_823DCA58:
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,204(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dcaa8
	if (ctx.cr6.lt) goto loc_823DCAA8;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r28.u32);
loc_823DCAA8:
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823dcabc
	if (!ctx.cr6.eq) goto loc_823DCABC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823DCABC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,204(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,208(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// bdnz 0x823dca08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DCA08;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-28204
	ctx.r29.s64 = ctx.r29.s64 + -28204;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823DCB5C;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823dcb6c
	if (!ctx.cr6.eq) goto loc_823DCB6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DCB6C:
	// bl 0x8218b408
	ctx.lr = 0x823DCB70;
	sub_8218B408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31944, temp.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 31948, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31952(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 31952, temp.u32);
	// lwz r11,-4760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823DCBF4;
	sub_82163E58(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,37324
	ctx.r7.u64 = ctx.r8.u64 | 37324;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x82163d90
	ctx.lr = 0x823DCC04;
	sub_82163D90(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// addi r29,r5,-4420
	ctx.r29.s64 = ctx.r5.s64 + -4420;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r5,r4,-19856
	ctx.r5.s64 = ctx.r4.s64 + -19856;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8218a5f0
	ctx.lr = 0x823DCC34;
	sub_8218A5F0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r7,r9,33516
	ctx.r7.u64 = ctx.r9.u64 | 33516;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r4,r6,33476
	ctx.r4.u64 = ctx.r6.u64 | 33476;
	// ori r8,r10,33496
	ctx.r8.u64 = ctx.r10.u64 | 33496;
	// cntlzw r5,r30
	ctx.r5.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r10,r3,33220
	ctx.r10.u64 = ctx.r3.u64 | 33220;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r28,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r28.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823DCC94"))) PPC_WEAK_FUNC(sub_823DCC94);
PPC_FUNC_IMPL(__imp__sub_823DCC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DCC98"))) PPC_WEAK_FUNC(sub_823DCC98);
PPC_FUNC_IMPL(__imp__sub_823DCC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DCCA0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,37352
	ctx.r9.u64 = ctx.r11.u64 | 37352;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r10,-4436
	ctx.r30.s64 = ctx.r10.s64 + -4436;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// bl 0x82084038
	ctx.lr = 0x823DCCD4;
	sub_82084038(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,58072
	ctx.r5.u64 = ctx.r7.u64 | 58072;
	// ori r4,r6,58092
	ctx.r4.u64 = ctx.r6.u64 | 58092;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,37316
	ctx.r9.u64 = ctx.r10.u64 | 37316;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x8218b408
	ctx.lr = 0x823DCD10;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823DCD1C;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823dcd2c
	if (ctx.cr6.eq) goto loc_823DCD2C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823DCD2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r7,58056
	ctx.r5.u64 = ctx.r7.u64 | 58056;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
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
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r3,58060
	ctx.r9.u64 = ctx.r3.u64 | 58060;
	// ori r7,r10,58064
	ctx.r7.u64 = ctx.r10.u64 | 58064;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r4,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r6,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f3,r3,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DCDC4"))) PPC_WEAK_FUNC(sub_823DCDC4);
PPC_FUNC_IMPL(__imp__sub_823DCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DCDC8"))) PPC_WEAK_FUNC(sub_823DCDC8);
PPC_FUNC_IMPL(__imp__sub_823DCDC8) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-4760(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r11,r31,1964
	ctx.r11.s64 = ctx.r31.s64 + 1964;
	// bl 0x82237560
	ctx.lr = 0x823DCDF4;
	sub_82237560(ctx, base);
	// lwz r31,1964(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823DCDFC;
	sub_8223AA28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82237db0
	ctx.lr = 0x823DCE08;
	sub_82237DB0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,0
	ctx.r10.s64 = 0;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// ori r8,r10,37292
	ctx.r8.u64 = ctx.r10.u64 | 37292;
	// andc r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r31,r31,-28204
	ctx.r31.s64 = ctx.r31.s64 + -28204;
	// stwx r6,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823DCE38;
	sub_823CD3E0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// ori r11,r5,37300
	ctx.r11.u64 = ctx.r5.u64 | 37300;
	// ori r10,r4,37316
	ctx.r10.u64 = ctx.r4.u64 | 37316;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stwx r9,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DCE60;
	sub_82163DF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82164d80
	ctx.lr = 0x823DCE68;
	sub_82164D80(ctx, base);
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lis r7,0
	ctx.r7.s64 = 0;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// ori r5,r7,37308
	ctx.r5.u64 = ctx.r7.u64 | 37308;
	// subfe r4,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_823DCE98"))) PPC_WEAK_FUNC(sub_823DCE98);
PPC_FUNC_IMPL(__imp__sub_823DCE98) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823DCEB8;
	sub_8208F658(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37356
	ctx.r10.u64 = ctx.r11.u64 | 37356;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DCEC8;
	sub_82163DF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823dced8
	if (!ctx.cr6.lt) goto loc_823DCED8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823dceec
	goto loc_823DCEEC;
loc_823DCED8:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51612
	ctx.r11.u64 = ctx.r11.u64 | 51612;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823dceec
	if (ctx.cr6.gt) goto loc_823DCEEC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823DCEEC:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37348
	ctx.r10.u64 = ctx.r11.u64 | 37348;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DCF00;
	sub_82163DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82165a18
	ctx.lr = 0x823DCF08;
	sub_82165A18(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// stw r30,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r30.u32);
	// bl 0x8223a910
	ctx.lr = 0x823DCF20;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcf4c
	if (ctx.cr6.eq) goto loc_823DCF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37324
	ctx.r9.u64 = ctx.r10.u64 | 37324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DCF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DCF4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823DCF54;
	sub_823CA688(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823DCF6C;
	sub_823CA5C8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37360
	ctx.r9.u64 = ctx.r10.u64 | 37360;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823DCF90"))) PPC_WEAK_FUNC(sub_823DCF90);
PPC_FUNC_IMPL(__imp__sub_823DCF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823DCF98;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82237560
	ctx.lr = 0x823DCFA8;
	sub_82237560(ctx, base);
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// lwz r29,1964(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823DCFB8;
	sub_8223AA28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82237db0
	ctx.lr = 0x823DCFC4;
	sub_82237DB0(ctx, base);
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,1964
	ctx.r29.s64 = ctx.r11.s64 + 1964;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823DCFDC;
	sub_82248A40(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,16
	ctx.r31.s64 = 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823dd048
	if (!ctx.cr6.eq) goto loc_823DD048;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823dd038
	if (!ctx.cr6.eq) goto loc_823DD038;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823DD010:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823dd030
	if (!ctx.cr6.eq) goto loc_823DD030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x823dd010
	if (ctx.cr6.lt) goto loc_823DD010;
	// b 0x823dd048
	goto loc_823DD048;
loc_823DD030:
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// b 0x823dd048
	goto loc_823DD048;
loc_823DD038:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// li r31,17
	ctx.r31.s64 = 17;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_823DD048:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823DD058;
	sub_82248A40(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x823dd07c
	if (ctx.cr6.eq) goto loc_823DD07C;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 828, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DD07C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823DD084"))) PPC_WEAK_FUNC(sub_823DD084);
PPC_FUNC_IMPL(__imp__sub_823DD084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD088"))) PPC_WEAK_FUNC(sub_823DD088);
PPC_FUNC_IMPL(__imp__sub_823DD088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823dc858
	ctx.lr = 0x823DD0A8;
	sub_823DC858(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd0c4
	if (ctx.cr6.eq) goto loc_823DD0C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823DD0C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823DD0C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD0DC"))) PPC_WEAK_FUNC(sub_823DD0DC);
PPC_FUNC_IMPL(__imp__sub_823DD0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD0E0"))) PPC_WEAK_FUNC(sub_823DD0E0);
PPC_FUNC_IMPL(__imp__sub_823DD0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823DD0E8;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823dd42c
	if (ctx.cr6.gt) goto loc_823DD42C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823dd168
	// bdzf 4*cr6+eq,0x823dd2c4
	// bne cr6,0x823dd2f4
	if (!ctx.cr6.eq) goto loc_823DD2F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x8222e0a8
	ctx.lr = 0x823DD120;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823dd154
	if (!ctx.cr6.eq) goto loc_823DD154;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823DD130;
	sub_821EBB58(ctx, base);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r11,30520
	ctx.r11.s64 = 30520;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x823dd420
	goto loc_823DD420;
loc_823DD154:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823dcf90
	ctx.lr = 0x823DD15C;
	sub_823DCF90(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823DD168:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r26,r31,-28
	ctx.r26.s64 = ctx.r31.s64 + -28;
	// addi r27,r27,-28240
	ctx.r27.s64 = ctx.r27.s64 + -28240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,37304
	ctx.r8.u64 = ctx.r9.u64 | 37304;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823dd42c
	if (ctx.cr6.eq) goto loc_823DD42C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28236
	ctx.r29.s64 = ctx.r29.s64 + -28236;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823DD1C8;
	sub_82163E58(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DD1DC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823dd1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DD1DC;
	// bl 0x8223aa28
	ctx.lr = 0x823DD1E8;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823DD1F8;
	sub_820C8218(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x820c7290
	ctx.lr = 0x823DD214;
	sub_820C7290(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823DD22C;
	sub_820CA128(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820c7050
	ctx.lr = 0x823DD234;
	sub_820C7050(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x823DD240;
	sub_820C7070(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823dd27c
	if (!ctx.cr6.gt) goto loc_823DD27C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,30524
	ctx.r4.s64 = 30524;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823DD27C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823dd2b0
	if (!ctx.cr6.gt) goto loc_823DD2B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30525
	ctx.r4.s64 = 30525;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823DD2B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823dc7c8
	ctx.lr = 0x823DD2B8;
	sub_823DC7C8(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823DD2C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DD2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823DD2F4:
	// bl 0x82163df0
	ctx.lr = 0x823DD2F8;
	sub_82163DF0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28236
	ctx.r30.s64 = ctx.r30.s64 + -28236;
	// addi r29,r29,-28240
	ctx.r29.s64 = ctx.r29.s64 + -28240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x823DD318;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x822368d8
	ctx.lr = 0x823DD328;
	sub_822368D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,52(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x821ebb58
	ctx.lr = 0x823DD338;
	sub_821EBB58(ctx, base);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// li r9,30233
	ctx.r9.s64 = 30233;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r7,-28376
	ctx.r7.s64 = ctx.r7.s64 + -28376;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-4904(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4904);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DD378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r10,3708
	ctx.r5.s64 = ctx.r10.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29656
	ctx.r3.s64 = ctx.r3.s64 + -29656;
	// bl 0x8218a5f0
	ctx.lr = 0x823DD394;
	sub_8218A5F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x823DD3A4;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r9,26232
	ctx.r5.s64 = ctx.r9.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29528
	ctx.r3.s64 = ctx.r3.s64 + -29528;
	// bl 0x8218a5f0
	ctx.lr = 0x823DD3C0;
	sub_8218A5F0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r5,r8,37324
	ctx.r5.u64 = ctx.r8.u64 | 37324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29400
	ctx.r3.s64 = ctx.r3.s64 + -29400;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x823DD3E8;
	sub_82084038(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r9,r10,37328
	ctx.r9.u64 = ctx.r10.u64 | 37328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29272
	ctx.r3.s64 = ctx.r3.s64 + -29272;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// bl 0x82084038
	ctx.lr = 0x823DD410;
	sub_82084038(ctx, base);
	// lwz r7,-28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823DD420:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bctrl 
	ctx.lr = 0x823DD42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DD42C:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823DD438"))) PPC_WEAK_FUNC(sub_823DD438);
PPC_FUNC_IMPL(__imp__sub_823DD438) {
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
	// bl 0x823dc928
	ctx.lr = 0x823DD450;
	sub_823DC928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcc98
	ctx.lr = 0x823DD458;
	sub_823DCC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823DD460;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD474"))) PPC_WEAK_FUNC(sub_823DD474);
PPC_FUNC_IMPL(__imp__sub_823DD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD478"))) PPC_WEAK_FUNC(sub_823DD478);
PPC_FUNC_IMPL(__imp__sub_823DD478) {
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
	// bl 0x823dc928
	ctx.lr = 0x823DD490;
	sub_823DC928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcc98
	ctx.lr = 0x823DD498;
	sub_823DCC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823DD4A0;
	sub_823CDC48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD4B4"))) PPC_WEAK_FUNC(sub_823DD4B4);
PPC_FUNC_IMPL(__imp__sub_823DD4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD4B8"))) PPC_WEAK_FUNC(sub_823DD4B8);
PPC_FUNC_IMPL(__imp__sub_823DD4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DD4C0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823DD4D8;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823DD4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd5ac
	if (ctx.cr6.eq) goto loc_823DD5AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35904
	ctx.r9.u64 = ctx.r10.u64 | 35904;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DD514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x823dd5ac
	if (ctx.cr6.gt) goto loc_823DD5AC;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823dd568
	// bdzf 4*cr6+eq,0x823dd578
	// bne cr6,0x823dd578
	if (!ctx.cr6.eq) goto loc_823DD578;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd5ac
	if (ctx.cr6.eq) goto loc_823DD5AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823DD554;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823dd5ac
	if (!ctx.cr6.eq) goto loc_823DD5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dce98
	ctx.lr = 0x823DD564;
	sub_823DCE98(ctx, base);
	// b 0x823dd5ac
	goto loc_823DD5AC;
loc_823DD568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcf90
	ctx.lr = 0x823DD570;
	sub_823DCF90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823DD578:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd5ac
	if (ctx.cr6.eq) goto loc_823DD5AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823DD59C;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823dd5ac
	if (!ctx.cr6.eq) goto loc_823DD5AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dc7c8
	ctx.lr = 0x823DD5AC;
	sub_823DC7C8(ctx, base);
loc_823DD5AC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37360
	ctx.r10.u64 = ctx.r11.u64 | 37360;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823dd664
	if (!ctx.cr6.eq) goto loc_823DD664;
	// bl 0x8223ad48
	ctx.lr = 0x823DD5C4;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd664
	if (ctx.cr6.eq) goto loc_823DD664;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r11,1964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823dd648
	if (ctx.cr6.gt) goto loc_823DD648;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dd618
	if (ctx.cr6.eq) goto loc_823DD618;
	// bdz 0x823dd620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DD620;
	// bdz 0x823dd610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DD610;
	// bdz 0x823dd630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DD630;
	// bdz 0x823dd628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DD628;
	// bdz 0x823dd640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823DD640;
	// b 0x823dd638
	goto loc_823DD638;
loc_823DD610:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD618:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD620:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD628:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD630:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD638:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823dd644
	goto loc_823DD644;
loc_823DD640:
	// li r11,8
	ctx.r11.s64 = 8;
loc_823DD644:
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_823DD648:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DD65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823DD664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcdc8
	ctx.lr = 0x823DD66C;
	sub_823DCDC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dc928
	ctx.lr = 0x823DD674;
	sub_823DC928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcc98
	ctx.lr = 0x823DD67C;
	sub_823DCC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823DD684;
	sub_823CDC68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DD68C"))) PPC_WEAK_FUNC(sub_823DD68C);
PPC_FUNC_IMPL(__imp__sub_823DD68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD690"))) PPC_WEAK_FUNC(sub_823DD690);
PPC_FUNC_IMPL(__imp__sub_823DD690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823DD698;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,-28212
	ctx.r29.s64 = ctx.r29.s64 + -28212;
	// lwz r26,-4760(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// stw r10,13652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13652, ctx.r10.u32);
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r30,14948(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14948, ctx.r30.u32);
	// lwz r6,848(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r30,15092(r5)
	PPC_STORE_U32(ctx.r5.u32 + 15092, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,-4760(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// bl 0x823c8fa0
	ctx.lr = 0x823DD6EC;
	sub_823C8FA0(ctx, base);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,52444
	ctx.r10.u64 = ctx.r11.u64 | 52444;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823DD708;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,206
	ctx.r4.s64 = 206;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DD71C;
	sub_82106F58(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,205
	ctx.r4.s64 = 205;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DD72C;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823DD730;
	sub_8223A960(ctx, base);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r24,r24,-28208
	ctx.r24.s64 = ctx.r24.s64 + -28208;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823DD748;
	sub_822368B0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236510
	ctx.lr = 0x823DD75C;
	sub_82236510(ctx, base);
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r22,r22,-28204
	ctx.r22.s64 = ctx.r22.s64 + -28204;
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82163df0
	ctx.lr = 0x823DD770;
	sub_82163DF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82164d80
	ctx.lr = 0x823DD778;
	sub_82164D80(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,31172(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31172, ctx.r30.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r30,31428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 31428, ctx.r30.u32);
	// bl 0x8218b408
	ctx.lr = 0x823DD79C;
	sub_8218B408(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31432(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 31432, temp.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31436(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31436, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31440(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 31440, temp.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r30,31684(r5)
	PPC_STORE_U32(ctx.r5.u32 + 31684, ctx.r30.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823c9120
	ctx.lr = 0x823DD834;
	sub_823C9120(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,31708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31708, ctx.r3.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,31940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31940, ctx.r30.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,52(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// bl 0x82106f58
	ctx.lr = 0x823DD85C;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823DD868;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823dd878
	if (!ctx.cr6.eq) goto loc_823DD878;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DD878:
	// bl 0x8218b408
	ctx.lr = 0x823DD87C;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// addi r29,r7,-4460
	ctx.r29.s64 = ctx.r7.s64 + -4460;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r24,r9,26232
	ctx.r24.s64 = ctx.r9.s64 + 26232;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31944, temp.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31948, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31952(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31952, temp.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,32196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32196, ctx.r30.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32452, ctx.r30.u32);
	// lhz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823DD92C;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,32472(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32472, ctx.r8.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,32492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32492, ctx.r30.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DD94C;
	sub_822121D8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,32456(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32456, temp.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,32460(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32460, temp.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,32464(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32464, temp.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,32708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32708, ctx.r30.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DD9D0;
	sub_822121D8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lis r8,0
	ctx.r8.s64 = 0;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ori r5,r8,32964
	ctx.r5.u64 = ctx.r8.u64 | 32964;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,32712(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32712, temp.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,32716(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32716, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,32720(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32720, temp.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r30,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r30.u32);
	// lbz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823DDA64;
	sub_823C93F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ori r11,r7,32988
	ctx.r11.u64 = ctx.r7.u64 | 32988;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ori r8,r10,37336
	ctx.r8.u64 = ctx.r10.u64 | 37336;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823DDA98;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r7,53976
	ctx.r11.u64 = ctx.r7.u64 | 53976;
	// ori r9,r10,53996
	ctx.r9.u64 = ctx.r10.u64 | 53996;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r11,1980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823DDADC;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r11,r5,53464
	ctx.r11.u64 = ctx.r5.u64 | 53464;
	// ori r10,r4,53484
	ctx.r10.u64 = ctx.r4.u64 | 53484;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r30,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x823dc928
	ctx.lr = 0x823DDB08;
	sub_823DC928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dcc98
	ctx.lr = 0x823DDB10;
	sub_823DCC98(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823DDB1C"))) PPC_WEAK_FUNC(sub_823DDB1C);
PPC_FUNC_IMPL(__imp__sub_823DDB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DDB20"))) PPC_WEAK_FUNC(sub_823DDB20);
PPC_FUNC_IMPL(__imp__sub_823DDB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823DDB28;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823DDB34;
	sub_823CD7E8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r8,-16944
	ctx.r4.s64 = ctx.r8.s64 + -16944;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,-28244
	ctx.r3.s64 = ctx.r3.s64 + -28244;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r6,-17088
	ctx.r6.s64 = ctx.r6.s64 + -17088;
	// addi r7,r7,-17080
	ctx.r7.s64 = ctx.r7.s64 + -17080;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r26,r26,-28212
	ctx.r26.s64 = ctx.r26.s64 + -28212;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// addi r25,r25,-28208
	ctx.r25.s64 = ctx.r25.s64 + -28208;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r6,r6,-28200
	ctx.r6.s64 = ctx.r6.s64 + -28200;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r24,r24,-28196
	ctx.r24.s64 = ctx.r24.s64 + -28196;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r11,r11,37360
	ctx.r11.u64 = ctx.r11.u64 | 37360;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,144
	ctx.r23.s64 = 144;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// stw r29,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// addi r22,r22,-28204
	ctx.r22.s64 = ctx.r22.s64 + -28204;
	// stw r30,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r30.u32);
	// lfs f2,14876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// stw r23,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r23.u32);
	// lfs f1,10376(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// addi r9,r11,1964
	ctx.r9.s64 = ctx.r11.s64 + 1964;
	// lwz r9,1964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwz r10,1968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r9,1972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// lwz r11,1984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1984);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bl 0x823c31b0
	ctx.lr = 0x823DDC78;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dd690
	ctx.lr = 0x823DDC80;
	sub_823DD690(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823DDC88;
	sub_823C8DF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r10,-17152
	ctx.r11.s64 = ctx.r10.s64 + -17152;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x823DDCA8;
	sub_821EB290(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823DDCAC;
	sub_82163DF0(ctx, base);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r29,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r30,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r30.u32);
	// ori r11,r6,37344
	ctx.r11.u64 = ctx.r6.u64 | 37344;
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// ori r10,r5,37348
	ctx.r10.u64 = ctx.r5.u64 | 37348;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// bl 0x82164fb0
	ctx.lr = 0x823DDCF0;
	sub_82164FB0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,37352
	ctx.r6.u64 = ctx.r7.u64 | 37352;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823ddd10
	if (!ctx.cr0.lt) goto loc_823DDD10;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x823ddd24
	goto loc_823DDD24;
loc_823DDD10:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823ddd24
	if (!ctx.cr6.gt) goto loc_823DDD24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823DDD24:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,37356
	ctx.r9.u64 = ctx.r10.u64 | 37356;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x823dcdc8
	ctx.lr = 0x823DDD38;
	sub_823DCDC8(ctx, base);
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DDD44;
	sub_823CDF48(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DDD50;
	sub_823CDF48(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DDD5C;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823DDD68"))) PPC_WEAK_FUNC(sub_823DDD68);
PPC_FUNC_IMPL(__imp__sub_823DDD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DDD70;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r30,r30,-28176
	ctx.r30.s64 = ctx.r30.s64 + -28176;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// ori r8,r8,37356
	ctx.r8.u64 = ctx.r8.u64 | 37356;
	// addi r29,r29,-28172
	ctx.r29.s64 = ctx.r29.s64 + -28172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r5,8000
	ctx.r5.s64 = 8000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// bl 0x823cdf80
	ctx.lr = 0x823DDDA8;
	sub_823CDF80(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// ori r7,r7,45364
	ctx.r7.u64 = ctx.r7.u64 | 45364;
	// lis r4,-32195
	ctx.r4.s64 = -2109931520;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// addi r6,r5,-6832
	ctx.r6.s64 = ctx.r5.s64 + -6832;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// addi r5,r4,-6680
	ctx.r5.s64 = ctx.r4.s64 + -6680;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// addi r4,r11,-6456
	ctx.r4.s64 = ctx.r11.s64 + -6456;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,-6312
	ctx.r11.s64 = ctx.r10.s64 + -6312;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r10,r9,-10560
	ctx.r10.s64 = ctx.r9.s64 + -10560;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823DDE10;
	sub_823CEBB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DDE18"))) PPC_WEAK_FUNC(sub_823DDE18);
PPC_FUNC_IMPL(__imp__sub_823DDE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823DDE20;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823dde48
	if (ctx.cr0.lt) goto loc_823DDE48;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823dde50
	if (ctx.cr6.lt) goto loc_823DDE50;
loc_823DDE48:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823dde5c
	goto loc_823DDE5C;
loc_823DDE50:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
loc_823DDE5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r28,-28180
	ctx.r28.s64 = ctx.r28.s64 + -28180;
	// addi r30,r30,-28172
	ctx.r30.s64 = ctx.r30.s64 + -28172;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DDE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823dded0
	if (ctx.cr6.eq) goto loc_823DDED0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823DDE94;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ddeb4
	if (!ctx.cr6.eq) goto loc_823DDEB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DDEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DDEB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DDED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DDED0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r29,r11,1964
	ctx.r29.s64 = ctx.r11.s64 + 1964;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823DDEEC;
	sub_82248A40(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r3,r10,37248
	ctx.r3.u64 = ctx.r10.u64 | 37248;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r9,37244
	ctx.r10.u64 = ctx.r9.u64 | 37244;
	// ori r9,r7,45364
	ctx.r9.u64 = ctx.r7.u64 | 45364;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82248a40
	ctx.lr = 0x823DDF44;
	sub_82248A40(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DDF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823DDF70"))) PPC_WEAK_FUNC(sub_823DDF70);
PPC_FUNC_IMPL(__imp__sub_823DDF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823DDF78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ddfa4
	if (ctx.cr0.lt) goto loc_823DDFA4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823ddfac
	if (ctx.cr6.lt) goto loc_823DDFAC;
loc_823DDFA4:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823ddfb8
	goto loc_823DDFB8;
loc_823DDFAC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
loc_823DDFB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-28208
	ctx.r29.s64 = ctx.r29.s64 + -28208;
	// addi r30,r30,-28172
	ctx.r30.s64 = ctx.r30.s64 + -28172;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DDFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823de02c
	if (ctx.cr6.eq) goto loc_823DE02C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823DDFF0;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823de010
	if (!ctx.cr6.eq) goto loc_823DE010;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DE010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DE010:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DE02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DE02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823DE034"))) PPC_WEAK_FUNC(sub_823DE034);
PPC_FUNC_IMPL(__imp__sub_823DE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE038"))) PPC_WEAK_FUNC(sub_823DE038);
PPC_FUNC_IMPL(__imp__sub_823DE038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823DE040;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r14,r31,1
	ctx.r14.s64 = ctx.r31.s64 + 65536;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r14,r14,-28308
	ctx.r14.s64 = ctx.r14.s64 + -28308;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x823DE06C;
	sub_8218B408(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823DE078;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823DE084;
	sub_823C3280(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r9,r9,-28292
	ctx.r9.s64 = ctx.r9.s64 + -28292;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r28,r28,-28240
	ctx.r28.s64 = ctx.r28.s64 + -28240;
	// ori r4,r7,37312
	ctx.r4.u64 = ctx.r7.u64 | 37312;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r6,r8,37304
	ctx.r6.u64 = ctx.r8.u64 | 37304;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r8,r3,37320
	ctx.r8.u64 = ctx.r3.u64 | 37320;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// ori r7,r5,37328
	ctx.r7.u64 = ctx.r5.u64 | 37328;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// ori r3,r3,37336
	ctx.r3.u64 = ctx.r3.u64 | 37336;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// ori r6,r10,37344
	ctx.r6.u64 = ctx.r10.u64 | 37344;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stwx r5,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r30,r5,-4412
	ctx.r30.s64 = ctx.r5.s64 + -4412;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r27,r10,37352
	ctx.r27.u64 = ctx.r10.u64 | 37352;
	// stwx r4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r15,r10,26232
	ctx.r15.s64 = ctx.r10.s64 + 26232;
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,-20172
	ctx.r29.s64 = ctx.r29.s64 + -20172;
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,-6
	ctx.r10.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,-7
	ctx.r6.s64 = ctx.r11.s64 + -7;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stwx r10,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823DE19C;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r8,27096(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27096, ctx.r8.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r24,27116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27116, ctx.r24.u32);
	// lwz r10,16(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823DE1D8;
	sub_8218A5F0(ctx, base);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r7,r10,3696
	ctx.r7.s64 = ctx.r10.s64 + 3696;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,26584(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26584, ctx.r30.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r24,26604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 26604, ctx.r24.u32);
loc_823DE204:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de224
	if (ctx.cr6.lt) goto loc_823DE224;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE224:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de244
	if (ctx.cr6.lt) goto loc_823DE244;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE244:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de264
	if (ctx.cr6.lt) goto loc_823DE264;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE264:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de284
	if (ctx.cr6.lt) goto loc_823DE284;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE284:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de2a4
	if (ctx.cr6.lt) goto loc_823DE2A4;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE2A4:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de2c4
	if (ctx.cr6.lt) goto loc_823DE2C4;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE2C4:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de2e4
	if (ctx.cr6.lt) goto loc_823DE2E4;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE2E4:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de304
	if (ctx.cr6.lt) goto loc_823DE304;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE304:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de324
	if (ctx.cr6.lt) goto loc_823DE324;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE324:
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823de344
	if (ctx.cr6.lt) goto loc_823DE344;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823DE344:
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// bdnz 0x823de204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE204;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823de368
	if (ctx.cr6.lt) goto loc_823DE368;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_823DE368:
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823de908
	if (ctx.cr6.eq) goto loc_823DE908;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r20,r9,37364
	ctx.r20.u64 = ctx.r9.u64 | 37364;
	// ori r18,r8,37356
	ctx.r18.u64 = ctx.r8.u64 | 37356;
	// addi r17,r11,-19856
	ctx.r17.s64 = ctx.r11.s64 + -19856;
loc_823DE3A0:
	// addi r25,r30,-8
	ctx.r25.s64 = ctx.r30.s64 + -8;
	// bl 0x8223a960
	ctx.lr = 0x823DE3A8;
	sub_8223A960(ctx, base);
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823DE3CC;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823de8f4
	if (ctx.cr6.eq) goto loc_823DE8F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236510
	ctx.lr = 0x823DE3E8;
	sub_82236510(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823de8f4
	if (ctx.cr6.eq) goto loc_823DE8F4;
	// addi r11,r28,4671
	ctx.r11.s64 = ctx.r28.s64 + 4671;
	// rlwinm r23,r11,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r29,r23,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// bl 0x82163df0
	ctx.lr = 0x823DE404;
	sub_82163DF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82164d80
	ctx.lr = 0x823DE40C;
	sub_82164D80(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de434
	if (ctx.cr6.lt) goto loc_823DE434;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823DE434:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de460
	if (ctx.cr6.lt) goto loc_823DE460;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823DE460:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de4cc
	if (ctx.cr6.lt) goto loc_823DE4CC;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE4CC:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r27,r31,r18
	ctx.r27.u64 = ctx.r31.u64 + ctx.r18.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r31,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r18.u32);
	// bl 0x823c9120
	ctx.lr = 0x823DE4E0;
	sub_823C9120(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de518
	if (ctx.cr6.lt) goto loc_823DE518;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE518:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DE5B0;
	sub_82106F58(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de5d0
	if (ctx.cr6.lt) goto loc_823DE5D0;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE5D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de5f0
	if (ctx.cr6.lt) goto loc_823DE5F0;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE5F0:
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// lhz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823DE608;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r24.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DE634;
	sub_822121D8(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de6d8
	if (ctx.cr6.lt) goto loc_823DE6D8;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE6D8:
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DE6E0;
	sub_822121D8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de784
	if (ctx.cr6.lt) goto loc_823DE784;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE784:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,32(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823DE790;
	sub_823C93F0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
loc_823DE7AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163e58
	ctx.lr = 0x823DE7B4;
	sub_82163E58(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82163d90
	ctx.lr = 0x823DE7BC;
	sub_82163D90(ctx, base);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823de7d8
	if (ctx.cr6.eq) goto loc_823DE7D8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// blt cr6,0x823de7ac
	if (ctx.cr6.lt) goto loc_823DE7AC;
	// b 0x823de8f4
	goto loc_823DE8F4;
loc_823DE7D8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de7f8
	if (ctx.cr6.lt) goto loc_823DE7F8;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE7F8:
	// addi r29,r25,48
	ctx.r29.s64 = ctx.r25.s64 + 48;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823DE810;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,44(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r24.u32);
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823de854
	if (ctx.cr6.lt) goto loc_823DE854;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823DE854:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823de8f4
	if (!ctx.cr6.eq) goto loc_823DE8F4;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x8218b408
	ctx.lr = 0x823DE870;
	sub_8218B408(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f10,192(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f6,200(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_823DE8F4:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmplw cr6,r21,r16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x823de3a0
	if (ctx.cr6.lt) goto loc_823DE3A0;
loc_823DE908:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DE914"))) PPC_WEAK_FUNC(sub_823DE914);
PPC_FUNC_IMPL(__imp__sub_823DE914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE918"))) PPC_WEAK_FUNC(sub_823DE918);
PPC_FUNC_IMPL(__imp__sub_823DE918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223a960
	ctx.lr = 0x823DE938;
	sub_8223A960(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823de958
	if (ctx.cr0.lt) goto loc_823DE958;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823de960
	if (ctx.cr6.lt) goto loc_823DE960;
loc_823DE958:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823de96c
	goto loc_823DE96C;
loc_823DE960:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823DE96C:
	// addi r11,r11,-28172
	ctx.r11.s64 = ctx.r11.s64 + -28172;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823DE97C;
	sub_822368B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823DE988;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DE9A0"))) PPC_WEAK_FUNC(sub_823DE9A0);
PPC_FUNC_IMPL(__imp__sub_823DE9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823DE9A8;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28308
	ctx.r28.s64 = ctx.r28.s64 + -28308;
	// addi r8,r11,-16640
	ctx.r8.s64 = ctx.r11.s64 + -16640;
	// addi r7,r10,-16776
	ctx.r7.s64 = ctx.r10.s64 + -16776;
	// addi r6,r9,-16784
	ctx.r6.s64 = ctx.r9.s64 + -16784;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823de9f4
	if (ctx.cr0.lt) goto loc_823DE9F4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823dea04
	if (ctx.cr6.lt) goto loc_823DEA04;
loc_823DE9F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37364
	ctx.r29.u64 = ctx.r11.u64 | 37364;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823dea18
	goto loc_823DEA18;
loc_823DEA04:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37364
	ctx.r29.u64 = ctx.r10.u64 | 37364;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_823DEA18:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823DEA30;
	sub_823C8F28(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823dea48
	if (ctx.cr0.lt) goto loc_823DEA48;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823dea50
	if (ctx.cr6.lt) goto loc_823DEA50;
loc_823DEA48:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823dea5c
	goto loc_823DEA5C;
loc_823DEA50:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823DEA5C:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823c8f28
	ctx.lr = 0x823DEA70;
	sub_823C8F28(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45364
	ctx.r10.u64 = ctx.r11.u64 | 45364;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823DEA8C;
	sub_823C8F28(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37244
	ctx.r8.u64 = ctx.r9.u64 | 37244;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823DEAA8;
	sub_823C8F28(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37248
	ctx.r6.u64 = ctx.r7.u64 | 37248;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823DEAC4;
	sub_823C8F28(ctx, base);
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r30,r11,1964
	ctx.r30.s64 = ctx.r11.s64 + 1964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823DEADC;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37360
	ctx.r11.u64 = ctx.r5.u64 | 37360;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823DEAFC;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823DEB00;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d50
	ctx.lr = 0x823DEB08;
	sub_823C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823deb24
	if (ctx.cr6.eq) goto loc_823DEB24;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca638
	ctx.lr = 0x823DEB24;
	sub_823CA638(ctx, base);
loc_823DEB24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823DEB2C;
	sub_823CDA98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823DEB34"))) PPC_WEAK_FUNC(sub_823DEB34);
PPC_FUNC_IMPL(__imp__sub_823DEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEB38"))) PPC_WEAK_FUNC(sub_823DEB38);
PPC_FUNC_IMPL(__imp__sub_823DEB38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823dee80
	sub_823DEE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DEB40"))) PPC_WEAK_FUNC(sub_823DEB40);
PPC_FUNC_IMPL(__imp__sub_823DEB40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823dee80
	sub_823DEE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DEB48"))) PPC_WEAK_FUNC(sub_823DEB48);
PPC_FUNC_IMPL(__imp__sub_823DEB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37332
	ctx.r10.u64 = ctx.r11.u64 | 37332;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823deb7c
	if (!ctx.cr0.lt) goto loc_823DEB7C;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// b 0x823deb88
	goto loc_823DEB88;
loc_823DEB7C:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x823deb88
	if (ctx.cr6.lt) goto loc_823DEB88;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_823DEB88:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ddd68
	ctx.lr = 0x823DEB94;
	sub_823DDD68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823DEB9C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823debc8
	if (ctx.cr6.eq) goto loc_823DEBC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37328
	ctx.r9.u64 = ctx.r10.u64 | 37328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823DEBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DEBC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de918
	ctx.lr = 0x823DEBD4;
	sub_823DE918(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823DEBDC;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEBF4"))) PPC_WEAK_FUNC(sub_823DEBF4);
PPC_FUNC_IMPL(__imp__sub_823DEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEBF8"))) PPC_WEAK_FUNC(sub_823DEBF8);
PPC_FUNC_IMPL(__imp__sub_823DEBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823DEC00;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-28
	ctx.r29.s64 = ctx.r3.s64 + -28;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,-4760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// lwz r9,-8540(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r9,1696
	ctx.r24.s64 = ctx.r9.s64 + 1696;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823dec44
	if (ctx.cr0.lt) goto loc_823DEC44;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823dec4c
	if (ctx.cr6.lt) goto loc_823DEC4C;
loc_823DEC44:
	// addis r25,r29,1
	ctx.r25.s64 = ctx.r29.s64 + 65536;
	// b 0x823dec58
	goto loc_823DEC58;
loc_823DEC4C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
loc_823DEC58:
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// addi r25,r25,-28172
	ctx.r25.s64 = ctx.r25.s64 + -28172;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-28208
	ctx.r28.s64 = ctx.r28.s64 + -28208;
loc_823DEC68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82163e58
	ctx.lr = 0x823DEC74;
	sub_82163E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82163d90
	ctx.lr = 0x823DEC7C;
	sub_82163D90(ctx, base);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x823dec90
	if (ctx.cr6.eq) goto loc_823DEC90;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ded98
	if (ctx.cr6.eq) goto loc_823DED98;
loc_823DEC90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x823dec68
	if (ctx.cr6.lt) goto loc_823DEC68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DECB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82163e58
	ctx.lr = 0x823DECC0;
	sub_82163E58(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DECD4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823decd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DECD4;
	// bl 0x8223aa28
	ctx.lr = 0x823DECE0;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820c8218
	ctx.lr = 0x823DECF0;
	sub_820C8218(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r31,10
	ctx.r31.s64 = 10;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_823DED0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823DED14;
	sub_820C6B60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bge 0x823ded0c
	if (!ctx.cr0.lt) goto loc_823DED0C;
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x820c6b60
	ctx.lr = 0x823DED28;
	sub_820C6B60(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c6f50
	ctx.lr = 0x823DED30;
	sub_820C6F50(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ca128
	ctx.lr = 0x823DED48;
	sub_820CA128(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c7050
	ctx.lr = 0x823DED50;
	sub_820C7050(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x823DED5C;
	sub_820C7070(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-19544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823dedc0
	if (!ctx.cr6.gt) goto loc_823DEDC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30184
	ctx.r4.s64 = 30184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DED8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823DED98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DEDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823DEDC0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823dedf4
	if (!ctx.cr6.gt) goto loc_823DEDF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30185
	ctx.r4.s64 = 30185;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DEDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823DEDF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dde18
	ctx.lr = 0x823DEDFC;
	sub_823DDE18(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823DEE08"))) PPC_WEAK_FUNC(sub_823DEE08);
PPC_FUNC_IMPL(__imp__sub_823DEE08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de038
	ctx.lr = 0x823DEE20;
	sub_823DE038(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r9,13653
	ctx.r9.s64 = 13653;
	// ori r11,r11,37360
	ctx.r11.u64 = ctx.r11.u64 | 37360;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,13655
	ctx.r7.s64 = 13655;
	// li r6,13656
	ctx.r6.s64 = 13656;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,15008
	ctx.r5.s64 = 15008;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,109
	ctx.r4.s64 = 109;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823DEE6C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823DEE80"))) PPC_WEAK_FUNC(sub_823DEE80);
PPC_FUNC_IMPL(__imp__sub_823DEE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823de9a0
	ctx.lr = 0x823DEEA0;
	sub_823DE9A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823deebc
	if (ctx.cr6.eq) goto loc_823DEEBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823DEEB8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823DEEBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEED4"))) PPC_WEAK_FUNC(sub_823DEED4);
PPC_FUNC_IMPL(__imp__sub_823DEED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEED8"))) PPC_WEAK_FUNC(sub_823DEED8);
PPC_FUNC_IMPL(__imp__sub_823DEED8) {
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
	// bl 0x823dee08
	ctx.lr = 0x823DEEF0;
	sub_823DEE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823DEEF8;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEF0C"))) PPC_WEAK_FUNC(sub_823DEF0C);
PPC_FUNC_IMPL(__imp__sub_823DEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEF10"))) PPC_WEAK_FUNC(sub_823DEF10);
PPC_FUNC_IMPL(__imp__sub_823DEF10) {
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
	// bl 0x823dee08
	ctx.lr = 0x823DEF28;
	sub_823DEE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823DEF30;
	sub_823CDC48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEF44"))) PPC_WEAK_FUNC(sub_823DEF44);
PPC_FUNC_IMPL(__imp__sub_823DEF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEF48"))) PPC_WEAK_FUNC(sub_823DEF48);
PPC_FUNC_IMPL(__imp__sub_823DEF48) {
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
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823DEF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823def90
	if (ctx.cr6.eq) goto loc_823DEF90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DEF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823DEF90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dee08
	ctx.lr = 0x823DEF98;
	sub_823DEE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823DEFA0;
	sub_823CDC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEFB4"))) PPC_WEAK_FUNC(sub_823DEFB4);
PPC_FUNC_IMPL(__imp__sub_823DEFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEFB8"))) PPC_WEAK_FUNC(sub_823DEFB8);
PPC_FUNC_IMPL(__imp__sub_823DEFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r30,r30,-28180
	ctx.r30.s64 = ctx.r30.s64 + -28180;
	// stw r11,13652(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13652, ctx.r11.u32);
	// lwz r6,848(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,14948(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14948, ctx.r9.u32);
	// lwz r4,848(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,15092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15092, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4760(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4760);
	// bl 0x823c8fa0
	ctx.lr = 0x823DF014;
	sub_823C8FA0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,25564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25564, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823DF028;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DF03C;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DF04C;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dee08
	ctx.lr = 0x823DF054;
	sub_823DEE08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DF06C"))) PPC_WEAK_FUNC(sub_823DF06C);
PPC_FUNC_IMPL(__imp__sub_823DF06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF070"))) PPC_WEAK_FUNC(sub_823DF070);
PPC_FUNC_IMPL(__imp__sub_823DF070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823DF078;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823DF084;
	sub_823CD7E8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// ori r20,r10,37364
	ctx.r20.u64 = ctx.r10.u64 | 37364;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28244
	ctx.r5.s64 = ctx.r5.s64 + -28244;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r4,r9,37360
	ctx.r4.u64 = ctx.r9.u64 | 37360;
	// addi r3,r8,-16640
	ctx.r3.s64 = ctx.r8.s64 + -16640;
	// addi r10,r10,-28180
	ctx.r10.s64 = ctx.r10.s64 + -28180;
	// addi r9,r7,-16776
	ctx.r9.s64 = ctx.r7.s64 + -16776;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r6,-16784
	ctx.r8.s64 = ctx.r6.s64 + -16784;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// li r22,5
	ctx.r22.s64 = 5;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r21,r31,r20
	ctx.r21.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stwx r22,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r22.u32);
loc_823DF134:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823df134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DF134;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// ori r9,r11,192
	ctx.r9.u64 = ctx.r11.u64 | 192;
	// addi r28,r28,-20172
	ctx.r28.s64 = ctx.r28.s64 + -20172;
	// li r8,144
	ctx.r8.s64 = 144;
	// xori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 ^ 16;
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r6,1964(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r4,2000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2000);
	// bl 0x823ddd68
	ctx.lr = 0x823DF184;
	sub_823DDD68(ctx, base);
	// lwz r3,-4760(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823DF198;
	sub_823C8F60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x823c8f60
	ctx.lr = 0x823DF1AC;
	sub_823C8F60(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823c8f60
	ctx.lr = 0x823DF1C0;
	sub_823C8F60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x823c8f60
	ctx.lr = 0x823DF1D4;
	sub_823C8F60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823DF1E8;
	sub_823C8F60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823df210
	if (ctx.cr6.eq) goto loc_823DF210;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823df210
	if (ctx.cr6.eq) goto loc_823DF210;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823df218
	if (ctx.cr6.eq) goto loc_823DF218;
loc_823DF210:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823DF218:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// bl 0x823ce140
	ctx.lr = 0x823DF250;
	sub_823CE140(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DF258:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823df270
	if (!ctx.cr6.eq) goto loc_823DF270;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823df284
	if (ctx.cr6.eq) goto loc_823DF284;
loc_823DF270:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x823df258
	if (ctx.cr6.lt) goto loc_823DF258;
	// b 0x823df2d0
	goto loc_823DF2D0;
loc_823DF284:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823df2d0
	if (ctx.cr6.eq) goto loc_823DF2D0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce140
	ctx.lr = 0x823DF2A4;
	sub_823CE140(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823df2d0
	if (!ctx.cr6.gt) goto loc_823DF2D0;
loc_823DF2AC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce168
	ctx.lr = 0x823DF2C8;
	sub_823CE168(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823df2ac
	if (!ctx.cr0.eq) goto loc_823DF2AC;
loc_823DF2D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823DF2F0;
	sub_823C31B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d26e8
	ctx.lr = 0x823DF2FC;
	sub_823D26E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823defb8
	ctx.lr = 0x823DF304;
	sub_823DEFB8(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823DF30C;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823DF310;
	sub_8223A960(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28308
	ctx.r9.s64 = ctx.r9.s64 + -28308;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823df330
	if (ctx.cr0.lt) goto loc_823DF330;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823df338
	if (ctx.cr6.lt) goto loc_823DF338;
loc_823DF330:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823df344
	goto loc_823DF344;
loc_823DF338:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_823DF344:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823DF350;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823DF35C;
	sub_821EB290(ctx, base);
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DF368;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
loc_823DF378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823cdf48
	ctx.lr = 0x823DF384;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,56(r30)
	ea = 56 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823DF390;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823df378
	if (!ctx.cr0.eq) goto loc_823DF378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823DF3A4"))) PPC_WEAK_FUNC(sub_823DF3A4);
PPC_FUNC_IMPL(__imp__sub_823DF3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF3A8"))) PPC_WEAK_FUNC(sub_823DF3A8);
PPC_FUNC_IMPL(__imp__sub_823DF3A8) {
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-15968
	ctx.r8.s64 = ctx.r11.s64 + -15968;
	// addi r7,r10,-16104
	ctx.r7.s64 = ctx.r10.s64 + -16104;
	// addi r6,r9,-16116
	ctx.r6.s64 = ctx.r9.s64 + -16116;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// ori r10,r11,37348
	ctx.r10.u64 = ctx.r11.u64 | 37348;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823DF400;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823DF404;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823DF40C;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DF420"))) PPC_WEAK_FUNC(sub_823DF420);
PPC_FUNC_IMPL(__imp__sub_823DF420) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ccfa8
	sub_823CCFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF424"))) PPC_WEAK_FUNC(sub_823DF424);
PPC_FUNC_IMPL(__imp__sub_823DF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF428"))) PPC_WEAK_FUNC(sub_823DF428);
PPC_FUNC_IMPL(__imp__sub_823DF428) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r10,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823DF450"))) PPC_WEAK_FUNC(sub_823DF450);
PPC_FUNC_IMPL(__imp__sub_823DF450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823df460
	sub_823DF460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF458"))) PPC_WEAK_FUNC(sub_823DF458);
PPC_FUNC_IMPL(__imp__sub_823DF458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823df460
	sub_823DF460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF460"))) PPC_WEAK_FUNC(sub_823DF460);
PPC_FUNC_IMPL(__imp__sub_823DF460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823df3a8
	ctx.lr = 0x823DF480;
	sub_823DF3A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823df49c
	if (ctx.cr6.eq) goto loc_823DF49C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823DF498;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823DF49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DF4B4"))) PPC_WEAK_FUNC(sub_823DF4B4);
PPC_FUNC_IMPL(__imp__sub_823DF4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF4B8"))) PPC_WEAK_FUNC(sub_823DF4B8);
PPC_FUNC_IMPL(__imp__sub_823DF4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37320
	ctx.r10.u64 = ctx.r11.u64 | 37320;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823df4ec
	if (!ctx.cr6.eq) goto loc_823DF4EC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,4658
	ctx.r11.s64 = ctx.r11.s64 + 4658;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823df4ec
	if (!ctx.cr6.eq) goto loc_823DF4EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823DF4EC:
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF4F0"))) PPC_WEAK_FUNC(sub_823DF4F0);
PPC_FUNC_IMPL(__imp__sub_823DF4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x823DF4F8;
	sub_8224875C(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r23,56(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x823DF514;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823DF520;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823DF530;
	sub_823C3280(ctx, base);
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// addi r10,r23,-2
	ctx.r10.s64 = ctx.r23.s64 + -2;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r24,0
	ctx.r24.s64 = 0;
	// addi r7,r23,-5
	ctx.r7.s64 = ctx.r23.s64 + -5;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// cntlzw r19,r11
	ctx.r19.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r20,r23
	ctx.r20.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// cntlzw r18,r10
	ctx.r18.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// ori r27,r27,37336
	ctx.r27.u64 = ctx.r27.u64 | 37336;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// ori r30,r30,37312
	ctx.r30.u64 = ctx.r30.u64 | 37312;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// ori r17,r24,37344
	ctx.r17.u64 = ctx.r24.u64 | 37344;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// addi r9,r23,-3
	ctx.r9.s64 = ctx.r23.s64 + -3;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r29,0
	ctx.r29.s64 = 0;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r8,r23,-4
	ctx.r8.s64 = ctx.r23.s64 + -4;
	// addi r6,r23,-6
	ctx.r6.s64 = ctx.r23.s64 + -6;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r28,0
	ctx.r28.s64 = 0;
	// rlwinm r3,r20,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 27) & 0x1;
	// ori r29,r29,37320
	ctx.r29.u64 = ctx.r29.u64 | 37320;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r20,r18,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r20,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r20.u32);
	// ori r5,r5,37296
	ctx.r5.u64 = ctx.r5.u64 | 37296;
	// ori r4,r4,37304
	ctx.r4.u64 = ctx.r4.u64 | 37304;
	// stwx r7,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// ori r28,r28,37328
	ctx.r28.u64 = ctx.r28.u64 | 37328;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// addi r21,r10,-16480
	ctx.r21.s64 = ctx.r10.s64 + -16480;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r10,r19,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// stwx r8,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stwx r6,r31,r17
	PPC_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r6.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r20,r20,-28188
	ctx.r20.s64 = ctx.r20.s64 + -28188;
	// addi r30,r21,-12
	ctx.r30.s64 = ctx.r21.s64 + -12;
	// addi r27,r27,-28244
	ctx.r27.s64 = ctx.r27.s64 + -28244;
loc_823DF628:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823df660
	if (ctx.cr6.eq) goto loc_823DF660;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823df658
	if (ctx.cr6.eq) goto loc_823DF658;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823df674
	if (!ctx.cr6.eq) goto loc_823DF674;
	// addi r11,r29,-5
	ctx.r11.s64 = ctx.r29.s64 + -5;
	// b 0x823df664
	goto loc_823DF664;
loc_823DF658:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// b 0x823df664
	goto loc_823DF664;
loc_823DF660:
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_823DF664:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823DF674:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823df694
	if (ctx.cr6.lt) goto loc_823DF694;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823DF694:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823df6bc
	if (ctx.cr6.lt) goto loc_823DF6BC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823DF6BC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x823df6cc
	if (!ctx.cr6.eq) goto loc_823DF6CC;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_823DF6CC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,200(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,204(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823df778
	if (ctx.cr6.eq) goto loc_823DF778;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823df778
	if (ctx.cr6.lt) goto loc_823DF778;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823DF778:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823df7a8
	if (ctx.cr6.eq) goto loc_823DF7A8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823df7a8
	if (ctx.cr6.lt) goto loc_823DF7A8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823DF7A8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823df7c8
	if (ctx.cr6.lt) goto loc_823DF7C8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r22.u32);
loc_823DF7C8:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DF7D8;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823df7e8
	if (!ctx.cr6.eq) goto loc_823DF7E8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823DF7E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823df88c
	if (ctx.cr6.lt) goto loc_823DF88C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r22.u32);
loc_823DF88C:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DF89C;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823df8ac
	if (!ctx.cr6.eq) goto loc_823DF8AC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823DF8AC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwzu r11,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// blt cr6,0x823df628
	if (ctx.cr6.lt) goto loc_823DF628;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823dfa34
	if (!ctx.cr6.eq) goto loc_823DFA34;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,224
	ctx.r11.s64 = ctx.r21.s64 + 224;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,2
	ctx.r28.s64 = 2;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823DF974:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823df9a0
	if (ctx.cr6.lt) goto loc_823DF9A0;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_823DF9A0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823df9c8
	if (ctx.cr6.lt) goto loc_823DF9C8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823DF9C8:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dfa18
	if (ctx.cr6.lt) goto loc_823DFA18;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823DFA18:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DFA28;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823df974
	if (!ctx.cr0.eq) goto loc_823DF974;
loc_823DFA34:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823dfb28
	if (!ctx.cr6.eq) goto loc_823DFB28;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,264
	ctx.r11.s64 = ctx.r21.s64 + 264;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823DFA68:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823dfa94
	if (ctx.cr6.lt) goto loc_823DFA94;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823DFA94:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dfabc
	if (ctx.cr6.lt) goto loc_823DFABC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823DFABC:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dfb0c
	if (ctx.cr6.lt) goto loc_823DFB0C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823DFB0C:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DFB1C;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823dfa68
	if (!ctx.cr0.eq) goto loc_823DFA68;
loc_823DFB28:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823dfc1c
	if (!ctx.cr6.eq) goto loc_823DFC1C;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,304
	ctx.r11.s64 = ctx.r21.s64 + 304;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823DFB5C:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823dfb88
	if (ctx.cr6.lt) goto loc_823DFB88;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823DFB88:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dfbb0
	if (ctx.cr6.lt) goto loc_823DFBB0;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823DFBB0:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dfc00
	if (ctx.cr6.lt) goto loc_823DFC00;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823DFC00:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DFC10;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823dfb5c
	if (!ctx.cr0.eq) goto loc_823DFB5C;
loc_823DFC1C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_823DFC2C"))) PPC_WEAK_FUNC(sub_823DFC2C);
PPC_FUNC_IMPL(__imp__sub_823DFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFC30"))) PPC_WEAK_FUNC(sub_823DFC30);
PPC_FUNC_IMPL(__imp__sub_823DFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r10,37348
	ctx.r9.u64 = ctx.r10.u64 | 37348;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823dfc74
	// bdzf 4*cr6+eq,0x823dfc98
	// bne cr6,0x823dfcbc
	if (!ctx.cr6.eq) goto loc_823DFCBC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r10,-16480
	ctx.r11.s64 = ctx.r10.s64 + -16480;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823DFC74:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-16480
	ctx.r10.s64 = ctx.r10.s64 + -16480;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,224
	ctx.r11.s64 = ctx.r10.s64 + 224;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823DFC98:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16480
	ctx.r9.s64 = ctx.r9.s64 + -16480;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,264
	ctx.r11.s64 = ctx.r9.s64 + 264;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823DFCBC:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16480
	ctx.r9.s64 = ctx.r9.s64 + -16480;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,304
	ctx.r11.s64 = ctx.r9.s64 + 304;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DFCE0"))) PPC_WEAK_FUNC(sub_823DFCE0);
PPC_FUNC_IMPL(__imp__sub_823DFCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DFCE4"))) PPC_WEAK_FUNC(sub_823DFCE4);
PPC_FUNC_IMPL(__imp__sub_823DFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFCE8"))) PPC_WEAK_FUNC(sub_823DFCE8);
PPC_FUNC_IMPL(__imp__sub_823DFCE8) {
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
	// bl 0x823cdb10
	ctx.lr = 0x823DFD00;
	sub_823CDB10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823dfc30
	ctx.lr = 0x823DFD0C;
	sub_823DFC30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DFD20"))) PPC_WEAK_FUNC(sub_823DFD20);
PPC_FUNC_IMPL(__imp__sub_823DFD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13220, ctx.r6.u32);
	// lwz r5,848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13364, ctx.r8.u32);
	// lwz r7,848(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,13508(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13508, ctx.r4.u32);
	// b 0x823df4f0
	sub_823DF4F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DFD80"))) PPC_WEAK_FUNC(sub_823DFD80);
PPC_FUNC_IMPL(__imp__sub_823DFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823DFD88;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r25,r25,-28188
	ctx.r25.s64 = ctx.r25.s64 + -28188;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4760(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823c8f60
	ctx.lr = 0x823DFDD0;
	sub_823C8F60(ctx, base);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823DFDE8;
	sub_823C8F60(ctx, base);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823c8f60
	ctx.lr = 0x823DFE00;
	sub_823C8F60(ctx, base);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823DFE18;
	sub_823C8F60(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823dfe70
	if (ctx.cr6.gt) goto loc_823DFE70;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823dfe44
	// bdzf 4*cr6+eq,0x823dfe50
	// bne cr6,0x823dfe5c
	if (!ctx.cr6.eq) goto loc_823DFE5C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x823dfe64
	goto loc_823DFE64;
loc_823DFE44:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x823dfe64
	goto loc_823DFE64;
loc_823DFE50:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x823dfe64
	goto loc_823DFE64;
loc_823DFE5C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_823DFE64:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_823DFE70:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x823dfc30
	ctx.lr = 0x823DFEA4;
	sub_823DFC30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823DFEAC"))) PPC_WEAK_FUNC(sub_823DFEAC);
PPC_FUNC_IMPL(__imp__sub_823DFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFEB0"))) PPC_WEAK_FUNC(sub_823DFEB0);
PPC_FUNC_IMPL(__imp__sub_823DFEB0) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13220, ctx.r6.u32);
	// lwz r5,848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13364, ctx.r8.u32);
	// lwz r7,848(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,13508(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13508, ctx.r4.u32);
	// bl 0x823df4f0
	ctx.lr = 0x823DFF24;
	sub_823DF4F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823DFF2C;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DFF40"))) PPC_WEAK_FUNC(sub_823DFF40);
PPC_FUNC_IMPL(__imp__sub_823DFF40) {
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
	// bl 0x8223ad48
	ctx.lr = 0x823DFF58;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dff70
	if (ctx.cr6.eq) goto loc_823DFF70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfd20
	ctx.lr = 0x823DFF68;
	sub_823DFD20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823DFF70;
	sub_823CDC48(ctx, base);
loc_823DFF70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DFF84"))) PPC_WEAK_FUNC(sub_823DFF84);
PPC_FUNC_IMPL(__imp__sub_823DFF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFF88"))) PPC_WEAK_FUNC(sub_823DFF88);
PPC_FUNC_IMPL(__imp__sub_823DFF88) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13220, ctx.r6.u32);
	// lwz r5,848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,13364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13364, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r6,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13508(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13508, ctx.r6.u32);
	// bl 0x823df4f0
	ctx.lr = 0x823E0000;
	sub_823DF4F0(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// lwz r3,-784(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -784);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E0018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e0034
	if (ctx.cr6.eq) goto loc_823E0034;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E0034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E0034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823E003C;
	sub_823CDC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0050"))) PPC_WEAK_FUNC(sub_823E0050);
PPC_FUNC_IMPL(__imp__sub_823E0050) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13220, ctx.r6.u32);
	// lwz r5,848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13364, ctx.r8.u32);
	// lwz r7,848(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,13508(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13508, ctx.r4.u32);
	// bl 0x823df4f0
	ctx.lr = 0x823E00C4;
	sub_823DF4F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823E00CC;
	sub_823CDCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E00E0"))) PPC_WEAK_FUNC(sub_823E00E0);
PPC_FUNC_IMPL(__imp__sub_823E00E0) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13220, ctx.r6.u32);
	// lwz r5,848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13364, ctx.r8.u32);
	// lwz r7,848(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,13508(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13508, ctx.r4.u32);
	// bl 0x823df4f0
	ctx.lr = 0x823E0154;
	sub_823DF4F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823E015C;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0170"))) PPC_WEAK_FUNC(sub_823E0170);
PPC_FUNC_IMPL(__imp__sub_823E0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E0178;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,37320
	ctx.r10.u64 = ctx.r11.u64 | 37320;
	// li r30,11
	ctx.r30.s64 = 11;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e038c
	if (ctx.cr6.gt) goto loc_823E038C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e0268
	// bdzf 4*cr6+eq,0x823e02a8
	// bne cr6,0x823e02e8
	if (!ctx.cr6.eq) goto loc_823E02E8;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-4760
	ctx.r28.s64 = ctx.r11.s64 + -4760;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823E01CC;
	sub_823C8F28(ctx, base);
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bgt cr6,0x823e038c
	if (ctx.cr6.gt) goto loc_823E038C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e0200
	// bdzf 4*cr6+eq,0x823e020c
	// bdzf 4*cr6+eq,0x823e0224
	// bdzf 4*cr6+eq,0x823e023c
	// bdzf 4*cr6+eq,0x823e0248
	// bne cr6,0x823e0260
	if (!ctx.cr6.eq) goto loc_823E0260;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E0200:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E020C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823dfd80
	ctx.lr = 0x823E021C;
	sub_823DFD80(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E0224:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823dfd80
	ctx.lr = 0x823E0234;
	sub_823DFD80(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E023C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E0248:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823dfd80
	ctx.lr = 0x823E0258;
	sub_823DFD80(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E0260:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E0268:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-4760
	ctx.r28.s64 = ctx.r11.s64 + -4760;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823E0284;
	sub_823C8F28(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823e029c
	if (ctx.cr6.lt) goto loc_823E029C;
	// bne cr6,0x823e038c
	if (!ctx.cr6.eq) goto loc_823E038C;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E029C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E02A8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r28,r11,-4760
	ctx.r28.s64 = ctx.r11.s64 + -4760;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823E02C4;
	sub_823C8F28(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823e02dc
	if (ctx.cr6.lt) goto loc_823E02DC;
	// bne cr6,0x823e038c
	if (!ctx.cr6.eq) goto loc_823E038C;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E02DC:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E02E8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r28,r11,-4760
	ctx.r28.s64 = ctx.r11.s64 + -4760;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823E0304;
	sub_823C8F28(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823e0330
	if (ctx.cr6.lt) goto loc_823E0330;
	// beq cr6,0x823e0324
	if (ctx.cr6.eq) goto loc_823E0324;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x823e038c
	if (!ctx.cr6.lt) goto loc_823E038C;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E0324:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x823e0338
	goto loc_823E0338;
loc_823E0330:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r30,8
	ctx.r30.s64 = 8;
loc_823E0338:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 652, ctx.r11.u32);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// stw r10,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r10.u32);
	// beq cr6,0x823e0378
	if (ctx.cr6.eq) goto loc_823E0378;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r31,r11,1964
	ctx.r31.s64 = ctx.r11.s64 + 1964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823E0364;
	sub_82248A40(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823E0378;
	sub_82248A40(ctx, base);
loc_823E0378:
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E038C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E038C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E0394"))) PPC_WEAK_FUNC(sub_823E0394);
PPC_FUNC_IMPL(__imp__sub_823E0394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0398"))) PPC_WEAK_FUNC(sub_823E0398);
PPC_FUNC_IMPL(__imp__sub_823E0398) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37320
	ctx.r10.u64 = ctx.r11.u64 | 37320;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e0448
	if (ctx.cr6.gt) goto loc_823E0448;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e0414
	// bdzf 4*cr6+eq,0x823e041c
	// bne cr6,0x823e0424
	if (!ctx.cr6.eq) goto loc_823E0424;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E03FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821eb3e8
	ctx.lr = 0x823E0400;
	sub_821EB3E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E0414:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823e0428
	goto loc_823E0428;
loc_823E041C:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x823e0428
	goto loc_823E0428;
loc_823E0424:
	// li r5,3
	ctx.r5.s64 = 3;
loc_823E0428:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823E0438;
	sub_823C8F28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823dfd80
	ctx.lr = 0x823E0448;
	sub_823DFD80(ctx, base);
loc_823E0448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E045C"))) PPC_WEAK_FUNC(sub_823E045C);
PPC_FUNC_IMPL(__imp__sub_823E045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0460"))) PPC_WEAK_FUNC(sub_823E0460);
PPC_FUNC_IMPL(__imp__sub_823E0460) {
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
	// li r5,13620
	ctx.r5.s64 = 13620;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,848(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823E0484;
	sub_82106F58(ctx, base);
	// li r5,13620
	ctx.r5.s64 = 13620;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823E0494;
	sub_82106F58(ctx, base);
	// li r5,13626
	ctx.r5.s64 = 13626;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823E04A4;
	sub_82106F58(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r10,r10,-28188
	ctx.r10.s64 = ctx.r10.s64 + -28188;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13220, ctx.r8.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,13364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13364, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r6,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13508(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13508, ctx.r6.u32);
	// bl 0x823df4f0
	ctx.lr = 0x823E0508;
	sub_823DF4F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E051C"))) PPC_WEAK_FUNC(sub_823E051C);
PPC_FUNC_IMPL(__imp__sub_823E051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0520"))) PPC_WEAK_FUNC(sub_823E0520);
PPC_FUNC_IMPL(__imp__sub_823E0520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E0528;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823E0534;
	sub_823CD7E8(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28244
	ctx.r8.s64 = ctx.r8.s64 + -28244;
	// addi r5,r9,-16116
	ctx.r5.s64 = ctx.r9.s64 + -16116;
	// addi r7,r11,-15968
	ctx.r7.s64 = ctx.r11.s64 + -15968;
	// addi r6,r10,-16104
	ctx.r6.s64 = ctx.r10.s64 + -16104;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// li r3,140
	ctx.r3.s64 = 140;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// ori r11,r4,37348
	ctx.r11.u64 = ctx.r4.u64 | 37348;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// lis r28,-32177
	ctx.r28.s64 = -2108751872;
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r29.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r29,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r29.u32);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// stw r29,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r29.u32);
	// stw r30,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r30.u32);
	// stw r29,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r29.u32);
	// stw r30,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r30.u32);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// lwz r3,-4760(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
	// bl 0x823c8f60
	ctx.lr = 0x823E05D4;
	sub_823C8F60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfd80
	ctx.lr = 0x823E05E4;
	sub_823DFD80(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823E0604;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e0460
	ctx.lr = 0x823E060C;
	sub_823E0460(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8e20
	ctx.lr = 0x823E0614;
	sub_823C8E20(ctx, base);
	// lwz r30,-4760(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x823e065c
	if (!ctx.cr6.eq) goto loc_823E065C;
	// lwz r11,2008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e0658
	if (!ctx.cr6.eq) goto loc_823E0658;
	// bl 0x82164c50
	ctx.lr = 0x823E0634;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x823e0654
	if (!ctx.cr6.eq) goto loc_823E0654;
	// stw r29,2008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2008, ctx.r29.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30532
	ctx.r4.s64 = 30532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd440
	ctx.lr = 0x823E0654;
	sub_823CD440(ctx, base);
loc_823E0654:
	// lwz r30,-4760(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
loc_823E0658:
	// stw r29,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r29.u32);
loc_823E065C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E0668"))) PPC_WEAK_FUNC(sub_823E0668);
PPC_FUNC_IMPL(__imp__sub_823E0668) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-15664
	ctx.r8.s64 = ctx.r11.s64 + -15664;
	// addi r7,r10,-15800
	ctx.r7.s64 = ctx.r10.s64 + -15800;
	// addi r6,r9,-15808
	ctx.r6.s64 = ctx.r9.s64 + -15808;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// bl 0x823c8e50
	ctx.lr = 0x823E06A4;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823E06AC;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E06C0"))) PPC_WEAK_FUNC(sub_823E06C0);
PPC_FUNC_IMPL(__imp__sub_823E06C0) {
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
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E06E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823E06EC;
	sub_823CDC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0700"))) PPC_WEAK_FUNC(sub_823E0700);
PPC_FUNC_IMPL(__imp__sub_823E0700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E0708;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// bl 0x8223a990
	ctx.lr = 0x823E0730;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823E0734;
	sub_82243FD8(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x823e0784
	if (!ctx.cr6.eq) goto loc_823E0784;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,29
	ctx.r9.s64 = 29;
	// li r8,30
	ctx.r8.s64 = 30;
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r11,210
	ctx.r5.s64 = ctx.r11.s64 + 210;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r4,r3
	PPC_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823E0784:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x823e07cc
	if (!ctx.cr6.eq) goto loc_823E07CC;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,31
	ctx.r6.s64 = 31;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r5,r11,210
	ctx.r5.s64 = ctx.r11.s64 + 210;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823E07CC:
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x823e07e0
	if (!ctx.cr6.eq) goto loc_823E07E0;
	// sth r30,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823E07E0:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x823e0824
	if (!ctx.cr6.eq) goto loc_823E0824;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820849a0
	ctx.lr = 0x823E07F4;
	sub_820849A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x820849a0
	ctx.lr = 0x823E0804;
	sub_820849A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x820849a0
	ctx.lr = 0x823E0814;
	sub_820849A0(ctx, base);
	// sth r30,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r30.u16);
	// sth r29,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r29.u16);
	// sth r27,532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 532, ctx.r27.u16);
	// sth r3,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r3.u16);
loc_823E0824:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E082C"))) PPC_WEAK_FUNC(sub_823E082C);
PPC_FUNC_IMPL(__imp__sub_823E082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0830"))) PPC_WEAK_FUNC(sub_823E0830);
PPC_FUNC_IMPL(__imp__sub_823E0830) {
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
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x823e089c
	if (ctx.cr6.eq) goto loc_823E089C;
	// bl 0x82244d00
	ctx.lr = 0x823E0854;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e089c
	if (ctx.cr6.eq) goto loc_823E089C;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28336
	ctx.r11.s64 = ctx.r11.s64 + -28336;
	// addi r7,r7,-21980
	ctx.r7.s64 = ctx.r7.s64 + -21980;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3114
	ctx.r11.s64 = ctx.r11.s64 + 3114;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lbz r6,3(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x82244938
	ctx.lr = 0x823E089C;
	sub_82244938(ctx, base);
loc_823E089C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E08B0"))) PPC_WEAK_FUNC(sub_823E08B0);
PPC_FUNC_IMPL(__imp__sub_823E08B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82244d00
	ctx.lr = 0x823E08CC;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e08d8
	if (ctx.cr6.eq) goto loc_823E08D8;
	// bl 0x82244aa0
	ctx.lr = 0x823E08D8;
	sub_82244AA0(ctx, base);
loc_823E08D8:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x823e08f0
	if (ctx.cr6.eq) goto loc_823E08F0;
	// bl 0x82244cb0
	ctx.lr = 0x823E08E8;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823E08F0;
	sub_82247AC8(ctx, base);
loc_823E08F0:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// lwz r4,472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r11,r11,-28336
	ctx.r11.s64 = ctx.r11.s64 + -28336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,3114
	ctx.r11.s64 = ctx.r11.s64 + 3114;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lhz r6,96(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 96);
	// lhz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// bctrl 
	ctx.lr = 0x823E093C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r9,472(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,-28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// ori r11,r4,43588
	ctx.r11.u64 = ctx.r4.u64 | 43588;
	// stw r3,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x823E0970;
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

__attribute__((alias("__imp__sub_823E0988"))) PPC_WEAK_FUNC(sub_823E0988);
PPC_FUNC_IMPL(__imp__sub_823E0988) {
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
	// bl 0x82244d00
	ctx.lr = 0x823E09A0;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e09ac
	if (ctx.cr6.eq) goto loc_823E09AC;
	// bl 0x82244aa0
	ctx.lr = 0x823E09AC;
	sub_82244AA0(ctx, base);
loc_823E09AC:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x823e09c4
	if (ctx.cr6.eq) goto loc_823E09C4;
	// bl 0x82244cb0
	ctx.lr = 0x823E09BC;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823E09C4;
	sub_82247AC8(ctx, base);
loc_823E09C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,-28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// ori r7,r11,43588
	ctx.r7.u64 = ctx.r11.u64 | 43588;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r5,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r5.u32);
	// bctrl 
	ctx.lr = 0x823E09F8;
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

__attribute__((alias("__imp__sub_823E0A0C"))) PPC_WEAK_FUNC(sub_823E0A0C);
PPC_FUNC_IMPL(__imp__sub_823E0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0A10"))) PPC_WEAK_FUNC(sub_823E0A10);
PPC_FUNC_IMPL(__imp__sub_823E0A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cdb10
	sub_823CDB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E0A14"))) PPC_WEAK_FUNC(sub_823E0A14);
PPC_FUNC_IMPL(__imp__sub_823E0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0A18"))) PPC_WEAK_FUNC(sub_823E0A18);
PPC_FUNC_IMPL(__imp__sub_823E0A18) {
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
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E0A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E0A50;
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

__attribute__((alias("__imp__sub_823E0A64"))) PPC_WEAK_FUNC(sub_823E0A64);
PPC_FUNC_IMPL(__imp__sub_823E0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0A68"))) PPC_WEAK_FUNC(sub_823E0A68);
PPC_FUNC_IMPL(__imp__sub_823E0A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823e0a78
	sub_823E0A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E0A70"))) PPC_WEAK_FUNC(sub_823E0A70);
PPC_FUNC_IMPL(__imp__sub_823E0A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e0a78
	sub_823E0A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E0A78"))) PPC_WEAK_FUNC(sub_823E0A78);
PPC_FUNC_IMPL(__imp__sub_823E0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-15664
	ctx.r8.s64 = ctx.r11.s64 + -15664;
	// addi r7,r10,-15800
	ctx.r7.s64 = ctx.r10.s64 + -15800;
	// addi r6,r9,-15808
	ctx.r6.s64 = ctx.r9.s64 + -15808;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c8e50
	ctx.lr = 0x823E0ABC;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823E0AC4;
	sub_823CDA98(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823e0ae0
	if (ctx.cr6.eq) goto loc_823E0AE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E0ADC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E0AE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0AF8"))) PPC_WEAK_FUNC(sub_823E0AF8);
PPC_FUNC_IMPL(__imp__sub_823E0AF8) {
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
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// ori r8,r10,50884
	ctx.r8.u64 = ctx.r10.u64 | 50884;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x823e0b30
	if (ctx.cr6.eq) goto loc_823E0B30;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823E0B30:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3117
	ctx.r11.s64 = ctx.r11.s64 + 3117;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x821eb290
	ctx.lr = 0x823E0B64;
	sub_821EB290(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,164(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823E0B78;
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

__attribute__((alias("__imp__sub_823E0B8C"))) PPC_WEAK_FUNC(sub_823E0B8C);
PPC_FUNC_IMPL(__imp__sub_823E0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0B90"))) PPC_WEAK_FUNC(sub_823E0B90);
PPC_FUNC_IMPL(__imp__sub_823E0B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823E0B98;
	sub_82248774(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addi r23,r23,-28308
	ctx.r23.s64 = ctx.r23.s64 + -28308;
	// bl 0x8218b408
	ctx.lr = 0x823E0BB4;
	sub_8218B408(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823E0BBC;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823E0BC8;
	sub_823C3280(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r27,-28240
	ctx.r27.s64 = ctx.r27.s64 + -28240;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r9,-28292
	ctx.r9.s64 = ctx.r9.s64 + -28292;
	// addi r10,r27,-8
	ctx.r10.s64 = ctx.r27.s64 + -8;
loc_823E0BEC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwu r5,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823e0bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0BEC;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r7,r10,4144
	ctx.r7.s64 = ctx.r10.s64 + 4144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E0C20:
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0c40
	if (ctx.cr6.lt) goto loc_823E0C40;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r9.u32);
loc_823E0C40:
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0c60
	if (ctx.cr6.lt) goto loc_823E0C60;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r9.u32);
loc_823E0C60:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0c80
	if (ctx.cr6.lt) goto loc_823E0C80;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r9.u32);
loc_823E0C80:
	// addi r8,r8,76
	ctx.r8.s64 = ctx.r8.s64 + 76;
	// bdnz 0x823e0c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0C20;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r11,-21996
	ctx.r11.s64 = ctx.r11.s64 + -21996;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// blt cr6,0x823e0ca8
	if (ctx.cr6.lt) goto loc_823E0CA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823E0CA8:
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823e0de8
	if (ctx.cr6.eq) goto loc_823E0DE8;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,0
	ctx.r11.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r26,r11,37396
	ctx.r26.u64 = ctx.r11.u64 | 37396;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_823E0CE4:
	// lwz r10,20(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0d10
	if (ctx.cr6.lt) goto loc_823E0D10;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823E0D10:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0d3c
	if (ctx.cr6.lt) goto loc_823E0D3C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823E0D3C:
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,204(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,208(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e0d8c
	if (ctx.cr6.lt) goto loc_823E0D8C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r24.u32);
loc_823E0D8C:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bl 0x820844f8
	ctx.lr = 0x823E0DB0;
	sub_820844F8(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r24.u32);
	// blt cr6,0x823e0ce4
	if (ctx.cr6.lt) goto loc_823E0CE4;
loc_823E0DE8:
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r29,r9,26232
	ctx.r29.s64 = ctx.r9.s64 + 26232;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,-21984
	ctx.r30.s64 = ctx.r30.s64 + -21984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82248910
	ctx.lr = 0x823E0E14;
	sub_82248910(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r28,r28,-21968
	ctx.r28.s64 = ctx.r28.s64 + -21968;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248910
	ctx.lr = 0x823E0E2C;
	sub_82248910(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,49880
	ctx.r6.u64 = ctx.r8.u64 | 49880;
	// ori r5,r7,49900
	ctx.r5.u64 = ctx.r7.u64 | 49900;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r11,r4,50392
	ctx.r11.u64 = ctx.r4.u64 | 50392;
	// ori r10,r3,50412
	ctx.r10.u64 = ctx.r3.u64 | 50412;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r30,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r24,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r24.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r28,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r24,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3117
	ctx.r11.s64 = ctx.r11.s64 + 3117;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x821eb290
	ctx.lr = 0x823E0E9C;
	sub_821EB290(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823E0EA8"))) PPC_WEAK_FUNC(sub_823E0EA8);
PPC_FUNC_IMPL(__imp__sub_823E0EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E0EB0;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823E0EC4;
	sub_823CD7E8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,-15664
	ctx.r7.s64 = ctx.r10.s64 + -15664;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r9,-15800
	ctx.r6.s64 = ctx.r9.s64 + -15800;
	// addi r5,r8,-15808
	ctx.r5.s64 = ctx.r8.s64 + -15808;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r11,r11,-28248
	ctx.r11.s64 = ctx.r11.s64 + -28248;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823E0F00:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e0f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E0F00;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-21996
	ctx.r29.s64 = ctx.r29.s64 + -21996;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-21984
	ctx.r10.s64 = ctx.r10.s64 + -21984;
	// addi r9,r9,-21968
	ctx.r9.s64 = ctx.r9.s64 + -21968;
	// ori r8,r11,43616
	ctx.r8.u64 = ctx.r11.u64 | 43616;
	// addi r25,r25,-21916
	ctx.r25.s64 = ctx.r25.s64 + -21916;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r6,152
	ctx.r6.s64 = 152;
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// li r4,6144
	ctx.r4.s64 = 6144;
	// std r30,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r30.u64);
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r6,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r6.u32);
	// addi r28,r28,-28140
	ctx.r28.s64 = ctx.r28.s64 + -28140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x823E0F70;
	sub_822AA648(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cebd0
	ctx.lr = 0x823E0F84;
	sub_823CEBD0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x823ce140
	ctx.lr = 0x823E0FC0;
	sub_823CE140(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x823e1004
	if (!ctx.cr6.gt) goto loc_823E1004;
loc_823E0FD8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823e1000
	if (ctx.cr6.eq) goto loc_823E1000;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823e0fd8
	if (ctx.cr6.lt) goto loc_823E0FD8;
	// b 0x823e1004
	goto loc_823E1004;
loc_823E1000:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823E1004:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823e1034
	if (!ctx.cr6.gt) goto loc_823E1034;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_823E1010:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce168
	ctx.lr = 0x823E102C;
	sub_823CE168(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823e1010
	if (!ctx.cr0.eq) goto loc_823E1010;
loc_823E1034:
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,-21952
	ctx.r8.s64 = ctx.r8.s64 + -21952;
	// addi r7,r7,-21936
	ctx.r7.s64 = ctx.r7.s64 + -21936;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,492(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// beq cr6,0x823e1094
	if (ctx.cr6.eq) goto loc_823E1094;
	// bl 0x82244cb0
	ctx.lr = 0x823E108C;
	sub_82244CB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82247ac8
	ctx.lr = 0x823E1094;
	sub_82247AC8(ctx, base);
loc_823E1094:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823E10B4;
	sub_823C31B0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// ori r9,r10,50884
	ctx.r9.u64 = ctx.r10.u64 | 50884;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x823e10d8
	if (!ctx.cr6.eq) goto loc_823E10D8;
	// stwx r26,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r26.u32);
	// b 0x823e10dc
	goto loc_823E10DC;
loc_823E10D8:
	// stwx r30,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r30.u32);
loc_823E10DC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3117
	ctx.r11.s64 = ctx.r11.s64 + 3117;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x821eb290
	ctx.lr = 0x823E110C;
	sub_821EB290(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,164(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823E1120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823E1128;
	sub_823C8DF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E1134"))) PPC_WEAK_FUNC(sub_823E1134);
PPC_FUNC_IMPL(__imp__sub_823E1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1138"))) PPC_WEAK_FUNC(sub_823E1138);
PPC_FUNC_IMPL(__imp__sub_823E1138) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-15336
	ctx.r8.s64 = ctx.r11.s64 + -15336;
	// addi r7,r10,-15472
	ctx.r7.s64 = ctx.r10.s64 + -15472;
	// addi r6,r9,-15484
	ctx.r6.s64 = ctx.r9.s64 + -15484;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// bl 0x823c8e50
	ctx.lr = 0x823E1174;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823E117C;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1190"))) PPC_WEAK_FUNC(sub_823E1190);
PPC_FUNC_IMPL(__imp__sub_823E1190) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cdb58
	sub_823CDB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1194"))) PPC_WEAK_FUNC(sub_823E1194);
PPC_FUNC_IMPL(__imp__sub_823E1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1198"))) PPC_WEAK_FUNC(sub_823E1198);
PPC_FUNC_IMPL(__imp__sub_823E1198) {
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
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E11BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823E11C4;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E11D8"))) PPC_WEAK_FUNC(sub_823E11D8);
PPC_FUNC_IMPL(__imp__sub_823E11D8) {
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
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E11FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823E1204;
	sub_823CDC48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1218"))) PPC_WEAK_FUNC(sub_823E1218);
PPC_FUNC_IMPL(__imp__sub_823E1218) {
	PPC_FUNC_PROLOGUE();
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-28336
	ctx.r9.s64 = ctx.r9.s64 + -28336;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,4658
	ctx.r8.s64 = ctx.r10.s64 + 4658;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x823e1264
	if (ctx.cr6.lt) goto loc_823E1264;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r7,472(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r7,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r7.u32);
	// b 0x823e128c
	goto loc_823E128C;
loc_823E1264:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r8,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r8.u32);
	// addi r7,r10,9327
	ctx.r7.s64 = ctx.r10.s64 + 9327;
	// ori r6,r9,37304
	ctx.r6.u64 = ctx.r9.u64 | 37304;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r4,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r4.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823E128C:
	// stw r10,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// stw r9,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r9.u32);
	// stw r8,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r8.u32);
	// lwz r11,-28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E12AC"))) PPC_WEAK_FUNC(sub_823E12AC);
PPC_FUNC_IMPL(__imp__sub_823E12AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E12B0"))) PPC_WEAK_FUNC(sub_823E12B0);
PPC_FUNC_IMPL(__imp__sub_823E12B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8f28
	ctx.lr = 0x823E12E4;
	sub_823C8F28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8f28
	ctx.lr = 0x823E12F8;
	sub_823C8F28(ctx, base);
	// lwz r7,472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,19
	ctx.r9.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r8,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r8.u32);
	// stw r7,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r7.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823E132C;
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

__attribute__((alias("__imp__sub_823E1344"))) PPC_WEAK_FUNC(sub_823E1344);
PPC_FUNC_IMPL(__imp__sub_823E1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1348"))) PPC_WEAK_FUNC(sub_823E1348);
PPC_FUNC_IMPL(__imp__sub_823E1348) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E134C"))) PPC_WEAK_FUNC(sub_823E134C);
PPC_FUNC_IMPL(__imp__sub_823E134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1350"))) PPC_WEAK_FUNC(sub_823E1350);
PPC_FUNC_IMPL(__imp__sub_823E1350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E1360"))) PPC_WEAK_FUNC(sub_823E1360);
PPC_FUNC_IMPL(__imp__sub_823E1360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E1370"))) PPC_WEAK_FUNC(sub_823E1370);
PPC_FUNC_IMPL(__imp__sub_823E1370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e15a8
	sub_823E15A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1378"))) PPC_WEAK_FUNC(sub_823E1378);
PPC_FUNC_IMPL(__imp__sub_823E1378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823e15a8
	sub_823E15A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1380"))) PPC_WEAK_FUNC(sub_823E1380);
PPC_FUNC_IMPL(__imp__sub_823E1380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823E1388;
	sub_82248770(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823E1398;
	sub_823CD7E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r8,-28244
	ctx.r8.s64 = ctx.r8.s64 + -28244;
	// addi r7,r11,-15336
	ctx.r7.s64 = ctx.r11.s64 + -15336;
	// addi r5,r9,-15484
	ctx.r5.s64 = ctx.r9.s64 + -15484;
	// addi r30,r30,-28204
	ctx.r30.s64 = ctx.r30.s64 + -28204;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r6,r10,-15472
	ctx.r6.s64 = ctx.r10.s64 + -15472;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// li r6,151
	ctx.r6.s64 = 151;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r29.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r29,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r29.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r29,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r29.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r23,-4760(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// stw r6,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r6.u32);
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bl 0x823ce140
	ctx.lr = 0x823E1448;
	sub_823CE140(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823E1468;
	sub_823C31B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,164(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E147C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823E1484;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a990
	ctx.lr = 0x823E1488;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823E148C;
	sub_82243FD8(ctx, base);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r26,r26,-28200
	ctx.r26.s64 = ctx.r26.s64 + -28200;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x823E14A4;
	sub_822AA648(ctx, base);
	// lwz r7,492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r7,22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 22, ctx.xer);
	// bne cr6,0x823e14c8
	if (!ctx.cr6.eq) goto loc_823E14C8;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,30
	ctx.r9.s64 = 30;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r7,28
	ctx.r7.s64 = 28;
	// b 0x823e14dc
	goto loc_823E14DC;
loc_823E14C8:
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,33
	ctx.r9.s64 = 33;
	// li r8,34
	ctx.r8.s64 = 34;
	// li r7,31
	ctx.r7.s64 = 31;
loc_823E14DC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,5136
	ctx.r11.s64 = ctx.r11.s64 + 5136;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ori r30,r30,36096
	ctx.r30.u64 = ctx.r30.u64 | 36096;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r25,r26,-4
	ctx.r25.s64 = ctx.r26.s64 + -4;
	// ori r24,r11,37120
	ctx.r24.u64 = ctx.r11.u64 | 37120;
loc_823E1514:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,210
	ctx.r10.s64 = ctx.r11.s64 + 210;
	// addi r9,r11,220
	ctx.r9.s64 = ctx.r11.s64 + 220;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r22.u32);
	// extsh r26,r6
	ctx.r26.s64 = ctx.r6.s16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sthx r6,r7,r23
	PPC_STORE_U16(ctx.r7.u32 + ctx.r23.u32, ctx.r6.u16);
	// bl 0x820845f0
	ctx.lr = 0x823E1544;
	sub_820845F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e1580
	if (ctx.cr6.eq) goto loc_823E1580;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820844f8
	ctx.lr = 0x823E1564;
	sub_820844F8(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 216, ctx.r28.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r29.u32);
loc_823E1580:
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// stwu r26,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r25.u32 = ea;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x823e1514
	if (ctx.cr6.lt) goto loc_823E1514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823E15A4"))) PPC_WEAK_FUNC(sub_823E15A4);
PPC_FUNC_IMPL(__imp__sub_823E15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E15A8"))) PPC_WEAK_FUNC(sub_823E15A8);
PPC_FUNC_IMPL(__imp__sub_823E15A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-15336
	ctx.r8.s64 = ctx.r11.s64 + -15336;
	// addi r7,r10,-15472
	ctx.r7.s64 = ctx.r10.s64 + -15472;
	// addi r6,r9,-15484
	ctx.r6.s64 = ctx.r9.s64 + -15484;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c8e50
	ctx.lr = 0x823E15EC;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823E15F4;
	sub_823CDA98(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823e1610
	if (ctx.cr6.eq) goto loc_823E1610;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E160C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E1610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1628"))) PPC_WEAK_FUNC(sub_823E1628);
PPC_FUNC_IMPL(__imp__sub_823E1628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E1630;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823E1648;
	sub_8218B408(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823E1650;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823E165C;
	sub_823C3280(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-28292
	ctx.r10.s64 = ctx.r10.s64 + -28292;
	// ori r8,r9,37296
	ctx.r8.u64 = ctx.r9.u64 | 37296;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r25,r11,5136
	ctx.r25.s64 = ctx.r11.s64 + 5136;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r9,r6,37304
	ctx.r9.u64 = ctx.r6.u64 | 37304;
	// lis r5,0
	ctx.r5.s64 = 0;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// ori r6,r5,37312
	ctx.r6.u64 = ctx.r5.u64 | 37312;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r8,r5,37320
	ctx.r8.u64 = ctx.r5.u64 | 37320;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r7,r5,37328
	ctx.r7.u64 = ctx.r5.u64 | 37328;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1718
	if (ctx.cr6.lt) goto loc_823E1718;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823E1718:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1738
	if (ctx.cr6.lt) goto loc_823E1738;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1738:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e175c
	if (ctx.cr6.eq) goto loc_823E175C;
	// blt cr6,0x823e175c
	if (ctx.cr6.lt) goto loc_823E175C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E175C:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1780
	if (ctx.cr6.lt) goto loc_823E1780;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E1780:
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e17a4
	if (ctx.cr6.eq) goto loc_823E17A4;
	// blt cr6,0x823e17a4
	if (ctx.cr6.lt) goto loc_823E17A4;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E17A4:
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e17c4
	if (ctx.cr6.lt) goto loc_823E17C4;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E17C4:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e17e4
	if (ctx.cr6.lt) goto loc_823E17E4;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E17E4:
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1808
	if (ctx.cr6.eq) goto loc_823E1808;
	// blt cr6,0x823e1808
	if (ctx.cr6.lt) goto loc_823E1808;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1808:
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1828
	if (ctx.cr6.lt) goto loc_823E1828;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E1828:
	// lwz r11,164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e184c
	if (ctx.cr6.eq) goto loc_823E184C;
	// blt cr6,0x823e184c
	if (ctx.cr6.lt) goto loc_823E184C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E184C:
	// lwz r11,168(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e186c
	if (ctx.cr6.lt) goto loc_823E186C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E186C:
	// lwz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e188c
	if (ctx.cr6.lt) goto loc_823E188C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E188C:
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e18b0
	if (ctx.cr6.eq) goto loc_823E18B0;
	// blt cr6,0x823e18b0
	if (ctx.cr6.lt) goto loc_823E18B0;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E18B0:
	// lwz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e18d0
	if (ctx.cr6.lt) goto loc_823E18D0;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E18D0:
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e18f4
	if (ctx.cr6.eq) goto loc_823E18F4;
	// blt cr6,0x823e18f4
	if (ctx.cr6.lt) goto loc_823E18F4;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E18F4:
	// lwz r11,252(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1914
	if (ctx.cr6.lt) goto loc_823E1914;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1914:
	// lwz r11,256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1934
	if (ctx.cr6.lt) goto loc_823E1934;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1934:
	// lwz r11,260(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1958
	if (ctx.cr6.eq) goto loc_823E1958;
	// blt cr6,0x823e1958
	if (ctx.cr6.lt) goto loc_823E1958;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1958:
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1978
	if (ctx.cr6.lt) goto loc_823E1978;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E1978:
	// lwz r11,332(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e199c
	if (ctx.cr6.eq) goto loc_823E199C;
	// blt cr6,0x823e199c
	if (ctx.cr6.lt) goto loc_823E199C;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r27.u32);
loc_823E199C:
	// lwz r11,336(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e19bc
	if (ctx.cr6.lt) goto loc_823E19BC;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E19BC:
	// lwz r11,340(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e19dc
	if (ctx.cr6.lt) goto loc_823E19DC;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E19DC:
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1a00
	if (ctx.cr6.eq) goto loc_823E1A00;
	// blt cr6,0x823e1a00
	if (ctx.cr6.lt) goto loc_823E1A00;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r9.u32);
loc_823E1A00:
	// lwz r11,348(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1a20
	if (ctx.cr6.lt) goto loc_823E1A20;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823E1A20:
	// lwz r11,416(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1a44
	if (ctx.cr6.eq) goto loc_823E1A44;
	// blt cr6,0x823e1a44
	if (ctx.cr6.lt) goto loc_823E1A44;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823E1A44:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,0
	ctx.r11.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r26,r11,37292
	ctx.r26.u64 = ctx.r11.u64 | 37292;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823E1A6C:
	// mulli r11,r27,84
	ctx.r11.s64 = ctx.r27.s64 * 84;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1aa4
	if (ctx.cr6.lt) goto loc_823E1AA4;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823E1AA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1ad0
	if (ctx.cr6.lt) goto loc_823E1AD0;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823E1AD0:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823e1b2c
	if (ctx.cr6.lt) goto loc_823E1B2C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823E1B2C:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x823e1be0
	if (!ctx.cr6.eq) goto loc_823E1BE0;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8218b408
	ctx.lr = 0x823E1B3C;
	sub_8218B408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8218b408
	ctx.lr = 0x823E1B48;
	sub_8218B408(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e1b5c
	if (ctx.cr6.eq) goto loc_823E1B5C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_823E1B5C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823E1BE0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// blt cr6,0x823e1a6c
	if (ctx.cr6.lt) goto loc_823E1A6C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E1BFC"))) PPC_WEAK_FUNC(sub_823E1BFC);
PPC_FUNC_IMPL(__imp__sub_823E1BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1C00"))) PPC_WEAK_FUNC(sub_823E1C00);
PPC_FUNC_IMPL(__imp__sub_823E1C00) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x823e54b0
	ctx.lr = 0x823E1C1C;
	sub_823E54B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x823E1C24;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x823E1C28;
	sub_821EB3E8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x823c3ca8
	ctx.lr = 0x823E1C38;
	sub_823C3CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1C4C"))) PPC_WEAK_FUNC(sub_823E1C4C);
PPC_FUNC_IMPL(__imp__sub_823E1C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1C50"))) PPC_WEAK_FUNC(sub_823E1C50);
PPC_FUNC_IMPL(__imp__sub_823E1C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E1C58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x823e54b0
	ctx.lr = 0x823E1C68;
	sub_823E54B0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x823c3cd8
	ctx.lr = 0x823E1C78;
	sub_823C3CD8(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e1cb4
	if (!ctx.cr6.gt) goto loc_823E1CB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
loc_823E1C90:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823e6468
	ctx.lr = 0x823E1C9C;
	sub_823E6468(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,2880
	ctx.r30.s64 = ctx.r30.s64 + 2880;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e1c90
	if (ctx.cr6.lt) goto loc_823E1C90;
loc_823E1CB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E1CBC"))) PPC_WEAK_FUNC(sub_823E1CBC);
PPC_FUNC_IMPL(__imp__sub_823E1CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1CC0"))) PPC_WEAK_FUNC(sub_823E1CC0);
PPC_FUNC_IMPL(__imp__sub_823E1CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1CD0"))) PPC_WEAK_FUNC(sub_823E1CD0);
PPC_FUNC_IMPL(__imp__sub_823E1CD0) {
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
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E1CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e1d0c
	if (ctx.cr6.eq) goto loc_823E1D0C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x823e1d10
	if (ctx.cr6.gt) goto loc_823E1D10;
loc_823E1D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E1D10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1D24"))) PPC_WEAK_FUNC(sub_823E1D24);
PPC_FUNC_IMPL(__imp__sub_823E1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1D28"))) PPC_WEAK_FUNC(sub_823E1D28);
PPC_FUNC_IMPL(__imp__sub_823E1D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e54b0
	sub_823E54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1D38"))) PPC_WEAK_FUNC(sub_823E1D38);
PPC_FUNC_IMPL(__imp__sub_823E1D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1D3C"))) PPC_WEAK_FUNC(sub_823E1D3C);
PPC_FUNC_IMPL(__imp__sub_823E1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1D40"))) PPC_WEAK_FUNC(sub_823E1D40);
PPC_FUNC_IMPL(__imp__sub_823E1D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823e73a0
	sub_823E73A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1D58"))) PPC_WEAK_FUNC(sub_823E1D58);
PPC_FUNC_IMPL(__imp__sub_823E1D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1D5C"))) PPC_WEAK_FUNC(sub_823E1D5C);
PPC_FUNC_IMPL(__imp__sub_823E1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1D60"))) PPC_WEAK_FUNC(sub_823E1D60);
PPC_FUNC_IMPL(__imp__sub_823E1D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823e73a0
	sub_823E73A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1D78"))) PPC_WEAK_FUNC(sub_823E1D78);
PPC_FUNC_IMPL(__imp__sub_823E1D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1D7C"))) PPC_WEAK_FUNC(sub_823E1D7C);
PPC_FUNC_IMPL(__imp__sub_823E1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1D80"))) PPC_WEAK_FUNC(sub_823E1D80);
PPC_FUNC_IMPL(__imp__sub_823E1D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E1D88;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x821f18c0
	ctx.lr = 0x823E1DA0;
	sub_821F18C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e1dc0
	if (ctx.cr6.eq) goto loc_823E1DC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f2020
	ctx.lr = 0x823E1DC0;
	sub_821F2020(ctx, base);
loc_823E1DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E1DC8"))) PPC_WEAK_FUNC(sub_823E1DC8);
PPC_FUNC_IMPL(__imp__sub_823E1DC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1DD4"))) PPC_WEAK_FUNC(sub_823E1DD4);
PPC_FUNC_IMPL(__imp__sub_823E1DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1DD8"))) PPC_WEAK_FUNC(sub_823E1DD8);
PPC_FUNC_IMPL(__imp__sub_823E1DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x823e5398
	sub_823E5398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1DE0"))) PPC_WEAK_FUNC(sub_823E1DE0);
PPC_FUNC_IMPL(__imp__sub_823E1DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E1DE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e1e5c
	if (ctx.cr6.eq) goto loc_823E1E5C;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r31,r30,596
	ctx.r31.s64 = ctx.r30.s64 + 596;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82163ef8
	ctx.lr = 0x823E1E1C;
	sub_82163EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x823E1E28;
	sub_82156F00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x823E1E34;
	sub_820EF4F8(ctx, base);
	// addi r31,r30,900
	ctx.r31.s64 = ctx.r30.s64 + 900;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x823E1E44;
	sub_82163EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x823E1E50;
	sub_82156F00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x823E1E5C;
	sub_820EF4F8(ctx, base);
loc_823E1E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E1E64"))) PPC_WEAK_FUNC(sub_823E1E64);
PPC_FUNC_IMPL(__imp__sub_823E1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1E68"))) PPC_WEAK_FUNC(sub_823E1E68);
PPC_FUNC_IMPL(__imp__sub_823E1E68) {
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
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e1ea0
	if (!ctx.cr6.eq) goto loc_823E1EA0;
loc_823E1E88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E1EA0:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823e1e88
	if (ctx.cr6.eq) goto loc_823E1E88;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// bl 0x823e5c78
	ctx.lr = 0x823E1EB4;
	sub_823E5C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e1ec0
	if (!ctx.cr6.eq) goto loc_823E1EC0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823E1EC0:
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

__attribute__((alias("__imp__sub_823E1ED8"))) PPC_WEAK_FUNC(sub_823E1ED8);
PPC_FUNC_IMPL(__imp__sub_823E1ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E1EE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e1f2c
	if (ctx.cr6.eq) goto loc_823E1F2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r29,2092(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2092);
	// bl 0x823e6468
	ctx.lr = 0x823E1F04;
	sub_823E6468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4b98
	ctx.lr = 0x823E1F14;
	sub_823E4B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e6480
	ctx.lr = 0x823E1F1C;
	sub_823E6480(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4508
	ctx.lr = 0x823E1F2C;
	sub_823E4508(ctx, base);
loc_823E1F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E1F34"))) PPC_WEAK_FUNC(sub_823E1F34);
PPC_FUNC_IMPL(__imp__sub_823E1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1F38"))) PPC_WEAK_FUNC(sub_823E1F38);
PPC_FUNC_IMPL(__imp__sub_823E1F38) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823e1f64
	if (ctx.cr6.eq) goto loc_823E1F64;
loc_823E1F50:
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
loc_823E1F64:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823e1f50
	if (!ctx.cr6.eq) goto loc_823E1F50;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// bl 0x823e5c78
	ctx.lr = 0x823E1F7C;
	sub_823E5C78(ctx, base);
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

__attribute__((alias("__imp__sub_823E1F94"))) PPC_WEAK_FUNC(sub_823E1F94);
PPC_FUNC_IMPL(__imp__sub_823E1F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1F98"))) PPC_WEAK_FUNC(sub_823E1F98);
PPC_FUNC_IMPL(__imp__sub_823E1F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E1FA0;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,512
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 512, ctx.xer);
	// beq cr6,0x823e2068
	if (ctx.cr6.eq) goto loc_823E2068;
	// bl 0x821f18c0
	ctx.lr = 0x823E1FBC;
	sub_821F18C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2068
	if (ctx.cr6.eq) goto loc_823E2068;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,-772(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -772);
	// bl 0x821f02c0
	ctx.lr = 0x823E1FF4;
	sub_821F02C0(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x821f1b28
	ctx.lr = 0x823E200C;
	sub_821F1B28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x823e2048
	if (ctx.cr6.eq) goto loc_823E2048;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823e2048
	if (!ctx.cr6.eq) goto loc_823E2048;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823e2048
	if (!ctx.cr6.eq) goto loc_823E2048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f1ad8
	ctx.lr = 0x823E2040;
	sub_821F1AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e2068
	if (!ctx.cr6.eq) goto loc_823E2068;
loc_823E2048:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f3050
	ctx.lr = 0x823E205C;
	sub_821F3050(ctx, base);
	// addi r11,r31,39
	ctx.r11.s64 = ctx.r31.s64 + 39;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r29.u32);
loc_823E2068:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E2070"))) PPC_WEAK_FUNC(sub_823E2070);
PPC_FUNC_IMPL(__imp__sub_823E2070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_823E208C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x823e74d0
	ctx.lr = 0x823E2098;
	sub_823E74D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e20bc
	if (ctx.cr6.eq) goto loc_823E20BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e208c
	if (ctx.cr6.lt) goto loc_823E208C;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// stw r10,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r10.u32);
loc_823E20BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E20D4"))) PPC_WEAK_FUNC(sub_823E20D4);
PPC_FUNC_IMPL(__imp__sub_823E20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E20D8"))) PPC_WEAK_FUNC(sub_823E20D8);
PPC_FUNC_IMPL(__imp__sub_823E20D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bgt 0x823e2134
	if (ctx.cr0.gt) goto loc_823E2134;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823E2104:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823e73a0
	ctx.lr = 0x823E2118;
	sub_823E73A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e2104
	if (ctx.cr6.lt) goto loc_823E2104;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x823e54b0
	ctx.lr = 0x823E212C;
	sub_823E54B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
loc_823E2134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E214C"))) PPC_WEAK_FUNC(sub_823E214C);
PPC_FUNC_IMPL(__imp__sub_823E214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2150"))) PPC_WEAK_FUNC(sub_823E2150);
PPC_FUNC_IMPL(__imp__sub_823E2150) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x823e7708
	ctx.lr = 0x823E2170;
	sub_823E7708(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4248
	ctx.lr = 0x823E217C;
	sub_823E4248(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e58d0
	ctx.lr = 0x823E2188;
	sub_823E58D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E219C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne cr6,0x823e21ac
	if (!ctx.cr6.eq) goto loc_823E21AC;
	// li r11,11
	ctx.r11.s64 = 11;
loc_823E21AC:
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E21C4"))) PPC_WEAK_FUNC(sub_823E21C4);
PPC_FUNC_IMPL(__imp__sub_823E21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E21C8"))) PPC_WEAK_FUNC(sub_823E21C8);
PPC_FUNC_IMPL(__imp__sub_823E21C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E21D0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e22e8
	if (ctx.cr6.eq) goto loc_823E22E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e90a8
	ctx.lr = 0x823E21F4;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e22e8
	if (ctx.cr6.eq) goto loc_823E22E8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e22e8
	if (ctx.cr6.eq) goto loc_823E22E8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,-7488(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823e22e8
	if (ctx.cr6.eq) goto loc_823E22E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821addc0
	ctx.lr = 0x823E2220;
	sub_821ADDC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821add20
	ctx.lr = 0x823E222C;
	sub_821ADD20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x823E223C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x823E2248;
	sub_821AD498(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e22a0
	if (ctx.cr6.eq) goto loc_823E22A0;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e22a0
	if (!ctx.cr6.gt) goto loc_823E22A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823E2268:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823e228c
	if (ctx.cr0.eq) goto loc_823E228C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e5c78
	ctx.lr = 0x823E227C;
	sub_823E5C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e228c
	if (ctx.cr6.eq) goto loc_823E228C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e62f8
	ctx.lr = 0x823E228C;
	sub_823E62F8(ctx, base);
loc_823E228C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2880
	ctx.r30.s64 = ctx.r30.s64 + 2880;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e2268
	if (ctx.cr6.lt) goto loc_823E2268;
loc_823E22A0:
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e22b0
	if (ctx.cr6.eq) goto loc_823E22B0;
	// bl 0x823e7210
	ctx.lr = 0x823E22B0;
	sub_823E7210(ctx, base);
loc_823E22B0:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e22c0
	if (ctx.cr6.eq) goto loc_823E22C0;
	// bl 0x823e43c8
	ctx.lr = 0x823E22C0;
	sub_823E43C8(ctx, base);
loc_823E22C0:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e22d0
	if (ctx.cr6.eq) goto loc_823E22D0;
	// bl 0x823e5880
	ctx.lr = 0x823E22D0;
	sub_823E5880(ctx, base);
loc_823E22D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x823E22DC;
	sub_821AD600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x823E22E8;
	sub_821AD498(ctx, base);
loc_823E22E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E22F0"))) PPC_WEAK_FUNC(sub_823E22F0);
PPC_FUNC_IMPL(__imp__sub_823E22F0) {
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
	ctx.lr = 0x823E2308;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e2324
	if (!ctx.cr6.eq) goto loc_823E2324;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823e2328
	if (ctx.cr6.eq) goto loc_823E2328;
loc_823E2324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E2328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E233C"))) PPC_WEAK_FUNC(sub_823E233C);
PPC_FUNC_IMPL(__imp__sub_823E233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2340"))) PPC_WEAK_FUNC(sub_823E2340);
PPC_FUNC_IMPL(__imp__sub_823E2340) {
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
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823e23a4
	if (!ctx.cr6.gt) goto loc_823E23A4;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E236C:
	// add. r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823e2380
	if (ctx.cr0.eq) goto loc_823E2380;
	// lwz r7,2092(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823e2394
	if (ctx.cr6.eq) goto loc_823E2394;
loc_823E2380:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e236c
	if (ctx.cr6.lt) goto loc_823E236C;
	// b 0x823e23a4
	goto loc_823E23A4;
loc_823E2394:
	// bl 0x823e5c98
	ctx.lr = 0x823E2398;
	sub_823E5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x823e23a8
	if (!ctx.cr6.eq) goto loc_823E23A8;
loc_823E23A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E23A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E23BC"))) PPC_WEAK_FUNC(sub_823E23BC);
PPC_FUNC_IMPL(__imp__sub_823E23BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E23C0"))) PPC_WEAK_FUNC(sub_823E23C0);
PPC_FUNC_IMPL(__imp__sub_823E23C0) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e2414
	if (!ctx.cr6.gt) goto loc_823E2414;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E23EC:
	// add. r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823e2400
	if (ctx.cr0.eq) goto loc_823E2400;
	// lwz r8,2092(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823e2430
	if (ctx.cr6.eq) goto loc_823E2430;
loc_823E2400:
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e23ec
	if (ctx.cr6.lt) goto loc_823E23EC;
loc_823E2414:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E2430:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E245C"))) PPC_WEAK_FUNC(sub_823E245C);
PPC_FUNC_IMPL(__imp__sub_823E245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2460"))) PPC_WEAK_FUNC(sub_823E2460);
PPC_FUNC_IMPL(__imp__sub_823E2460) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E2480:
	// add. r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e2494
	if (ctx.cr0.eq) goto loc_823E2494;
	// lwz r6,2092(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2092);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823e24a8
	if (ctx.cr6.eq) goto loc_823E24A8;
loc_823E2494:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e2480
	if (ctx.cr6.lt) goto loc_823E2480;
	// blr 
	return;
loc_823E24A8:
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E24BC"))) PPC_WEAK_FUNC(sub_823E24BC);
PPC_FUNC_IMPL(__imp__sub_823E24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E24C0"))) PPC_WEAK_FUNC(sub_823E24C0);
PPC_FUNC_IMPL(__imp__sub_823E24C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E24D8:
	// add. r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e24ec
	if (ctx.cr0.eq) goto loc_823E24EC;
	// lwz r6,2092(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2092);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823e2500
	if (ctx.cr6.eq) goto loc_823E2500;
loc_823E24EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2880
	ctx.r10.s64 = ctx.r10.s64 + 2880;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e24d8
	if (ctx.cr6.lt) goto loc_823E24D8;
	// blr 
	return;
loc_823E2500:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E2514"))) PPC_WEAK_FUNC(sub_823E2514);
PPC_FUNC_IMPL(__imp__sub_823E2514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2518"))) PPC_WEAK_FUNC(sub_823E2518);
PPC_FUNC_IMPL(__imp__sub_823E2518) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E2530:
	// add. r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e2544
	if (ctx.cr0.eq) goto loc_823E2544;
	// lwz r6,2092(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2092);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823e2558
	if (ctx.cr6.eq) goto loc_823E2558;
loc_823E2544:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2880
	ctx.r10.s64 = ctx.r10.s64 + 2880;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e2530
	if (ctx.cr6.lt) goto loc_823E2530;
	// blr 
	return;
loc_823E2558:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E256C"))) PPC_WEAK_FUNC(sub_823E256C);
PPC_FUNC_IMPL(__imp__sub_823E256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2570"))) PPC_WEAK_FUNC(sub_823E2570);
PPC_FUNC_IMPL(__imp__sub_823E2570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823E2578;
	sub_8224877C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r28,-772(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x823e5398
	ctx.lr = 0x823E2590;
	sub_823E5398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821f1288
	ctx.lr = 0x823E25A0;
	sub_821F1288(ctx, base);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e2628
	if (!ctx.cr6.gt) goto loc_823E2628;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823E25B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e42c8
	ctx.lr = 0x823E25C0;
	sub_823E42C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f0ab8
	ctx.lr = 0x823E25D0;
	sub_821F0AB8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x823e6468
	ctx.lr = 0x823E25DC;
	sub_823E6468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82230c00
	ctx.lr = 0x823E25E4;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2614
	if (ctx.cr6.eq) goto loc_823E2614;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823E25F4;
	sub_8209EDA0(ctx, base);
	// bl 0x82163e58
	ctx.lr = 0x823E25F8;
	sub_82163E58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,564(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// lwz r6,560(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r5,556(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// bl 0x821f0b38
	ctx.lr = 0x823E2614;
	sub_821F0B38(ctx, base);
loc_823E2614:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,2880
	ctx.r27.s64 = ctx.r27.s64 + 2880;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e25b4
	if (ctx.cr6.lt) goto loc_823E25B4;
loc_823E2628:
	// bl 0x8215bd60
	ctx.lr = 0x823E262C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e270c
	if (!ctx.cr6.eq) goto loc_823E270C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e270c
	if (!ctx.cr6.eq) goto loc_823E270C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// addi r26,r11,-15164
	ctx.r26.s64 = ctx.r11.s64 + -15164;
loc_823E2658:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f0af8
	ctx.lr = 0x823E2668;
	sub_821F0AF8(ctx, base);
	// lwz r3,-4904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4904);
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4904(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4904);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823E26A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x823E26C0;
	sub_8218A5F0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f0ad8
	ctx.lr = 0x823E26D0;
	sub_821F0AD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e2658
	if (ctx.cr6.lt) goto loc_823E2658;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x821f0b18
	ctx.lr = 0x823E26F0;
	sub_821F0B18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x821f07c0
	ctx.lr = 0x823E26FC;
	sub_821F07C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x821f07d8
	ctx.lr = 0x823E2708;
	sub_821F07D8(ctx, base);
	// b 0x823e271c
	goto loc_823E271C;
loc_823E270C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f0b18
	ctx.lr = 0x823E271C;
	sub_821F0B18(ctx, base);
loc_823E271C:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
loc_823E2724:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f02e0
	ctx.lr = 0x823E272C;
	sub_821F02E0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r4,376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823e2748
	if (ctx.cr6.eq) goto loc_823E2748;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-8460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// bl 0x820e5238
	ctx.lr = 0x823E2748;
	sub_820E5238(ctx, base);
loc_823E2748:
	// addi r31,r31,336
	ctx.r31.s64 = ctx.r31.s64 + 336;
	// cmpwi cr6,r31,672
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 672, ctx.xer);
	// blt cr6,0x823e2724
	if (ctx.cr6.lt) goto loc_823E2724;
	// bl 0x8215bec8
	ctx.lr = 0x823E2758;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,22188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 22188, ctx.r11.u32);
	// bl 0x821f0fb8
	ctx.lr = 0x823E2768;
	sub_821F0FB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823E2770"))) PPC_WEAK_FUNC(sub_823E2770);
PPC_FUNC_IMPL(__imp__sub_823E2770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E2778;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e27e0
	if (ctx.cr6.eq) goto loc_823E27E0;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,2880
	ctx.r11.s64 = ctx.r10.s64 * 2880;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x823e27bc
	if (ctx.cr0.lt) goto loc_823E27BC;
loc_823E27A8:
	// addi r30,r30,-2880
	ctx.r30.s64 = ctx.r30.s64 + -2880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6078
	ctx.lr = 0x823E27B4;
	sub_823E6078(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x823e27a8
	if (!ctx.cr0.lt) goto loc_823E27A8;
loc_823E27BC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e27d4
	if (ctx.cr6.eq) goto loc_823E27D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x823E27D4;
	sub_82183E40(ctx, base);
loc_823E27D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E27E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6078
	ctx.lr = 0x823E27E8;
	sub_823E6078(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2800
	if (ctx.cr6.eq) goto loc_823E2800;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x823E2800;
	sub_82183E40(ctx, base);
loc_823E2800:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E280C"))) PPC_WEAK_FUNC(sub_823E280C);
PPC_FUNC_IMPL(__imp__sub_823E280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2810"))) PPC_WEAK_FUNC(sub_823E2810);
PPC_FUNC_IMPL(__imp__sub_823E2810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E2818;
	sub_82248784(ctx, base);
	// stwu r1,-1936(r1)
	ea = -1936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,225
	ctx.r10.s64 = 225;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E2838:
	// stw r28,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r28.u32);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e2838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E2838;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r31,-772(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -772);
	// beq cr6,0x823e2870
	if (ctx.cr6.eq) goto loc_823E2870;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823e28a4
	if (!ctx.cr6.eq) goto loc_823E28A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0680
	ctx.lr = 0x823E286C;
	sub_821F0680(ctx, base);
	// b 0x823e28a4
	goto loc_823E28A4;
loc_823E2870:
	// bl 0x8215bd60
	ctx.lr = 0x823E2874;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823e289c
	if (ctx.cr6.eq) goto loc_823E289C;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823e289c
	if (ctx.cr6.eq) goto loc_823E289C;
	// bl 0x821f0680
	ctx.lr = 0x823E2898;
	sub_821F0680(ctx, base);
	// b 0x823e28a4
	goto loc_823E28A4;
loc_823E289C:
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x821f0710
	ctx.lr = 0x823E28A4;
	sub_821F0710(ctx, base);
loc_823E28A4:
	// bl 0x82182e90
	ctx.lr = 0x823E28A8;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823E28B0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E28BC;
	sub_821837D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82183850
	ctx.lr = 0x823E28CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e28e4
	if (ctx.cr6.eq) goto loc_823E28E4;
	// li r3,2076
	ctx.r3.s64 = 2076;
	// bl 0x82183448
	ctx.lr = 0x823E28E0;
	sub_82183448(ctx, base);
	// b 0x823e28ec
	goto loc_823E28EC;
loc_823E28E4:
	// li r3,130
	ctx.r3.s64 = 130;
	// bl 0x821845a0
	ctx.lr = 0x823E28EC;
	sub_821845A0(ctx, base);
loc_823E28EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e291c
	if (ctx.cr6.eq) goto loc_823E291C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823e57d8
	ctx.lr = 0x823E2908;
	sub_823E57D8(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E2914;
	sub_821837D0(ctx, base);
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823E291C:
	// stw r28,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E292C;
	sub_821837D0(ctx, base);
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823E2934"))) PPC_WEAK_FUNC(sub_823E2934);
PPC_FUNC_IMPL(__imp__sub_823E2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2938"))) PPC_WEAK_FUNC(sub_823E2938);
PPC_FUNC_IMPL(__imp__sub_823E2938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823E2940;
	sub_82248780(ctx, base);
	// stwu r1,-1968(r1)
	ea = -1968 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,225
	ctx.r10.s64 = 225;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
loc_823E296C:
	// stw r30,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e296c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E296C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,1896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1896, ctx.r30.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r30,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r30.u32);
	// stw r11,1888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1888, ctx.r11.u32);
	// li r4,1824
	ctx.r4.s64 = 1824;
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x823E29A0;
	sub_822AA648(ctx, base);
	// addi r9,r29,23
	ctx.r9.s64 = ctx.r29.s64 + 23;
	// stw r28,1888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1888, ctx.r28.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r29.u32);
	// stw r27,1896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1896, ctx.r27.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r7.u32);
	// bl 0x8215bd60
	ctx.lr = 0x823E29C0;
	sub_8215BD60(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823e29e0
	if (!ctx.cr6.eq) goto loc_823E29E0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e29e0
	if (!ctx.cr6.eq) goto loc_823E29E0;
	// stw r11,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r11.u32);
	// b 0x823e29e4
	goto loc_823E29E4;
loc_823E29E0:
	// stw r30,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r30.u32);
loc_823E29E4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bne cr6,0x823e2a0c
	if (!ctx.cr6.eq) goto loc_823E2A0C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821f02f0
	ctx.lr = 0x823E2A08;
	sub_821F02F0(ctx, base);
	// b 0x823e2a10
	goto loc_823E2A10;
loc_823E2A0C:
	// bl 0x821f04d0
	ctx.lr = 0x823E2A10;
	sub_821F04D0(ctx, base);
loc_823E2A10:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,2880
	ctx.r10.s64 = ctx.r10.s64 * 2880;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6cf8
	ctx.lr = 0x823E2A30;
	sub_823E6CF8(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e2a70
	if (ctx.cr6.eq) goto loc_823E2A70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,2092(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x823e6468
	ctx.lr = 0x823E2A48;
	sub_823E6468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4b98
	ctx.lr = 0x823E2A58;
	sub_823E4B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6480
	ctx.lr = 0x823E2A60;
	sub_823E6480(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4508
	ctx.lr = 0x823E2A70;
	sub_823E4508(ctx, base);
loc_823E2A70:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,1968
	ctx.r1.s64 = ctx.r1.s64 + 1968;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823E2A84"))) PPC_WEAK_FUNC(sub_823E2A84);
PPC_FUNC_IMPL(__imp__sub_823E2A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2A88"))) PPC_WEAK_FUNC(sub_823E2A88);
PPC_FUNC_IMPL(__imp__sub_823E2A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E2A90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x823E2A9C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2ae4
	if (ctx.cr6.eq) goto loc_823E2AE4;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e42c8
	ctx.lr = 0x823E2AB8;
	sub_823E42C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e55a0
	ctx.lr = 0x823E2ACC;
	sub_820E55A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e42b0
	ctx.lr = 0x823E2ADC;
	sub_823E42B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E2AE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e42c8
	ctx.lr = 0x823E2AEC;
	sub_823E42C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e42c8
	ctx.lr = 0x823E2AFC;
	sub_823E42C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e55a0
	ctx.lr = 0x823E2B10;
	sub_820E55A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,4393
	ctx.r4.s64 = ctx.r10.s64 + 4393;
	// bl 0x8218a360
	ctx.lr = 0x823E2B20;
	sub_8218A360(ctx, base);
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e2b5c
	if (!ctx.cr6.eq) goto loc_823E2B5C;
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823E2B5C;
	sub_8218A5F0(ctx, base);
loc_823E2B5C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e42b0
	ctx.lr = 0x823E2B6C;
	sub_823E42B0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823e2c00
	if (!ctx.cr6.eq) goto loc_823E2C00;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2bb4
	if (ctx.cr6.eq) goto loc_823E2BB4;
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a128
	ctx.lr = 0x823E2BAC;
	sub_8218A128(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823E2BB4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823e2bf0
	if (ctx.cr6.eq) goto loc_823E2BF0;
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823E2BF0;
	sub_8218A5F0(ctx, base);
loc_823E2BF0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e42b0
	ctx.lr = 0x823E2C00;
	sub_823E42B0(ctx, base);
loc_823E2C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E2C08"))) PPC_WEAK_FUNC(sub_823E2C08);
PPC_FUNC_IMPL(__imp__sub_823E2C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E2C10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821f18c0
	ctx.lr = 0x823E2C18;
	sub_821F18C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2c68
	if (ctx.cr6.eq) goto loc_823E2C68;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
loc_823E2C2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -468);
	// bl 0x8215f4b0
	ctx.lr = 0x823E2C38;
	sub_8215F4B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2c74
	if (ctx.cr6.eq) goto loc_823E2C74;
	// lwz r3,-8960(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2c5c
	if (ctx.cr6.eq) goto loc_823E2C5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a0608
	ctx.lr = 0x823E2C54;
	sub_820A0608(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2c74
	if (ctx.cr6.eq) goto loc_823E2C74;
loc_823E2C5C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e2c2c
	if (ctx.cr6.lt) goto loc_823E2C2C;
loc_823E2C68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E2C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E2C80"))) PPC_WEAK_FUNC(sub_823E2C80);
PPC_FUNC_IMPL(__imp__sub_823E2C80) {
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
	ctx.lr = 0x823E2C98;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e2ce8
	if (!ctx.cr6.eq) goto loc_823E2CE8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e2ce8
	if (!ctx.cr6.eq) goto loc_823E2CE8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x823e2cc4
	if (ctx.cr6.eq) goto loc_823E2CC4;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x823e2cd0
	if (!ctx.cr6.eq) goto loc_823E2CD0;
loc_823E2CC4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e2ce8
	if (!ctx.cr6.eq) goto loc_823E2CE8;
loc_823E2CD0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r11,34463
	ctx.r9.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823e2cec
	if (!ctx.cr6.eq) goto loc_823E2CEC;
loc_823E2CE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E2CEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E2D00"))) PPC_WEAK_FUNC(sub_823E2D00);
PPC_FUNC_IMPL(__imp__sub_823E2D00) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e2c80
	ctx.lr = 0x823E2D1C;
	sub_823E2C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2d88
	if (ctx.cr6.eq) goto loc_823E2D88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823e2518
	ctx.lr = 0x823E2D30;
	sub_823E2518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823E2D38;
	sub_821EBB58(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823E2D54;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r3,-784(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -784);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823E2D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// b 0x823e2d90
	goto loc_823E2D90;
loc_823E2D88:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_823E2D90:
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

__attribute__((alias("__imp__sub_823E2DA8"))) PPC_WEAK_FUNC(sub_823E2DA8);
PPC_FUNC_IMPL(__imp__sub_823E2DA8) {
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
	// bl 0x823e2c80
	ctx.lr = 0x823E2DC0;
	sub_823E2C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2dd4
	if (ctx.cr6.eq) goto loc_823E2DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823e2518
	ctx.lr = 0x823E2DD4;
	sub_823E2518(ctx, base);
loc_823E2DD4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E2DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2e08
	if (ctx.cr6.eq) goto loc_823E2E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823e24c0
	ctx.lr = 0x823E2E00;
	sub_823E24C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_823E2E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E2E1C"))) PPC_WEAK_FUNC(sub_823E2E1C);
PPC_FUNC_IMPL(__imp__sub_823E2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2E20"))) PPC_WEAK_FUNC(sub_823E2E20);
PPC_FUNC_IMPL(__imp__sub_823E2E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x823e77c0
	ctx.lr = 0x823E2E40;
	sub_823E77C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2f00
	if (ctx.cr6.eq) goto loc_823E2F00;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e44e0
	ctx.lr = 0x823E2E50;
	sub_823E44E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2f00
	if (ctx.cr6.eq) goto loc_823E2F00;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x823e5430
	ctx.lr = 0x823E2E60;
	sub_823E5430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2f00
	if (ctx.cr6.eq) goto loc_823E2F00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2c08
	ctx.lr = 0x823E2E70;
	sub_823E2C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2f00
	if (ctx.cr6.eq) goto loc_823E2F00;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-18236(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094db0
	ctx.lr = 0x823E2E90;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094dd0
	ctx.lr = 0x823E2E9C;
	sub_82094DD0(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-8552(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2bc0
	ctx.lr = 0x823E2EB0;
	sub_820B2BC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2ba8
	ctx.lr = 0x823E2EBC;
	sub_820B2BA8(ctx, base);
	// bl 0x821f18c0
	ctx.lr = 0x823E2EC0;
	sub_821F18C0(ctx, base);
	// bl 0x821f22a0
	ctx.lr = 0x823E2EC4;
	sub_821F22A0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,-3296(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3296);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185ba0
	ctx.lr = 0x823E2ED8;
	sub_82185BA0(ctx, base);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lwz r3,15460(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2eec
	if (ctx.cr6.eq) goto loc_823E2EEC;
	// bl 0x8216d080
	ctx.lr = 0x823E2EEC;
	sub_8216D080(ctx, base);
loc_823E2EEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E2F00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E2F18"))) PPC_WEAK_FUNC(sub_823E2F18);
PPC_FUNC_IMPL(__imp__sub_823E2F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x823e77c0
	ctx.lr = 0x823E2F38;
	sub_823E77C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2fe0
	if (ctx.cr6.eq) goto loc_823E2FE0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e44e0
	ctx.lr = 0x823E2F48;
	sub_823E44E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2fe0
	if (ctx.cr6.eq) goto loc_823E2FE0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e5430
	ctx.lr = 0x823E2F58;
	sub_823E5430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2fe0
	if (ctx.cr6.eq) goto loc_823E2FE0;
	// bl 0x8215bec8
	ctx.lr = 0x823E2F64;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x823e2f80
	if (ctx.cr6.eq) goto loc_823E2F80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2c08
	ctx.lr = 0x823E2F78;
	sub_823E2C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e2fe0
	if (ctx.cr6.eq) goto loc_823E2FE0;
loc_823E2F80:
	// bl 0x821f18c0
	ctx.lr = 0x823E2F84;
	sub_821F18C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821f22a0
	ctx.lr = 0x823E2F8C;
	sub_821F22A0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x823E2F90;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e2fa4
	if (!ctx.cr6.eq) goto loc_823E2FA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f1b70
	ctx.lr = 0x823E2FA4;
	sub_821F1B70(ctx, base);
loc_823E2FA4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185ba0
	ctx.lr = 0x823E2FB8;
	sub_82185BA0(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r3,15460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e2fcc
	if (ctx.cr6.eq) goto loc_823E2FCC;
	// bl 0x8216d080
	ctx.lr = 0x823E2FCC;
	sub_8216D080(ctx, base);
loc_823E2FCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E2FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E2FE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E2FF8"))) PPC_WEAK_FUNC(sub_823E2FF8);
PPC_FUNC_IMPL(__imp__sub_823E2FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823E3000;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x823E3014;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x821859a0
	ctx.lr = 0x823E3028;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-15144
	ctx.r9.s64 = ctx.r11.s64 + -15144;
	// addi r8,r10,-15156
	ctx.r8.s64 = ctx.r10.s64 + -15156;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x82248a40
	ctx.lr = 0x823E306C;
	sub_82248A40(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// bl 0x821f18c0
	ctx.lr = 0x823E30A4;
	sub_821F18C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821f1a68
	ctx.lr = 0x823E30AC;
	sub_821F1A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e30bc
	if (!ctx.cr6.eq) goto loc_823E30BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f1a58
	ctx.lr = 0x823E30BC;
	sub_821F1A58(ctx, base);
loc_823E30BC:
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,-772(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -772);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f17d0
	ctx.lr = 0x823E30D8;
	sub_821F17D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f1288
	ctx.lr = 0x823E30E8;
	sub_821F1288(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,-792(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e8f10
	ctx.lr = 0x823E30FC;
	sub_821E8F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e3124
	if (!ctx.cr6.eq) goto loc_823E3124;
	// bl 0x82183078
	ctx.lr = 0x823E3108;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x823E3114;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e9348
	ctx.lr = 0x823E311C;
	sub_821E9348(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E3124;
	sub_821837D0(ctx, base);
loc_823E3124:
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// bl 0x8215bd60
	ctx.lr = 0x823E3138;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e3184
	if (!ctx.cr6.eq) goto loc_823E3184;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e3184
	if (!ctx.cr6.eq) goto loc_823E3184;
	// lwz r3,-772(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -772);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821f0a88
	ctx.lr = 0x823E3164;
	sub_821F0A88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x821f07f0
	ctx.lr = 0x823E3174;
	sub_821F07F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f0818
	ctx.lr = 0x823E3180;
	sub_821F0818(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_823E3184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c60
	ctx.lr = 0x823E318C;
	sub_823C3C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823E3198"))) PPC_WEAK_FUNC(sub_823E3198);
PPC_FUNC_IMPL(__imp__sub_823E3198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e3b70
	sub_823E3B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31A0"))) PPC_WEAK_FUNC(sub_823E31A0);
PPC_FUNC_IMPL(__imp__sub_823E31A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E31A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r7,r11,-15144
	ctx.r7.s64 = ctx.r11.s64 + -15144;
	// addi r6,r9,-15156
	ctx.r6.s64 = ctx.r9.s64 + -15156;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// lwz r11,-1744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1744);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r4,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r4.u32);
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r3,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r3.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3210
	if (ctx.cr6.eq) goto loc_823E3210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E3210:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e322c
	if (ctx.cr6.eq) goto loc_823E322C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x823E322C;
	sub_82183E40(ctx, base);
loc_823E322C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3250
	if (ctx.cr6.eq) goto loc_823E3250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E3250:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3274
	if (ctx.cr6.eq) goto loc_823E3274;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E3274:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3298
	if (ctx.cr6.eq) goto loc_823E3298;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E3298:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e32dc
	if (ctx.cr6.eq) goto loc_823E32DC;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e32d4
	if (ctx.cr6.eq) goto loc_823E32D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E32D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823e32dc
	goto loc_823E32DC;
loc_823E32D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x823E32DC;
	sub_82183E40(ctx, base);
loc_823E32DC:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x823E32E8;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x823E32F0;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E32F8"))) PPC_WEAK_FUNC(sub_823E32F8);
PPC_FUNC_IMPL(__imp__sub_823E32F8) {
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
	// bl 0x823c3c70
	ctx.lr = 0x823E3310;
	sub_823C3C70(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823E331C;
	sub_821EA9B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823e7708
	ctx.lr = 0x823E3328;
	sub_823E7708(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4248
	ctx.lr = 0x823E3334;
	sub_823E4248(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e58d0
	ctx.lr = 0x823E3340;
	sub_823E58D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x823E3344;
	sub_8215BD60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823e341c
	if (!ctx.cr6.eq) goto loc_823E341C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2938
	ctx.lr = 0x823E3368;
	sub_823E2938(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x823E336C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e33a0
	if (!ctx.cr6.eq) goto loc_823E33A0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e33a0
	if (!ctx.cr6.eq) goto loc_823E33A0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821ebaa8
	ctx.lr = 0x823E338C;
	sub_821EBAA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E33A0:
	// bl 0x8215bd60
	ctx.lr = 0x823E33A4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e341c
	if (!ctx.cr6.eq) goto loc_823E341C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e33f4
	if (!ctx.cr6.gt) goto loc_823E33F4;
	// addi r10,r10,904
	ctx.r10.s64 = ctx.r10.s64 + 904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E33D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e33e0
	if (ctx.cr6.eq) goto loc_823E33E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823E33E0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e33d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E33D0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// li r3,11
	ctx.r3.s64 = 11;
	// bge cr6,0x823e33f8
	if (!ctx.cr6.lt) goto loc_823E33F8;
loc_823E33F4:
	// li r3,9
	ctx.r3.s64 = 9;
loc_823E33F8:
	// bl 0x821ebaa8
	ctx.lr = 0x823E33FC;
	sub_821EBAA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4628
	ctx.lr = 0x823E340C;
	sub_823E4628(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4660
	ctx.lr = 0x823E341C;
	sub_823E4660(ctx, base);
loc_823E341C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3430"))) PPC_WEAK_FUNC(sub_823E3430);
PPC_FUNC_IMPL(__imp__sub_823E3430) {
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
	// bl 0x823e2c80
	ctx.lr = 0x823E3448;
	sub_823E2C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e345c
	if (ctx.cr6.eq) goto loc_823E345C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823e2518
	ctx.lr = 0x823E345C;
	sub_823E2518(ctx, base);
loc_823E345C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x823E3468;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e34fc
	if (!ctx.cr6.eq) goto loc_823E34FC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e44e0
	ctx.lr = 0x823E3478;
	sub_823E44E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e34fc
	if (ctx.cr6.eq) goto loc_823E34FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823e7708
	ctx.lr = 0x823E348C;
	sub_823E7708(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E34A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x823E34A4;
	sub_8215BD60(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823e34d8
	if (!ctx.cr6.eq) goto loc_823E34D8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e34d8
	if (!ctx.cr6.eq) goto loc_823E34D8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e54b0
	ctx.lr = 0x823E34C4;
	sub_823E54B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E34D8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e5498
	ctx.lr = 0x823E34E0;
	sub_823E5498(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e34fc
	if (ctx.cr6.eq) goto loc_823E34FC;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r9,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
loc_823E34FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3510"))) PPC_WEAK_FUNC(sub_823E3510);
PPC_FUNC_IMPL(__imp__sub_823E3510) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e35cc
	if (ctx.cr6.gt) goto loc_823E35CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e3578
	// bdzf 4*cr6+eq,0x823e35a8
	// bne cr6,0x823e35c4
	if (!ctx.cr6.eq) goto loc_823E35C4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x823E355C;
	sub_821EA8B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E3578:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x823E3584;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e35cc
	if (ctx.cr6.eq) goto loc_823E35CC;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E35A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2150
	ctx.lr = 0x823E35B0;
	sub_823E2150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E35C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2e20
	ctx.lr = 0x823E35CC;
	sub_823E2E20(ctx, base);
loc_823E35CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E35E0"))) PPC_WEAK_FUNC(sub_823E35E0);
PPC_FUNC_IMPL(__imp__sub_823E35E0) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e36a0
	if (ctx.cr6.gt) goto loc_823E36A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e364c
	// bdzf 4*cr6+eq,0x823e367c
	// bdzf 4*cr6+eq,0x823e36a0
	// bne cr6,0x823e3698
	if (!ctx.cr6.eq) goto loc_823E3698;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x823E3630;
	sub_821EA8B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E364C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x823E3658;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e36a0
	if (ctx.cr6.eq) goto loc_823E36A0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E367C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2150
	ctx.lr = 0x823E3684;
	sub_823E2150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823E3698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2f18
	ctx.lr = 0x823E36A0;
	sub_823E2F18(ctx, base);
loc_823E36A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E36B4"))) PPC_WEAK_FUNC(sub_823E36B4);
PPC_FUNC_IMPL(__imp__sub_823E36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E36B8"))) PPC_WEAK_FUNC(sub_823E36B8);
PPC_FUNC_IMPL(__imp__sub_823E36B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823e2938
	sub_823E2938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E36CC"))) PPC_WEAK_FUNC(sub_823E36CC);
PPC_FUNC_IMPL(__imp__sub_823E36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E36D0"))) PPC_WEAK_FUNC(sub_823E36D0);
PPC_FUNC_IMPL(__imp__sub_823E36D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823E36D8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82182e90
	ctx.lr = 0x823E36E8;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823E36F0;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E36FC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823E3700;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e3718
	if (ctx.cr6.eq) goto loc_823E3718;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x823E3714;
	sub_82183448(ctx, base);
	// b 0x823e3720
	goto loc_823E3720;
loc_823E3718:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x823E3720;
	sub_821845A0(ctx, base);
loc_823E3720:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3734
	if (ctx.cr6.eq) goto loc_823E3734;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823e7270
	ctx.lr = 0x823E3730;
	sub_823E7270(ctx, base);
	// b 0x823e3738
	goto loc_823E3738;
loc_823E3734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E3738:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// lis r10,22
	ctx.r10.s64 = 1441792;
	// lwz r25,64(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r24,-1
	ctx.r24.s64 = -1;
	// ori r9,r10,49516
	ctx.r9.u64 = ctx.r10.u64 | 49516;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// lwz r27,128(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// bgt cr6,0x823e3774
	if (ctx.cr6.gt) goto loc_823E3774;
	// mulli r11,r25,2880
	ctx.r11.s64 = ctx.r25.s64 * 2880;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e3778
	if (!ctx.cr6.gt) goto loc_823E3778;
loc_823E3774:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823E3778:
	// bl 0x82183850
	ctx.lr = 0x823E377C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823e3794
	if (ctx.cr6.eq) goto loc_823E3794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x823E3790;
	sub_82183448(ctx, base);
	// b 0x823e37a0
	goto loc_823E37A0;
loc_823E3794:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823E37A0;
	sub_821845A0(ctx, base);
loc_823E37A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e37d4
	if (ctx.cr6.eq) goto loc_823E37D4;
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
	// blt 0x823e37d8
	if (ctx.cr0.lt) goto loc_823E37D8;
loc_823E37BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e5f70
	ctx.lr = 0x823E37C4;
	sub_823E5F70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,2880
	ctx.r29.s64 = ctx.r29.s64 + 2880;
	// bge 0x823e37bc
	if (!ctx.cr0.lt) goto loc_823E37BC;
	// b 0x823e37d8
	goto loc_823E37D8;
loc_823E37D4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823E37D8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// ble cr6,0x823e3828
	if (!ctx.cr6.gt) goto loc_823E3828;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_823E37EC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x821aef50
	ctx.lr = 0x823E37FC;
	sub_821AEF50(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823e6188
	ctx.lr = 0x823E380C;
	sub_823E6188(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823e5ae8
	ctx.lr = 0x823E381C;
	sub_823E5AE8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,2880
	ctx.r31.s64 = ctx.r31.s64 + 2880;
	// bne 0x823e37ec
	if (!ctx.cr0.eq) goto loc_823E37EC;
loc_823E3828:
	// bl 0x82183850
	ctx.lr = 0x823E382C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e3844
	if (ctx.cr6.eq) goto loc_823E3844;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x823E3840;
	sub_82183448(ctx, base);
	// b 0x823e384c
	goto loc_823E384C;
loc_823E3844:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x823E384C;
	sub_821845A0(ctx, base);
loc_823E384C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e3860
	if (ctx.cr6.eq) goto loc_823E3860;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823e7538
	ctx.lr = 0x823E385C;
	sub_823E7538(ctx, base);
	// b 0x823e3864
	goto loc_823E3864;
loc_823E3860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E3864:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x823E386C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823e3884
	if (ctx.cr6.eq) goto loc_823E3884;
	// li r3,724
	ctx.r3.s64 = 724;
	// bl 0x82183448
	ctx.lr = 0x823E3880;
	sub_82183448(ctx, base);
	// b 0x823e388c
	goto loc_823E388C;
loc_823E3884:
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x821845a0
	ctx.lr = 0x823E388C;
	sub_821845A0(ctx, base);
loc_823E388C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e38a0
	if (ctx.cr6.eq) goto loc_823E38A0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823e49e0
	ctx.lr = 0x823E389C;
	sub_823E49E0(ctx, base);
	// b 0x823e38a4
	goto loc_823E38A4;
loc_823E38A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E38A4:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
loc_823E38B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e48a0
	ctx.lr = 0x823E38BC;
	sub_823E48A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4598
	ctx.lr = 0x823E38CC;
	sub_823E4598(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,512
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 512, ctx.xer);
	// beq cr6,0x823e38e4
	if (ctx.cr6.eq) goto loc_823E38E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4b98
	ctx.lr = 0x823E38E4;
	sub_823E4B98(ctx, base);
loc_823E38E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e38b0
	if (ctx.cr6.lt) goto loc_823E38B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2a88
	ctx.lr = 0x823E38FC;
	sub_823E2A88(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E3918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e44e8
	ctx.lr = 0x823E3924;
	sub_823E44E8(ctx, base);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r25,r7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823e393c
	if (!ctx.cr6.gt) goto loc_823E393C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823E393C:
	// bl 0x82183850
	ctx.lr = 0x823E3940;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823e3958
	if (ctx.cr6.eq) goto loc_823E3958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x823E3954;
	sub_82183448(ctx, base);
	// b 0x823e3964
	goto loc_823E3964;
loc_823E3958:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823E3964;
	sub_821845A0(ctx, base);
loc_823E3964:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x823E3970;
	sub_822AA648(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x823E3978;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823E3980"))) PPC_WEAK_FUNC(sub_823E3980);
PPC_FUNC_IMPL(__imp__sub_823E3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E3988;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e3a68
	if (ctx.cr6.eq) goto loc_823E3A68;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823e3a68
	if (ctx.cr6.eq) goto loc_823E3A68;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823e3a68
	if (!ctx.cr6.gt) goto loc_823E3A68;
loc_823E39C0:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823e39ec
	if (ctx.cr6.eq) goto loc_823E39EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x823E39D4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E39E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e3a00
	if (!ctx.cr6.eq) goto loc_823E3A00;
loc_823E39EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x823e39c0
	if (ctx.cr6.lt) goto loc_823E39C0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E3A00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e1e68
	ctx.lr = 0x823E3A08;
	sub_823E1E68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2938
	ctx.lr = 0x823E3A24;
	sub_823E2938(ctx, base);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2a88
	ctx.lr = 0x823E3A30;
	sub_823E2A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4628
	ctx.lr = 0x823E3A40;
	sub_823E4628(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823e4660
	ctx.lr = 0x823E3A50;
	sub_823E4660(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823c56a0
	ctx.lr = 0x823E3A60;
	sub_823C56A0(ctx, base);
	// li r3,10012
	ctx.r3.s64 = 10012;
	// bl 0x8208f658
	ctx.lr = 0x823E3A68;
	sub_8208F658(ctx, base);
loc_823E3A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E3A70"))) PPC_WEAK_FUNC(sub_823E3A70);
PPC_FUNC_IMPL(__imp__sub_823E3A70) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823e2938
	ctx.lr = 0x823E3AB0;
	sub_823E2938(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x823e2a88
	ctx.lr = 0x823E3AC0;
	sub_823E2A88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3AD4"))) PPC_WEAK_FUNC(sub_823E3AD4);
PPC_FUNC_IMPL(__imp__sub_823E3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3AD8"))) PPC_WEAK_FUNC(sub_823E3AD8);
PPC_FUNC_IMPL(__imp__sub_823E3AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E3AE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823e5d28
	ctx.lr = 0x823E3AF4;
	sub_823E5D28(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823E3B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823e3b5c
	if (ctx.cr6.eq) goto loc_823E3B5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,2092(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x823e6468
	ctx.lr = 0x823E3B34;
	sub_823E6468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4b98
	ctx.lr = 0x823E3B44;
	sub_823E4B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6480
	ctx.lr = 0x823E3B4C;
	sub_823E6480(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4508
	ctx.lr = 0x823E3B5C;
	sub_823E4508(ctx, base);
loc_823E3B5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2a88
	ctx.lr = 0x823E3B64;
	sub_823E2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E3B6C"))) PPC_WEAK_FUNC(sub_823E3B6C);
PPC_FUNC_IMPL(__imp__sub_823E3B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3B70"))) PPC_WEAK_FUNC(sub_823E3B70);
PPC_FUNC_IMPL(__imp__sub_823E3B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e31a0
	ctx.lr = 0x823E3B90;
	sub_823E31A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e3bac
	if (ctx.cr6.eq) goto loc_823E3BAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E3BA8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E3BAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3BC4"))) PPC_WEAK_FUNC(sub_823E3BC4);
PPC_FUNC_IMPL(__imp__sub_823E3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3BC8"))) PPC_WEAK_FUNC(sub_823E3BC8);
PPC_FUNC_IMPL(__imp__sub_823E3BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82109e00
	ctx.lr = 0x823E3BFC;
	sub_82109E00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e36d0
	ctx.lr = 0x823E3C08;
	sub_823E36D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e2810
	ctx.lr = 0x823E3C14;
	sub_823E2810(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3C2C"))) PPC_WEAK_FUNC(sub_823E3C2C);
PPC_FUNC_IMPL(__imp__sub_823E3C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3C30"))) PPC_WEAK_FUNC(sub_823E3C30);
PPC_FUNC_IMPL(__imp__sub_823E3C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823E3C38;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e3f70
	if (ctx.cr6.eq) goto loc_823E3F70;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e3f70
	if (ctx.cr6.eq) goto loc_823E3F70;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e3e88
	if (!ctx.cr6.gt) goto loc_823E3E88;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// addi r23,r3,92
	ctx.r23.s64 = ctx.r3.s64 + 92;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r21,6
	ctx.r21.s64 = 6;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
loc_823E3C84:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add. r30,r24,r11
	ctx.r30.u64 = ctx.r24.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823e3e70
	if (ctx.cr0.eq) goto loc_823E3E70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c78
	ctx.lr = 0x823E3C98;
	sub_823E5C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3e70
	if (ctx.cr6.eq) goto loc_823E3E70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c98
	ctx.lr = 0x823E3CA8;
	sub_823E5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e3cbc
	if (!ctx.cr6.eq) goto loc_823E3CBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e1ed8
	ctx.lr = 0x823E3CBC;
	sub_823E1ED8(ctx, base);
loc_823E3CBC:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e3ce8
	if (ctx.cr6.eq) goto loc_823E3CE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c98
	ctx.lr = 0x823E3CD4;
	sub_823E5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e3ce8
	if (!ctx.cr6.eq) goto loc_823E3CE8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stwx r20,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r20.u32);
	// b 0x823e3e70
	goto loc_823E3E70;
loc_823E3CE8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823e3d54
	if (!ctx.cr6.eq) goto loc_823E3D54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c98
	ctx.lr = 0x823E3D00;
	sub_823E5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3d54
	if (ctx.cr6.eq) goto loc_823E3D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x823e1f38
	ctx.lr = 0x823E3D14;
	sub_823E1F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3d48
	if (ctx.cr6.eq) goto loc_823E3D48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e4628
	ctx.lr = 0x823E3D2C;
	sub_823E4628(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4660
	ctx.lr = 0x823E3D3C;
	sub_823E4660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e3a70
	ctx.lr = 0x823E3D48;
	sub_823E3A70(ctx, base);
loc_823E3D48:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stwx r22,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r22.u32);
	// b 0x823e3e70
	goto loc_823E3E70;
loc_823E3D54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3e70
	if (ctx.cr6.eq) goto loc_823E3E70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3e70
	if (ctx.cr6.eq) goto loc_823E3E70;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3dd4
	if (ctx.cr6.eq) goto loc_823E3DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823e4628
	ctx.lr = 0x823E3DA8;
	sub_823E4628(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823e4660
	ctx.lr = 0x823E3DB8;
	sub_823E4660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e6468
	ctx.lr = 0x823E3DC0;
	sub_823E6468(ctx, base);
	// stwx r3,r23,r27
	PPC_STORE_U32(ctx.r23.u32 + ctx.r27.u32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e3ad8
	ctx.lr = 0x823E3DD0;
	sub_823E3AD8(ctx, base);
	// b 0x823e3e70
	goto loc_823E3E70;
loc_823E3DD4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e3e64
	if (!ctx.cr6.gt) goto loc_823E3E64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_823E3DE8:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x823e3e50
	if (ctx.cr6.eq) goto loc_823E3E50;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add. r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823e3e50
	if (ctx.cr0.eq) goto loc_823E3E50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c78
	ctx.lr = 0x823E3E04;
	sub_823E5C78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3e50
	if (ctx.cr6.eq) goto loc_823E3E50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E3E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5c98
	ctx.lr = 0x823E3E28;
	sub_823E5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e3e50
	if (ctx.cr6.eq) goto loc_823E3E50;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823e73a0
	ctx.lr = 0x823E3E44;
	sub_823E73A0(ctx, base);
	// lwz r3,-772(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -772);
	// lwz r4,2092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// bl 0x821f0838
	ctx.lr = 0x823E3E50;
	sub_821F0838(ctx, base);
loc_823E3E50:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2880
	ctx.r28.s64 = ctx.r28.s64 + 2880;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e3de8
	if (ctx.cr6.lt) goto loc_823E3DE8;
loc_823E3E64:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x823e54b0
	ctx.lr = 0x823E3E6C;
	sub_823E54B0(ctx, base);
	// stw r21,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r21.u32);
loc_823E3E70:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,2880
	ctx.r24.s64 = ctx.r24.s64 + 2880;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e3c84
	if (ctx.cr6.lt) goto loc_823E3C84;
loc_823E3E88:
	// bl 0x8215bd60
	ctx.lr = 0x823E3E8C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e3f70
	if (!ctx.cr6.eq) goto loc_823E3F70;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823e3ed8
	if (!ctx.cr6.gt) goto loc_823E3ED8;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
loc_823E3EB8:
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823e3ec8
	if (ctx.cr6.eq) goto loc_823E3EC8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_823E3EC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e3eb8
	if (ctx.cr6.lt) goto loc_823E3EB8;
loc_823E3ED8:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x823e3f70
	if (!ctx.cr6.eq) goto loc_823E3F70;
	// bl 0x8215bd60
	ctx.lr = 0x823E3EE4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e3f20
	if (!ctx.cr6.eq) goto loc_823E3F20;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e3f20
	if (!ctx.cr6.eq) goto loc_823E3F20;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e73a0
	ctx.lr = 0x823E3F10;
	sub_823E73A0(ctx, base);
	// bl 0x821f18c0
	ctx.lr = 0x823E3F14;
	sub_821F18C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2160
	ctx.lr = 0x823E3F20;
	sub_821F2160(ctx, base);
loc_823E3F20:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e3f68
	if (!ctx.cr6.gt) goto loc_823E3F68;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823E3F34:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e3f54
	if (ctx.cr0.eq) goto loc_823E3F54;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823E3F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E3F54:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2880
	ctx.r30.s64 = ctx.r30.s64 + 2880;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e3f34
	if (ctx.cr6.lt) goto loc_823E3F34;
loc_823E3F68:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_823E3F70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823E3F78"))) PPC_WEAK_FUNC(sub_823E3F78);
PPC_FUNC_IMPL(__imp__sub_823E3F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823E3F80;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x823E3F94;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e4174
	if (ctx.cr6.eq) goto loc_823E4174;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x823E3FAC;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e4174
	if (ctx.cr6.eq) goto loc_823E4174;
	// bl 0x821f18c0
	ctx.lr = 0x823E3FB8;
	sub_821F18C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821f1a68
	ctx.lr = 0x823E3FC0;
	sub_821F1A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e4174
	if (ctx.cr6.eq) goto loc_823E4174;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-772(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f0b68
	ctx.lr = 0x823E3FD8;
	sub_821F0B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f02e0
	ctx.lr = 0x823E3FE0;
	sub_821F02E0(ctx, base);
	// lwz r4,2140(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2140);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2f80
	ctx.lr = 0x823E3FEC;
	sub_821F2F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e3bc8
	ctx.lr = 0x823E3FF4;
	sub_823E3BC8(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r3,15460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e4008
	if (ctx.cr6.eq) goto loc_823E4008;
	// bl 0x8216d508
	ctx.lr = 0x823E4008;
	sub_8216D508(ctx, base);
loc_823E4008:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// lwz r7,156(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// lwz r6,368(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r26.u32);
	// stw r26,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r26.u32);
	// lwz r11,-3296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3296);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// lwz r11,-3296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3296);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185ba0
	ctx.lr = 0x823E4060;
	sub_82185BA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-8552(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2bc0
	ctx.lr = 0x823E4074;
	sub_820B2BC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2ba8
	ctx.lr = 0x823E4080;
	sub_820B2BA8(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-18236(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82094db0
	ctx.lr = 0x823E4098;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82094dd0
	ctx.lr = 0x823E40A4;
	sub_82094DD0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823E40B0:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823e410c
	if (ctx.cr6.eq) goto loc_823E410C;
	// addi r30,r28,596
	ctx.r30.s64 = ctx.r28.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x823E40CC;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x823E40D8;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x823E40E4;
	sub_820EF4F8(ctx, base);
	// addi r30,r28,900
	ctx.r30.s64 = ctx.r28.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x823E40F4;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x823E4100;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x823E410C;
	sub_820EF4F8(ctx, base);
loc_823E410C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e40b0
	if (ctx.cr6.lt) goto loc_823E40B0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
loc_823E4124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e1f98
	ctx.lr = 0x823E4134;
	sub_823E1F98(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x823e4124
	if (ctx.cr6.lt) goto loc_823E4124;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823E4144:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e4508
	ctx.lr = 0x823E4154;
	sub_823E4508(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x823e4144
	if (ctx.cr6.lt) goto loc_823E4144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823E4174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823E4174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823E417C"))) PPC_WEAK_FUNC(sub_823E417C);
PPC_FUNC_IMPL(__imp__sub_823E417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E4180"))) PPC_WEAK_FUNC(sub_823E4180);
PPC_FUNC_IMPL(__imp__sub_823E4180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E4188;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821f18c0
	ctx.lr = 0x823E4194;
	sub_821F18C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e41bc
	if (ctx.cr6.eq) goto loc_823E41BC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823E41A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2180
	ctx.lr = 0x823E41B0;
	sub_821F2180(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x823e41a4
	if (ctx.cr6.lt) goto loc_823E41A4;
loc_823E41BC:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e4240
	if (ctx.cr6.gt) goto loc_823E4240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e41f0
	// bdzf 4*cr6+eq,0x823e4200
	// bdzf 4*cr6+eq,0x823e4228
	// bne cr6,0x823e4238
	if (!ctx.cr6.eq) goto loc_823E4238;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e2d00
	ctx.lr = 0x823E41E8;
	sub_823E2D00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E41F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823E41F8;
	sub_823E2DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E4200:
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e4210
	if (ctx.cr6.eq) goto loc_823E4210;
	// bl 0x823e46c0
	ctx.lr = 0x823E4210;
	sub_823E46C0(ctx, base);
loc_823E4210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e3980
	ctx.lr = 0x823E4218;
	sub_823E3980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e3c30
	ctx.lr = 0x823E4220;
	sub_823E3C30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E4228:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e2070
	ctx.lr = 0x823E4230;
	sub_823E2070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823E4238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e20d8
	ctx.lr = 0x823E4240;
	sub_823E20D8(ctx, base);
loc_823E4240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E4248"))) PPC_WEAK_FUNC(sub_823E4248);
PPC_FUNC_IMPL(__imp__sub_823E4248) {
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
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823e4280
	if (ctx.cr6.eq) goto loc_823E4280;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823e4298
	if (ctx.cr6.eq) goto loc_823E4298;
	// addi r3,r3,360
	ctx.r3.s64 = ctx.r3.s64 + 360;
	// bl 0x823c3410
	ctx.lr = 0x823E4278;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823e4294
	goto loc_823E4294;
loc_823E4280:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823e4298
	if (ctx.cr6.eq) goto loc_823E4298;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x823c3468
	ctx.lr = 0x823E4290;
	sub_823C3468(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_823E4294:
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
loc_823E4298:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E42AC"))) PPC_WEAK_FUNC(sub_823E42AC);
PPC_FUNC_IMPL(__imp__sub_823E42AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E42B0"))) PPC_WEAK_FUNC(sub_823E42B0);
PPC_FUNC_IMPL(__imp__sub_823E42B0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,97
	ctx.r11.s64 = ctx.r4.s64 * 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E42C4"))) PPC_WEAK_FUNC(sub_823E42C4);
PPC_FUNC_IMPL(__imp__sub_823E42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E42C8"))) PPC_WEAK_FUNC(sub_823E42C8);
PPC_FUNC_IMPL(__imp__sub_823E42C8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,97
	ctx.r11.s64 = ctx.r4.s64 * 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E42D8"))) PPC_WEAK_FUNC(sub_823E42D8);
PPC_FUNC_IMPL(__imp__sub_823E42D8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add. r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x823e4330
	if (ctx.cr0.eq) goto loc_823E4330;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
loc_823E4330:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// bl 0x8218a5f0
	ctx.lr = 0x823E4348;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E4358"))) PPC_WEAK_FUNC(sub_823E4358);
PPC_FUNC_IMPL(__imp__sub_823E4358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// addi r10,r11,-15060
	ctx.r10.s64 = ctx.r11.s64 + -15060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c31a0
	ctx.lr = 0x823E4388;
	sub_823C31A0(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x823c3048
	ctx.lr = 0x823E4390;
	sub_823C3048(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e43ac
	if (ctx.cr6.eq) goto loc_823E43AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823E43A8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823E43AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E43C4"))) PPC_WEAK_FUNC(sub_823E43C4);
PPC_FUNC_IMPL(__imp__sub_823E43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E43C8"))) PPC_WEAK_FUNC(sub_823E43C8);
PPC_FUNC_IMPL(__imp__sub_823E43C8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e44c8
	if (ctx.cr6.eq) goto loc_823E44C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823e44c8
	if (!ctx.cr6.gt) goto loc_823E44C8;
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823e4488
	if (ctx.cr6.lt) goto loc_823E4488;
	// beq cr6,0x823e4458
	if (ctx.cr6.eq) goto loc_823E4458;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823e44a8
	if (!ctx.cr6.lt) goto loc_823E44A8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,9204(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 9204, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8210a9b0
	ctx.lr = 0x823E4444;
	sub_8210A9B0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r4,65
	ctx.r4.s64 = 65;
	// stfs f31,9492(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 9492, temp.u32);
	// b 0x823e4498
	goto loc_823E4498;
loc_823E4458:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,9204(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 9204, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8210a9b0
	ctx.lr = 0x823E4478;
	sub_8210A9B0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f31,9348(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 9348, temp.u32);
	// b 0x823e4494
	goto loc_823E4494;
loc_823E4488:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,9348(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 9348, temp.u32);
loc_823E4494:
	// li r4,64
	ctx.r4.s64 = 64;
loc_823E4498:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x823E44A8;
	sub_8210A9B0(ctx, base);
loc_823E44A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,9636(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 9636, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8210a9b0
	ctx.lr = 0x823E44C8;
	sub_8210A9B0(ctx, base);
loc_823E44C8:
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

__attribute__((alias("__imp__sub_823E44E0"))) PPC_WEAK_FUNC(sub_823E44E0);
PPC_FUNC_IMPL(__imp__sub_823E44E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E44E8"))) PPC_WEAK_FUNC(sub_823E44E8);
PPC_FUNC_IMPL(__imp__sub_823E44E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,4056(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4056, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4076, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E4504"))) PPC_WEAK_FUNC(sub_823E4504);
PPC_FUNC_IMPL(__imp__sub_823E4504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E4508"))) PPC_WEAK_FUNC(sub_823E4508);
PPC_FUNC_IMPL(__imp__sub_823E4508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E4510;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8218b408
	ctx.lr = 0x823E4528;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// bne cr6,0x823e4560
	if (!ctx.cr6.eq) goto loc_823E4560;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823E454C;
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
loc_823E4560:
	// addi r31,r31,30
	ctx.r31.s64 = ctx.r31.s64 + 30;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8214e0f8
	ctx.lr = 0x823E4578;
	sub_8214E0F8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214e0f8
	ctx.lr = 0x823E458C;
	sub_8214E0F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E4594"))) PPC_WEAK_FUNC(sub_823E4594);
PPC_FUNC_IMPL(__imp__sub_823E4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E4598"))) PPC_WEAK_FUNC(sub_823E4598);
PPC_FUNC_IMPL(__imp__sub_823E4598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823E45A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,21
	ctx.r4.s64 = ctx.r4.s64 + 21;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8212eeb0
	ctx.lr = 0x823E45BC;
	sub_8212EEB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// bl 0x8212eeb0
	ctx.lr = 0x823E45CC;
	sub_8212EEB0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x823E45D0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e45ec
	if (ctx.cr6.eq) goto loc_823E45EC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r31,25
	ctx.r4.s64 = ctx.r31.s64 + 25;
	// bl 0x8212eeb0
	ctx.lr = 0x823E45EC;
	sub_8212EEB0(ctx, base);
loc_823E45EC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,364(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 364);
	// stw r30,3524(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3524, ctx.r30.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,364(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 364);
	// stw r30,3780(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3780, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823E4628"))) PPC_WEAK_FUNC(sub_823E4628);
PPC_FUNC_IMPL(__imp__sub_823E4628) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,179
	ctx.r11.s64 = ctx.r4.s64 + 179;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,364(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stw r5,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E4660"))) PPC_WEAK_FUNC(sub_823E4660);
PPC_FUNC_IMPL(__imp__sub_823E4660) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,364(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 364);
	// stw r5,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r5.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,364(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stw r5,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E4698"))) PPC_WEAK_FUNC(sub_823E4698);
PPC_FUNC_IMPL(__imp__sub_823E4698) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,364(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 364);
	// stw r5,4036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4036, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E46BC"))) PPC_WEAK_FUNC(sub_823E46BC);
PPC_FUNC_IMPL(__imp__sub_823E46BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E46C0"))) PPC_WEAK_FUNC(sub_823E46C0);
PPC_FUNC_IMPL(__imp__sub_823E46C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823E46C8;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,716
	ctx.r28.s64 = ctx.r3.s64 + 716;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823E46E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e472c
	if (ctx.cr6.eq) goto loc_823E472C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,408
	ctx.r3.s64 = ctx.r29.s64 + 408;
	// bl 0x823c3280
	ctx.lr = 0x823E4700;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,980(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 980, temp.u32);
loc_823E472C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x823e46e8
	if (ctx.cr6.lt) goto loc_823E46E8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823E474C"))) PPC_WEAK_FUNC(sub_823E474C);
PPC_FUNC_IMPL(__imp__sub_823E474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E4750"))) PPC_WEAK_FUNC(sub_823E4750);
PPC_FUNC_IMPL(__imp__sub_823E4750) {
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
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,143
	ctx.r4.s64 = 143;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823e4788
	if (!ctx.cr6.eq) goto loc_823E4788;
	// li r5,16101
	ctx.r5.s64 = 16101;
	// bl 0x82106f58
	ctx.lr = 0x823E4780;
	sub_82106F58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823e4794
	goto loc_823E4794;
loc_823E4788:
	// li r5,16100
	ctx.r5.s64 = 16100;
	// bl 0x82106f58
	ctx.lr = 0x823E4790;
	sub_82106F58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823E4794:
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E47AC"))) PPC_WEAK_FUNC(sub_823E47AC);
PPC_FUNC_IMPL(__imp__sub_823E47AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E47B0"))) PPC_WEAK_FUNC(sub_823E47B0);
PPC_FUNC_IMPL(__imp__sub_823E47B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,36292
	ctx.r10.u64 = ctx.r10.u64 | 36292;
	// ori r9,r9,36548
	ctx.r9.u64 = ctx.r9.u64 | 36548;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r4,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E47DC"))) PPC_WEAK_FUNC(sub_823E47DC);
PPC_FUNC_IMPL(__imp__sub_823E47DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E47E0"))) PPC_WEAK_FUNC(sub_823E47E0);
PPC_FUNC_IMPL(__imp__sub_823E47E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823E47E8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,97
	ctx.r11.s64 = ctx.r4.s64 * 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// addi r29,r10,4393
	ctx.r29.s64 = ctx.r10.s64 + 4393;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8218a360
	ctx.lr = 0x823E4818;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e4848
	if (ctx.cr6.eq) goto loc_823E4848;
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r28,728(r5)
	PPC_STORE_U32(ctx.r5.u32 + 728, ctx.r28.u32);
	// b 0x823e4884
	goto loc_823E4884;
loc_823E4848:
	// bl 0x8215bd60
	ctx.lr = 0x823E484C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// beq cr6,0x823e4880
	if (ctx.cr6.eq) goto loc_823E4880;
	// stw r29,728(r5)
	PPC_STORE_U32(ctx.r5.u32 + 728, ctx.r29.u32);
	// b 0x823e4884
	goto loc_823E4884;
loc_823E4880:
	// stw r27,728(r5)
	PPC_STORE_U32(ctx.r5.u32 + 728, ctx.r27.u32);
loc_823E4884:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

