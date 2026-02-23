#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8218666C"))) PPC_WEAK_FUNC(sub_8218666C);
PPC_FUNC_IMPL(__imp__sub_8218666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186670"))) PPC_WEAK_FUNC(sub_82186670);
PPC_FUNC_IMPL(__imp__sub_82186670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82186678;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82184c30
	ctx.lr = 0x82186694;
	sub_82184C30(ctx, base);
	// bl 0x82184d08
	ctx.lr = 0x82186698;
	sub_82184D08(ctx, base);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82186430
	ctx.lr = 0x821866AC;
	sub_82186430(ctx, base);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82186430
	ctx.lr = 0x821866BC;
	sub_82186430(ctx, base);
	// bl 0x821848c8
	ctx.lr = 0x821866C0;
	sub_821848C8(ctx, base);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x820a0560
	ctx.lr = 0x821866D0;
	sub_820A0560(ctx, base);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82184800
	ctx.lr = 0x821866E4;
	sub_82184800(ctx, base);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82186714
	if (ctx.cr6.eq) goto loc_82186714;
loc_821866F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185c00
	ctx.lr = 0x82186704;
	sub_82185C00(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821866f8
	if (!ctx.cr6.eq) goto loc_821866F8;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
loc_82186714:
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82186740
	if (ctx.cr6.eq) goto loc_82186740;
loc_82186724:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185c00
	ctx.lr = 0x82186730;
	sub_82185C00(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82186724
	if (!ctx.cr6.eq) goto loc_82186724;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
loc_82186740:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82185c00
	ctx.lr = 0x8218674C;
	sub_82185C00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82186754"))) PPC_WEAK_FUNC(sub_82186754);
PPC_FUNC_IMPL(__imp__sub_82186754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186758"))) PPC_WEAK_FUNC(sub_82186758);
PPC_FUNC_IMPL(__imp__sub_82186758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bl 0x82185c00
	ctx.lr = 0x82186788;
	sub_82185C00(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x8218c980
	ctx.lr = 0x821867C4;
	sub_8218C980(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x821867E0;
	sub_82081590(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218680C"))) PPC_WEAK_FUNC(sub_8218680C);
PPC_FUNC_IMPL(__imp__sub_8218680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186810"))) PPC_WEAK_FUNC(sub_82186810);
PPC_FUNC_IMPL(__imp__sub_82186810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82186818;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,108
	ctx.r29.s64 = ctx.r3.s64 + 108;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82186840
	if (ctx.cr6.eq) goto loc_82186840;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218683C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_82186840:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82186850
	if (ctx.cr6.eq) goto loc_82186850;
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
loc_82186850:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8218c9a0
	ctx.lr = 0x82186858;
	sub_8218C9A0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186878
	if (ctx.cr6.eq) goto loc_82186878;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218686C;
	sub_82183E40(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82186878:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186898
	if (ctx.cr6.eq) goto loc_82186898;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185d08
	ctx.lr = 0x8218688C;
	sub_82185D08(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82186898:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821868b8
	if (ctx.cr6.eq) goto loc_821868B8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185d08
	ctx.lr = 0x821868AC;
	sub_82185D08(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_821868B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821868f4
	if (ctx.cr6.eq) goto loc_821868F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184b68
	ctx.lr = 0x821868D4;
	sub_82184B68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821868e8
	if (ctx.cr6.eq) goto loc_821868E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821868E8;
	sub_82183E40(ctx, base);
loc_821868E8:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_821868F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218692c
	if (ctx.cr6.eq) goto loc_8218692C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184b68
	ctx.lr = 0x8218690C;
	sub_82184B68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186920
	if (ctx.cr6.eq) goto loc_82186920;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82186920;
	sub_82183E40(ctx, base);
loc_82186920:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8218692C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82186934"))) PPC_WEAK_FUNC(sub_82186934);
PPC_FUNC_IMPL(__imp__sub_82186934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186938"))) PPC_WEAK_FUNC(sub_82186938);
PPC_FUNC_IMPL(__imp__sub_82186938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-11604
	ctx.r9.s64 = ctx.r11.s64 + -11604;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82186968
	if (ctx.cr6.eq) goto loc_82186968;
	// bl 0x821856d8
	ctx.lr = 0x82186968;
	sub_821856D8(ctx, base);
loc_82186968:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186984
	if (ctx.cr6.eq) goto loc_82186984;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82186980;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82186984:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186998"))) PPC_WEAK_FUNC(sub_82186998);
PPC_FUNC_IMPL(__imp__sub_82186998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186a0c
	if (ctx.cr6.eq) goto loc_82186A0C;
	// bl 0x82184c30
	ctx.lr = 0x821869C0;
	sub_82184C30(ctx, base);
	// bl 0x82184d08
	ctx.lr = 0x821869C4;
	sub_82184D08(ctx, base);
	// bl 0x821848c8
	ctx.lr = 0x821869C8;
	sub_821848C8(ctx, base);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82184b68
	ctx.lr = 0x821869D8;
	sub_82184B68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,21628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// bl 0x82184b68
	ctx.lr = 0x821869E4;
	sub_82184B68(ctx, base);
	// lwz r30,21628(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82186a04
	if (ctx.cr6.eq) goto loc_82186A04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82186810
	ctx.lr = 0x821869F8;
	sub_82186810(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82186A04;
	sub_82183E40(ctx, base);
loc_82186A04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21628, ctx.r11.u32);
loc_82186A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186A24"))) PPC_WEAK_FUNC(sub_82186A24);
PPC_FUNC_IMPL(__imp__sub_82186A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186A28"))) PPC_WEAK_FUNC(sub_82186A28);
PPC_FUNC_IMPL(__imp__sub_82186A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82186998
	ctx.lr = 0x82186A40;
	sub_82186998(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82186A44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82186a5c
	if (ctx.cr6.eq) goto loc_82186A5C;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82183448
	ctx.lr = 0x82186A58;
	sub_82183448(ctx, base);
	// b 0x82186a64
	goto loc_82186A64;
loc_82186A5C:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x82186A64;
	sub_821845A0(ctx, base);
loc_82186A64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186a90
	if (ctx.cr6.eq) goto loc_82186A90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82186758
	ctx.lr = 0x82186A74;
	sub_82186758(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,21628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82186A90:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186AB0"))) PPC_WEAK_FUNC(sub_82186AB0);
PPC_FUNC_IMPL(__imp__sub_82186AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82186ad4
	if (!ctx.cr6.lt) goto loc_82186AD4;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
loc_82186AD4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82186ae0
	if (!ctx.cr6.gt) goto loc_82186AE0;
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
loc_82186AE0:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82186aec
	if (!ctx.cr6.lt) goto loc_82186AEC;
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
loc_82186AEC:
	// fcmpu cr6,f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// ble cr6,0x82186af8
	if (!ctx.cr6.gt) goto loc_82186AF8;
	// fsubs f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
loc_82186AF8:
	// fsubs f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82186b10
	if (!ctx.cr6.gt) goto loc_82186B10;
	// fneg f10,f2
	ctx.f10.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82186b80
	if (ctx.cr6.gt) goto loc_82186B80;
loc_82186B10:
	// fsubs f10,f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82186b80
	if (ctx.cr6.gt) goto loc_82186B80;
	// fsubs f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82186b80
	if (ctx.cr6.lt) goto loc_82186B80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f12,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x82186b4c
	if (ctx.cr6.lt) goto loc_82186B4C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82186b64
	if (!ctx.cr6.gt) goto loc_82186B64;
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82186b6c
	goto loc_82186B6C;
loc_82186B4C:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82186b64
	if (ctx.cr6.gt) goto loc_82186B64;
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82186b6c
	goto loc_82186B6C;
loc_82186B64:
	// fadds f0,f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// li r3,1
	ctx.r3.s64 = 1;
loc_82186B6C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82186b78
	if (!ctx.cr6.gt) goto loc_82186B78;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_82186B78:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
loc_82186B80:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82186b9c
	if (!ctx.cr6.gt) goto loc_82186B9C;
	// fsubs f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82186B9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186BA4"))) PPC_WEAK_FUNC(sub_82186BA4);
PPC_FUNC_IMPL(__imp__sub_82186BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186BA8"))) PPC_WEAK_FUNC(sub_82186BA8);
PPC_FUNC_IMPL(__imp__sub_82186BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// addi r8,r10,21632
	ctx.r8.s64 = ctx.r10.s64 + 21632;
	// bge cr6,0x82186be4
	if (!ctx.cr6.lt) goto loc_82186BE4;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82186bd0
	if (!ctx.cr6.lt) goto loc_82186BD0;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82186BD0:
	// addis r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 131072;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82186BE4:
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bge cr6,0x82186c00
	if (!ctx.cr6.lt) goto loc_82186C00;
	// addi r9,r11,-32768
	ctx.r9.s64 = ctx.r11.s64 + -32768;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82186C00:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 262144;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186C1C"))) PPC_WEAK_FUNC(sub_82186C1C);
PPC_FUNC_IMPL(__imp__sub_82186C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186C20"))) PPC_WEAK_FUNC(sub_82186C20);
PPC_FUNC_IMPL(__imp__sub_82186C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// addi r8,r10,21632
	ctx.r8.s64 = ctx.r10.s64 + 21632;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82186c64
	if (!ctx.cr6.lt) goto loc_82186C64;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82186c50
	if (!ctx.cr6.lt) goto loc_82186C50;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82186C50:
	// addis r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 131072;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82186C64:
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bge cr6,0x82186c80
	if (!ctx.cr6.lt) goto loc_82186C80;
	// addi r9,r11,-32768
	ctx.r9.s64 = ctx.r11.s64 + -32768;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82186C80:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 262144;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186C9C"))) PPC_WEAK_FUNC(sub_82186C9C);
PPC_FUNC_IMPL(__imp__sub_82186C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186CA0"))) PPC_WEAK_FUNC(sub_82186CA0);
PPC_FUNC_IMPL(__imp__sub_82186CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f6,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186CD4"))) PPC_WEAK_FUNC(sub_82186CD4);
PPC_FUNC_IMPL(__imp__sub_82186CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186CD8"))) PPC_WEAK_FUNC(sub_82186CD8);
PPC_FUNC_IMPL(__imp__sub_82186CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f6,f9,f11,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186D38"))) PPC_WEAK_FUNC(sub_82186D38);
PPC_FUNC_IMPL(__imp__sub_82186D38) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82186c20
	ctx.lr = 0x82186D7C;
	sub_82186C20(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// bl 0x82186c20
	ctx.lr = 0x82186D88;
	sub_82186C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// bl 0x82186c20
	ctx.lr = 0x82186D94;
	sub_82186C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186DA0;
	sub_82186BA8(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186DAC;
	sub_82186BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186DB8;
	sub_82186BA8(ctx, base);
	// fneg f2,f8
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f29,f1,f9
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f30,f1,f12
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f0,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f13,60(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// fmuls f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f2,f1,f11
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// fmadds f13,f5,f12,f29
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f29.f64));
	// stfs f0,48(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// stfs f0,52(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// stfs f0,56(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// fmsubs f0,f7,f10,f30
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f1,f8,f9,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,24(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmsubs f12,f8,f12,f4
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f4.f64));
	// stfs f31,40(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// stfs f2,4(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f1,20(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f13,32(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f12,36(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_82186E6C"))) PPC_WEAK_FUNC(sub_82186E6C);
PPC_FUNC_IMPL(__imp__sub_82186E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186E70"))) PPC_WEAK_FUNC(sub_82186E70);
PPC_FUNC_IMPL(__imp__sub_82186E70) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82186c20
	ctx.lr = 0x82186E88;
	sub_82186C20(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186E90;
	sub_82186BA8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,40(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,32(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186EE4"))) PPC_WEAK_FUNC(sub_82186EE4);
PPC_FUNC_IMPL(__imp__sub_82186EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186EE8"))) PPC_WEAK_FUNC(sub_82186EE8);
PPC_FUNC_IMPL(__imp__sub_82186EE8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82186c20
	ctx.lr = 0x82186F04;
	sub_82186C20(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// bl 0x82186c20
	ctx.lr = 0x82186F10;
	sub_82186C20(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186F1C;
	sub_82186BA8(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82186F28;
	sub_82186BA8(ctx, base);
	// fmuls f10,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fsubs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82186F9C"))) PPC_WEAK_FUNC(sub_82186F9C);
PPC_FUNC_IMPL(__imp__sub_82186F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186FA0"))) PPC_WEAK_FUNC(sub_82186FA0);
PPC_FUNC_IMPL(__imp__sub_82186FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4640
	ctx.r9.s64 = ctx.r11.s64 + 4640;
	// addi r8,r10,4592
	ctx.r8.s64 = ctx.r10.s64 + 4592;
	// vupkd3d128 v61,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,4544
	ctx.r5.s64 = ctx.r7.s64 + 4544;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r6,4560
	ctx.r11.s64 = ctx.r6.s64 + 4560;
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v60,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v0,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v11,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v28,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// vmulfp128 v59,v1,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v30,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vspltw128 v15,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v15.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v3,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// addi r6,r9,4576
	ctx.r6.s64 = ctx.r9.s64 + 4576;
	// vspltw128 v17,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v19,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r5,r7,4624
	ctx.r5.s64 = ctx.r7.s64 + 4624;
	// vspltw128 v21,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v25,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v16,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v18,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lvx128 v60,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v20,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v23,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vrfin128 v13,v59
	simde_mm_store_ps(ctx.v13.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vspltw128 v29,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v27,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v2,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v31,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v5,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v4,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vspltw128 v7,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v6,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// vnmsubfp v10,v0,v13,v1
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v1.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v0,v10,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v13,v0,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v11,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v8,v13,v10
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v13,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v28,v28,v12,v9
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v13,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v12,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmulfp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v11,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v14,v3,v11,v28
	simde_mm_store_ps(ctx.v14.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddcfp128 v63,v30,v63,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v0,v11,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v22,v13,v11
	simde_mm_store_ps(ctx.v22.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v26,v10,v13
	simde_mm_store_ps(ctx.v26.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v24,v13,v13
	simde_mm_store_ps(ctx.v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v28,v10,v10
	simde_mm_store_ps(ctx.v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v30,v12,v10
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v3,v9,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v1,v12,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v16,v16,v10,v14
	simde_mm_store_ps(ctx.v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v16.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v14.f32)));
	// vmaddcfp128 v15,v13,v15,v63
	simde_mm_store_ps(ctx.v15.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v15.f32)), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v11,v8,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v10,v9,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v13,v0,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v17,v17,v12,v15
	simde_mm_store_ps(ctx.v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v17.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v15.f32)));
	// vmaddfp v9,v18,v9,v16
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v18.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v12,v8,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v19,v8,v17
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v19.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v17.f32)));
	// vmaddfp v9,v20,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v20.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v21,v22,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v21.f32), simde_mm_load_ps(ctx.v22.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v23,v24,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v23.f32), simde_mm_load_ps(ctx.v24.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v25,v26,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v25.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v27,v28,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v27.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v29,v30,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v31,v1,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v2,v3,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v4,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v5,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v6,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v7,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218712C"))) PPC_WEAK_FUNC(sub_8218712C);
PPC_FUNC_IMPL(__imp__sub_8218712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187130"))) PPC_WEAK_FUNC(sub_82187130);
PPC_FUNC_IMPL(__imp__sub_82187130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82187138;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,21632
	ctx.r29.s64 = ctx.r11.s64 + 21632;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfs f31,9860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9860);
	ctx.f31.f64 = double(temp.f32);
loc_82187158:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82249e70
	ctx.lr = 0x82187174;
	sub_82249E70(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82187158
	if (ctx.cr6.lt) goto loc_82187158;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821871A0"))) PPC_WEAK_FUNC(sub_821871A0);
PPC_FUNC_IMPL(__imp__sub_821871A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821871D8"))) PPC_WEAK_FUNC(sub_821871D8);
PPC_FUNC_IMPL(__imp__sub_821871D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187200"))) PPC_WEAK_FUNC(sub_82187200);
PPC_FUNC_IMPL(__imp__sub_82187200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187220"))) PPC_WEAK_FUNC(sub_82187220);
PPC_FUNC_IMPL(__imp__sub_82187220) {
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
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x8218724C;
	sub_82249C38(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218726C"))) PPC_WEAK_FUNC(sub_8218726C);
PPC_FUNC_IMPL(__imp__sub_8218726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187270"))) PPC_WEAK_FUNC(sub_82187270);
PPC_FUNC_IMPL(__imp__sub_82187270) {
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
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x8218729C;
	sub_82249C38(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821872B0"))) PPC_WEAK_FUNC(sub_821872B0);
PPC_FUNC_IMPL(__imp__sub_821872B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x821872D4;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x821872E0;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f9,f12,f30,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmsubs f8,f13,f30,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f10.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187320"))) PPC_WEAK_FUNC(sub_82187320);
PPC_FUNC_IMPL(__imp__sub_82187320) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x82187344;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82187350;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmsubs f9,f13,f30,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f11.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f8,f12,f30,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187390"))) PPC_WEAK_FUNC(sub_82187390);
PPC_FUNC_IMPL(__imp__sub_82187390) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x821873B4;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x821873C0;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f9,f11,f0,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f8,f11,f30,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187400"))) PPC_WEAK_FUNC(sub_82187400);
PPC_FUNC_IMPL(__imp__sub_82187400) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8208e480
	ctx.lr = 0x82187428;
	sub_8208E480(ctx, base);
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f12,f1,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f2,f12,f2,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f8.f64));
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f12,f10,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f3,f12,f9,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f3.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f5,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfs f31,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f7,f13,f7,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f2.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f11,f31,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f3,f0,f8,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f2,f11,f1,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f11,f4,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f13,f12,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f11,f9,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821874F8"))) PPC_WEAK_FUNC(sub_821874F8);
PPC_FUNC_IMPL(__imp__sub_821874F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82187544
	if (!ctx.cr6.gt) goto loc_82187544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8218756c
	if (!ctx.cr6.lt) goto loc_8218756C;
	// b 0x82187568
	goto loc_82187568;
loc_82187544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8218756c
	if (!ctx.cr6.lt) goto loc_8218756C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8218756c
	if (!ctx.cr6.gt) goto loc_8218756C;
loc_82187568:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8218756C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x82187574;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82187580;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821875F4"))) PPC_WEAK_FUNC(sub_821875F4);
PPC_FUNC_IMPL(__imp__sub_821875F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821875F8"))) PPC_WEAK_FUNC(sub_821875F8);
PPC_FUNC_IMPL(__imp__sub_821875F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82187644
	if (!ctx.cr6.gt) goto loc_82187644;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8218766c
	if (!ctx.cr6.lt) goto loc_8218766C;
	// b 0x82187668
	goto loc_82187668;
loc_82187644:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8218766c
	if (!ctx.cr6.lt) goto loc_8218766C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8218766c
	if (!ctx.cr6.gt) goto loc_8218766C;
loc_82187668:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8218766C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x82187674;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82187680;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821876F4"))) PPC_WEAK_FUNC(sub_821876F4);
PPC_FUNC_IMPL(__imp__sub_821876F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821876F8"))) PPC_WEAK_FUNC(sub_821876F8);
PPC_FUNC_IMPL(__imp__sub_821876F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82187744
	if (!ctx.cr6.gt) goto loc_82187744;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8218776c
	if (!ctx.cr6.lt) goto loc_8218776C;
	// b 0x82187768
	goto loc_82187768;
loc_82187744:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8218776c
	if (!ctx.cr6.lt) goto loc_8218776C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8218776c
	if (!ctx.cr6.gt) goto loc_8218776C;
loc_82187768:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8218776C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82249f50
	ctx.lr = 0x82187774;
	sub_82249F50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x82187780;
	sub_82249E70(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821877F4"))) PPC_WEAK_FUNC(sub_821877F4);
PPC_FUNC_IMPL(__imp__sub_821877F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821877F8"))) PPC_WEAK_FUNC(sub_821877F8);
PPC_FUNC_IMPL(__imp__sub_821877F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvrx128 v62,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// bl 0x82186fa0
	ctx.lr = 0x82187830;
	sub_82186FA0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stvrx128 v63,r8,r31
	ea = ctx.r8.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r31
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,2144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// fmuls f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// fmuls f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f7,60(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmuls f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fmuls f8,f13,f5
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmsubs f6,f13,f4,f2
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 - ctx.f2.f64));
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fneg f7,f3
	ctx.f7.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fnmsubs f5,f12,f4,f1
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f4.f64 - ctx.f1.f64)));
	// stfs f5,36(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fmsubs f4,f13,f10,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f9.f64));
	// stfs f4,20(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmadds f3,f12,f10,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f3,24(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_82187920"))) PPC_WEAK_FUNC(sub_82187920);
PPC_FUNC_IMPL(__imp__sub_82187920) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvrx128 v62,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// bl 0x82186fa0
	ctx.lr = 0x8218795C;
	sub_82186FA0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stvrx128 v63,r8,r31
	ea = ctx.r8.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r31
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,2144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmuls f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// fmuls f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// fmuls f31,f13,f9
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,60(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f8,24(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// fmuls f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f7,40(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmsubs f0,f12,f6,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f4.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmsubs f9,f13,f5,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 - ctx.f3.f64));
	// stfs f9,36(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// fmadds f8,f12,f10,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfs f8,20(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmadds f7,f13,f11,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187A4C"))) PPC_WEAK_FUNC(sub_82187A4C);
PPC_FUNC_IMPL(__imp__sub_82187A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187A50"))) PPC_WEAK_FUNC(sub_82187A50);
PPC_FUNC_IMPL(__imp__sub_82187A50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82186c20
	ctx.lr = 0x82187A78;
	sub_82186C20(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82186ba8
	ctx.lr = 0x82187A80;
	sub_82186BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x820804f8
	ctx.lr = 0x82187A8C;
	sub_820804F8(ctx, base);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,32(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187ABC"))) PPC_WEAK_FUNC(sub_82187ABC);
PPC_FUNC_IMPL(__imp__sub_82187ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187AC0"))) PPC_WEAK_FUNC(sub_82187AC0);
PPC_FUNC_IMPL(__imp__sub_82187AC0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82249e70
	ctx.lr = 0x82187AEC;
	sub_82249E70(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249f50
	ctx.lr = 0x82187AF8;
	sub_82249F50(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f10,f10
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmuls f3,f10,f30
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f10,f8,f8
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f7,f6,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f6,f5,f11
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f5,f2,f11,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f2,f1,f11,f12
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f1,f10,f11,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fsubs f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f10,f7,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_82187BD0"))) PPC_WEAK_FUNC(sub_82187BD0);
PPC_FUNC_IMPL(__imp__sub_82187BD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820804f8
	ctx.lr = 0x82187BF0;
	sub_820804F8(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187C20"))) PPC_WEAK_FUNC(sub_82187C20);
PPC_FUNC_IMPL(__imp__sub_82187C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82187920
	ctx.lr = 0x82187C44;
	sub_82187920(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82187C6C"))) PPC_WEAK_FUNC(sub_82187C6C);
PPC_FUNC_IMPL(__imp__sub_82187C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187C70"))) PPC_WEAK_FUNC(sub_82187C70);
PPC_FUNC_IMPL(__imp__sub_82187C70) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f13,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f12,2132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2136(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82187ccc
	if (!ctx.cr6.gt) goto loc_82187CCC;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82187cd8
	goto loc_82187CD8;
loc_82187CCC:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82187cd8
	if (!ctx.cr6.lt) goto loc_82187CD8;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82187CD8:
	// lfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x82187cec
	if (!ctx.cr6.gt) goto loc_82187CEC;
	// fsubs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// b 0x82187cf8
	goto loc_82187CF8;
loc_82187CEC:
	// fcmpu cr6,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// bge cr6,0x82187cf8
	if (!ctx.cr6.lt) goto loc_82187CF8;
	// fadds f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
loc_82187CF8:
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x82187d0c
	if (!ctx.cr6.gt) goto loc_82187D0C;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82187d18
	goto loc_82187D18;
loc_82187D0C:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82187d18
	if (!ctx.cr6.lt) goto loc_82187D18;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82187D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821874f8
	ctx.lr = 0x82187D20;
	sub_821874F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821875f8
	ctx.lr = 0x82187D2C;
	sub_821875F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82187D3C;
	sub_82289C50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821876f8
	ctx.lr = 0x82187D48;
	sub_821876F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82187D58;
	sub_82289C50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82187D74"))) PPC_WEAK_FUNC(sub_82187D74);
PPC_FUNC_IMPL(__imp__sub_82187D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82187D78"))) PPC_WEAK_FUNC(sub_82187D78);
PPC_FUNC_IMPL(__imp__sub_82187D78) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f13,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// lfs f12,2132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2136(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82187dd0
	if (!ctx.cr6.gt) goto loc_82187DD0;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82187ddc
	goto loc_82187DDC;
loc_82187DD0:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82187ddc
	if (!ctx.cr6.lt) goto loc_82187DDC;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82187DDC:
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82187df0
	if (!ctx.cr6.gt) goto loc_82187DF0;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82187dfc
	goto loc_82187DFC;
loc_82187DF0:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82187dfc
	if (!ctx.cr6.lt) goto loc_82187DFC;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82187DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821876f8
	ctx.lr = 0x82187E04;
	sub_821876F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821875f8
	ctx.lr = 0x82187E10;
	sub_821875F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82187E20;
	sub_82289C50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82187E38"))) PPC_WEAK_FUNC(sub_82187E38);
PPC_FUNC_IMPL(__imp__sub_82187E38) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f13,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// lfs f12,2132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2136(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82187e90
	if (!ctx.cr6.gt) goto loc_82187E90;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82187e9c
	goto loc_82187E9C;
loc_82187E90:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82187e9c
	if (!ctx.cr6.lt) goto loc_82187E9C;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82187E9C:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82187eb0
	if (!ctx.cr6.gt) goto loc_82187EB0;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x82187ebc
	goto loc_82187EBC;
loc_82187EB0:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x82187ebc
	if (!ctx.cr6.lt) goto loc_82187EBC;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82187EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821875f8
	ctx.lr = 0x82187EC4;
	sub_821875F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821874f8
	ctx.lr = 0x82187ED0;
	sub_821874F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82187EE0;
	sub_82289C50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82187EF8"))) PPC_WEAK_FUNC(sub_82187EF8);
PPC_FUNC_IMPL(__imp__sub_82187EF8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82187F60;
	sub_8208EA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82187F6C;
	sub_8208EA90(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82187fc8
	if (ctx.cr6.lt) goto loc_82187FC8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82187fc8
	if (ctx.cr6.lt) goto loc_82187FC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82187fc8
	if (ctx.cr6.gt) goto loc_82187FC8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82187fc8
	if (ctx.cr6.gt) goto loc_82187FC8;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bge cr6,0x8218802c
	if (!ctx.cr6.lt) goto loc_8218802C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x8218802c
	goto loc_8218802C;
loc_82187FC8:
	// fneg f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x82187FD0;
	sub_82249C38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821874f8
	ctx.lr = 0x82187FE4;
	sub_821874F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82187FF0;
	sub_8208EA90(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82187FFC;
	sub_8208EA90(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x8218800C;
	sub_82249C38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x82188020;
	sub_821875F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x8218802C;
	sub_8208EA90(ctx, base);
loc_8218802C:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x8218803C;
	sub_82249C38(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218807C"))) PPC_WEAK_FUNC(sub_8218807C);
PPC_FUNC_IMPL(__imp__sub_8218807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188080"))) PPC_WEAK_FUNC(sub_82188080);
PPC_FUNC_IMPL(__imp__sub_82188080) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821880EC;
	sub_8208EA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x821880F8;
	sub_8208EA90(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,19028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82188150
	if (ctx.cr6.lt) goto loc_82188150;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82188150
	if (ctx.cr6.lt) goto loc_82188150;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82188150
	if (ctx.cr6.gt) goto loc_82188150;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82188150
	if (ctx.cr6.gt) goto loc_82188150;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821881b4
	if (!ctx.cr6.lt) goto loc_821881B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x821881b4
	goto loc_821881B4;
loc_82188150:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82249c38
	ctx.lr = 0x82188158;
	sub_82249C38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821876f8
	ctx.lr = 0x8218816C;
	sub_821876F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82188178;
	sub_8208EA90(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82188184;
	sub_8208EA90(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x82188194;
	sub_82249C38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x821881A8;
	sub_821875F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x821881B4;
	sub_8208EA90(ctx, base);
loc_821881B4:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x821881C4;
	sub_82249C38(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188204"))) PPC_WEAK_FUNC(sub_82188204);
PPC_FUNC_IMPL(__imp__sub_82188204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188208"))) PPC_WEAK_FUNC(sub_82188208);
PPC_FUNC_IMPL(__imp__sub_82188208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218824c
	if (ctx.cr6.eq) goto loc_8218824C;
loc_82188224:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82188244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82188224
	if (!ctx.cr6.eq) goto loc_82188224;
loc_8218824C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188260"))) PPC_WEAK_FUNC(sub_82188260);
PPC_FUNC_IMPL(__imp__sub_82188260) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218827c
	if (ctx.cr6.eq) goto loc_8218827C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8218827C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82188298
	if (ctx.cr6.eq) goto loc_82188298;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_82188298:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821882A0"))) PPC_WEAK_FUNC(sub_821882A0);
PPC_FUNC_IMPL(__imp__sub_821882A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821882ac
	if (!ctx.cr6.eq) goto loc_821882AC;
	// blr 
	return;
loc_821882AC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821882B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821882b8
	if (!ctx.cr6.eq) goto loc_821882B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821882CC"))) PPC_WEAK_FUNC(sub_821882CC);
PPC_FUNC_IMPL(__imp__sub_821882CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821882D0"))) PPC_WEAK_FUNC(sub_821882D0);
PPC_FUNC_IMPL(__imp__sub_821882D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821882e0
	if (!ctx.cr6.eq) goto loc_821882E0;
loc_821882D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821882E0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82188304
	if (ctx.cr6.eq) goto loc_82188304;
loc_821882EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8218832c
	if (ctx.cr6.eq) goto loc_8218832C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821882ec
	if (!ctx.cr6.eq) goto loc_821882EC;
loc_82188304:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82188310:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821882d8
	if (ctx.cr6.eq) goto loc_821882D8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82188310
	if (!ctx.cr6.eq) goto loc_82188310;
	// blr 
	return;
loc_8218832C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188334"))) PPC_WEAK_FUNC(sub_82188334);
PPC_FUNC_IMPL(__imp__sub_82188334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188338"))) PPC_WEAK_FUNC(sub_82188338);
PPC_FUNC_IMPL(__imp__sub_82188338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8276
	ctx.r9.s64 = ctx.r10.s64 + 8276;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82188364
	if (!ctx.cr6.eq) goto loc_82188364;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82188364:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188378"))) PPC_WEAK_FUNC(sub_82188378);
PPC_FUNC_IMPL(__imp__sub_82188378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8276
	ctx.r9.s64 = ctx.r10.s64 + 8276;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821883a4
	if (!ctx.cr6.eq) goto loc_821883A4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_821883A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821883B8"))) PPC_WEAK_FUNC(sub_821883B8);
PPC_FUNC_IMPL(__imp__sub_821883B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,8276
	ctx.r9.s64 = ctx.r10.s64 + 8276;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821883f0
	if (ctx.cr6.eq) goto loc_821883F0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x82188418
	goto loc_82188418;
loc_821883F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188404
	if (ctx.cr6.eq) goto loc_82188404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188208
	ctx.lr = 0x82188404;
	sub_82188208(ctx, base);
loc_82188404:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82188418
	if (ctx.cr6.eq) goto loc_82188418;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82188418:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82188434
	if (ctx.cr6.eq) goto loc_82188434;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82188434:
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

__attribute__((alias("__imp__sub_8218844C"))) PPC_WEAK_FUNC(sub_8218844C);
PPC_FUNC_IMPL(__imp__sub_8218844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188450"))) PPC_WEAK_FUNC(sub_82188450);
PPC_FUNC_IMPL(__imp__sub_82188450) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82188480
	if (ctx.cr6.eq) goto loc_82188480;
loc_8218846C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218846c
	if (!ctx.cr6.eq) goto loc_8218846C;
loc_82188480:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188494"))) PPC_WEAK_FUNC(sub_82188494);
PPC_FUNC_IMPL(__imp__sub_82188494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188498"))) PPC_WEAK_FUNC(sub_82188498);
PPC_FUNC_IMPL(__imp__sub_82188498) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821884C8"))) PPC_WEAK_FUNC(sub_821884C8);
PPC_FUNC_IMPL(__imp__sub_821884C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82188538
	if (ctx.cr6.gt) goto loc_82188538;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82188514
	if (ctx.cr6.eq) goto loc_82188514;
loc_821884F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82188514
	if (ctx.cr6.gt) goto loc_82188514;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821884f0
	if (!ctx.cr6.eq) goto loc_821884F0;
loc_82188514:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// blr 
	return;
loc_82188538:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218856c
	if (ctx.cr6.eq) goto loc_8218856C;
loc_82188548:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8218856c
	if (!ctx.cr6.gt) goto loc_8218856C;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82188548
	if (!ctx.cr6.eq) goto loc_82188548;
loc_8218856C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188590"))) PPC_WEAK_FUNC(sub_82188590);
PPC_FUNC_IMPL(__imp__sub_82188590) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821885b8
	if (ctx.cr6.eq) goto loc_821885B8;
loc_821885A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821885a8
	if (!ctx.cr6.eq) goto loc_821885A8;
loc_821885B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_821885BC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821885dc
	if (ctx.cr6.eq) goto loc_821885DC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
loc_821885DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821885f4
	if (ctx.cr6.eq) goto loc_821885F4;
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_821885F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// bne cr6,0x821885bc
	if (!ctx.cr6.eq) goto loc_821885BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188604"))) PPC_WEAK_FUNC(sub_82188604);
PPC_FUNC_IMPL(__imp__sub_82188604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188608"))) PPC_WEAK_FUNC(sub_82188608);
PPC_FUNC_IMPL(__imp__sub_82188608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82188664
	if (ctx.cr6.eq) goto loc_82188664;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82188664
	if (!ctx.cr6.eq) goto loc_82188664;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82188664
	if (ctx.cr6.eq) goto loc_82188664;
loc_82188638:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188658
	if (ctx.cr6.eq) goto loc_82188658;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82188658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82188658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82188638
	if (!ctx.cr6.eq) goto loc_82188638;
loc_82188664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188678"))) PPC_WEAK_FUNC(sub_82188678);
PPC_FUNC_IMPL(__imp__sub_82188678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821886d4
	if (ctx.cr6.eq) goto loc_821886D4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821886d4
	if (!ctx.cr6.eq) goto loc_821886D4;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821886d4
	if (ctx.cr6.eq) goto loc_821886D4;
loc_821886A8:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821886c8
	if (ctx.cr6.eq) goto loc_821886C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821886C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821886C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821886a8
	if (!ctx.cr6.eq) goto loc_821886A8;
loc_821886D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821886E8"))) PPC_WEAK_FUNC(sub_821886E8);
PPC_FUNC_IMPL(__imp__sub_821886E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821886F8"))) PPC_WEAK_FUNC(sub_821886F8);
PPC_FUNC_IMPL(__imp__sub_821886F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// b 0x82199a78
	sub_82199A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218870C"))) PPC_WEAK_FUNC(sub_8218870C);
PPC_FUNC_IMPL(__imp__sub_8218870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188710"))) PPC_WEAK_FUNC(sub_82188710);
PPC_FUNC_IMPL(__imp__sub_82188710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// b 0x82199270
	sub_82199270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82188724"))) PPC_WEAK_FUNC(sub_82188724);
PPC_FUNC_IMPL(__imp__sub_82188724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188728"))) PPC_WEAK_FUNC(sub_82188728);
PPC_FUNC_IMPL(__imp__sub_82188728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// b 0x821986d0
	sub_821986D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82188734"))) PPC_WEAK_FUNC(sub_82188734);
PPC_FUNC_IMPL(__imp__sub_82188734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188738"))) PPC_WEAK_FUNC(sub_82188738);
PPC_FUNC_IMPL(__imp__sub_82188738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188744"))) PPC_WEAK_FUNC(sub_82188744);
PPC_FUNC_IMPL(__imp__sub_82188744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188748"))) PPC_WEAK_FUNC(sub_82188748);
PPC_FUNC_IMPL(__imp__sub_82188748) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// bne cr6,0x82188770
	if (!ctx.cr6.eq) goto loc_82188770;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82188770:
	// bl 0x82198870
	ctx.lr = 0x82188774;
	sub_82198870(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82188784"))) PPC_WEAK_FUNC(sub_82188784);
PPC_FUNC_IMPL(__imp__sub_82188784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188788"))) PPC_WEAK_FUNC(sub_82188788);
PPC_FUNC_IMPL(__imp__sub_82188788) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821887d8
	if (ctx.cr6.eq) goto loc_821887D8;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82080000
	ctx.lr = 0x821887AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82188830
	if (ctx.cr6.eq) goto loc_82188830;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219a6e0
	ctx.lr = 0x821887BC;
	sub_8219A6E0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21708, ctx.r3.u32);
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
loc_821887D8:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821887E4;
	sub_822AA648(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82080000
	ctx.lr = 0x82188804;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82188830
	if (ctx.cr6.eq) goto loc_82188830;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8219a6e0
	ctx.lr = 0x82188814;
	sub_8219A6E0(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21708, ctx.r3.u32);
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
loc_82188830:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21708, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82188850"))) PPC_WEAK_FUNC(sub_82188850);
PPC_FUNC_IMPL(__imp__sub_82188850) {
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// bl 0x82198870
	ctx.lr = 0x82188870;
	sub_82198870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82188890
	if (ctx.cr6.eq) goto loc_82188890;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82188890:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821888A4"))) PPC_WEAK_FUNC(sub_821888A4);
PPC_FUNC_IMPL(__imp__sub_821888A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821888A8"))) PPC_WEAK_FUNC(sub_821888A8);
PPC_FUNC_IMPL(__imp__sub_821888A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821888B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// lwz r31,21716(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821888C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r28,-32179
	ctx.r28.s64 = -2108882944;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r11,21704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x821888e8
	if (!ctx.cr6.eq) goto loc_821888E8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821888E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821888F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r11,21700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218892c
	if (ctx.cr6.eq) goto loc_8218892C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82188908:
	// bl 0x8241dd3c
	ctx.lr = 0x8218890C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r31,21716(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218891C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218892C:
	// lwz r3,21704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21704);
	// bl 0x8219a910
	ctx.lr = 0x82188934;
	sub_8219A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82188908
	if (!ctx.cr6.eq) goto loc_82188908;
	// bl 0x8241dd3c
	ctx.lr = 0x82188944;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r31,21716(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188954;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82188964"))) PPC_WEAK_FUNC(sub_82188964);
PPC_FUNC_IMPL(__imp__sub_82188964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188968"))) PPC_WEAK_FUNC(sub_82188968);
PPC_FUNC_IMPL(__imp__sub_82188968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// lwz r11,21708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82188994
	if (!ctx.cr6.eq) goto loc_82188994;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82188994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218899C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,21708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21708);
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8241dd3c
	ctx.lr = 0x821889B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821889D8"))) PPC_WEAK_FUNC(sub_821889D8);
PPC_FUNC_IMPL(__imp__sub_821889D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821889E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,21708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82188a00
	if (!ctx.cr6.eq) goto loc_82188A00;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82188A00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188A08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,21708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21708);
	// bl 0x8219a3f8
	ctx.lr = 0x82188A20;
	sub_8219A3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188A2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82188A40"))) PPC_WEAK_FUNC(sub_82188A40);
PPC_FUNC_IMPL(__imp__sub_82188A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82188A48;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x82188a64
	if (!ctx.cr6.eq) goto loc_82188A64;
	// bl 0x82188968
	ctx.lr = 0x82188A60;
	sub_82188968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82188A64:
	// bl 0x82188968
	ctx.lr = 0x82188A68;
	sub_82188968(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82188a94
	if (!ctx.cr6.eq) goto loc_82188A94;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82188a8c
	if (ctx.cr6.eq) goto loc_82188A8C;
	// bl 0x82188968
	ctx.lr = 0x82188A88;
	sub_82188968(ctx, base);
	// b 0x82188a90
	goto loc_82188A90;
loc_82188A8C:
	// bl 0x82183078
	ctx.lr = 0x82188A90;
	sub_82183078(ctx, base);
loc_82188A90:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82188A94:
	// addi r11,r30,2047
	ctx.r11.s64 = ctx.r30.s64 + 2047;
	// rlwinm r29,r11,0,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x82188968
	ctx.lr = 0x82188AA0;
	sub_82188968(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82188ab8
	if (!ctx.cr6.eq) goto loc_82188AB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821889d8
	ctx.lr = 0x82188AB0;
	sub_821889D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82188AB8:
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,-5964(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5964);
	// stw r11,-5964(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5964, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82188ACC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82188AD8;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184710
	ctx.lr = 0x82188AE8;
	sub_82184710(ctx, base);
	// stw r30,-5964(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5964, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82188AF8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82188B04"))) PPC_WEAK_FUNC(sub_82188B04);
PPC_FUNC_IMPL(__imp__sub_82188B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82188B08"))) PPC_WEAK_FUNC(sub_82188B08);
PPC_FUNC_IMPL(__imp__sub_82188B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82188B10;
	sub_82248750(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r15,-32179
	ctx.r15.s64 = -2108882944;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r16,-32179
	ctx.r16.s64 = -2108882944;
	// lwz r3,21700(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82188b84
	if (!ctx.cr6.eq) goto loc_82188B84;
	// lwz r11,21704(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82188b44
	if (!ctx.cr6.eq) goto loc_82188B44;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82188B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188B4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,21704(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21704);
	// bl 0x8219a7f0
	ctx.lr = 0x82188B58;
	sub_8219A7F0(ctx, base);
	// stw r3,21700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 21700, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82188b78
	if (!ctx.cr6.eq) goto loc_82188B78;
	// bl 0x8241dd3c
	ctx.lr = 0x82188B6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82188B78:
	// bl 0x8241dd3c
	ctx.lr = 0x82188B7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r3,21700(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21700);
loc_82188B84:
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188B8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r28.u32);
	// lwz r31,21700(r15)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21700);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821892d4
	if (ctx.cr6.eq) goto loc_821892D4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r25,9
	ctx.r25.s64 = 9;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r23,5
	ctx.r23.s64 = 5;
	// li r18,6
	ctx.r18.s64 = 6;
	// li r19,7
	ctx.r19.s64 = 7;
	// lis r24,-32179
	ctx.r24.s64 = -2108882944;
	// lis r26,-32179
	ctx.r26.s64 = -2108882944;
	// addi r27,r11,21636
	ctx.r27.s64 = ctx.r11.s64 + 21636;
	// addi r22,r10,-11548
	ctx.r22.s64 = ctx.r10.s64 + -11548;
loc_82188BD0:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82188be8
	if (ctx.cr6.eq) goto loc_82188BE8;
	// bl 0x822e6048
	ctx.lr = 0x82188BE0;
	sub_822E6048(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x822e6048
	ctx.lr = 0x82188BE8;
	sub_822E6048(ctx, base);
loc_82188BE8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x821892d4
	if (ctx.cr6.gt) goto loc_821892D4;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29680
	ctx.r12.s64 = ctx.r12.s64 + -29680;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-29596(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29596);
	// lwz r16,-29328(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29328);
	// lwz r16,-29292(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29292);
	// lwz r16,-29192(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29192);
	// lwz r16,-29132(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29132);
	// lwz r16,-29028(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29028);
	// lwz r16,-28780(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28780);
	// lwz r16,-28968(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28968);
	// lwz r16,-28680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28680);
	// lwz r16,-27948(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27948);
	// lwz r16,-27948(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27948);
	// lwz r16,-28344(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28344);
	// lwz r16,-28232(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28232);
	// lwz r16,-28120(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28120);
	// lwz r16,-28072(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28072);
	// lwz r16,-27948(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27948);
	// lwz r16,-28280(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28280);
	// lwz r16,-28244(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28244);
	// lwz r16,-28268(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28268);
	// lwz r16,-28256(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28256);
	// lwz r16,-28288(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -28288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188C6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,21708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82188c84
	if (!ctx.cr6.eq) goto loc_82188C84;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82188C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188C8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// bl 0x82088600
	ctx.lr = 0x82188C94;
	sub_82088600(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,21708(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21708);
	// std r11,21720(r24)
	PPC_STORE_U64(ctx.r24.u32 + 21720, ctx.r11.u64);
	// bl 0x8219a260
	ctx.lr = 0x82188CA8;
	sub_8219A260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82188cd0
	if (ctx.cr6.eq) goto loc_82188CD0;
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188CBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188CC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
loc_82188CD0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82188d1c
	if (!ctx.cr6.eq) goto loc_82188D1C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82188a40
	ctx.lr = 0x82188CEC;
	sub_82188A40(ctx, base);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82188d1c
	if (!ctx.cr6.eq) goto loc_82188D1C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r6,r31,50
	ctx.r6.s64 = ctx.r31.s64 + 50;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x82188D1C;
	sub_8218A5F0(ctx, base);
loc_82188D1C:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r5,511
	ctx.r5.s64 = 511;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188d3c
	if (ctx.cr6.eq) goto loc_82188D3C;
	// bl 0x8218f148
	ctx.lr = 0x82188D38;
	sub_8218F148(ctx, base);
	// b 0x82188d40
	goto loc_82188D40;
loc_82188D3C:
	// bl 0x8218f128
	ctx.lr = 0x82188D40;
	sub_8218F128(ctx, base);
loc_82188D40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82188f20
	if (ctx.cr6.eq) goto loc_82188F20;
	// stw r21,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r21.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82188D5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188D68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188d8c
	if (ctx.cr6.eq) goto loc_82188D8C;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8218f3f0
	ctx.lr = 0x82188D84;
	sub_8218F3F0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x82188f2c
	if (!ctx.cr6.eq) goto loc_82188F2C;
loc_82188D8C:
	// stw r20,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r20.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188D9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82188f4c
	if (ctx.cr6.eq) goto loc_82188F4C;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188de0
	if (ctx.cr6.eq) goto loc_82188DE0;
	// bl 0x8218f1d8
	ctx.lr = 0x82188DCC;
	sub_8218F1D8(ctx, base);
	// stw r17,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188DD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
loc_82188DE0:
	// bl 0x8218f168
	ctx.lr = 0x82188DE4;
	sub_8218F168(ctx, base);
	// stw r17,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188DF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188E00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188e20
	if (ctx.cr6.eq) goto loc_82188E20;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8218f3f0
	ctx.lr = 0x82188E18;
	sub_8218F3F0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x82188f58
	if (!ctx.cr6.eq) goto loc_82188F58;
loc_82188E20:
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188E2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188E3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82188f4c
	if (ctx.cr6.eq) goto loc_82188F4C;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r5,r11,29,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFF;
	// beq cr6,0x82188e84
	if (ctx.cr6.eq) goto loc_82188E84;
	// bl 0x8218f2b8
	ctx.lr = 0x82188E70;
	sub_8218F2B8(ctx, base);
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188E7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
loc_82188E84:
	// bl 0x8218f248
	ctx.lr = 0x82188E88;
	sub_8218F248(ctx, base);
	// stw r18,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188E94;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188EA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82188f68
	if (!ctx.cr6.eq) goto loc_82188F68;
	// bl 0x8218f4a8
	ctx.lr = 0x82188EBC;
	sub_8218F4A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82188f84
	if (!ctx.cr6.eq) goto loc_82188F84;
	// stw r19,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r19.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188ED0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188EE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188f0c
	if (ctx.cr6.eq) goto loc_82188F0C;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8218f3f0
	ctx.lr = 0x82188EF8;
	sub_8218F3F0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x82188fd0
	if (!ctx.cr6.eq) goto loc_82188FD0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8218924c
	if (ctx.cr6.eq) goto loc_8218924C;
loc_82188F0C:
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82188F18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x82188bd0
	goto loc_82188BD0;
loc_82188F20:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c0
	goto loc_821892C0;
loc_82188F2C:
	// bge cr6,0x821892d4
	if (!ctx.cr6.lt) goto loc_821892D4;
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82188F40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r29.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82188F4C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82188F58:
	// bge cr6,0x821892c8
	if (!ctx.cr6.lt) goto loc_821892C8;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82188F68:
	// bl 0x8218f3f0
	ctx.lr = 0x82188F6C;
	sub_8218F3F0(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq cr6,0x821891f0
	if (ctx.cr6.eq) goto loc_821891F0;
	// bge cr6,0x821892c8
	if (!ctx.cr6.lt) goto loc_821892C8;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82188F84:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821892c8
	if (!ctx.cr6.eq) goto loc_821892C8;
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// b 0x821892c8
	goto loc_821892C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82188F9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82188fc0
	if (ctx.cr6.eq) goto loc_82188FC0;
	// bl 0x8218f348
	ctx.lr = 0x82188FB4;
	sub_8218F348(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82188FC0:
	// bl 0x8218f310
	ctx.lr = 0x82188FC4;
	sub_8218F310(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82188FD0:
	// bge cr6,0x82188fdc
	if (!ctx.cr6.lt) goto loc_82188FDC;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82188FDC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821892cc
	if (!ctx.cr6.eq) goto loc_821892CC;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892cc
	goto loc_821892CC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82189020
	if (!ctx.cr6.eq) goto loc_82189020;
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82189014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r29.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82189020:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189038
	if (ctx.cr6.eq) goto loc_82189038;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,21708(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21708);
	// bl 0x8219a610
	ctx.lr = 0x82189038;
	sub_8219A610(ctx, base);
loc_82189038:
	// lwz r11,21704(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x8218904c
	if (!ctx.cr6.eq) goto loc_8218904C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8218904C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189054;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,21704(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21704);
	// bl 0x8219ac28
	ctx.lr = 0x82189064;
	sub_8219AC28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218906C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// bl 0x82088600
	ctx.lr = 0x82189074;
	sub_82088600(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82189098
	if (ctx.cr6.eq) goto loc_82189098;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bctrl 
	ctx.lr = 0x82189098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82189098:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82088600
	ctx.lr = 0x821890A4;
	sub_82088600(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// std r29,21720(r24)
	PPC_STORE_U64(ctx.r24.u32 + 21720, ctx.r29.u64);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,21664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21664);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_821890E8:
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x821890e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821890E8;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// sth r29,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r29.u16);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,21700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 21700, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218913C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r29.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189150;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189178
	if (ctx.cr6.eq) goto loc_82189178;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189178
	if (ctx.cr6.eq) goto loc_82189178;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82189174;
	sub_82183E40(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82189178:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// b 0x82189294
	goto loc_82189294;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256658
	ctx.lr = 0x82189188;
	sub_82256658(ctx, base);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256658
	ctx.lr = 0x82189194;
	sub_82256658(ctx, base);
	// stw r23,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256658
	ctx.lr = 0x821891A0;
	sub_82256658(ctx, base);
	// stw r19,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r19.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256658
	ctx.lr = 0x821891AC;
	sub_82256658(ctx, base);
	// stw r20,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r20.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256658
	ctx.lr = 0x821891B8;
	sub_82256658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821891C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218924c
	if (ctx.cr6.eq) goto loc_8218924C;
	// bl 0x8218f4a8
	ctx.lr = 0x821891D4;
	sub_8218F4A8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8218924c
	if (ctx.cr6.gt) goto loc_8218924C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821891f8
	// bdzf 4*cr6+eq,0x821891f0
	// bne cr6,0x8218924c
	if (!ctx.cr6.eq) goto loc_8218924C;
loc_821891F0:
	// stw r19,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r19.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_821891F8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189218
	if (ctx.cr6.eq) goto loc_82189218;
	// bl 0x8218f380
	ctx.lr = 0x8218920C;
	sub_8218F380(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
loc_82189218:
	// bl 0x8218f3b8
	ctx.lr = 0x8218921C;
	sub_8218F3B8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189230;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8218f4a8
	ctx.lr = 0x8218923C;
	sub_8218F4A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8218924c
	if (ctx.cr6.eq) goto loc_8218924C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821892c8
	if (!ctx.cr6.eq) goto loc_821892C8;
loc_8218924C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x821892c8
	goto loc_821892C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189260;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189294
	if (ctx.cr6.eq) goto loc_82189294;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189294
	if (ctx.cr6.eq) goto loc_82189294;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82189290;
	sub_82183E40(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82189294:
	// lwz r11,21704(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21704);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821892a8
	if (!ctx.cr6.eq) goto loc_821892A8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821892A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821892B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,21700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 21700, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821892C0:
	// bl 0x8241dd3c
	ctx.lr = 0x821892C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_821892C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821892CC:
	// bl 0x8241dd3c
	ctx.lr = 0x821892D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_821892D4:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821892DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r29.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821892E8"))) PPC_WEAK_FUNC(sub_821892E8);
PPC_FUNC_IMPL(__imp__sub_821892E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lwz r30,21716(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218930C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r11,-5960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82189328
	if (!ctx.cr6.eq) goto loc_82189328;
	// bl 0x82188b08
	ctx.lr = 0x82189328;
	sub_82188B08(ctx, base);
loc_82189328:
	// lwz r31,21716(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189334;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82189354"))) PPC_WEAK_FUNC(sub_82189354);
PPC_FUNC_IMPL(__imp__sub_82189354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189358"))) PPC_WEAK_FUNC(sub_82189358);
PPC_FUNC_IMPL(__imp__sub_82189358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82189360;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,21704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21704);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82189394
	if (!ctx.cr6.eq) goto loc_82189394;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82189394:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218939C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// lwz r3,21704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21704);
	// bl 0x8219a998
	ctx.lr = 0x821893AC;
	sub_8219A998(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821893B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// lwz r11,21708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821893e4
	if (ctx.cr6.eq) goto loc_821893E4;
	// bl 0x82188968
	ctx.lr = 0x821893DC;
	sub_82188968(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821893e8
	if (!ctx.cr6.eq) goto loc_821893E8;
loc_821893E4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821893E8:
	// li r9,10
	ctx.r9.s64 = 10;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82189400:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82189400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82189400;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82189428
	if (ctx.cr6.eq) goto loc_82189428;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821847a8
	ctx.lr = 0x82189424;
	sub_821847A8(ctx, base);
	// b 0x82189438
	goto loc_82189438;
loc_82189428:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82189438:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// std r30,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,21664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21664);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lhz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// sth r4,4(r25)
	PPC_STORE_U16(ctx.r25.u32 + 4, ctx.r4.u16);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82189480;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218948C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8218949C"))) PPC_WEAK_FUNC(sub_8218949C);
PPC_FUNC_IMPL(__imp__sub_8218949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821894A0"))) PPC_WEAK_FUNC(sub_821894A0);
PPC_FUNC_IMPL(__imp__sub_821894A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821894A8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// bl 0x82198870
	ctx.lr = 0x821894C8;
	sub_82198870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82189358
	ctx.lr = 0x821894E0;
	sub_82189358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821894EC"))) PPC_WEAK_FUNC(sub_821894EC);
PPC_FUNC_IMPL(__imp__sub_821894EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821894F0"))) PPC_WEAK_FUNC(sub_821894F0);
PPC_FUNC_IMPL(__imp__sub_821894F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821894F8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,21712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	// bl 0x82198870
	ctx.lr = 0x82189518;
	sub_82198870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821832f0
	ctx.lr = 0x82189520;
	sub_821832F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82189358
	ctx.lr = 0x82189538;
	sub_82189358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82189544"))) PPC_WEAK_FUNC(sub_82189544);
PPC_FUNC_IMPL(__imp__sub_82189544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189548"))) PPC_WEAK_FUNC(sub_82189548);
PPC_FUNC_IMPL(__imp__sub_82189548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82189550;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,21704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82189570
	if (!ctx.cr6.eq) goto loc_82189570;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82189570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189578;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,21704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21704);
	// bl 0x8219ad78
	ctx.lr = 0x8218958C;
	sub_8219AD78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189598;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821895AC"))) PPC_WEAK_FUNC(sub_821895AC);
PPC_FUNC_IMPL(__imp__sub_821895AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821895B0"))) PPC_WEAK_FUNC(sub_821895B0);
PPC_FUNC_IMPL(__imp__sub_821895B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821895B8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821895C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r26,-32179
	ctx.r26.s64 = -2108882944;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r11,21704(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x821895ec
	if (!ctx.cr6.eq) goto loc_821895EC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_821895EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821895F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82189738
	if (ctx.cr6.eq) goto loc_82189738;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189738
	if (ctx.cr6.eq) goto loc_82189738;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82189638
	if (!ctx.cr6.eq) goto loc_82189638;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218961C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189628;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82189638:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821896f8
	if (ctx.cr6.eq) goto loc_821896F8;
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// lwz r11,21700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21700);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82189694
	if (!ctx.cr6.eq) goto loc_82189694;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189668
	if (ctx.cr6.eq) goto loc_82189668;
	// bl 0x8218f380
	ctx.lr = 0x82189660;
	sub_8218F380(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8218f310
	ctx.lr = 0x82189668;
	sub_8218F310(ctx, base);
loc_82189668:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218968c
	if (ctx.cr6.eq) goto loc_8218968C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218968c
	if (ctx.cr6.eq) goto loc_8218968C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82189688;
	sub_82183E40(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8218968C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,21700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21700, ctx.r30.u32);
loc_82189694:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821896A4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821896a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821896A4;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r3,21704(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21704);
	// bl 0x8219ac28
	ctx.lr = 0x821896F4;
	sub_8219AC28(ctx, base);
	// b 0x82189738
	goto loc_82189738;
loc_821896F8:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82189714
	if (!ctx.cr6.eq) goto loc_82189714;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82189734
	goto loc_82189734;
loc_82189714:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82189738
	if (!ctx.cr6.eq) goto loc_82189738;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,21636
	ctx.r10.s64 = ctx.r11.s64 + 21636;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82189738
	if (!ctx.cr6.eq) goto loc_82189738;
	// li r11,13
	ctx.r11.s64 = 13;
loc_82189734:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82189738:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189740;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218974C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218975C"))) PPC_WEAK_FUNC(sub_8218975C);
PPC_FUNC_IMPL(__imp__sub_8218975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189760"))) PPC_WEAK_FUNC(sub_82189760);
PPC_FUNC_IMPL(__imp__sub_82189760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82189768;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,21704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82189788
	if (!ctx.cr6.eq) goto loc_82189788;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82189788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189790;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,21704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21704);
	// bl 0x8219a890
	ctx.lr = 0x821897A0;
	sub_8219A890(ctx, base);
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lwz r11,21700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821897cc
	if (ctx.cr6.eq) goto loc_821897CC;
	// bl 0x8241dd3c
	ctx.lr = 0x821897BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821897CC:
	// bl 0x8241dd3c
	ctx.lr = 0x821897D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821897E0"))) PPC_WEAK_FUNC(sub_821897E0);
PPC_FUNC_IMPL(__imp__sub_821897E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821897E8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82183850
	ctx.lr = 0x821897F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82189810
	if (ctx.cr6.eq) goto loc_82189810;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x8218980C;
	sub_82183448(ctx, base);
	// b 0x82189818
	goto loc_82189818;
loc_82189810:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82189818;
	sub_821845A0(ctx, base);
loc_82189818:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218983c
	if (ctx.cr6.eq) goto loc_8218983C;
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// bl 0x82081590
	ctx.lr = 0x82189834;
	sub_82081590(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r31,21716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21716, ctx.r31.u32);
loc_8218983C:
	// bl 0x82183850
	ctx.lr = 0x82189840;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82189858
	if (ctx.cr6.eq) goto loc_82189858;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82189854;
	sub_82183448(ctx, base);
	// b 0x82189860
	goto loc_82189860;
loc_82189858:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82189860;
	sub_821845A0(ctx, base);
loc_82189860:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218987c
	if (ctx.cr6.eq) goto loc_8218987C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x82189874;
	sub_822AA648(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r31,21664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21664, ctx.r31.u32);
loc_8218987C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r11,21668
	ctx.r3.s64 = ctx.r11.s64 + 21668;
	// bl 0x8241dd4c
	ctx.lr = 0x8218988C;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821898cc
	if (ctx.cr6.eq) goto loc_821898CC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r31,r11,21636
	ctx.r31.s64 = ctx.r11.s64 + 21636;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821898AC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821898ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821898AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82189918
	goto loc_82189918;
loc_821898CC:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r31,r10,21636
	ctx.r31.s64 = ctx.r10.s64 + 21636;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82184710
	ctx.lr = 0x821898F4;
	sub_82184710(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82189918:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x8218992C;
	sub_82183078(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82189934;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218994c
	if (ctx.cr6.eq) goto loc_8218994C;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82183448
	ctx.lr = 0x82189948;
	sub_82183448(ctx, base);
	// b 0x82189954
	goto loc_82189954;
loc_8218994C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x82189954;
	sub_821845A0(ctx, base);
loc_82189954:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189970
	if (ctx.cr6.eq) goto loc_82189970;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82199930
	ctx.lr = 0x82189964;
	sub_82199930(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21712, ctx.r3.u32);
	// b 0x8218997c
	goto loc_8218997C;
loc_82189970:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,21712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21712, ctx.r29.u32);
loc_8218997C:
	// bl 0x82183850
	ctx.lr = 0x82189980;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82189998
	if (ctx.cr6.eq) goto loc_82189998;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82183448
	ctx.lr = 0x82189994;
	sub_82183448(ctx, base);
	// b 0x821899a0
	goto loc_821899A0;
loc_82189998:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x821899A0;
	sub_821845A0(ctx, base);
loc_821899A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821899cc
	if (ctx.cr6.eq) goto loc_821899CC;
	// bl 0x82183078
	ctx.lr = 0x821899B0;
	sub_82183078(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8219aa60
	ctx.lr = 0x821899C0;
	sub_8219AA60(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r3,21704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21704, ctx.r3.u32);
	// b 0x821899d8
	goto loc_821899D8;
loc_821899CC:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,21704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21704, ctx.r29.u32);
loc_821899D8:
	// lis r31,-32187
	ctx.r31.s64 = -2109407232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-5960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5960, ctx.r29.u32);
	// bl 0x82188788
	ctx.lr = 0x821899EC;
	sub_82188788(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-5960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5960, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821899FC"))) PPC_WEAK_FUNC(sub_821899FC);
PPC_FUNC_IMPL(__imp__sub_821899FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189A00"))) PPC_WEAK_FUNC(sub_82189A00);
PPC_FUNC_IMPL(__imp__sub_82189A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82189A08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,21636
	ctx.r11.s64 = ctx.r11.s64 + 21636;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82189a2c
	if (!ctx.cr6.eq) goto loc_82189A2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82183e40
	ctx.lr = 0x82189A2C;
	sub_82183E40(ctx, base);
loc_82189A2C:
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lwz r3,21712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189a50
	if (ctx.cr6.eq) goto loc_82189A50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82189A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82189A50:
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,21712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21712, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r31,21716(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21716);
	// stw r29,21716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21716, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82189aac
	if (ctx.cr6.eq) goto loc_82189AAC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189a88
	if (ctx.cr6.eq) goto loc_82189A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189A84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82189A88:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189a98
	if (ctx.cr6.eq) goto loc_82189A98;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82189A98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82189AA4;
	sub_82183E40(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,21716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21716, ctx.r29.u32);
loc_82189AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82189AB4"))) PPC_WEAK_FUNC(sub_82189AB4);
PPC_FUNC_IMPL(__imp__sub_82189AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189AB8"))) PPC_WEAK_FUNC(sub_82189AB8);
PPC_FUNC_IMPL(__imp__sub_82189AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82189AC0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// lwz r31,21716(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189AD4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r11,21708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// bne cr6,0x82189af8
	if (!ctx.cr6.eq) goto loc_82189AF8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82189AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82189B00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// bl 0x82188968
	ctx.lr = 0x82189B08;
	sub_82188968(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e6048
	ctx.lr = 0x82189B10;
	sub_822E6048(ctx, base);
	// lwz r3,21708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21708);
	// bl 0x82199f58
	ctx.lr = 0x82189B18;
	sub_82199F58(ctx, base);
	// bl 0x82188968
	ctx.lr = 0x82189B1C;
	sub_82188968(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e6048
	ctx.lr = 0x82189B24;
	sub_822E6048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189B2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lwz r31,21716(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82189B3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82189B48"))) PPC_WEAK_FUNC(sub_82189B48);
PPC_FUNC_IMPL(__imp__sub_82189B48) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82189B50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82189b50
	if (!ctx.cr6.eq) goto loc_82189B50;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82189B70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82189b70
	if (!ctx.cr6.eq) goto loc_82189B70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bne cr6,0x82189b9c
	if (!ctx.cr6.eq) goto loc_82189B9C;
loc_82189B94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82189B9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82189b94
	if (ctx.cr6.eq) goto loc_82189B94;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82189b94
	if (ctx.cr6.lt) goto loc_82189B94;
	// subf. r9,r8,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
loc_82189BBC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82189bf4
	if (!ctx.cr6.eq) goto loc_82189BF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82189BD0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82189c08
	if (!ctx.cr6.lt) goto loc_82189C08;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r11,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82189bf4
	if (!ctx.cr6.eq) goto loc_82189BF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82189bd0
	goto loc_82189BD0;
loc_82189BF4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82189bbc
	if (!ctx.cr6.lt) goto loc_82189BBC;
	// blr 
	return;
loc_82189C08:
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// subf r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82189C14"))) PPC_WEAK_FUNC(sub_82189C14);
PPC_FUNC_IMPL(__imp__sub_82189C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189C18"))) PPC_WEAK_FUNC(sub_82189C18);
PPC_FUNC_IMPL(__imp__sub_82189C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82189c5c
	if (ctx.cr6.eq) goto loc_82189C5C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82189C34:
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x82189c5c
	if (ctx.cr6.eq) goto loc_82189C5C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82189c5c
	if (ctx.cr6.eq) goto loc_82189C5C;
	// stbx r10,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x82189c34
	if (!ctx.cr6.eq) goto loc_82189C34;
loc_82189C5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
loc_82189C64:
	// lbzx r11,r8,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82189c7c
	if (ctx.cr6.eq) goto loc_82189C7C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x82189c84
	if (!ctx.cr6.eq) goto loc_82189C84;
loc_82189C7C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82189c64
	goto loc_82189C64;
loc_82189C84:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82189C8C"))) PPC_WEAK_FUNC(sub_82189C8C);
PPC_FUNC_IMPL(__imp__sub_82189C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189C90"))) PPC_WEAK_FUNC(sub_82189C90);
PPC_FUNC_IMPL(__imp__sub_82189C90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189cd4
	if (ctx.cr6.eq) goto loc_82189CD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82189cd4
	if (ctx.cr6.eq) goto loc_82189CD4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82189CA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82189ca4
	if (!ctx.cr6.eq) goto loc_82189CA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82189cd4
	if (ctx.cr6.eq) goto loc_82189CD4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82189CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82189CDC"))) PPC_WEAK_FUNC(sub_82189CDC);
PPC_FUNC_IMPL(__imp__sub_82189CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82189CE0"))) PPC_WEAK_FUNC(sub_82189CE0);
PPC_FUNC_IMPL(__imp__sub_82189CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
loc_82189D08:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
loc_82189D18:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82189d30
	if (ctx.cr6.eq) goto loc_82189D30;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82189d18
	if (!ctx.cr6.eq) goto loc_82189D18;
loc_82189D30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b1b0
	ctx.lr = 0x82189D44;
	sub_8224B1B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82189d64
	if (ctx.cr6.eq) goto loc_82189D64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b130
	ctx.lr = 0x82189D58;
	sub_8224B130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82189d68
	if (ctx.cr6.eq) goto loc_82189D68;
loc_82189D64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82189D68:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r9,r3,-46
	ctx.r9.s64 = ctx.r3.s64 + -46;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
loc_82189D84:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82189d94
	if (!ctx.cr6.eq) goto loc_82189D94;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82189de0
	if (ctx.cr6.eq) goto loc_82189DE0;
loc_82189D94:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b1b0
	ctx.lr = 0x82189DA0;
	sub_8224B1B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82189dc0
	if (ctx.cr6.eq) goto loc_82189DC0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b130
	ctx.lr = 0x82189DB4;
	sub_8224B130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82189dc4
	if (ctx.cr6.eq) goto loc_82189DC4;
loc_82189DC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82189DC4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r9,r3,-46
	ctx.r9.s64 = ctx.r3.s64 + -46;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x82189d84
	if (!ctx.cr6.eq) goto loc_82189D84;
loc_82189DE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82189fa4
	if (ctx.cr6.eq) goto loc_82189FA4;
	// bl 0x8224b118
	ctx.lr = 0x82189DEC;
	sub_8224B118(ctx, base);
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x82189fa4
	if (ctx.cr6.gt) goto loc_82189FA4;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25072
	ctx.r12.s64 = ctx.r12.s64 + -25072;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-24380(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24380);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24596(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24596);
	// lwz r16,-24644(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24644);
	// lwz r16,-24380(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24380);
	// lwz r16,-24380(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24380);
	// lwz r16,-24380(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24380);
	// lwz r16,-24976(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24976);
	// lwz r16,-24644(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24644);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24840(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24840);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24572(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24572);
	// lwz r16,-24308(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24308);
	// lwz r16,-24572(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24572);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24356(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24356);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24620);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24668);
	// lwz r16,-24332(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24332);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x82189E7C;
	sub_8224B118(ctx, base);
	// addi r11,r3,-99
	ctx.r11.s64 = ctx.r3.s64 + -99;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82189f94
	if (ctx.cr6.gt) goto loc_82189F94;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24928
	ctx.r12.s64 = ctx.r12.s64 + -24928;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-24596(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24596);
	// lwz r16,-24548(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24548);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24548(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24548);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24524(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24524);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24572(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24572);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24524(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24524);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24684(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24684);
	// lwz r16,-24524(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24524);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x82189F04;
	sub_8224B118(ctx, base);
	// addi r11,r3,-99
	ctx.r11.s64 = ctx.r3.s64 + -99;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82189f80
	if (ctx.cr6.gt) goto loc_82189F80;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24792
	ctx.r12.s64 = ctx.r12.s64 + -24792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-24476(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24476);
	// lwz r16,-24452(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24452);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24500(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24500);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24452(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24452);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24428(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24428);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24572(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24572);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24428(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24428);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24704(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24704);
	// lwz r16,-24428(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24428);
loc_82189F80:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x82189F8C;
	sub_8224B118(ctx, base);
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// beq cr6,0x8218a0ac
	if (ctx.cr6.eq) goto loc_8218A0AC;
loc_82189F94:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82189d08
	if (!ctx.cr6.eq) goto loc_82189D08;
loc_82189FA4:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
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
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
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
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8218A0AC:
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
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A124"))) PPC_WEAK_FUNC(sub_8218A124);
PPC_FUNC_IMPL(__imp__sub_8218A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A128"))) PPC_WEAK_FUNC(sub_8218A128);
PPC_FUNC_IMPL(__imp__sub_8218A128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218A130;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218a15c
	if (ctx.cr6.eq) goto loc_8218A15C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218a154
	if (!ctx.cr6.eq) goto loc_8218A154;
loc_8218A148:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218A154:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8218a168
	if (!ctx.cr6.eq) goto loc_8218A168;
loc_8218A15C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218A168:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218a15c
	if (ctx.cr6.eq) goto loc_8218A15C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8218A180:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218a180
	if (!ctx.cr6.eq) goto loc_8218A180;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8218a15c
	if (ctx.cr6.eq) goto loc_8218A15C;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8218a148
	if (!ctx.cr6.lt) goto loc_8218A148;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8218A1C0;
	sub_82248A40(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218A1D4"))) PPC_WEAK_FUNC(sub_8218A1D4);
PPC_FUNC_IMPL(__imp__sub_8218A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A1D8"))) PPC_WEAK_FUNC(sub_8218A1D8);
PPC_FUNC_IMPL(__imp__sub_8218A1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218a210
	if (ctx.cr6.eq) goto loc_8218A210;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218a208
	if (!ctx.cr6.eq) goto loc_8218A208;
loc_8218A200:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8218a270
	goto loc_8218A270;
loc_8218A208:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8218a218
	if (!ctx.cr6.eq) goto loc_8218A218;
loc_8218A210:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8218a270
	goto loc_8218A270;
loc_8218A218:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8218A21C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218a21c
	if (!ctx.cr6.eq) goto loc_8218A21C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8218a244
	if (!ctx.cr6.gt) goto loc_8218A244;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8218A244:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8218a200
	if (!ctx.cr6.lt) goto loc_8218A200;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8218A260;
	sub_82248A40(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8218A270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A288"))) PPC_WEAK_FUNC(sub_8218A288);
PPC_FUNC_IMPL(__imp__sub_8218A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218A290;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218a2c4
	if (ctx.cr6.eq) goto loc_8218A2C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218a2bc
	if (!ctx.cr6.eq) goto loc_8218A2BC;
loc_8218A2B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218A2BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8218a2d0
	if (!ctx.cr6.eq) goto loc_8218A2D0;
loc_8218A2C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218A2D0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218a2c4
	if (ctx.cr6.eq) goto loc_8218A2C4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8218A2E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218a2e0
	if (!ctx.cr6.eq) goto loc_8218A2E0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8218a2c4
	if (ctx.cr6.eq) goto loc_8218A2C4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82189c90
	ctx.lr = 0x8218A318;
	sub_82189C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218a354
	if (!ctx.cr6.eq) goto loc_8218A354;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8218a2b0
	if (!ctx.cr6.lt) goto loc_8218A2B0;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8218A348;
	sub_82248A40(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_8218A354:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218A35C"))) PPC_WEAK_FUNC(sub_8218A35C);
PPC_FUNC_IMPL(__imp__sub_8218A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A360"))) PPC_WEAK_FUNC(sub_8218A360);
PPC_FUNC_IMPL(__imp__sub_8218A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218a370
	if (!ctx.cr6.eq) goto loc_8218A370;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8218A370:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218a3bc
	if (ctx.cr6.eq) goto loc_8218A3BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8218a3b4
	if (!ctx.cr6.eq) goto loc_8218A3B4;
loc_8218A390:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218a3c4
	if (ctx.cr6.eq) goto loc_8218A3C4;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8218a390
	if (ctx.cr6.eq) goto loc_8218A390;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_8218A3B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x8218a3c0
	if (ctx.cr6.lt) goto loc_8218A3C0;
loc_8218A3BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218A3C0:
	// blr 
	return;
loc_8218A3C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A3CC"))) PPC_WEAK_FUNC(sub_8218A3CC);
PPC_FUNC_IMPL(__imp__sub_8218A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A3D0"))) PPC_WEAK_FUNC(sub_8218A3D0);
PPC_FUNC_IMPL(__imp__sub_8218A3D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218a3e0
	if (!ctx.cr6.eq) goto loc_8218A3E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8218A3E0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218a3f0
	if (!ctx.cr6.eq) goto loc_8218A3F0;
loc_8218A3E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8218A3F0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218a430
	if (ctx.cr6.eq) goto loc_8218A430;
loc_8218A3FC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8218a438
	if (!ctx.cr6.eq) goto loc_8218A438;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218a430
	if (ctx.cr6.eq) goto loc_8218A430;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8218a3fc
	if (ctx.cr6.lt) goto loc_8218A3FC;
loc_8218A430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218A438:
	// bge cr6,0x8218a3e8
	if (!ctx.cr6.lt) goto loc_8218A3E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A444"))) PPC_WEAK_FUNC(sub_8218A444);
PPC_FUNC_IMPL(__imp__sub_8218A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A448"))) PPC_WEAK_FUNC(sub_8218A448);
PPC_FUNC_IMPL(__imp__sub_8218A448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218a458
	if (!ctx.cr6.eq) goto loc_8218A458;
loc_8218A450:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8218A458:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218a4dc
	if (ctx.cr6.eq) goto loc_8218A4DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8218A468:
	// lbzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218a4e4
	if (ctx.cr6.eq) goto loc_8218A4E4;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8218a4dc
	if (ctx.cr6.eq) goto loc_8218A4DC;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8218a4a4
	if (ctx.cr6.lt) goto loc_8218A4A4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8218a4a4
	if (ctx.cr6.gt) goto loc_8218A4A4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_8218A4A4:
	// cmpwi cr6,r8,65
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 65, ctx.xer);
	// blt cr6,0x8218a4bc
	if (ctx.cr6.lt) goto loc_8218A4BC;
	// cmpwi cr6,r8,90
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 90, ctx.xer);
	// bgt cr6,0x8218a4bc
	if (ctx.cr6.gt) goto loc_8218A4BC;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_8218A4BC:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8218a450
	if (ctx.cr6.lt) goto loc_8218A450;
	// bgt cr6,0x8218a4dc
	if (ctx.cr6.gt) goto loc_8218A4DC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// blt cr6,0x8218a468
	if (ctx.cr6.lt) goto loc_8218A468;
loc_8218A4DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8218A4E4:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A4F4"))) PPC_WEAK_FUNC(sub_8218A4F4);
PPC_FUNC_IMPL(__imp__sub_8218A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A4F8"))) PPC_WEAK_FUNC(sub_8218A4F8);
PPC_FUNC_IMPL(__imp__sub_8218A4F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218a530
	if (ctx.cr6.eq) goto loc_8218A530;
loc_8218A504:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218a530
	if (ctx.cr6.eq) goto loc_8218A530;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8218a538
	if (ctx.cr6.eq) goto loc_8218A538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8218a504
	if (!ctx.cr6.eq) goto loc_8218A504;
loc_8218A530:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218A538:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A540"))) PPC_WEAK_FUNC(sub_8218A540);
PPC_FUNC_IMPL(__imp__sub_8218A540) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r3,15
	ctx.r9.s64 = ctx.r3.s64 + 15;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8218A568:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218a568
	if (!ctx.cr6.eq) goto loc_8218A568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A588"))) PPC_WEAK_FUNC(sub_8218A588);
PPC_FUNC_IMPL(__imp__sub_8218A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15
	ctx.r30.s64 = ctx.r3.s64 + 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218a5d4
	if (ctx.cr6.eq) goto loc_8218A5D4;
loc_8218A5AC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x8218A5B8;
	sub_8224B118(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218a5d4
	if (ctx.cr6.eq) goto loc_8218A5D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8218a5ac
	if (!ctx.cr6.eq) goto loc_8218A5AC;
loc_8218A5D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A5EC"))) PPC_WEAK_FUNC(sub_8218A5EC);
PPC_FUNC_IMPL(__imp__sub_8218A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A5F0"))) PPC_WEAK_FUNC(sub_8218A5F0);
PPC_FUNC_IMPL(__imp__sub_8218A5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218A5F8;
	sub_8224877C(ctx, base);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r5,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r5.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218a75c
	if (ctx.cr6.eq) goto loc_8218A75C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218a75c
	if (ctx.cr6.eq) goto loc_8218A75C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218a75c
	if (ctx.cr6.eq) goto loc_8218A75C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218a6a4
	if (ctx.cr6.eq) goto loc_8218A6A4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218a6a4
	if (ctx.cr6.eq) goto loc_8218A6A4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8218A658:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218a658
	if (!ctx.cr6.eq) goto loc_8218A658;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8218a6a4
	if (ctx.cr6.eq) goto loc_8218A6A4;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bge cr6,0x8218a6a4
	if (!ctx.cr6.lt) goto loc_8218A6A4;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248a40
	ctx.lr = 0x8218A698;
	sub_82248A40(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
loc_8218A6A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,1224
	ctx.r10.s64 = ctx.r1.s64 + 1224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82189ce0
	ctx.lr = 0x8218A6BC;
	sub_82189CE0(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x8218a7a4
	if (ctx.cr6.eq) goto loc_8218A7A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-11492
	ctx.r28.s64 = ctx.r11.s64 + -11492;
	// addi r27,r10,3708
	ctx.r27.s64 = ctx.r10.s64 + 3708;
loc_8218A6D8:
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8218a784
	if (ctx.cr6.gt) goto loc_8218A784;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22792
	ctx.r12.s64 = ctx.r12.s64 + -22792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22680(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22680);
	// lwz r16,-22732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22732);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224a7b8
	ctx.lr = 0x8218A740;
	sub_8224A7B8(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218a784
	if (!ctx.cr6.eq) goto loc_8218A784;
loc_8218A75C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487cc
	// ERROR 822487CC
	return;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224a7b8
	ctx.lr = 0x8218A774;
	sub_8224A7B8(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_8218A784:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8218a7a4
	if (ctx.cr6.eq) goto loc_8218A7A4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82189ce0
	ctx.lr = 0x8218A79C;
	sub_82189CE0(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x8218a6d8
	if (!ctx.cr6.eq) goto loc_8218A6D8;
loc_8218A7A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,1220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// addi r10,r1,1224
	ctx.r10.s64 = ctx.r1.s64 + 1224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224b060
	ctx.lr = 0x8218A7C0;
	sub_8224B060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x8218a75c
	if (!ctx.cr6.gt) goto loc_8218A75C;
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8218a75c
	if (!ctx.cr6.gt) goto loc_8218A75C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a128
	ctx.lr = 0x8218A7E4;
	sub_8218A128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8218A7F0"))) PPC_WEAK_FUNC(sub_8218A7F0);
PPC_FUNC_IMPL(__imp__sub_8218A7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82183e40
	sub_82183E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218A808"))) PPC_WEAK_FUNC(sub_8218A808);
PPC_FUNC_IMPL(__imp__sub_8218A808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A80C"))) PPC_WEAK_FUNC(sub_8218A80C);
PPC_FUNC_IMPL(__imp__sub_8218A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A810"))) PPC_WEAK_FUNC(sub_8218A810);
PPC_FUNC_IMPL(__imp__sub_8218A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// beq cr6,0x8218a854
	if (ctx.cr6.eq) goto loc_8218A854;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_8218A854:
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r3,11(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lbz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8218a994
	if (ctx.cr6.gt) goto loc_8218A994;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8218a994
	if (ctx.cr6.lt) goto loc_8218A994;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_8218A934:
	// ble cr6,0x8218a940
	if (!ctx.cr6.gt) goto loc_8218A940;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// b 0x8218a944
	goto loc_8218A944;
loc_8218A940:
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
loc_8218A944:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8218a994
	if (ctx.cr6.gt) goto loc_8218A994;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8218a934
	if (!ctx.cr6.eq) goto loc_8218A934;
	// blr 
	return;
loc_8218A994:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218A99C"))) PPC_WEAK_FUNC(sub_8218A99C);
PPC_FUNC_IMPL(__imp__sub_8218A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218A9A0"))) PPC_WEAK_FUNC(sub_8218A9A0);
PPC_FUNC_IMPL(__imp__sub_8218A9A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,65
	ctx.r10.s64 = 65;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218aa10
	if (!ctx.cr6.eq) goto loc_8218AA10;
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
loc_8218AA10:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218AA18"))) PPC_WEAK_FUNC(sub_8218AA18);
PPC_FUNC_IMPL(__imp__sub_8218AA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218a9a0
	ctx.lr = 0x8218AA38;
	sub_8218A9A0(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218AA54"))) PPC_WEAK_FUNC(sub_8218AA54);
PPC_FUNC_IMPL(__imp__sub_8218AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218AA58"))) PPC_WEAK_FUNC(sub_8218AA58);
PPC_FUNC_IMPL(__imp__sub_8218AA58) {
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
	// bne cr6,0x8218aaf8
	if (!ctx.cr6.eq) goto loc_8218AAF8;
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
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8218aaf8
	if (!ctx.cr6.lt) goto loc_8218AAF8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// blr 
	return;
loc_8218AAF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218AB00"))) PPC_WEAK_FUNC(sub_8218AB00);
PPC_FUNC_IMPL(__imp__sub_8218AB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bne cr6,0x8218abb0
	if (!ctx.cr6.eq) goto loc_8218ABB0;
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
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8218ab68
	if (ctx.cr6.lt) goto loc_8218AB68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218AB68:
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8218ABB0:
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218ABC0"))) PPC_WEAK_FUNC(sub_8218ABC0);
PPC_FUNC_IMPL(__imp__sub_8218ABC0) {
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
	// bne cr6,0x8218ac5c
	if (!ctx.cr6.eq) goto loc_8218AC5C;
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
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8218ac6c
	if (!ctx.cr6.lt) goto loc_8218AC6C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r8,19(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r6,17(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8218AC5C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8218ac6c
	if (!ctx.cr6.eq) goto loc_8218AC6C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_8218AC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218AC74"))) PPC_WEAK_FUNC(sub_8218AC74);
PPC_FUNC_IMPL(__imp__sub_8218AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218AC78"))) PPC_WEAK_FUNC(sub_8218AC78);
PPC_FUNC_IMPL(__imp__sub_8218AC78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8218AC90;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218acac
	if (!ctx.cr6.eq) goto loc_8218ACAC;
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
loc_8218ACAC:
	// li r10,66
	ctx.r10.s64 = 66;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,69
	ctx.r8.s64 = 69;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218ad14
	if (!ctx.cr6.eq) goto loc_8218AD14;
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_8218AD14:
	// li r9,90
	ctx.r9.s64 = 90;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r8,76
	ctx.r8.s64 = 76;
	// li r7,73
	ctx.r7.s64 = 73;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218ad74
	if (!ctx.cr6.eq) goto loc_8218AD74;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lbz r8,14(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_8218AD74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218abc0
	ctx.lr = 0x8218AD7C;
	sub_8218ABC0(ctx, base);
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

__attribute__((alias("__imp__sub_8218AD90"))) PPC_WEAK_FUNC(sub_8218AD90);
PPC_FUNC_IMPL(__imp__sub_8218AD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218AD98;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8218adbc
	if (!ctx.cr6.gt) goto loc_8218ADBC;
	// bl 0x8218ac78
	ctx.lr = 0x8218ADB4;
	sub_8218AC78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8218ADBC;
	sub_8218AC78(ctx, base);
loc_8218ADBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8218ADC4;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218add8
	if (!ctx.cr6.eq) goto loc_8218ADD8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218ADD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218abc0
	ctx.lr = 0x8218ADE0;
	sub_8218ABC0(ctx, base);
	// li r10,66
	ctx.r10.s64 = 66;
	// li r9,80
	ctx.r9.s64 = 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,69
	ctx.r8.s64 = 69;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218ae2c
	if (!ctx.cr6.eq) goto loc_8218AE2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b480
	ctx.lr = 0x8218AE20;
	sub_8219B480(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218AE2C:
	// li r9,90
	ctx.r9.s64 = 90;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r8,76
	ctx.r8.s64 = 76;
	// li r7,73
	ctx.r7.s64 = 73;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218ae7c
	if (!ctx.cr6.eq) goto loc_8218AE7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8218AE5C;
	sub_8218AC78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8219b2a0
	ctx.lr = 0x8218AE70;
	sub_8219B2A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218AE7C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82087ab0
	ctx.lr = 0x8218AE8C;
	sub_82087AB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218AE98"))) PPC_WEAK_FUNC(sub_8218AE98);
PPC_FUNC_IMPL(__imp__sub_8218AE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218AEA0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8218af18
	if (!ctx.cr6.eq) goto loc_8218AF18;
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
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8218af20
	if (ctx.cr6.lt) goto loc_8218AF20;
loc_8218AF0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218AF18:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8218af0c
	if (!ctx.cr6.eq) goto loc_8218AF0C;
loc_8218AF20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218ac78
	ctx.lr = 0x8218AF30;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218af7c
	if (ctx.cr6.eq) goto loc_8218AF7C;
	// bl 0x82183850
	ctx.lr = 0x8218AF40;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8218af58
	if (ctx.cr6.eq) goto loc_8218AF58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8218AF54;
	sub_82183448(ctx, base);
	// b 0x8218af64
	goto loc_8218AF64;
loc_8218AF58:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8218AF64;
	sub_821845A0(ctx, base);
loc_8218AF64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x8218AF7C;
	sub_8218AD90(ctx, base);
loc_8218AF7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218AF88"))) PPC_WEAK_FUNC(sub_8218AF88);
PPC_FUNC_IMPL(__imp__sub_8218AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218AF90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8218ae98
	ctx.lr = 0x8218AFA0;
	sub_8218AE98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218afec
	if (ctx.cr6.eq) goto loc_8218AFEC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8218AFB4;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218afec
	if (ctx.cr6.eq) goto loc_8218AFEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8218AFCC;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a9a0
	ctx.lr = 0x8218AFDC;
	sub_8218A9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218AFEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218AFF8"))) PPC_WEAK_FUNC(sub_8218AFF8);
PPC_FUNC_IMPL(__imp__sub_8218AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218B000;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8218a810
	ctx.lr = 0x8218B01C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218b038
	if (ctx.cr6.eq) goto loc_8218B038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8218B030;
	sub_8218AB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8218b03c
	goto loc_8218B03C;
loc_8218B038:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8218B03C:
	// li r10,66
	ctx.r10.s64 = 66;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,69
	ctx.r8.s64 = 69;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218b0f8
	if (!ctx.cr6.eq) goto loc_8218B0F8;
	// bl 0x8218a810
	ctx.lr = 0x8218B078;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218b094
	if (ctx.cr6.eq) goto loc_8218B094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8218B08C;
	sub_8218AC78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8218b098
	goto loc_8218B098;
loc_8218B094:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8218B098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x8218B0A4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218b0d8
	if (ctx.cr6.eq) goto loc_8218B0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x8218B0B8;
	sub_8218AE98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a9a0
	ctx.lr = 0x8218B0C8;
	sub_8218A9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218B0D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a9a0
	ctx.lr = 0x8218B0E8;
	sub_8218A9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218B0F8:
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,73
	ctx.r8.s64 = 73;
	// li r7,76
	ctx.r7.s64 = 76;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8218b154
	if (!ctx.cr6.eq) goto loc_8218B154;
	// bl 0x82082268
	ctx.lr = 0x8218B124;
	sub_82082268(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820822c0
	ctx.lr = 0x8218B134;
	sub_820822C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8218a9a0
	ctx.lr = 0x8218B144;
	sub_8218A9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218B154:
	// bl 0x820c0878
	ctx.lr = 0x8218B158;
	sub_820C0878(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a9a0
	ctx.lr = 0x8218B168;
	sub_8218A9A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218B178"))) PPC_WEAK_FUNC(sub_8218B178);
PPC_FUNC_IMPL(__imp__sub_8218B178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218B1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8218b1cc
	if (ctx.cr6.eq) goto loc_8218B1CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8218B1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218B1CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B1E0"))) PPC_WEAK_FUNC(sub_8218B1E0);
PPC_FUNC_IMPL(__imp__sub_8218B1E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82191e60
	sub_82191E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218B1E8"))) PPC_WEAK_FUNC(sub_8218B1E8);
PPC_FUNC_IMPL(__imp__sub_8218B1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11488
	ctx.r9.s64 = ctx.r10.s64 + -11488;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B208"))) PPC_WEAK_FUNC(sub_8218B208);
PPC_FUNC_IMPL(__imp__sub_8218B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191ee8
	ctx.lr = 0x8218B238;
	sub_82191EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218b250
	if (!ctx.cr6.eq) goto loc_8218B250;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82191df0
	ctx.lr = 0x8218B250;
	sub_82191DF0(ctx, base);
loc_8218B250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B268"))) PPC_WEAK_FUNC(sub_8218B268);
PPC_FUNC_IMPL(__imp__sub_8218B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218B270;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82191ee8
	ctx.lr = 0x8218B294;
	sub_82191EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218b2ac
	if (!ctx.cr6.eq) goto loc_8218B2AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82191df0
	ctx.lr = 0x8218B2AC;
	sub_82191DF0(ctx, base);
loc_8218B2AC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b2c8
	if (ctx.cr6.eq) goto loc_8218B2C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218B2C4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218B2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218B2D0"))) PPC_WEAK_FUNC(sub_8218B2D0);
PPC_FUNC_IMPL(__imp__sub_8218B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218B2D8;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218b3a4
	if (ctx.cr6.eq) goto loc_8218B3A4;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191ea0
	ctx.lr = 0x8218B2FC;
	sub_82191EA0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218b318
	if (!ctx.cr6.eq) goto loc_8218B318;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191f38
	ctx.lr = 0x8218B310;
	sub_82191F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218b324
	if (ctx.cr6.eq) goto loc_8218B324;
loc_8218B318:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191df0
	ctx.lr = 0x8218B324;
	sub_82191DF0(ctx, base);
loc_8218B324:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8218a128
	ctx.lr = 0x8218B334;
	sub_8218A128(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r10,r11,-20104
	ctx.r10.s64 = ctx.r11.s64 + -20104;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8218b36c
	if (ctx.cr6.eq) goto loc_8218B36C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821894f0
	ctx.lr = 0x8218B368;
	sub_821894F0(ctx, base);
	// b 0x8218b374
	goto loc_8218B374;
loc_8218B36C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// bl 0x821894a0
	ctx.lr = 0x8218B374;
	sub_821894A0(ctx, base);
loc_8218B374:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x821886e8
	ctx.lr = 0x8218B380;
	sub_821886E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218b398
	if (ctx.cr6.eq) goto loc_8218B398;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218B398:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8218B3A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218B3AC"))) PPC_WEAK_FUNC(sub_8218B3AC);
PPC_FUNC_IMPL(__imp__sub_8218B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B3B0"))) PPC_WEAK_FUNC(sub_8218B3B0);
PPC_FUNC_IMPL(__imp__sub_8218B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11488
	ctx.r9.s64 = ctx.r10.s64 + -11488;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// bl 0x8218b2d0
	ctx.lr = 0x8218B3EC;
	sub_8218B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_8218B404"))) PPC_WEAK_FUNC(sub_8218B404);
PPC_FUNC_IMPL(__imp__sub_8218B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B408"))) PPC_WEAK_FUNC(sub_8218B408);
PPC_FUNC_IMPL(__imp__sub_8218B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,21732
	ctx.r11.s64 = ctx.r11.s64 + 21732;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218b434
	if (ctx.cr6.eq) goto loc_8218B434;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8218b434
	if (!ctx.cr6.lt) goto loc_8218B434;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8218B434:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B440"))) PPC_WEAK_FUNC(sub_8218B440);
PPC_FUNC_IMPL(__imp__sub_8218B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,21732
	ctx.r10.s64 = ctx.r11.s64 + 21732;
	// stw r3,21732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21732, ctx.r3.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B454"))) PPC_WEAK_FUNC(sub_8218B454);
PPC_FUNC_IMPL(__imp__sub_8218B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B458"))) PPC_WEAK_FUNC(sub_8218B458);
PPC_FUNC_IMPL(__imp__sub_8218B458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-11332
	ctx.r9.s64 = ctx.r11.s64 + -11332;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8218b4d8
	if (ctx.cr6.eq) goto loc_8218B4D8;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b49c
	if (ctx.cr6.eq) goto loc_8218B49C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218B49C;
	sub_82183E40(ctx, base);
loc_8218B49C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b4b8
	if (ctx.cr6.eq) goto loc_8218B4B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218B4B8;
	sub_82183E40(ctx, base);
loc_8218B4B8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b4d0
	if (ctx.cr6.eq) goto loc_8218B4D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218B4D0;
	sub_82183E40(ctx, base);
loc_8218B4D0:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x8218b4f4
	goto loc_8218B4F4;
loc_8218B4D8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b4ec
	if (ctx.cr6.eq) goto loc_8218B4EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8218B4EC;
	sub_82183E40(ctx, base);
loc_8218B4EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8218B4F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b208
	ctx.lr = 0x8218B4FC;
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

__attribute__((alias("__imp__sub_8218B514"))) PPC_WEAK_FUNC(sub_8218B514);
PPC_FUNC_IMPL(__imp__sub_8218B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B518"))) PPC_WEAK_FUNC(sub_8218B518);
PPC_FUNC_IMPL(__imp__sub_8218B518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218B520;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-11312
	ctx.r10.s64 = ctx.r11.s64 + -11312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183850
	ctx.lr = 0x8218B540;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218b558
	if (ctx.cr6.eq) goto loc_8218B558;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8218B554;
	sub_82183448(ctx, base);
	// b 0x8218b560
	goto loc_8218B560;
loc_8218B558:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8218B560;
	sub_821845A0(ctx, base);
loc_8218B560:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b588
	if (ctx.cr6.eq) goto loc_8218B588;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82194e30
	ctx.lr = 0x8218B574;
	sub_82194E30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218B588:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218B59C"))) PPC_WEAK_FUNC(sub_8218B59C);
PPC_FUNC_IMPL(__imp__sub_8218B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B5A0"))) PPC_WEAK_FUNC(sub_8218B5A0);
PPC_FUNC_IMPL(__imp__sub_8218B5A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b5d0
	if (ctx.cr6.eq) goto loc_8218B5D0;
loc_8218B5B0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8218b5d8
	if (ctx.cr6.eq) goto loc_8218B5D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218b5b0
	if (!ctx.cr6.eq) goto loc_8218B5B0;
loc_8218B5D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8218B5D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B5E0"))) PPC_WEAK_FUNC(sub_8218B5E0);
PPC_FUNC_IMPL(__imp__sub_8218B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b624
	if (ctx.cr6.eq) goto loc_8218B624;
loc_8218B600:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8218b63c
	if (ctx.cr6.eq) goto loc_8218B63C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218b600
	if (!ctx.cr6.eq) goto loc_8218B600;
loc_8218B624:
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
loc_8218B63C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x821950f8
	ctx.lr = 0x8218B644;
	sub_821950F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218B65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8218B674"))) PPC_WEAK_FUNC(sub_8218B674);
PPC_FUNC_IMPL(__imp__sub_8218B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B678"))) PPC_WEAK_FUNC(sub_8218B678);
PPC_FUNC_IMPL(__imp__sub_8218B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218B680;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218b6d8
	if (ctx.cr6.eq) goto loc_8218B6D8;
loc_8218B698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x821950f8
	ctx.lr = 0x8218B6B0;
	sub_821950F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8218b6d0
	if (ctx.cr6.eq) goto loc_8218B6D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218B6D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218B6D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8218b698
	if (!ctx.cr6.eq) goto loc_8218B698;
loc_8218B6D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218B6E0"))) PPC_WEAK_FUNC(sub_8218B6E0);
PPC_FUNC_IMPL(__imp__sub_8218B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8218b780
	if (ctx.cr6.eq) goto loc_8218B780;
loc_8218B6F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8218b778
	if (!ctx.cr6.eq) goto loc_8218B778;
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8218b780
	if (ctx.cr6.eq) goto loc_8218B780;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8218b778
	if (!ctx.cr6.gt) goto loc_8218B778;
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8218B738:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8218b764
	if (!ctx.cr6.lt) goto loc_8218B764;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x8218b76c
	goto loc_8218B76C;
loc_8218B764:
	// ble cr6,0x8218b790
	if (!ctx.cr6.gt) goto loc_8218B790;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_8218B76C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8218b738
	if (ctx.cr6.lt) goto loc_8218B738;
loc_8218B778:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8218b6f8
	if (!ctx.cr6.eq) goto loc_8218B6F8;
loc_8218B780:
	// li r3,255
	ctx.r3.s64 = 255;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8218B790:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B7A0"))) PPC_WEAK_FUNC(sub_8218B7A0);
PPC_FUNC_IMPL(__imp__sub_8218B7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218B7A8;
	sub_8224878C(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218b840
	if (ctx.cr6.eq) goto loc_8218B840;
loc_8218B7B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8218b838
	if (!ctx.cr6.eq) goto loc_8218B838;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218b840
	if (ctx.cr6.eq) goto loc_8218B840;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8218b838
	if (!ctx.cr6.gt) goto loc_8218B838;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_8218B7F8:
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8218b824
	if (!ctx.cr6.lt) goto loc_8218B824;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x8218b82c
	goto loc_8218B82C;
loc_8218B824:
	// ble cr6,0x8218b848
	if (!ctx.cr6.gt) goto loc_8218B848;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_8218B82C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8218b7f8
	if (ctx.cr6.lt) goto loc_8218B7F8;
loc_8218B838:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8218b7b8
	if (!ctx.cr6.eq) goto loc_8218B7B8;
loc_8218B840:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218B848:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218B858"))) PPC_WEAK_FUNC(sub_8218B858);
PPC_FUNC_IMPL(__imp__sub_8218B858) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218b7a0
	sub_8218B7A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218B85C"))) PPC_WEAK_FUNC(sub_8218B85C);
PPC_FUNC_IMPL(__imp__sub_8218B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B860"))) PPC_WEAK_FUNC(sub_8218B860);
PPC_FUNC_IMPL(__imp__sub_8218B860) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 + 14;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lbz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r6,11(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r5,10(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r9.u16);
	// lbz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r8,15(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B91C"))) PPC_WEAK_FUNC(sub_8218B91C);
PPC_FUNC_IMPL(__imp__sub_8218B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B920"))) PPC_WEAK_FUNC(sub_8218B920);
PPC_FUNC_IMPL(__imp__sub_8218B920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218b458
	ctx.lr = 0x8218B940;
	sub_8218B458(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218b95c
	if (ctx.cr6.eq) goto loc_8218B95C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218B958;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218B95C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218B974"))) PPC_WEAK_FUNC(sub_8218B974);
PPC_FUNC_IMPL(__imp__sub_8218B974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218B978"))) PPC_WEAK_FUNC(sub_8218B978);
PPC_FUNC_IMPL(__imp__sub_8218B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8218B980;
	sub_82248750(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x8218B998;
	sub_82183078(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218B9A4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8218B9A8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r15,r11,27,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8218B9B4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8218B9BC;
	sub_821830F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x8218B9D0;
	sub_8218AA18(ctx, base);
	// lwz r10,68(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218bb3c
	if (!ctx.cr6.eq) goto loc_8218BB3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8218B9E4;
	sub_821830F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// bl 0x8218a810
	ctx.lr = 0x8218B9F0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218ba10
	if (ctx.cr6.eq) goto loc_8218BA10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ac78
	ctx.lr = 0x8218BA08;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8218ba14
	goto loc_8218BA14;
loc_8218BA10:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8218BA14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184710
	ctx.lr = 0x8218BA24;
	sub_82184710(ctx, base);
	// stw r3,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
	// bl 0x82183078
	ctx.lr = 0x8218BA2C;
	sub_82183078(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r4,r11,-11308
	ctx.r4.s64 = ctx.r11.s64 + -11308;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r28,20
	ctx.r5.s64 = ctx.r28.s64 + 20;
	// bl 0x8209eda0
	ctx.lr = 0x8218BA48;
	sub_8209EDA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// lwz r29,48(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x8218a810
	ctx.lr = 0x8218BA58;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218ba74
	if (ctx.cr6.eq) goto loc_8218BA74;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ad90
	ctx.lr = 0x8218BA74;
	sub_8218AD90(ctx, base);
loc_8218BA74:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stw r31,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8218badc
	if (ctx.cr6.eq) goto loc_8218BADC;
	// cmplwi cr6,r9,115
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 115, ctx.xer);
	// bne cr6,0x8218baf0
	if (!ctx.cr6.eq) goto loc_8218BAF0;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bne cr6,0x8218baf0
	if (!ctx.cr6.eq) goto loc_8218BAF0;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,98
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 98, ctx.xer);
	// bne cr6,0x8218baf0
	if (!ctx.cr6.eq) goto loc_8218BAF0;
loc_8218BADC:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// sth r30,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r30.u16);
loc_8218BAF0:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r9.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r11.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8218bf94
	if (!ctx.cr6.gt) goto loc_8218BF94;
loc_8218BB14:
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8218b860
	ctx.lr = 0x8218BB20;
	sub_8218B860(ctx, base);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218bb14
	if (ctx.cr6.lt) goto loc_8218BB14;
	// b 0x8218bf94
	goto loc_8218BF94;
loc_8218BB3C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// bl 0x8218a810
	ctx.lr = 0x8218BB48;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218bb68
	if (ctx.cr6.eq) goto loc_8218BB68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ac78
	ctx.lr = 0x8218BB60;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8218bb6c
	goto loc_8218BB6C;
loc_8218BB68:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8218BB6C:
	// bl 0x82183850
	ctx.lr = 0x8218BB70;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8218bb88
	if (ctx.cr6.eq) goto loc_8218BB88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8218BB84;
	sub_82183448(ctx, base);
	// b 0x8218bb94
	goto loc_8218BB94;
loc_8218BB88:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8218BB94;
	sub_821845A0(ctx, base);
loc_8218BB94:
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x8218BBA4;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218bbc0
	if (ctx.cr6.eq) goto loc_8218BBC0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ad90
	ctx.lr = 0x8218BBC0;
	sub_8218AD90(ctx, base);
loc_8218BBC0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x8218BBC8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218bbe4
	if (ctx.cr6.eq) goto loc_8218BBE4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x821956f0
	ctx.lr = 0x8218BBDC;
	sub_821956F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8218bbe8
	goto loc_8218BBE8;
loc_8218BBE4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8218BBE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x82195c68
	ctx.lr = 0x8218BBFC;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218bc54
	if (ctx.cr6.eq) goto loc_8218BC54;
loc_8218BC04:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8218bc24
	if (ctx.cr6.eq) goto loc_8218BC24;
	// bl 0x82195c68
	ctx.lr = 0x8218BC18;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218bc04
	if (!ctx.cr6.eq) goto loc_8218BC04;
	// b 0x8218bc54
	goto loc_8218BC54;
loc_8218BC24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-11372
	ctx.r4.s64 = ctx.r11.s64 + -11372;
	// bl 0x82195d10
	ctx.lr = 0x8218BC30;
	sub_82195D10(ctx, base);
	// bl 0x8224a688
	ctx.lr = 0x8218BC34;
	sub_8224A688(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r4,r10,-11392
	ctx.r4.s64 = ctx.r10.s64 + -11392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82195d10
	ctx.lr = 0x8218BC48;
	sub_82195D10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8224a688
	ctx.lr = 0x8218BC50;
	sub_8224A688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8218BC54:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8218BC5C;
	sub_821830F8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82080000
	ctx.lr = 0x8218BC64;
	sub_82080000(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r3,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r3.u32);
	// rlwinm r3,r19,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8218bc80
	if (!ctx.cr6.gt) goto loc_8218BC80;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8218BC80:
	// bl 0x82080d68
	ctx.lr = 0x8218BC84;
	sub_82080D68(ctx, base);
	// stw r3,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r3.u32);
	// add r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 + ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82080d68
	ctx.lr = 0x8218BC94;
	sub_82080D68(ctx, base);
	// stw r3,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x8218BCA4;
	sub_82184800(ctx, base);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// sth r30,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r30.u16);
	// lwz r8,72(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stw r19,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r19.u32);
	// lwz r7,76(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// bl 0x82195c68
	ctx.lr = 0x8218BCDC;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218bf3c
	if (ctx.cr6.eq) goto loc_8218BF3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r25,r11,-11380
	ctx.r25.s64 = ctx.r11.s64 + -11380;
	// addi r24,r10,-11440
	ctx.r24.s64 = ctx.r10.s64 + -11440;
	// addi r23,r9,-11432
	ctx.r23.s64 = ctx.r9.s64 + -11432;
	// addi r22,r8,-11424
	ctx.r22.s64 = ctx.r8.s64 + -11424;
	// addi r21,r7,-11412
	ctx.r21.s64 = ctx.r7.s64 + -11412;
	// addi r20,r6,-11404
	ctx.r20.s64 = ctx.r6.s64 + -11404;
loc_8218BD18:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8218bf28
	if (ctx.cr6.eq) goto loc_8218BF28;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8218bed4
	if (ctx.cr6.eq) goto loc_8218BED4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8218bf2c
	if (!ctx.cr6.eq) goto loc_8218BF2C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8218BD3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218bd60
	if (ctx.cr6.eq) goto loc_8218BD60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218bd3c
	if (ctx.cr6.eq) goto loc_8218BD3C;
loc_8218BD60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218bd80
	if (!ctx.cr6.eq) goto loc_8218BD80;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8218BD70;
	sub_8224A688(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BD80:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8218BD88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218bdac
	if (ctx.cr6.eq) goto loc_8218BDAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218bd88
	if (ctx.cr6.eq) goto loc_8218BD88;
loc_8218BDAC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218bdcc
	if (!ctx.cr6.eq) goto loc_8218BDCC;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8218BDBC;
	sub_8224A688(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r3,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r3.u16);
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BDCC:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8218BDD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218bdf8
	if (ctx.cr6.eq) goto loc_8218BDF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218bdd4
	if (ctx.cr6.eq) goto loc_8218BDD4;
loc_8218BDF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218be18
	if (!ctx.cr6.eq) goto loc_8218BE18;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8218BE08;
	sub_8224A688(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r3,14(r9)
	PPC_STORE_U16(ctx.r9.u32 + 14, ctx.r3.u16);
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BE18:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8218BE20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218be44
	if (ctx.cr6.eq) goto loc_8218BE44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218be20
	if (ctx.cr6.eq) goto loc_8218BE20;
loc_8218BE44:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218be64
	if (!ctx.cr6.eq) goto loc_8218BE64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8218BE54;
	sub_8224A688(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BE64:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8218BE6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218be90
	if (ctx.cr6.eq) goto loc_8218BE90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218be6c
	if (ctx.cr6.eq) goto loc_8218BE6C;
loc_8218BE90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218bf2c
	if (!ctx.cr6.eq) goto loc_8218BF2C;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add r3,r27,r10
	ctx.r3.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821847a8
	ctx.lr = 0x8218BEB4;
	sub_821847A8(ctx, base);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BED4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8218BEDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8218bf00
	if (ctx.cr6.eq) goto loc_8218BF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218bedc
	if (ctx.cr6.eq) goto loc_8218BEDC;
loc_8218BF00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8218bf2c
	if (!ctx.cr6.eq) goto loc_8218BF2C;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r18,r19
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8218bf2c
	if (!ctx.cr6.lt) goto loc_8218BF2C;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x8218bf2c
	goto loc_8218BF2C;
loc_8218BF28:
	// lwz r26,12(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_8218BF2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82195c68
	ctx.lr = 0x8218BF34;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218bd18
	if (!ctx.cr6.eq) goto loc_8218BD18;
loc_8218BF3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821954c0
	ctx.lr = 0x8218BF44;
	sub_821954C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218bf60
	if (ctx.cr6.eq) goto loc_8218BF60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82195630
	ctx.lr = 0x8218BF54;
	sub_82195630(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218BF60;
	sub_82183E40(ctx, base);
loc_8218BF60:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8218bf74
	if (ctx.cr6.eq) goto loc_8218BF74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218BF74;
	sub_82183E40(ctx, base);
loc_8218BF74:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218bf8c
	if (ctx.cr6.eq) goto loc_8218BF8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218BF8C;
	sub_82183E40(ctx, base);
loc_8218BF8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
loc_8218BF94:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x8218BF9C;
	sub_8218A7F0(ctx, base);
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// blt cr6,0x8218bfb0
	if (ctx.cr6.lt) goto loc_8218BFB0;
	// bne cr6,0x8218bfb8
	if (!ctx.cr6.eq) goto loc_8218BFB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8218bfb4
	goto loc_8218BFB4;
loc_8218BFB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8218BFB4:
	// bl 0x821830f8
	ctx.lr = 0x8218BFB8;
	sub_821830F8(ctx, base);
loc_8218BFB8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218BFC0;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218BFCC"))) PPC_WEAK_FUNC(sub_8218BFCC);
PPC_FUNC_IMPL(__imp__sub_8218BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218BFD0"))) PPC_WEAK_FUNC(sub_8218BFD0);
PPC_FUNC_IMPL(__imp__sub_8218BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218BFD8;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x8218BFEC;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218BFF8;
	sub_821837D0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218c158
	if (!ctx.cr6.eq) goto loc_8218C158;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// bl 0x8218a810
	ctx.lr = 0x8218C010;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218c030
	if (ctx.cr6.eq) goto loc_8218C030;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8218C028;
	sub_8218AC78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8218c034
	goto loc_8218C034;
loc_8218C030:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8218C034:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82184710
	ctx.lr = 0x8218C044;
	sub_82184710(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x82183078
	ctx.lr = 0x8218C04C;
	sub_82183078(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r11,-11308
	ctx.r4.s64 = ctx.r11.s64 + -11308;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// bl 0x8209eda0
	ctx.lr = 0x8218C068;
	sub_8209EDA0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8218a810
	ctx.lr = 0x8218C078;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8218c094
	if (ctx.cr6.eq) goto loc_8218C094;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218ad90
	ctx.lr = 0x8218C094;
	sub_8218AD90(ctx, base);
loc_8218C094:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8218c0fc
	if (ctx.cr6.eq) goto loc_8218C0FC;
	// cmplwi cr6,r9,115
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 115, ctx.xer);
	// bne cr6,0x8218c110
	if (!ctx.cr6.eq) goto loc_8218C110;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bne cr6,0x8218c110
	if (!ctx.cr6.eq) goto loc_8218C110;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,98
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 98, ctx.xer);
	// bne cr6,0x8218c110
	if (!ctx.cr6.eq) goto loc_8218C110;
loc_8218C0FC:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// sth r30,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r30.u16);
loc_8218C110:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8218c158
	if (!ctx.cr6.gt) goto loc_8218C158;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8218C134:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8218b860
	ctx.lr = 0x8218C140;
	sub_8218B860(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218c134
	if (ctx.cr6.lt) goto loc_8218C134;
loc_8218C158:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218C160;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8218C168"))) PPC_WEAK_FUNC(sub_8218C168);
PPC_FUNC_IMPL(__imp__sub_8218C168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-11312
	ctx.r10.s64 = ctx.r11.s64 + -11312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b678
	ctx.lr = 0x8218C18C;
	sub_8218B678(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218c1c8
	if (ctx.cr6.eq) goto loc_8218C1C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218C1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
loc_8218C1C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C1E4"))) PPC_WEAK_FUNC(sub_8218C1E4);
PPC_FUNC_IMPL(__imp__sub_8218C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C1E8"))) PPC_WEAK_FUNC(sub_8218C1E8);
PPC_FUNC_IMPL(__imp__sub_8218C1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218c168
	ctx.lr = 0x8218C208;
	sub_8218C168(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c224
	if (ctx.cr6.eq) goto loc_8218C224;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218C220;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218C224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C23C"))) PPC_WEAK_FUNC(sub_8218C23C);
PPC_FUNC_IMPL(__imp__sub_8218C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C240"))) PPC_WEAK_FUNC(sub_8218C240);
PPC_FUNC_IMPL(__imp__sub_8218C240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218C248;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x8218C264;
	sub_8218B1E8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-11332
	ctx.r8.s64 = ctx.r10.s64 + -11332;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,21740(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21740);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r10,21740(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21740);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21740(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21740, ctx.r10.u32);
	// sth r28,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r28.u16);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8218bfd0
	ctx.lr = 0x8218C2B8;
	sub_8218BFD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218C2C4"))) PPC_WEAK_FUNC(sub_8218C2C4);
PPC_FUNC_IMPL(__imp__sub_8218C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C2C8"))) PPC_WEAK_FUNC(sub_8218C2C8);
PPC_FUNC_IMPL(__imp__sub_8218C2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218C2D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x8218C2E8;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218C2F4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8218C2F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218c310
	if (ctx.cr6.eq) goto loc_8218C310;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82183448
	ctx.lr = 0x8218C30C;
	sub_82183448(ctx, base);
	// b 0x8218c318
	goto loc_8218C318;
loc_8218C310:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8218C318;
	sub_821845A0(ctx, base);
loc_8218C318:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218c33c
	if (ctx.cr6.eq) goto loc_8218C33C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218c240
	ctx.lr = 0x8218C334;
	sub_8218C240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8218c340
	goto loc_8218C340;
loc_8218C33C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8218C340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82195098
	ctx.lr = 0x8218C34C;
	sub_82195098(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8218C358;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218C364"))) PPC_WEAK_FUNC(sub_8218C364);
PPC_FUNC_IMPL(__imp__sub_8218C364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C368"))) PPC_WEAK_FUNC(sub_8218C368);
PPC_FUNC_IMPL(__imp__sub_8218C368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c380
	if (!ctx.cr6.eq) goto loc_8218C380;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8218C380:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8218c390
	if (!ctx.cr6.lt) goto loc_8218C390;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8218C390:
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// blt cr6,0x8218c3f8
	if (ctx.cr6.lt) goto loc_8218C3F8;
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// bge cr6,0x8218c3ac
	if (!ctx.cr6.lt) goto loc_8218C3AC;
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8218c3d0
	goto loc_8218C3D0;
loc_8218C3AC:
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bge cr6,0x8218c3c0
	if (!ctx.cr6.lt) goto loc_8218C3C0;
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8218c3d0
	goto loc_8218C3D0;
loc_8218C3C0:
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bge cr6,0x8218c3f8
	if (!ctx.cr6.lt) goto loc_8218C3F8;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8218C3D0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8218C3D4:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r8,r11,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x8218c3f8
	if (!ctx.cr6.eq) goto loc_8218C3F8;
	// rlwimi r11,r3,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne 0x8218c3d4
	if (!ctx.cr0.eq) goto loc_8218C3D4;
	// blr 
	return;
loc_8218C3F8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C400"))) PPC_WEAK_FUNC(sub_8218C400);
PPC_FUNC_IMPL(__imp__sub_8218C400) {
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
	// bl 0x8218c368
	ctx.lr = 0x8218C410;
	sub_8218C368(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C42C"))) PPC_WEAK_FUNC(sub_8218C42C);
PPC_FUNC_IMPL(__imp__sub_8218C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C430"))) PPC_WEAK_FUNC(sub_8218C430);
PPC_FUNC_IMPL(__imp__sub_8218C430) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8218C44C:
	// lhzu r10,2(r11)
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218c44c
	if (!ctx.cr6.eq) goto loc_8218C44C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C460"))) PPC_WEAK_FUNC(sub_8218C460);
PPC_FUNC_IMPL(__imp__sub_8218C460) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218c4a8
	if (ctx.cr6.eq) goto loc_8218C4A8;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// addi r9,r9,-5920
	ctx.r9.s64 = ctx.r9.s64 + -5920;
loc_8218C480:
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8218c4b0
	if (ctx.cr6.eq) goto loc_8218C4B0;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8218c480
	if (!ctx.cr6.eq) goto loc_8218C480;
loc_8218C4A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8218C4B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C4B8"))) PPC_WEAK_FUNC(sub_8218C4B8);
PPC_FUNC_IMPL(__imp__sub_8218C4B8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218c518
	if (ctx.cr6.eq) goto loc_8218C518;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lis r7,512
	ctx.r7.s64 = 33554432;
	// addi r8,r8,-5920
	ctx.r8.s64 = ctx.r8.s64 + -5920;
loc_8218C4E8:
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x8218c518
	if (ctx.cr6.eq) goto loc_8218C518;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8218c4e8
	if (!ctx.cr6.eq) goto loc_8218C4E8;
	// blr 
	return;
loc_8218C518:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C520"))) PPC_WEAK_FUNC(sub_8218C520);
PPC_FUNC_IMPL(__imp__sub_8218C520) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8218c584
	if (ctx.cr6.eq) goto loc_8218C584;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// addi r7,r7,-5920
	ctx.r7.s64 = ctx.r7.s64 + -5920;
loc_8218C550:
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x8218c584
	if (ctx.cr6.eq) goto loc_8218C584;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8218c550
	if (!ctx.cr6.eq) goto loc_8218C550;
loc_8218C584:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C58C"))) PPC_WEAK_FUNC(sub_8218C58C);
PPC_FUNC_IMPL(__imp__sub_8218C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C590"))) PPC_WEAK_FUNC(sub_8218C590);
PPC_FUNC_IMPL(__imp__sub_8218C590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218C598;
	sub_82248788(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218c5b0
	if (!ctx.cr6.eq) goto loc_8218C5B0;
loc_8218C5A8:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218C5B0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218c5a8
	if (ctx.cr6.eq) goto loc_8218C5A8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c690
	if (ctx.cr6.eq) goto loc_8218C690;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,-5920
	ctx.r30.s64 = ctx.r9.s64 + -5920;
loc_8218C5D4:
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8218c690
	if (ctx.cr6.gt) goto loc_8218C690;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8218c6a0
	if (ctx.cr6.gt) goto loc_8218C6A0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c674
	if (ctx.cr6.eq) goto loc_8218C674;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8218c674
	if (ctx.cr6.lt) goto loc_8218C674;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// blt cr6,0x8218c670
	if (ctx.cr6.lt) goto loc_8218C670;
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// bge cr6,0x8218c624
	if (!ctx.cr6.lt) goto loc_8218C624;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8218c648
	goto loc_8218C648;
loc_8218C624:
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bge cr6,0x8218c638
	if (!ctx.cr6.lt) goto loc_8218C638;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x8218c648
	goto loc_8218C648;
loc_8218C638:
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bge cr6,0x8218c670
	if (!ctx.cr6.lt) goto loc_8218C670;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8218C648:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_8218C64C:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rlwinm r28,r10,0,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// bne cr6,0x8218c670
	if (!ctx.cr6.eq) goto loc_8218C670;
	// rlwimi r10,r11,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8218c64c
	if (!ctx.cr0.eq) goto loc_8218C64C;
	// b 0x8218c674
	goto loc_8218C674;
loc_8218C670:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8218C674:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lbzux r11,r3,r7
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c5d4
	if (!ctx.cr6.eq) goto loc_8218C5D4;
loc_8218C690:
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8218c6a0
	if (!ctx.cr6.lt) goto loc_8218C6A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
loc_8218C6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218C6A8"))) PPC_WEAK_FUNC(sub_8218C6A8);
PPC_FUNC_IMPL(__imp__sub_8218C6A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8218c728
	if (ctx.cr6.gt) goto loc_8218C728;
	// mullw r11,r10,r5
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8218c728
	if (ctx.cr6.lt) goto loc_8218C728;
	// srawi r3,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 1;
	// mullw r11,r3,r5
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_8218C6F0:
	// ble cr6,0x8218c6fc
	if (!ctx.cr6.gt) goto loc_8218C6FC;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// b 0x8218c700
	goto loc_8218C700;
loc_8218C6FC:
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
loc_8218C700:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8218c728
	if (ctx.cr6.gt) goto loc_8218C728;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mullw r7,r3,r5
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r6,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218c6f0
	if (!ctx.cr6.eq) goto loc_8218C6F0;
	// blr 
	return;
loc_8218C728:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C730"))) PPC_WEAK_FUNC(sub_8218C730);
PPC_FUNC_IMPL(__imp__sub_8218C730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8218C738;
	sub_82248770(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
loc_8218C76C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,256
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 256, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// lbzx r11,r24,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c76c
	if (!ctx.cr6.eq) goto loc_8218C76C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
loc_8218C79C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,256
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 256, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// lbzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c79c
	if (!ctx.cr6.eq) goto loc_8218C79C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// cmplwi cr6,r28,255
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 255, ctx.xer);
	// bgt cr6,0x8218c8cc
	if (ctx.cr6.gt) goto loc_8218C8CC;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
loc_8218C7D4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,256
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 256, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// lbzx r11,r26,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218c7d4
	if (!ctx.cr6.eq) goto loc_8218C7D4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8218c8cc
	if (ctx.cr6.eq) goto loc_8218C8CC;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 255, ctx.xer);
	// bgt cr6,0x8218c8cc
	if (ctx.cr6.gt) goto loc_8218C8CC;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x8218C80C;
	sub_82248A40(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248f70
	ctx.lr = 0x8218C81C;
	sub_82248F70(ctx, base);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8218c8c0
	if (ctx.cr6.eq) goto loc_8218C8C0;
loc_8218C82C:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218c8a4
	if (!ctx.cr6.eq) goto loc_8218C8A4;
	// subf r11,r31,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r31.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8218c8a4
	if (ctx.cr6.lt) goto loc_8218C8A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248a40
	ctx.lr = 0x8218C860;
	sub_82248A40(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r22,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r22.u8);
	// bl 0x8218a360
	ctx.lr = 0x8218C874;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218c8a4
	if (!ctx.cr6.eq) goto loc_8218C8A4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x8218C88C;
	sub_82248A40(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8218c8b4
	if (!ctx.cr6.eq) goto loc_8218C8B4;
loc_8218C8A4:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8218C8B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8218c82c
	if (ctx.cr6.lt) goto loc_8218C82C;
loc_8218C8C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8218C8CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8218C8D8"))) PPC_WEAK_FUNC(sub_8218C8D8);
PPC_FUNC_IMPL(__imp__sub_8218C8D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C8E0"))) PPC_WEAK_FUNC(sub_8218C8E0);
PPC_FUNC_IMPL(__imp__sub_8218C8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218c900
	if (ctx.cr6.eq) goto loc_8218C900;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8218C900:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C908"))) PPC_WEAK_FUNC(sub_8218C908);
PPC_FUNC_IMPL(__imp__sub_8218C908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,21744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21744);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218c958
	if (ctx.cr6.eq) goto loc_8218C958;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218c958
	if (ctx.cr6.eq) goto loc_8218C958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218C954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,21744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21744);
loc_8218C958:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,21744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21744);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C980"))) PPC_WEAK_FUNC(sub_8218C980);
PPC_FUNC_IMPL(__imp__sub_8218C980) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,21744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21744, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218C99C"))) PPC_WEAK_FUNC(sub_8218C99C);
PPC_FUNC_IMPL(__imp__sub_8218C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218C9A0"))) PPC_WEAK_FUNC(sub_8218C9A0);
PPC_FUNC_IMPL(__imp__sub_8218C9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,21744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21744, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218c9e0
	if (ctx.cr6.eq) goto loc_8218C9E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218C9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218C9E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218ca08
	if (ctx.cr6.eq) goto loc_8218CA08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218CA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218CA08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218CA1C"))) PPC_WEAK_FUNC(sub_8218CA1C);
PPC_FUNC_IMPL(__imp__sub_8218CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218CA20"))) PPC_WEAK_FUNC(sub_8218CA20);
PPC_FUNC_IMPL(__imp__sub_8218CA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218ca48
	if (ctx.cr6.eq) goto loc_8218CA48;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218ca48
	if (ctx.cr6.eq) goto loc_8218CA48;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
loc_8218CA48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218CA50"))) PPC_WEAK_FUNC(sub_8218CA50);
PPC_FUNC_IMPL(__imp__sub_8218CA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218CA58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-32179
	ctx.r28.s64 = -2108882944;
	// addi r10,r11,-11228
	ctx.r10.s64 = ctx.r11.s64 + -11228;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r30.u64);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// std r30,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r30.u64);
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218caa8
	if (ctx.cr6.eq) goto loc_8218CAA8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8218caac
	goto loc_8218CAAC;
loc_8218CAA8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8218CAAC:
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// li r6,32
	ctx.r6.s64 = 32;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// addi r5,r11,-11248
	ctx.r5.s64 = ctx.r11.s64 + -11248;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// li r4,32
	ctx.r4.s64 = 32;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a1d8
	ctx.lr = 0x8218CAD8;
	sub_8218A1D8(ctx, base);
	// stb r30,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r30.u8);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218cb04
	if (ctx.cr6.eq) goto loc_8218CB04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218CB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
loc_8218CB04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8218cb20
	if (ctx.cr6.eq) goto loc_8218CB20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218cb20
	if (ctx.cr6.eq) goto loc_8218CB20;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8218CB20:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218CB30"))) PPC_WEAK_FUNC(sub_8218CB30);
PPC_FUNC_IMPL(__imp__sub_8218CB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218CB38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r28,-32179
	ctx.r28.s64 = -2108882944;
	// addi r10,r11,-11228
	ctx.r10.s64 = ctx.r11.s64 + -11228;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r30.u64);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// std r30,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r30.u64);
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218cb88
	if (ctx.cr6.eq) goto loc_8218CB88;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8218cb8c
	goto loc_8218CB8C;
loc_8218CB88:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8218CB8C:
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// li r6,32
	ctx.r6.s64 = 32;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// li r4,32
	ctx.r4.s64 = 32;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// bne cr6,0x8218cbbc
	if (!ctx.cr6.eq) goto loc_8218CBBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-11248
	ctx.r5.s64 = ctx.r11.s64 + -11248;
loc_8218CBBC:
	// bl 0x8218a1d8
	ctx.lr = 0x8218CBC0;
	sub_8218A1D8(ctx, base);
	// stb r30,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r30.u8);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218cbec
	if (ctx.cr6.eq) goto loc_8218CBEC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218CBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,21744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21744);
loc_8218CBEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8218cc08
	if (ctx.cr6.eq) goto loc_8218CC08;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218cc08
	if (ctx.cr6.eq) goto loc_8218CC08;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8218CC08:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218CC18"))) PPC_WEAK_FUNC(sub_8218CC18);
PPC_FUNC_IMPL(__imp__sub_8218CC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r11,-11228
	ctx.r9.s64 = ctx.r11.s64 + -11228;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,21744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21744);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218cc50
	if (ctx.cr6.eq) goto loc_8218CC50;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8218CC50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218CC5C"))) PPC_WEAK_FUNC(sub_8218CC5C);
PPC_FUNC_IMPL(__imp__sub_8218CC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218CC60"))) PPC_WEAK_FUNC(sub_8218CC60);
PPC_FUNC_IMPL(__imp__sub_8218CC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r11,-11228
	ctx.r9.s64 = ctx.r11.s64 + -11228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,21744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218ccb4
	if (ctx.cr6.eq) goto loc_8218CCB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218ccb4
	if (!ctx.cr6.eq) goto loc_8218CCB4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218ccac
	if (ctx.cr6.eq) goto loc_8218CCAC;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8218CCAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8218CCB4:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218ccd0
	if (ctx.cr6.eq) goto loc_8218CCD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218CCCC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218CCD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218CCE4"))) PPC_WEAK_FUNC(sub_8218CCE4);
PPC_FUNC_IMPL(__imp__sub_8218CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218CCE8"))) PPC_WEAK_FUNC(sub_8218CCE8);
PPC_FUNC_IMPL(__imp__sub_8218CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r11,21748
	ctx.r3.s64 = ctx.r11.s64 + 21748;
	// b 0x8241dd4c
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8218CCF8"))) PPC_WEAK_FUNC(sub_8218CCF8);
PPC_FUNC_IMPL(__imp__sub_8218CCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218CD00;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218cd7c
	if (!ctx.cr6.gt) goto loc_8218CD7C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8218CD24:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8218cd3c
	if (!ctx.cr6.eq) goto loc_8218CD3C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8218CD3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218CD44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8219b7c0
	ctx.lr = 0x8218CD54;
	sub_8219B7C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8218cd88
	if (!ctx.cr6.eq) goto loc_8218CD88;
	// bl 0x8241dd3c
	ctx.lr = 0x8218CD64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218cd24
	if (ctx.cr6.lt) goto loc_8218CD24;
loc_8218CD7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218CD88:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,404(r9)
	PPC_STORE_U32(ctx.r9.u32 + 404, ctx.r26.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r30,r10,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218CDA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218CDB4"))) PPC_WEAK_FUNC(sub_8218CDB4);
PPC_FUNC_IMPL(__imp__sub_8218CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218CDB8"))) PPC_WEAK_FUNC(sub_8218CDB8);
PPC_FUNC_IMPL(__imp__sub_8218CDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218CDC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218ce3c
	if (!ctx.cr6.gt) goto loc_8218CE3C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8218CDE4:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8218cdfc
	if (!ctx.cr6.eq) goto loc_8218CDFC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8218CDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218CE04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8218ce48
	if (ctx.cr6.eq) goto loc_8218CE48;
	// bl 0x8241dd3c
	ctx.lr = 0x8218CE24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218cde4
	if (ctx.cr6.lt) goto loc_8218CDE4;
loc_8218CE3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218CE48:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 388, ctx.r9.u32);
	// lwz r7,52(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwzx r30,r10,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218CE68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218CE78"))) PPC_WEAK_FUNC(sub_8218CE78);
PPC_FUNC_IMPL(__imp__sub_8218CE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218CE80;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8218ccf8
	ctx.lr = 0x8218CE94;
	sub_8218CCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8218cea8
	if (!ctx.cr6.eq) goto loc_8218CEA8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218CEA8:
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218CEB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218ced0
	if (ctx.cr6.eq) goto loc_8218CED0;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
loc_8218CED0:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218cee0
	if (ctx.cr6.eq) goto loc_8218CEE0;
	// oris r5,r5,16384
	ctx.r5.u64 = ctx.r5.u64 | 1073741824;
loc_8218CEE0:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218cefc
	if (ctx.cr6.eq) goto loc_8218CEFC;
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x8218cf00
	goto loc_8218CF00;
loc_8218CEFC:
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
loc_8218CF00:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b8e8
	ctx.lr = 0x8218CF10;
	sub_8219B8E8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8218cf40
	if (ctx.cr6.eq) goto loc_8218CF40;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8219b6c8
	ctx.lr = 0x8218CF24;
	sub_8219B6C8(ctx, base);
loc_8218CF24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218CF2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218CF40:
	// bl 0x8219b978
	ctx.lr = 0x8218CF44;
	sub_8219B978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8218cf24
	if (!ctx.cr6.eq) goto loc_8218CF24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b830
	ctx.lr = 0x8218CF54;
	sub_8219B830(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218CF5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218CF70"))) PPC_WEAK_FUNC(sub_8218CF70);
PPC_FUNC_IMPL(__imp__sub_8218CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218CF78;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8218cfa0
	if (!ctx.cr6.eq) goto loc_8218CFA0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8218CFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218CFA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218cfd4
	if (!ctx.cr6.eq) goto loc_8218CFD4;
loc_8218CFBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218CFC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218CFD4:
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219ba78
	ctx.lr = 0x8218CFE8;
	sub_8219BA78(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8218d000
	if (ctx.cr6.eq) goto loc_8218D000;
	// li r4,257
	ctx.r4.s64 = 257;
	// bl 0x8219b6c8
	ctx.lr = 0x8218CFFC;
	sub_8219B6C8(ctx, base);
	// b 0x8218d00c
	goto loc_8218D00C;
loc_8218D000:
	// bl 0x8219bae0
	ctx.lr = 0x8218D004;
	sub_8219BAE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218cfbc
	if (ctx.cr6.eq) goto loc_8218CFBC;
loc_8218D00C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D014;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218D024"))) PPC_WEAK_FUNC(sub_8218D024);
PPC_FUNC_IMPL(__imp__sub_8218D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D028"))) PPC_WEAK_FUNC(sub_8218D028);
PPC_FUNC_IMPL(__imp__sub_8218D028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218D030;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8218d050
	if (!ctx.cr6.eq) goto loc_8218D050;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8218D050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D058;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8218d088
	if (ctx.cr6.eq) goto loc_8218D088;
	// li r4,258
	ctx.r4.s64 = 258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219b6c8
	ctx.lr = 0x8218D074;
	sub_8219B6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D07C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218D088:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218d09c
	if (ctx.cr6.eq) goto loc_8218D09C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219bd40
	ctx.lr = 0x8218D09C;
	sub_8219BD40(ctx, base);
loc_8218D09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219b830
	ctx.lr = 0x8218D0A4;
	sub_8219B830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D0AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218D0B8"))) PPC_WEAK_FUNC(sub_8218D0B8);
PPC_FUNC_IMPL(__imp__sub_8218D0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8218D0C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8218d0e4
	if (!ctx.cr6.eq) goto loc_8218D0E4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8218D0E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D0EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8218d114
	if (ctx.cr6.eq) goto loc_8218D114;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8218d138
	if (!ctx.cr6.eq) goto loc_8218D138;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8218d12c
	if (ctx.cr6.eq) goto loc_8218D12C;
	// stw r29,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r29.u32);
loc_8218D114:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218D118:
	// bl 0x8241dd3c
	ctx.lr = 0x8218D11C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218D12C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219bcb8
	ctx.lr = 0x8218D134;
	sub_8219BCB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8218D138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D140;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// beq cr6,0x8218d18c
	if (ctx.cr6.eq) goto loc_8218D18C;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_8218D150:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088610
	ctx.lr = 0x8218D15C;
	sub_82088610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D164;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8218d118
	if (ctx.cr6.eq) goto loc_8218D118;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8218d118
	if (ctx.cr6.eq) goto loc_8218D118;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D184;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// b 0x8218d150
	goto loc_8218D150;
loc_8218D18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218D198"))) PPC_WEAK_FUNC(sub_8218D198);
PPC_FUNC_IMPL(__imp__sub_8218D198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218D1A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d1cc
	if (!ctx.cr6.eq) goto loc_8218D1CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8218D1CC:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D1D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
	// beq cr6,0x8218d1fc
	if (ctx.cr6.eq) goto loc_8218D1FC;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
loc_8218D1FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D204;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218D218"))) PPC_WEAK_FUNC(sub_8218D218);
PPC_FUNC_IMPL(__imp__sub_8218D218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218D220;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d240
	if (!ctx.cr6.eq) goto loc_8218D240;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218D240:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D24C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218D264;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218D274"))) PPC_WEAK_FUNC(sub_8218D274);
PPC_FUNC_IMPL(__imp__sub_8218D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D278"))) PPC_WEAK_FUNC(sub_8218D278);
PPC_FUNC_IMPL(__imp__sub_8218D278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218D280;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d2a4
	if (!ctx.cr6.eq) goto loc_8218D2A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8218D2A4:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D2B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// beq cr6,0x8218d2c8
	if (ctx.cr6.eq) goto loc_8218D2C8;
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8218D2C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,324(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// bl 0x8241dd3c
	ctx.lr = 0x8218D2D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218D2E8"))) PPC_WEAK_FUNC(sub_8218D2E8);
PPC_FUNC_IMPL(__imp__sub_8218D2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218D2F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8218d310
	if (!ctx.cr6.eq) goto loc_8218D310;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8218D310:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D318;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8218d388
	if (!ctx.cr6.eq) goto loc_8218D388;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218d388
	if (ctx.cr6.eq) goto loc_8218D388;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8218d35c
	if (!ctx.cr6.eq) goto loc_8218D35C;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8218d35c
	if (!ctx.cr6.eq) goto loc_8218D35C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b830
	ctx.lr = 0x8218D35C;
	sub_8219B830(ctx, base);
loc_8218D35C:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x8218d370
	if (!ctx.cr6.eq) goto loc_8218D370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b830
	ctx.lr = 0x8218D370;
	sub_8219B830(ctx, base);
loc_8218D370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D378;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218D388:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D390;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218D3A0"))) PPC_WEAK_FUNC(sub_8218D3A0);
PPC_FUNC_IMPL(__imp__sub_8218D3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218d3cc
	if (!ctx.cr6.eq) goto loc_8218D3CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8218d3f8
	goto loc_8218D3F8;
loc_8218D3CC:
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D3D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r30,396(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x8241dd3c
	ctx.lr = 0x8218D3EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8218D3F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218D410"))) PPC_WEAK_FUNC(sub_8218D410);
PPC_FUNC_IMPL(__imp__sub_8218D410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218D418;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8218D430:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82088610
	ctx.lr = 0x8218D43C;
	sub_82088610(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218cdb8
	ctx.lr = 0x8218D444;
	sub_8218CDB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218d430
	if (ctx.cr6.eq) goto loc_8218D430;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218D45C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8218d4cc
	if (ctx.cr6.eq) goto loc_8218D4CC;
	// cmpwi cr6,r11,257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 257, ctx.xer);
	// beq cr6,0x8218d4a8
	if (ctx.cr6.eq) goto loc_8218D4A8;
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x8218d508
	if (!ctx.cr6.eq) goto loc_8218D508;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218d490
	if (ctx.cr6.eq) goto loc_8218D490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219bd40
	ctx.lr = 0x8218D490;
	sub_8219BD40(ctx, base);
loc_8218D490:
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218D4A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// b 0x8218d430
	goto loc_8218D430;
loc_8218D4A8:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d500
	if (!ctx.cr6.eq) goto loc_8218D500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219bb80
	ctx.lr = 0x8218D4BC;
	sub_8219BB80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D4C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// b 0x8218d430
	goto loc_8218D430;
loc_8218D4CC:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218d500
	if (!ctx.cr6.eq) goto loc_8218D500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b978
	ctx.lr = 0x8218D4E0;
	sub_8219B978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8218d500
	if (ctx.cr6.eq) goto loc_8218D500;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8218D4F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// b 0x8218d430
	goto loc_8218D430;
loc_8218D500:
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
loc_8218D508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D510;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// b 0x8218d430
	goto loc_8218D430;
}

__attribute__((alias("__imp__sub_8218D518"))) PPC_WEAK_FUNC(sub_8218D518);
PPC_FUNC_IMPL(__imp__sub_8218D518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218D520;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,29192
	ctx.r10.s64 = ctx.r11.s64 + 29192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,21776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21776, ctx.r28.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8218d5a8
	if (!ctx.cr6.gt) goto loc_8218D5A8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8218D55C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218d58c
	if (ctx.cr6.eq) goto loc_8218D58C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218d58c
	if (ctx.cr6.eq) goto loc_8218D58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218D58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218D58C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8218d55c
	if (ctx.cr6.lt) goto loc_8218D55C;
loc_8218D5A8:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218d5bc
	if (ctx.cr6.eq) goto loc_8218D5BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218D5BC;
	sub_82183E40(ctx, base);
loc_8218D5BC:
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218d5dc
	if (ctx.cr6.eq) goto loc_8218D5DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218D5D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_8218D5DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218d5ec
	if (ctx.cr6.eq) goto loc_8218D5EC;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_8218D5EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218dd78
	ctx.lr = 0x8218D5F4;
	sub_8218DD78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218D5FC"))) PPC_WEAK_FUNC(sub_8218D5FC);
PPC_FUNC_IMPL(__imp__sub_8218D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D600"))) PPC_WEAK_FUNC(sub_8218D600);
PPC_FUNC_IMPL(__imp__sub_8218D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218D608;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218e200
	ctx.lr = 0x8218D614;
	sub_8218E200(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// bl 0x82081590
	ctx.lr = 0x8218D628;
	sub_82081590(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// addi r9,r11,29192
	ctx.r9.s64 = ctx.r11.s64 + 29192;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x8218D644;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8218d65c
	if (ctx.cr6.eq) goto loc_8218D65C;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82183448
	ctx.lr = 0x8218D658;
	sub_82183448(ctx, base);
	// b 0x8218d664
	goto loc_8218D664;
loc_8218D65C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x821845a0
	ctx.lr = 0x8218D664;
	sub_821845A0(ctx, base);
loc_8218D664:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218d6d0
	if (!ctx.cr6.gt) goto loc_8218D6D0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8218D67C:
	// bl 0x82183850
	ctx.lr = 0x8218D680;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8218d698
	if (ctx.cr6.eq) goto loc_8218D698;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82183448
	ctx.lr = 0x8218D694;
	sub_82183448(ctx, base);
	// b 0x8218d6a0
	goto loc_8218D6A0;
loc_8218D698:
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x821845a0
	ctx.lr = 0x8218D6A0;
	sub_821845A0(ctx, base);
loc_8218D6A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218d6b0
	if (ctx.cr6.eq) goto loc_8218D6B0;
	// bl 0x8219bd98
	ctx.lr = 0x8218D6AC;
	sub_8219BD98(ctx, base);
	// b 0x8218d6b4
	goto loc_8218D6B4;
loc_8218D6B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8218D6B4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8218d67c
	if (ctx.cr6.lt) goto loc_8218D67C;
loc_8218D6D0:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// ori r4,r4,4096
	ctx.r4.u64 = ctx.r4.u64 | 4096;
	// bl 0x822aa648
	ctx.lr = 0x8218D6E0;
	sub_822AA648(ctx, base);
	// lwsync 
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,21776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21776, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218D6F8"))) PPC_WEAK_FUNC(sub_8218D6F8);
PPC_FUNC_IMPL(__imp__sub_8218D6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d518
	ctx.lr = 0x8218D718;
	sub_8218D518(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218d734
	if (ctx.cr6.eq) goto loc_8218D734;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8218D730;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218D734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218D74C"))) PPC_WEAK_FUNC(sub_8218D74C);
PPC_FUNC_IMPL(__imp__sub_8218D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D750"))) PPC_WEAK_FUNC(sub_8218D750);
PPC_FUNC_IMPL(__imp__sub_8218D750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218D764"))) PPC_WEAK_FUNC(sub_8218D764);
PPC_FUNC_IMPL(__imp__sub_8218D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D768"))) PPC_WEAK_FUNC(sub_8218D768);
PPC_FUNC_IMPL(__imp__sub_8218D768) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8218D780"))) PPC_WEAK_FUNC(sub_8218D780);
PPC_FUNC_IMPL(__imp__sub_8218D780) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8218D798"))) PPC_WEAK_FUNC(sub_8218D798);
PPC_FUNC_IMPL(__imp__sub_8218D798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8218D7A0;
	sub_8224877C(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x8218e200
	ctx.lr = 0x8218D7C8;
	sub_8218E200(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r8,r10,29252
	ctx.r8.s64 = ctx.r10.s64 + 29252;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r29,r7,29244
	ctx.r29.s64 = ctx.r7.s64 + 29244;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r5,r6,29220
	ctx.r5.s64 = ctx.r6.s64 + 29220;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8218D81C;
	sub_82248910(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8218D830;
	sub_820882B8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,29196
	ctx.r5.s64 = ctx.r5.s64 + 29196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8218D84C;
	sub_82248910(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8218D860;
	sub_820882B8(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8218d880
	if (ctx.cr6.eq) goto loc_8218D880;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8218D880:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8218D888"))) PPC_WEAK_FUNC(sub_8218D888);
PPC_FUNC_IMPL(__imp__sub_8218D888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218D898"))) PPC_WEAK_FUNC(sub_8218D898);
PPC_FUNC_IMPL(__imp__sub_8218D898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8218D8A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r9,r11,29256
	ctx.r9.s64 = ctx.r11.s64 + 29256;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8218d8ec
	if (!ctx.cr6.gt) goto loc_8218D8EC;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8218D8EC:
	// bl 0x82183850
	ctx.lr = 0x8218D8F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8218d908
	if (ctx.cr6.eq) goto loc_8218D908;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x8218D904;
	sub_82183448(ctx, base);
	// b 0x8218d914
	goto loc_8218D914;
loc_8218D908:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8218D914;
	sub_821845A0(ctx, base);
loc_8218D914:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8218d938
	if (ctx.cr6.eq) goto loc_8218D938;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8218D928:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8218d928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218D928;
loc_8218D938:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,21780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21780, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8218D94C"))) PPC_WEAK_FUNC(sub_8218D94C);
PPC_FUNC_IMPL(__imp__sub_8218D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8218D950"))) PPC_WEAK_FUNC(sub_8218D950);
PPC_FUNC_IMPL(__imp__sub_8218D950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,29256
	ctx.r9.s64 = ctx.r11.s64 + 29256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8218d998
	if (!ctx.cr6.gt) goto loc_8218D998;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8218D98C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8218d98c
	if (ctx.cr6.lt) goto loc_8218D98C;
loc_8218D998:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218d9ac
	if (ctx.cr6.eq) goto loc_8218D9AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8218D9AC;
	sub_82183E40(ctx, base);
loc_8218D9AC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218D9C8"))) PPC_WEAK_FUNC(sub_8218D9C8);
PPC_FUNC_IMPL(__imp__sub_8218D9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8218D9D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218da28
	if (!ctx.cr6.gt) goto loc_8218DA28;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8218D9EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218da14
	if (ctx.cr6.eq) goto loc_8218DA14;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218da14
	if (!ctx.cr6.eq) goto loc_8218DA14;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82088758
	ctx.lr = 0x8218DA14;
	sub_82088758(ctx, base);
loc_8218DA14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218d9ec
	if (ctx.cr6.lt) goto loc_8218D9EC;
loc_8218DA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218DA30"))) PPC_WEAK_FUNC(sub_8218DA30);
PPC_FUNC_IMPL(__imp__sub_8218DA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8218DA38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8218dad0
	if (!ctx.cr6.gt) goto loc_8218DAD0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8218DA58:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218dabc
	if (ctx.cr6.eq) goto loc_8218DABC;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218daa8
	if (ctx.cr6.eq) goto loc_8218DAA8;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218da90
	if (ctx.cr6.eq) goto loc_8218DA90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218DA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218DA90:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82185500
	ctx.lr = 0x8218DA98;
	sub_82185500(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8218dabc
	goto loc_8218DABC;
loc_8218DAA8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x820882b0
	ctx.lr = 0x8218DAB4;
	sub_820882B0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82257118
	ctx.lr = 0x8218DABC;
	sub_82257118(ctx, base);
loc_8218DABC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218da58
	if (ctx.cr6.lt) goto loc_8218DA58;
loc_8218DAD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

