#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820D9878"))) PPC_WEAK_FUNC(sub_820D9878);
PPC_FUNC_IMPL(__imp__sub_820D9878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820d9968
	if (ctx.cr6.eq) goto loc_820D9968;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820d9968
	if (ctx.cr6.gt) goto loc_820D9968;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d98c0
	// bdzf 4*cr6+eq,0x820d98dc
	// bne cr6,0x820d9934
	if (!ctx.cr6.eq) goto loc_820D9934;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820d9964
	goto loc_820D9964;
loc_820D98C0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820d9968
	if (!ctx.cr6.eq) goto loc_820D9968;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820d9964
	goto loc_820D9964;
loc_820D98DC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820D98EC;
	sub_8209C630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f2688
	ctx.lr = 0x820D98F4;
	sub_820F2688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x820D990C;
	sub_820F2640(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820D9928;
	sub_820F28E0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x820d9968
	goto loc_820D9968;
loc_820D9934:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820D9944;
	sub_8209C630(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d9968
	if (!ctx.cr6.gt) goto loc_820D9968;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9968
	if (ctx.cr6.eq) goto loc_820D9968;
	// li r11,4
	ctx.r11.s64 = 4;
loc_820D9964:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D9968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9980"))) PPC_WEAK_FUNC(sub_820D9980);
PPC_FUNC_IMPL(__imp__sub_820D9980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r9,r11,16060
	ctx.r9.s64 = ctx.r11.s64 + 16060;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D99B0"))) PPC_WEAK_FUNC(sub_820D99B0);
PPC_FUNC_IMPL(__imp__sub_820D99B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x820abc70
	ctx.lr = 0x820D99D0;
	sub_820ABC70(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d99e0
	if (!ctx.cr6.eq) goto loc_820D99E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D99E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D99F4"))) PPC_WEAK_FUNC(sub_820D99F4);
PPC_FUNC_IMPL(__imp__sub_820D99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D99F8"))) PPC_WEAK_FUNC(sub_820D99F8);
PPC_FUNC_IMPL(__imp__sub_820D99F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9A0C"))) PPC_WEAK_FUNC(sub_820D9A0C);
PPC_FUNC_IMPL(__imp__sub_820D9A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9A10"))) PPC_WEAK_FUNC(sub_820D9A10);
PPC_FUNC_IMPL(__imp__sub_820D9A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D9A18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820d9a38
	if (!ctx.cr6.lt) goto loc_820D9A38;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820D9A38:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4952, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820d9b04
	if (ctx.cr6.gt) goto loc_820D9B04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9a90
	if (ctx.cr6.eq) goto loc_820D9A90;
	// bdz 0x820d9a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D9A6C;
	// bdz 0x820d9ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D9AC8;
	// b 0x820d9af8
	goto loc_820D9AF8;
loc_820D9A6C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r29,-8732(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8732);
	// bl 0x8215bec8
	ctx.lr = 0x820D9A78;
	sub_8215BEC8(ctx, base);
	// stb r29,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r29.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820D9A80;
	sub_8215BEC8(ctx, base);
	// stb r30,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9A90:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d9aac
	if (ctx.cr6.eq) goto loc_820D9AAC;
	// bl 0x82127b28
	ctx.lr = 0x820D9AA4;
	sub_82127B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9b04
	if (ctx.cr6.eq) goto loc_820D9B04;
loc_820D9AAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9ae8
	if (ctx.cr6.eq) goto loc_820D9AE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9AC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820d9ae4
	if (!ctx.cr6.gt) goto loc_820D9AE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9AE4:
	// bne cr6,0x820d9b04
	if (!ctx.cr6.eq) goto loc_820D9B04;
loc_820D9AE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9AF8:
	// bl 0x820cb1d8
	ctx.lr = 0x820D9AFC;
	sub_820CB1D8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D9B04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D9B0C"))) PPC_WEAK_FUNC(sub_820D9B0C);
PPC_FUNC_IMPL(__imp__sub_820D9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9B10"))) PPC_WEAK_FUNC(sub_820D9B10);
PPC_FUNC_IMPL(__imp__sub_820D9B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,16084
	ctx.r9.s64 = ctx.r11.s64 + 16084;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9B48"))) PPC_WEAK_FUNC(sub_820D9B48);
PPC_FUNC_IMPL(__imp__sub_820D9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820d9b60
	if (!ctx.cr6.lt) goto loc_820D9B60;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820D9B60:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4952, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d9b7c
	if (ctx.cr6.lt) goto loc_820D9B7C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820D9B7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9B88"))) PPC_WEAK_FUNC(sub_820D9B88);
PPC_FUNC_IMPL(__imp__sub_820D9B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,16108
	ctx.r9.s64 = ctx.r11.s64 + 16108;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9BA8"))) PPC_WEAK_FUNC(sub_820D9BA8);
PPC_FUNC_IMPL(__imp__sub_820D9BA8) {
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
	// bl 0x82181040
	ctx.lr = 0x820D9BB8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d9bdc
	if (ctx.cr6.eq) goto loc_820D9BDC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820d9bdc
	if (ctx.cr6.eq) goto loc_820D9BDC;
	// bl 0x82181040
	ctx.lr = 0x820D9BD4;
	sub_82181040(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82181370
	ctx.lr = 0x820D9BDC;
	sub_82181370(ctx, base);
loc_820D9BDC:
	// bl 0x8208f830
	ctx.lr = 0x820D9BE0;
	sub_8208F830(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8208f758
	ctx.lr = 0x820D9BF4;
	sub_8208F758(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// bl 0x821aa180
	ctx.lr = 0x820D9C04;
	sub_821AA180(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820d9c20
	if (!ctx.cr6.lt) goto loc_820D9C20;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820D9C20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9C30"))) PPC_WEAK_FUNC(sub_820D9C30);
PPC_FUNC_IMPL(__imp__sub_820D9C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x820d9ba8
	ctx.lr = 0x820D9C50;
	sub_820D9BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9c68
	if (ctx.cr6.eq) goto loc_820D9C68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4568
	ctx.lr = 0x820D9C60;
	sub_820D4568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D9C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9C7C"))) PPC_WEAK_FUNC(sub_820D9C7C);
PPC_FUNC_IMPL(__imp__sub_820D9C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9C80"))) PPC_WEAK_FUNC(sub_820D9C80);
PPC_FUNC_IMPL(__imp__sub_820D9C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bne cr6,0x820d9cbc
	if (!ctx.cr6.eq) goto loc_820D9CBC;
	// bl 0x820d9ba8
	ctx.lr = 0x820D9CA4;
	sub_820D9BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9cbc
	if (ctx.cr6.eq) goto loc_820D9CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4568
	ctx.lr = 0x820D9CB4;
	sub_820D4568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D9CBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9CD0"))) PPC_WEAK_FUNC(sub_820D9CD0);
PPC_FUNC_IMPL(__imp__sub_820D9CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,16132
	ctx.r9.s64 = ctx.r11.s64 + 16132;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9D04"))) PPC_WEAK_FUNC(sub_820D9D04);
PPC_FUNC_IMPL(__imp__sub_820D9D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D08"))) PPC_WEAK_FUNC(sub_820D9D08);
PPC_FUNC_IMPL(__imp__sub_820D9D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9D24"))) PPC_WEAK_FUNC(sub_820D9D24);
PPC_FUNC_IMPL(__imp__sub_820D9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9D28"))) PPC_WEAK_FUNC(sub_820D9D28);
PPC_FUNC_IMPL(__imp__sub_820D9D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D9D30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x820D9D44;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d9e18
	if (!ctx.cr6.eq) goto loc_820D9E18;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9e18
	if (ctx.cr6.eq) goto loc_820D9E18;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r29,-2084(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x8215bd08
	ctx.lr = 0x820D9D68;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x820D9D6C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9dac
	if (ctx.cr6.eq) goto loc_820D9DAC;
	// bl 0x8222e080
	ctx.lr = 0x820D9D78;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9dac
	if (ctx.cr6.eq) goto loc_820D9DAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,300(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820d9dac
	if (ctx.cr6.lt) goto loc_820D9DAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820d9dac
	if (!ctx.cr6.eq) goto loc_820D9DAC;
	// li r3,10180
	ctx.r3.s64 = 10180;
	// bl 0x8208f658
	ctx.lr = 0x820D9DA8;
	sub_8208F658(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_820D9DAC:
	// bl 0x8215bd08
	ctx.lr = 0x820D9DB0;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218e938
	ctx.lr = 0x820D9DB8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9e08
	if (ctx.cr6.eq) goto loc_820D9E08;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x820d9e04
	if (ctx.cr6.eq) goto loc_820D9E04;
	// bl 0x8208f6b8
	ctx.lr = 0x820D9DE4;
	sub_8208F6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9e04
	if (ctx.cr6.eq) goto loc_820D9E04;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8208f708
	ctx.lr = 0x820D9DF8;
	sub_8208F708(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_820D9E04:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_820D9E08:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9e18
	if (ctx.cr6.eq) goto loc_820D9E18;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_820D9E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D9E20"))) PPC_WEAK_FUNC(sub_820D9E20);
PPC_FUNC_IMPL(__imp__sub_820D9E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D9E28;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r30,-18236(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82094dc0
	ctx.lr = 0x820D9E48;
	sub_82094DC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82094de0
	ctx.lr = 0x820D9E58;
	sub_82094DE0(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820d9ec0
	if (ctx.cr6.eq) goto loc_820D9EC0;
	// addi r30,r29,596
	ctx.r30.s64 = ctx.r29.s64 + 596;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D9E80;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x820D9E8C;
	sub_82156F00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D9E98;
	sub_820EF4F8(ctx, base);
	// addi r30,r29,900
	ctx.r30.s64 = ctx.r29.s64 + 900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D9EA8;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x820D9EB4;
	sub_82156F00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D9EC0;
	sub_820EF4F8(ctx, base);
loc_820D9EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D9EC8"))) PPC_WEAK_FUNC(sub_820D9EC8);
PPC_FUNC_IMPL(__imp__sub_820D9EC8) {
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
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// addi r6,r11,16132
	ctx.r6.s64 = ctx.r11.s64 + 16132;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r8,9888
	ctx.r5.s64 = ctx.r8.s64 + 9888;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// stw r11,-31808(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31808, ctx.r11.u32);
	// stfs f0,796(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 796, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d9f28
	if (ctx.cr6.eq) goto loc_820D9F28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D9F24;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D9F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9F3C"))) PPC_WEAK_FUNC(sub_820D9F3C);
PPC_FUNC_IMPL(__imp__sub_820D9F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9F40"))) PPC_WEAK_FUNC(sub_820D9F40);
PPC_FUNC_IMPL(__imp__sub_820D9F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D9F48;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,-8552(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2bc0
	ctx.lr = 0x820D9F60;
	sub_820B2BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2ba8
	ctx.lr = 0x820D9F6C;
	sub_820B2BA8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// lis r26,-32185
	ctx.r26.s64 = -2109276160;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_820D9F80:
	// lwz r31,-18236(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18236);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82094dc0
	ctx.lr = 0x820D9F98;
	sub_82094DC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094de0
	ctx.lr = 0x820D9FA8;
	sub_82094DE0(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820da004
	if (ctx.cr6.eq) goto loc_820DA004;
	// addi r28,r31,596
	ctx.r28.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D9FC4;
	sub_82163EF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x820D9FD0;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D9FDC;
	sub_820EF4F8(ctx, base);
	// addi r31,r31,900
	ctx.r31.s64 = ctx.r31.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D9FEC;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x820D9FF8;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820DA004;
	sub_820EF4F8(ctx, base);
loc_820DA004:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d9f80
	if (ctx.cr6.lt) goto loc_820D9F80;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820DA020"))) PPC_WEAK_FUNC(sub_820DA020);
PPC_FUNC_IMPL(__imp__sub_820DA020) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x820DA044;
	sub_821EA9B8(ctx, base);
	// li r31,1001
	ctx.r31.s64 = 1001;
	// bl 0x8215bec8
	ctx.lr = 0x820DA04C;
	sub_8215BEC8(ctx, base);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820da05c
	if (!ctx.cr6.eq) goto loc_820DA05C;
	// li r31,1000
	ctx.r31.s64 = 1000;
loc_820DA05C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r6,-5056(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105c18
	ctx.lr = 0x820DA088;
	sub_82105C18(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,-2084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2084);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31828(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82105138
	ctx.lr = 0x820DA0D0;
	sub_82105138(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DA0F0"))) PPC_WEAK_FUNC(sub_820DA0F0);
PPC_FUNC_IMPL(__imp__sub_820DA0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DA0F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82164c50
	ctx.lr = 0x820DA104;
	sub_82164C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x820d9e20
	ctx.lr = 0x820DA11C;
	sub_820D9E20(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x820DA120;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x820DA124;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da154
	if (ctx.cr6.eq) goto loc_820DA154;
	// bl 0x8222e080
	ctx.lr = 0x820DA130;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da154
	if (ctx.cr6.eq) goto loc_820DA154;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x820da15c
	if (!ctx.cr6.eq) goto loc_820DA15C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820da160
	goto loc_820DA160;
loc_820DA154:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820DA15C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_820DA160:
	// bl 0x820d9e20
	ctx.lr = 0x820DA164;
	sub_820D9E20(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,1020
	ctx.r30.s64 = ctx.r11.s64 + 1020;
	// bl 0x8218fba8
	ctx.lr = 0x820DA174;
	sub_8218FBA8(ctx, base);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// mulhwu r8,r3,r9
	ctx.r8.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r7,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r7.s64;
	// bl 0x8215bec8
	ctx.lr = 0x820DA194;
	sub_8215BEC8(ctx, base);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x820da1ac
	if (!ctx.cr6.eq) goto loc_820DA1AC;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,1010
	ctx.r30.s64 = ctx.r11.s64 + 1010;
loc_820DA1AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,-5052(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// and r31,r8,r29
	ctx.r31.u64 = ctx.r8.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da20c
	if (ctx.cr6.eq) goto loc_820DA20C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-31828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31828);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8964(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8964);
	ctx.f12.f64 = double(temp.f32);
	// stfs f1,416(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f1,424(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f13,428(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stfs f12,404(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// bl 0x820f03a8
	ctx.lr = 0x820DA20C;
	sub_820F03A8(ctx, base);
loc_820DA20C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r6,-5056(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105c18
	ctx.lr = 0x820DA238;
	sub_82105C18(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DA248"))) PPC_WEAK_FUNC(sub_820DA248);
PPC_FUNC_IMPL(__imp__sub_820DA248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x820DA26C;
	sub_821EA9B8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,-8552(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2bc0
	ctx.lr = 0x820DA280;
	sub_820B2BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2ba8
	ctx.lr = 0x820DA28C;
	sub_820B2BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da0f0
	ctx.lr = 0x820DA294;
	sub_820DA0F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA2AC"))) PPC_WEAK_FUNC(sub_820DA2AC);
PPC_FUNC_IMPL(__imp__sub_820DA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA2B0"))) PPC_WEAK_FUNC(sub_820DA2B0);
PPC_FUNC_IMPL(__imp__sub_820DA2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820da2d4
	if (ctx.cr6.eq) goto loc_820DA2D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820da2d0
	if (ctx.cr6.eq) goto loc_820DA2D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x820da0f0
	sub_820DA0F0(ctx, base);
	return;
loc_820DA2D0:
	// b 0x820d9d28
	sub_820D9D28(ctx, base);
	return;
loc_820DA2D4:
	// b 0x820da020
	sub_820DA020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DA2D8"))) PPC_WEAK_FUNC(sub_820DA2D8);
PPC_FUNC_IMPL(__imp__sub_820DA2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA2DC"))) PPC_WEAK_FUNC(sub_820DA2DC);
PPC_FUNC_IMPL(__imp__sub_820DA2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA2E0"))) PPC_WEAK_FUNC(sub_820DA2E0);
PPC_FUNC_IMPL(__imp__sub_820DA2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r10,16160
	ctx.r8.s64 = ctx.r10.s64 + 16160;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA304"))) PPC_WEAK_FUNC(sub_820DA304);
PPC_FUNC_IMPL(__imp__sub_820DA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA308"))) PPC_WEAK_FUNC(sub_820DA308);
PPC_FUNC_IMPL(__imp__sub_820DA308) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA314"))) PPC_WEAK_FUNC(sub_820DA314);
PPC_FUNC_IMPL(__imp__sub_820DA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA318"))) PPC_WEAK_FUNC(sub_820DA318);
PPC_FUNC_IMPL(__imp__sub_820DA318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA32C"))) PPC_WEAK_FUNC(sub_820DA32C);
PPC_FUNC_IMPL(__imp__sub_820DA32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA330"))) PPC_WEAK_FUNC(sub_820DA330);
PPC_FUNC_IMPL(__imp__sub_820DA330) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA338"))) PPC_WEAK_FUNC(sub_820DA338);
PPC_FUNC_IMPL(__imp__sub_820DA338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-4976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820da3ac
	if (ctx.cr6.eq) goto loc_820DA3AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820DA360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x820DA368;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DA37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820da3c8
	if (!ctx.cr6.eq) goto loc_820DA3C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DA398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820da3c8
	if (!ctx.cr6.eq) goto loc_820DA3C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x820da360
	if (ctx.cr6.lt) goto loc_820DA360;
loc_820DA3AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DA3B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DA3C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820da3b0
	goto loc_820DA3B0;
}

__attribute__((alias("__imp__sub_820DA3D0"))) PPC_WEAK_FUNC(sub_820DA3D0);
PPC_FUNC_IMPL(__imp__sub_820DA3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bec8
	ctx.lr = 0x820DA3E4;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820da420
	if (ctx.cr6.eq) goto loc_820DA420;
	// bl 0x8215bec8
	ctx.lr = 0x820DA3F4;
	sub_8215BEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r31,-4964(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4964);
	// bl 0x8215bec8
	ctx.lr = 0x820DA408;
	sub_8215BEC8(ctx, base);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DA420:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820da450
	if (!ctx.cr6.eq) goto loc_820DA450;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lwz r11,-4964(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4964);
	// lwz r10,-8608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8608);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,-4964(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4964, ctx.r11.u32);
	// stw r10,-8608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8608, ctx.r10.u32);
loc_820DA450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA464"))) PPC_WEAK_FUNC(sub_820DA464);
PPC_FUNC_IMPL(__imp__sub_820DA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA468"))) PPC_WEAK_FUNC(sub_820DA468);
PPC_FUNC_IMPL(__imp__sub_820DA468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820da3d0
	ctx.lr = 0x820DA480;
	sub_820DA3D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da338
	ctx.lr = 0x820DA488;
	sub_820DA338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820da4a0
	if (!ctx.cr6.eq) goto loc_820DA4A0;
	// bl 0x8215bec8
	ctx.lr = 0x820DA494;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x820da4d4
	if (!ctx.cr6.eq) goto loc_820DA4D4;
loc_820DA4A0:
	// bl 0x8215bec8
	ctx.lr = 0x820DA4A4;
	sub_8215BEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r31,-4964(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4964);
	// bl 0x8215bec8
	ctx.lr = 0x820DA4B8;
	sub_8215BEC8(ctx, base);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
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
loc_820DA4D4:
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

__attribute__((alias("__imp__sub_820DA4EC"))) PPC_WEAK_FUNC(sub_820DA4EC);
PPC_FUNC_IMPL(__imp__sub_820DA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA4F0"))) PPC_WEAK_FUNC(sub_820DA4F0);
PPC_FUNC_IMPL(__imp__sub_820DA4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820da53c
	if (ctx.cr6.eq) goto loc_820DA53C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820da554
	if (!ctx.cr6.eq) goto loc_820DA554;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,-8736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8736, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DA53C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da468
	ctx.lr = 0x820DA544;
	sub_820DA468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820da554
	if (!ctx.cr6.eq) goto loc_820DA554;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820DA554:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA568"))) PPC_WEAK_FUNC(sub_820DA568);
PPC_FUNC_IMPL(__imp__sub_820DA568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA57C"))) PPC_WEAK_FUNC(sub_820DA57C);
PPC_FUNC_IMPL(__imp__sub_820DA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA580"))) PPC_WEAK_FUNC(sub_820DA580);
PPC_FUNC_IMPL(__imp__sub_820DA580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,16184
	ctx.r9.s64 = ctx.r11.s64 + 16184;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// bl 0x82183850
	ctx.lr = 0x820DA5BC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820da5d4
	if (ctx.cr6.eq) goto loc_820DA5D4;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82183448
	ctx.lr = 0x820DA5D0;
	sub_82183448(ctx, base);
	// b 0x820da5dc
	goto loc_820DA5DC;
loc_820DA5D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820DA5DC;
	sub_821845A0(ctx, base);
loc_820DA5DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da5f0
	if (ctx.cr6.eq) goto loc_820DA5F0;
	// bl 0x820e06c0
	ctx.lr = 0x820DA5E8;
	sub_820E06C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820da5f4
	goto loc_820DA5F4;
loc_820DA5F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DA5F4:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DA610"))) PPC_WEAK_FUNC(sub_820DA610);
PPC_FUNC_IMPL(__imp__sub_820DA610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-8612(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8612);
	// stw r11,-8608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8608, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,-8612(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8612, ctx.r11.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x820e0c08
	ctx.lr = 0x820DA648;
	sub_820E0C08(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA664"))) PPC_WEAK_FUNC(sub_820DA664);
PPC_FUNC_IMPL(__imp__sub_820DA664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA668"))) PPC_WEAK_FUNC(sub_820DA668);
PPC_FUNC_IMPL(__imp__sub_820DA668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,16184
	ctx.r10.s64 = ctx.r11.s64 + 16184;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820da6ac
	if (ctx.cr6.eq) goto loc_820DA6AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e0710
	ctx.lr = 0x820DA6A0;
	sub_820E0710(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820DA6AC;
	sub_82183E40(ctx, base);
loc_820DA6AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9888
	ctx.r9.s64 = ctx.r11.s64 + 9888;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA6D8"))) PPC_WEAK_FUNC(sub_820DA6D8);
PPC_FUNC_IMPL(__imp__sub_820DA6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82225508
	ctx.lr = 0x820DA6F4;
	sub_82225508(ctx, base);
	// li r31,6
	ctx.r31.s64 = 6;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da734
	if (ctx.cr6.eq) goto loc_820DA734;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x822273c0
	ctx.lr = 0x820DA70C;
	sub_822273C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da734
	if (ctx.cr6.eq) goto loc_820DA734;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222190
	ctx.lr = 0x820DA728;
	sub_82222190(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_820DA734:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820da8fc
	if (ctx.cr6.eq) goto loc_820DA8FC;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820e0fb8
	ctx.lr = 0x820DA748;
	sub_820E0FB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820da858
	if (ctx.cr6.eq) goto loc_820DA858;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820da7b8
	if (ctx.cr6.eq) goto loc_820DA7B8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820da8fc
	if (!ctx.cr6.eq) goto loc_820DA8FC;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820e06a8
	ctx.lr = 0x820DA76C;
	sub_820E06A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da8fc
	if (ctx.cr6.eq) goto loc_820DA8FC;
	// bl 0x8215bec8
	ctx.lr = 0x820DA778;
	sub_8215BEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r3,-2032(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2032);
	// bl 0x82128f58
	ctx.lr = 0x820DA78C;
	sub_82128F58(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r3,-8544(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da7a4
	if (ctx.cr6.eq) goto loc_820DA7A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b30b0
	ctx.lr = 0x820DA7A4;
	sub_820B30B0(ctx, base);
loc_820DA7A4:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,50132
	ctx.r3.u64 = ctx.r3.u64 | 50132;
	// bl 0x8208f658
	ctx.lr = 0x820DA7B0;
	sub_8208F658(ctx, base);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x820da8fc
	goto loc_820DA8FC;
loc_820DA7B8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820DA7C8;
	sub_8209C630(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820da7e4
	if (!ctx.cr6.lt) goto loc_820DA7E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820DA7E4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820da8fc
	if (!ctx.cr6.gt) goto loc_820DA8FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da8fc
	if (ctx.cr6.eq) goto loc_820DA8FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2688
	ctx.lr = 0x820DA808;
	sub_820F2688(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820DA824;
	sub_820F28E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2640
	ctx.lr = 0x820DA83C;
	sub_820F2640(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820DA84C;
	sub_82128020(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x820da8fc
	goto loc_820DA8FC;
loc_820DA858:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820DA870;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da880
	if (ctx.cr6.eq) goto loc_820DA880;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820da884
	goto loc_820DA884;
loc_820DA880:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820DA884:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820da89c
	if (!ctx.cr6.lt) goto loc_820DA89C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820DA89C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820da8fc
	if (!ctx.cr6.gt) goto loc_820DA8FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da8fc
	if (ctx.cr6.eq) goto loc_820DA8FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2688
	ctx.lr = 0x820DA8C0;
	sub_820F2688(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2640
	ctx.lr = 0x820DA8D8;
	sub_820F2640(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820DA8F4;
	sub_820F28E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_820DA8FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA914"))) PPC_WEAK_FUNC(sub_820DA914);
PPC_FUNC_IMPL(__imp__sub_820DA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA918"))) PPC_WEAK_FUNC(sub_820DA918);
PPC_FUNC_IMPL(__imp__sub_820DA918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820da668
	ctx.lr = 0x820DA938;
	sub_820DA668(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da954
	if (ctx.cr6.eq) goto loc_820DA954;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DA950;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DA954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DA96C"))) PPC_WEAK_FUNC(sub_820DA96C);
PPC_FUNC_IMPL(__imp__sub_820DA96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DA970"))) PPC_WEAK_FUNC(sub_820DA970);
PPC_FUNC_IMPL(__imp__sub_820DA970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820e11a8
	ctx.lr = 0x820DA988;
	sub_820E11A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,16208
	ctx.r9.s64 = ctx.r11.s64 + 16208;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,15460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15460);
	// bl 0x8216d4a0
	ctx.lr = 0x820DA9A0;
	sub_8216D4A0(ctx, base);
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

__attribute__((alias("__imp__sub_820DA9B8"))) PPC_WEAK_FUNC(sub_820DA9B8);
PPC_FUNC_IMPL(__imp__sub_820DA9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820e11a8
	ctx.lr = 0x820DA9D0;
	sub_820E11A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,16268
	ctx.r9.s64 = ctx.r11.s64 + 16268;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820DA9FC"))) PPC_WEAK_FUNC(sub_820DA9FC);
PPC_FUNC_IMPL(__imp__sub_820DA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAA00"))) PPC_WEAK_FUNC(sub_820DAA00);
PPC_FUNC_IMPL(__imp__sub_820DAA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x820e11f0
	sub_820E11F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DAA04"))) PPC_WEAK_FUNC(sub_820DAA04);
PPC_FUNC_IMPL(__imp__sub_820DAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAA08"))) PPC_WEAK_FUNC(sub_820DAA08);
PPC_FUNC_IMPL(__imp__sub_820DAA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82225508
	ctx.lr = 0x820DAA24;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820daadc
	if (ctx.cr6.eq) goto loc_820DAADC;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820daa84
	if (!ctx.cr6.eq) goto loc_820DAA84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820e1980
	ctx.lr = 0x820DAA4C;
	sub_820E1980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820daa78
	if (ctx.cr6.eq) goto loc_820DAA78;
	// bl 0x8215bec8
	ctx.lr = 0x820DAA58;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820daa74
	if (!ctx.cr6.eq) goto loc_820DAA74;
	// lwz r3,-740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// bl 0x822273c0
	ctx.lr = 0x820DAA6C;
	sub_822273C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820daae0
	goto loc_820DAAE0;
loc_820DAA74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_820DAA78:
	// lwz r11,-740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// stw r30,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r30.u32);
	// lwz r3,-740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
loc_820DAA84:
	// bl 0x822273c0
	ctx.lr = 0x820DAA88;
	sub_822273C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820daadc
	if (ctx.cr6.eq) goto loc_820DAADC;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8736, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820DAAA0;
	sub_8215BEC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r9.u8);
	// bl 0x82181040
	ctx.lr = 0x820DAAAC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820daac0
	if (ctx.cr6.eq) goto loc_820DAAC0;
	// bl 0x82181040
	ctx.lr = 0x820DAAB8;
	sub_82181040(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82181370
	ctx.lr = 0x820DAAC0;
	sub_82181370(ctx, base);
loc_820DAAC0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222190
	ctx.lr = 0x820DAAD4;
	sub_82222190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820daae0
	goto loc_820DAAE0;
loc_820DAADC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DAAE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAAF8"))) PPC_WEAK_FUNC(sub_820DAAF8);
PPC_FUNC_IMPL(__imp__sub_820DAAF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAB0C"))) PPC_WEAK_FUNC(sub_820DAB0C);
PPC_FUNC_IMPL(__imp__sub_820DAB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAB10"))) PPC_WEAK_FUNC(sub_820DAB10);
PPC_FUNC_IMPL(__imp__sub_820DAB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,16208
	ctx.r10.s64 = ctx.r11.s64 + 16208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e11e0
	ctx.lr = 0x820DAB3C;
	sub_820E11E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dab58
	if (ctx.cr6.eq) goto loc_820DAB58;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DAB54;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DAB58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAB70"))) PPC_WEAK_FUNC(sub_820DAB70);
PPC_FUNC_IMPL(__imp__sub_820DAB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,16268
	ctx.r10.s64 = ctx.r11.s64 + 16268;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e11e0
	ctx.lr = 0x820DAB9C;
	sub_820E11E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dabb8
	if (ctx.cr6.eq) goto loc_820DABB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DABB4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DABB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DABD0"))) PPC_WEAK_FUNC(sub_820DABD0);
PPC_FUNC_IMPL(__imp__sub_820DABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820dac28
	if (!ctx.cr6.eq) goto loc_820DAC28;
	// bl 0x8215bd60
	ctx.lr = 0x820DABF4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dac40
	if (ctx.cr6.eq) goto loc_820DAC40;
	// bl 0x82225508
	ctx.lr = 0x820DAC04;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dac28
	if (ctx.cr6.eq) goto loc_820DAC28;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82227048
	ctx.lr = 0x820DAC18;
	sub_82227048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dac28
	if (ctx.cr6.eq) goto loc_820DAC28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820DAC28:
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
loc_820DAC40:
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

__attribute__((alias("__imp__sub_820DAC58"))) PPC_WEAK_FUNC(sub_820DAC58);
PPC_FUNC_IMPL(__imp__sub_820DAC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,16328
	ctx.r9.s64 = ctx.r11.s64 + 16328;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAC78"))) PPC_WEAK_FUNC(sub_820DAC78);
PPC_FUNC_IMPL(__imp__sub_820DAC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DAC80;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820DAC9C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dad00
	if (ctx.cr6.eq) goto loc_820DAD00;
	// stfs f31,1300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x820DACB0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820dacc8
	if (ctx.cr6.eq) goto loc_820DACC8;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82183448
	ctx.lr = 0x820DACC4;
	sub_82183448(ctx, base);
	// b 0x820dacd0
	goto loc_820DACD0;
loc_820DACC8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820DACD0;
	sub_821845A0(ctx, base);
loc_820DACD0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dace8
	if (ctx.cr6.eq) goto loc_820DACE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d3ee8
	ctx.lr = 0x820DACE0;
	sub_820D3EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820dacec
	goto loc_820DACEC;
loc_820DACE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820DACEC:
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DAD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DAD00:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820dac9c
	if (ctx.cr6.lt) goto loc_820DAC9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DAD1C"))) PPC_WEAK_FUNC(sub_820DAD1C);
PPC_FUNC_IMPL(__imp__sub_820DAD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAD20"))) PPC_WEAK_FUNC(sub_820DAD20);
PPC_FUNC_IMPL(__imp__sub_820DAD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,-8544(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8544);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4972(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4972, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dad70
	if (ctx.cr6.eq) goto loc_820DAD70;
	// bl 0x82202a70
	ctx.lr = 0x820DAD5C;
	sub_82202A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dad90
	if (ctx.cr6.eq) goto loc_820DAD90;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820d4568
	ctx.lr = 0x820DAD6C;
	sub_820D4568(ctx, base);
	// b 0x820dad78
	goto loc_820DAD78;
loc_820DAD70:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820d4568
	ctx.lr = 0x820DAD78;
	sub_820D4568(ctx, base);
loc_820DAD78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dac78
	ctx.lr = 0x820DAD80;
	sub_820DAC78(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4952, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_820DAD90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DADA8"))) PPC_WEAK_FUNC(sub_820DADA8);
PPC_FUNC_IMPL(__imp__sub_820DADA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x820dad20
	sub_820DAD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DADB4"))) PPC_WEAK_FUNC(sub_820DADB4);
PPC_FUNC_IMPL(__imp__sub_820DADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DADB8"))) PPC_WEAK_FUNC(sub_820DADB8);
PPC_FUNC_IMPL(__imp__sub_820DADB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x820dad20
	sub_820DAD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DADC8"))) PPC_WEAK_FUNC(sub_820DADC8);
PPC_FUNC_IMPL(__imp__sub_820DADC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DADCC"))) PPC_WEAK_FUNC(sub_820DADCC);
PPC_FUNC_IMPL(__imp__sub_820DADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DADD0"))) PPC_WEAK_FUNC(sub_820DADD0);
PPC_FUNC_IMPL(__imp__sub_820DADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8215bec8
	ctx.lr = 0x820DADE8;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x820dadfc
	if (!ctx.cr6.eq) goto loc_820DADFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x820DADFC;
	sub_821636D8(ctx, base);
loc_820DADFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAE18"))) PPC_WEAK_FUNC(sub_820DAE18);
PPC_FUNC_IMPL(__imp__sub_820DAE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DAE2C"))) PPC_WEAK_FUNC(sub_820DAE2C);
PPC_FUNC_IMPL(__imp__sub_820DAE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAE30"))) PPC_WEAK_FUNC(sub_820DAE30);
PPC_FUNC_IMPL(__imp__sub_820DAE30) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,16352
	ctx.r8.s64 = ctx.r10.s64 + 16352;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820DAE6C;
	sub_8215BD60(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820daf14
	if (ctx.cr6.eq) goto loc_820DAF14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82222320
	ctx.lr = 0x820DAE80;
	sub_82222320(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,-744(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222190
	ctx.lr = 0x820DAEB0;
	sub_82222190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822222a0
	ctx.lr = 0x820DAEBC;
	sub_822222A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222250
	ctx.lr = 0x820DAEC4;
	sub_82222250(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x820daed4
	if (ctx.cr6.gt) goto loc_820DAED4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x820daf00
	goto loc_820DAF00;
loc_820DAED4:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820DAF00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222210
	ctx.lr = 0x820DAF08;
	sub_82222210(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822222e0
	ctx.lr = 0x820DAF14;
	sub_822222E0(ctx, base);
loc_820DAF14:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-8848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8848, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DAF3C"))) PPC_WEAK_FUNC(sub_820DAF3C);
PPC_FUNC_IMPL(__imp__sub_820DAF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DAF40"))) PPC_WEAK_FUNC(sub_820DAF40);
PPC_FUNC_IMPL(__imp__sub_820DAF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x820db03c
	if (!ctx.cr0.lt) goto loc_820DB03C;
	// bl 0x8215bd60
	ctx.lr = 0x820DAF64;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dafd0
	if (ctx.cr6.eq) goto loc_820DAFD0;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820daf84
	if (ctx.cr6.eq) goto loc_820DAF84;
	// bl 0x82128f58
	ctx.lr = 0x820DAF84;
	sub_82128F58(ctx, base);
loc_820DAF84:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820DAF9C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dafac
	if (ctx.cr6.eq) goto loc_820DAFAC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820dafb0
	goto loc_820DAFB0;
loc_820DAFAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DAFB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x820DAFC4;
	sub_820F2640(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x82162c00
	ctx.lr = 0x820DAFD0;
	sub_82162C00(ctx, base);
loc_820DAFD0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dafe8
	if (ctx.cr6.eq) goto loc_820DAFE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b30b0
	ctx.lr = 0x820DAFE8;
	sub_820B30B0(ctx, base);
loc_820DAFE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820DAFF4;
	sub_82128020(ctx, base);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82127ab8
	ctx.lr = 0x820DAFFC;
	sub_82127AB8(ctx, base);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DB010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820DB014;
	sub_8215BD60(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820db024
	if (!ctx.cr6.eq) goto loc_820DB024;
	// bl 0x8209eda0
	ctx.lr = 0x820DB024;
	sub_8209EDA0(ctx, base);
loc_820DB024:
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
loc_820DB03C:
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

__attribute__((alias("__imp__sub_820DB054"))) PPC_WEAK_FUNC(sub_820DB054);
PPC_FUNC_IMPL(__imp__sub_820DB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB058"))) PPC_WEAK_FUNC(sub_820DB058);
PPC_FUNC_IMPL(__imp__sub_820DB058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,9888
	ctx.r8.s64 = ctx.r9.s64 + 9888;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r11,-8848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8848, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820db09c
	if (ctx.cr6.eq) goto loc_820DB09C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DB098;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DB09C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB0B0"))) PPC_WEAK_FUNC(sub_820DB0B0);
PPC_FUNC_IMPL(__imp__sub_820DB0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x820DB0C8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820db0f4
	if (ctx.cr6.eq) goto loc_820DB0F4;
	// bl 0x82225508
	ctx.lr = 0x820DB0D8;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db0f4
	if (ctx.cr6.eq) goto loc_820DB0F4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820db204
	if (!ctx.cr6.eq) goto loc_820DB204;
loc_820DB0F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820db204
	if (ctx.cr6.gt) goto loc_820DB204;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820db15c
	// bdzf 4*cr6+eq,0x820db198
	// bne cr6,0x820db1bc
	if (!ctx.cr6.eq) goto loc_820DB1BC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x820DB124;
	sub_821EA9B8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-8480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db190
	if (ctx.cr6.eq) goto loc_820DB190;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x82127ab8
	ctx.lr = 0x820DB140;
	sub_82127AB8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DB15C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8480);
	// bl 0x820dbf08
	ctx.lr = 0x820DB168;
	sub_820DBF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db204
	if (ctx.cr6.eq) goto loc_820DB204;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db190
	if (ctx.cr6.eq) goto loc_820DB190;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8209eda0
	ctx.lr = 0x820DB190;
	sub_8209EDA0(ctx, base);
loc_820DB190:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820db200
	goto loc_820DB200;
loc_820DB198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DB1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db204
	if (ctx.cr6.eq) goto loc_820DB204;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820db200
	goto loc_820DB200;
loc_820DB1BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820daf40
	ctx.lr = 0x820DB1C4;
	sub_820DAF40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db204
	if (ctx.cr6.eq) goto loc_820DB204;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820db1e4
	if (!ctx.cr6.lt) goto loc_820DB1E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820DB1E4:
	// bl 0x82181040
	ctx.lr = 0x820DB1E8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db1fc
	if (ctx.cr6.eq) goto loc_820DB1FC;
	// bl 0x82181040
	ctx.lr = 0x820DB1F4;
	sub_82181040(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82181370
	ctx.lr = 0x820DB1FC;
	sub_82181370(ctx, base);
loc_820DB1FC:
	// li r11,5
	ctx.r11.s64 = 5;
loc_820DB200:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820DB204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB218"))) PPC_WEAK_FUNC(sub_820DB218);
PPC_FUNC_IMPL(__imp__sub_820DB218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x82127b28
	ctx.lr = 0x820DB238;
	sub_82127B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db278
	if (ctx.cr6.eq) goto loc_820DB278;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db258
	if (ctx.cr6.eq) goto loc_820DB258;
	// bl 0x820db920
	ctx.lr = 0x820DB254;
	sub_820DB920(ctx, base);
	// bl 0x820cdab8
	ctx.lr = 0x820DB258;
	sub_820CDAB8(ctx, base);
loc_820DB258:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820DB278:
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

__attribute__((alias("__imp__sub_820DB290"))) PPC_WEAK_FUNC(sub_820DB290);
PPC_FUNC_IMPL(__imp__sub_820DB290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,16380
	ctx.r9.s64 = ctx.r11.s64 + 16380;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB2B4"))) PPC_WEAK_FUNC(sub_820DB2B4);
PPC_FUNC_IMPL(__imp__sub_820DB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB2B8"))) PPC_WEAK_FUNC(sub_820DB2B8);
PPC_FUNC_IMPL(__imp__sub_820DB2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820db35c
	if (!ctx.cr6.eq) goto loc_820DB35C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x82162c00
	ctx.lr = 0x820DB2E8;
	sub_82162C00(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x820db33c
	if (!ctx.cr6.eq) goto loc_820DB33C;
	// bl 0x8209c630
	ctx.lr = 0x820DB304;
	sub_8209C630(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f2640
	ctx.lr = 0x820DB31C;
	sub_820F2640(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820DB338;
	sub_820F28E0(ctx, base);
	// b 0x820db354
	goto loc_820DB354;
loc_820DB33C:
	// bl 0x8209c630
	ctx.lr = 0x820DB340;
	sub_8209C630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x820DB354;
	sub_820F2640(ctx, base);
loc_820DB354:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820DB35C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB374"))) PPC_WEAK_FUNC(sub_820DB374);
PPC_FUNC_IMPL(__imp__sub_820DB374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB378"))) PPC_WEAK_FUNC(sub_820DB378);
PPC_FUNC_IMPL(__imp__sub_820DB378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,16404
	ctx.r9.s64 = ctx.r11.s64 + 16404;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB398"))) PPC_WEAK_FUNC(sub_820DB398);
PPC_FUNC_IMPL(__imp__sub_820DB398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820d4440
	ctx.lr = 0x820DB3B0;
	sub_820D4440(ctx, base);
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

__attribute__((alias("__imp__sub_820DB3CC"))) PPC_WEAK_FUNC(sub_820DB3CC);
PPC_FUNC_IMPL(__imp__sub_820DB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB3D0"))) PPC_WEAK_FUNC(sub_820DB3D0);
PPC_FUNC_IMPL(__imp__sub_820DB3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16436
	ctx.r9.s64 = ctx.r11.s64 + 16436;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB3F0"))) PPC_WEAK_FUNC(sub_820DB3F0);
PPC_FUNC_IMPL(__imp__sub_820DB3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB404"))) PPC_WEAK_FUNC(sub_820DB404);
PPC_FUNC_IMPL(__imp__sub_820DB404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB408"))) PPC_WEAK_FUNC(sub_820DB408);
PPC_FUNC_IMPL(__imp__sub_820DB408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// bl 0x82231be8
	ctx.lr = 0x820DB42C;
	sub_82231BE8(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x820DB430;
	sub_8215BD60(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820db484
	if (ctx.cr6.eq) goto loc_820DB484;
	// bl 0x8215bd60
	ctx.lr = 0x820DB440;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820db468
	if (ctx.cr6.eq) goto loc_820DB468;
	// bl 0x82225508
	ctx.lr = 0x820DB454;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db468
	if (ctx.cr6.eq) goto loc_820DB468;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// stw r31,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r31.u32);
loc_820DB468:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8556);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820db47c
	if (!ctx.cr6.eq) goto loc_820DB47C;
	// bl 0x820b2818
	ctx.lr = 0x820DB47C;
	sub_820B2818(ctx, base);
loc_820DB47C:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x820db48c
	goto loc_820DB48C;
loc_820DB484:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_820DB48C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB4A4"))) PPC_WEAK_FUNC(sub_820DB4A4);
PPC_FUNC_IMPL(__imp__sub_820DB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB4A8"))) PPC_WEAK_FUNC(sub_820DB4A8);
PPC_FUNC_IMPL(__imp__sub_820DB4A8) {
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
	// bl 0x820d4128
	ctx.lr = 0x820DB4BC;
	sub_820D4128(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820DB4CC;
	sub_82128020(ctx, base);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DB4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db50c
	if (ctx.cr6.eq) goto loc_820DB50C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,16428
	ctx.r10.s64 = ctx.r11.s64 + 16428;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820d5b88
	ctx.lr = 0x820DB504;
	sub_820D5B88(ctx, base);
	// lwz r3,-8504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8504);
	// bl 0x820d5bb0
	ctx.lr = 0x820DB50C;
	sub_820D5BB0(ctx, base);
loc_820DB50C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,-19048(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820DB53C"))) PPC_WEAK_FUNC(sub_820DB53C);
PPC_FUNC_IMPL(__imp__sub_820DB53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB540"))) PPC_WEAK_FUNC(sub_820DB540);
PPC_FUNC_IMPL(__imp__sub_820DB540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820db570
	if (ctx.cr6.lt) goto loc_820DB570;
	// bne cr6,0x820db578
	if (!ctx.cr6.eq) goto loc_820DB578;
	// bl 0x820db4a8
	ctx.lr = 0x820DB568;
	sub_820DB4A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820db574
	goto loc_820DB574;
loc_820DB570:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DB574:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820DB578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB58C"))) PPC_WEAK_FUNC(sub_820DB58C);
PPC_FUNC_IMPL(__imp__sub_820DB58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB590"))) PPC_WEAK_FUNC(sub_820DB590);
PPC_FUNC_IMPL(__imp__sub_820DB590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820DB5D4;
	sub_822AA648(ctx, base);
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

__attribute__((alias("__imp__sub_820DB5EC"))) PPC_WEAK_FUNC(sub_820DB5EC);
PPC_FUNC_IMPL(__imp__sub_820DB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB5F0"))) PPC_WEAK_FUNC(sub_820DB5F0);
PPC_FUNC_IMPL(__imp__sub_820DB5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DB5F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820DB608:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db628
	if (ctx.cr6.eq) goto loc_820DB628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DB628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DB628:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820db608
	if (!ctx.cr0.eq) goto loc_820DB608;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DB63C"))) PPC_WEAK_FUNC(sub_820DB63C);
PPC_FUNC_IMPL(__imp__sub_820DB63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB640"))) PPC_WEAK_FUNC(sub_820DB640);
PPC_FUNC_IMPL(__imp__sub_820DB640) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820db66c
	if (!ctx.cr6.lt) goto loc_820DB66C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820db678
	goto loc_820DB678;
loc_820DB66C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x820db678
	if (!ctx.cr6.gt) goto loc_820DB678;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DB678:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// li r4,54
	ctx.r4.s64 = 54;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097288
	ctx.lr = 0x820DB694;
	sub_82097288(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820db6a8
	if (!ctx.cr6.eq) goto loc_820DB6A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
loc_820DB6A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f2348
	ctx.lr = 0x820DB6C4;
	sub_820F2348(ctx, base);
	// lwz r10,1248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DB6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,1732(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820db708
	if (ctx.cr6.eq) goto loc_820DB708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820af500
	ctx.lr = 0x820DB6EC;
	sub_820AF500(ctx, base);
	// addi r31,r31,596
	ctx.r31.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820DB6FC;
	sub_820EF4F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x820DB708;
	sub_82156F00(ctx, base);
loc_820DB708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DB720"))) PPC_WEAK_FUNC(sub_820DB720);
PPC_FUNC_IMPL(__imp__sub_820DB720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bec8
	ctx.lr = 0x820DB738;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820db780
	if (!ctx.cr6.eq) goto loc_820DB780;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_820DB750:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db770
	if (ctx.cr6.eq) goto loc_820DB770;
	// bl 0x820f1808
	ctx.lr = 0x820DB760;
	sub_820F1808(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x820db79c
	if (ctx.cr6.eq) goto loc_820DB79C;
	// cmpwi cr6,r3,111
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 111, ctx.xer);
	// beq cr6,0x820db79c
	if (ctx.cr6.eq) goto loc_820DB79C;
loc_820DB770:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820db750
	if (ctx.cr6.lt) goto loc_820DB750;
loc_820DB780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DB784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DB79C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820db784
	goto loc_820DB784;
}

__attribute__((alias("__imp__sub_820DB7A4"))) PPC_WEAK_FUNC(sub_820DB7A4);
PPC_FUNC_IMPL(__imp__sub_820DB7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB7A8"))) PPC_WEAK_FUNC(sub_820DB7A8);
PPC_FUNC_IMPL(__imp__sub_820DB7A8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bne cr6,0x820db7c8
	if (!ctx.cr6.eq) goto loc_820DB7C8;
	// b 0x8212e190
	sub_8212E190(ctx, base);
	return;
loc_820DB7C8:
	// b 0x8212dd88
	sub_8212DD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DB7CC"))) PPC_WEAK_FUNC(sub_820DB7CC);
PPC_FUNC_IMPL(__imp__sub_820DB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB7D0"))) PPC_WEAK_FUNC(sub_820DB7D0);
PPC_FUNC_IMPL(__imp__sub_820DB7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820DB7D8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,796(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 796, temp.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,-31808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31808, ctx.r26.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r26,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r26.u32);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r25.u32);
	// bl 0x820db640
	ctx.lr = 0x820DB814;
	sub_820DB640(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r11,-9772(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db854
	if (ctx.cr6.eq) goto loc_820DB854;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820DB834;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db854
	if (ctx.cr6.eq) goto loc_820DB854;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db854
	if (ctx.cr6.eq) goto loc_820DB854;
	// addic. r11,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r11.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820db854
	if (ctx.cr0.eq) goto loc_820DB854;
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
loc_820DB854:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
loc_820DB864:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820db8e4
	if (ctx.cr6.eq) goto loc_820DB8E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820DB87C;
	sub_820EF4B8(ctx, base);
	// stw r25,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r25.u32);
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820DB890;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db8a0
	if (ctx.cr6.eq) goto loc_820DB8A0;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820db8a4
	goto loc_820DB8A4;
loc_820DB8A0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820DB8A4:
	// bl 0x8215c080
	ctx.lr = 0x820DB8A8;
	sub_8215C080(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DB8B0;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DB8BC;
	sub_821837D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e640
	ctx.lr = 0x820DB8C8;
	sub_8212E640(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820DB8D8;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820db8e4
	if (ctx.cr6.eq) goto loc_820DB8E4;
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_820DB8E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// blt cr6,0x820db864
	if (ctx.cr6.lt) goto loc_820DB864;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x82162c00
	ctx.lr = 0x820DB904;
	sub_82162C00(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,-4956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4956, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820DB91C"))) PPC_WEAK_FUNC(sub_820DB91C);
PPC_FUNC_IMPL(__imp__sub_820DB91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DB920"))) PPC_WEAK_FUNC(sub_820DB920);
PPC_FUNC_IMPL(__imp__sub_820DB920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DB928;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db974
	if (ctx.cr6.eq) goto loc_820DB974;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820DB954;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db974
	if (ctx.cr6.eq) goto loc_820DB974;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db974
	if (ctx.cr6.eq) goto loc_820DB974;
	// addic. r11,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r11.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820db974
	if (ctx.cr0.eq) goto loc_820DB974;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820DB974:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820ac2a0
	ctx.lr = 0x820DB980;
	sub_820AC2A0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820DB98C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db9c0
	if (ctx.cr6.eq) goto loc_820DB9C0;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820DB9A8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db9c0
	if (ctx.cr6.eq) goto loc_820DB9C0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db9c0
	if (ctx.cr6.eq) goto loc_820DB9C0;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820DB9C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820db98c
	if (!ctx.cr0.eq) goto loc_820DB98C;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,792(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,796(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 796, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-31808(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31808, ctx.r29.u32);
	// stw r10,-4956(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4956, ctx.r10.u32);
	// bl 0x820db720
	ctx.lr = 0x820DB9FC;
	sub_820DB720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dba0c
	if (ctx.cr6.eq) goto loc_820DBA0C;
	// bl 0x82163df0
	ctx.lr = 0x820DBA08;
	sub_82163DF0(ctx, base);
	// stw r29,8556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8556, ctx.r29.u32);
loc_820DBA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DBA14"))) PPC_WEAK_FUNC(sub_820DBA14);
PPC_FUNC_IMPL(__imp__sub_820DBA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DBA18"))) PPC_WEAK_FUNC(sub_820DBA18);
PPC_FUNC_IMPL(__imp__sub_820DBA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DBA20;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820DBA40:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dba94
	if (ctx.cr6.eq) goto loc_820DBA94;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097288
	ctx.lr = 0x820DBA58;
	sub_82097288(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820dba68
	if (!ctx.cr6.eq) goto loc_820DBA68;
	// addi r4,r29,8000
	ctx.r4.s64 = ctx.r29.s64 + 8000;
loc_820DBA68:
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2348
	ctx.lr = 0x820DBA80;
	sub_820F2348(ctx, base);
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBA94:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820dba40
	if (ctx.cr6.lt) goto loc_820DBA40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x82104e28
	ctx.lr = 0x820DBAB4;
	sub_82104E28(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r3,-4900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DBACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820ae430
	ctx.lr = 0x820DBAD0;
	sub_820AE430(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820DBAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-31808(r5)
	PPC_STORE_U32(ctx.r5.u32 + -31808, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DBAF8"))) PPC_WEAK_FUNC(sub_820DBAF8);
PPC_FUNC_IMPL(__imp__sub_820DBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DBB00;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x820d40d0
	ctx.lr = 0x820DBB10;
	sub_820D40D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x82104e28
	ctx.lr = 0x820DBB1C;
	sub_82104E28(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r3,-4900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DBB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lis r5,-32190
	ctx.r5.s64 = -2109603840;
	// stw r11,-5000(r6)
	PPC_STORE_U32(ctx.r6.u32 + -5000, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f0,792(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,796(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 796, temp.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820DBB64:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dbc18
	if (ctx.cr6.eq) goto loc_820DBC18;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r4,r31,900
	ctx.r4.s64 = ctx.r31.s64 + 900;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x821847a8
	ctx.lr = 0x820DBB80;
	sub_821847A8(ctx, base);
	// lwz r7,1936(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820dbc04
	if (ctx.cr6.eq) goto loc_820DBC04;
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820dbbfc
	if (!ctx.cr6.gt) goto loc_820DBBFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r7,2672
	ctx.r8.s64 = ctx.r7.s64 + 2672;
loc_820DBBA4:
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lhzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820dbbc4
	if (!ctx.cr6.eq) goto loc_820DBBC4;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820dbbd0
	goto loc_820DBBD0;
loc_820DBBC4:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820DBBD0:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// lwz r3,60(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820dbba4
	if (ctx.cr6.lt) goto loc_820DBBA4;
loc_820DBBFC:
	// stfs f31,2116(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2116, temp.u32);
	// stfs f31,2152(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2152, temp.u32);
loc_820DBC04:
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBC18:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820dbb64
	if (ctx.cr6.lt) goto loc_820DBB64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dbc50
	if (ctx.cr6.eq) goto loc_820DBC50;
	// bl 0x820ae430
	ctx.lr = 0x820DBC38;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r9.u32);
loc_820DBC50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x820dbc6c
	if (!ctx.cr6.lt) goto loc_820DBC6C;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8212dd88
	ctx.lr = 0x820DBC6C;
	sub_8212DD88(ctx, base);
loc_820DBC6C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820DBC84;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbcb8
	if (ctx.cr6.eq) goto loc_820DBCB8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dbcb8
	if (ctx.cr6.eq) goto loc_820DBCB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2640
	ctx.lr = 0x820DBCB0;
	sub_820F2640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2698
	ctx.lr = 0x820DBCB8;
	sub_820F2698(ctx, base);
loc_820DBCB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DBCC4"))) PPC_WEAK_FUNC(sub_820DBCC4);
PPC_FUNC_IMPL(__imp__sub_820DBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DBCC8"))) PPC_WEAK_FUNC(sub_820DBCC8);
PPC_FUNC_IMPL(__imp__sub_820DBCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DBCD0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x820DBCE0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dbd40
	if (ctx.cr6.eq) goto loc_820DBD40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbe08
	if (ctx.cr6.eq) goto loc_820DBE08;
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x820DBD14;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbd24
	if (ctx.cr6.eq) goto loc_820DBD24;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820dbd28
	goto loc_820DBD28;
loc_820DBD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DBD28:
	// bl 0x820c3a98
	ctx.lr = 0x820DBD2C;
	sub_820C3A98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbe08
	if (ctx.cr6.eq) goto loc_820DBE08;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820DBD40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db720
	ctx.lr = 0x820DBD48;
	sub_820DB720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbd60
	if (ctx.cr6.eq) goto loc_820DBD60;
	// bl 0x82163df0
	ctx.lr = 0x820DBD54;
	sub_82163DF0(ctx, base);
	// lwz r11,8556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dbe08
	if (ctx.cr6.eq) goto loc_820DBE08;
loc_820DBD60:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_820DBD70:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbda4
	if (ctx.cr6.eq) goto loc_820DBDA4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820dbd70
	if (ctx.cr6.lt) goto loc_820DBD70;
	// b 0x820dbda8
	goto loc_820DBDA8;
loc_820DBDA4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_820DBDA8:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DBDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbde0
	if (ctx.cr6.eq) goto loc_820DBDE0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820dbde4
	if (ctx.cr6.eq) goto loc_820DBDE4;
	// lwz r30,1280(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1280);
	// b 0x820dbde4
	goto loc_820DBDE4;
loc_820DBDE0:
	// lwz r30,1280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
loc_820DBDE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x820DBDEC;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x820dbe0c
	if (!ctx.cr6.eq) goto loc_820DBE0C;
loc_820DBE08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DBE0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DBE14"))) PPC_WEAK_FUNC(sub_820DBE14);
PPC_FUNC_IMPL(__imp__sub_820DBE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DBE18"))) PPC_WEAK_FUNC(sub_820DBE18);
PPC_FUNC_IMPL(__imp__sub_820DBE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DBE20;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x820db720
	ctx.lr = 0x820DBE2C;
	sub_820DB720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbe44
	if (ctx.cr6.eq) goto loc_820DBE44;
	// bl 0x82163df0
	ctx.lr = 0x820DBE38;
	sub_82163DF0(ctx, base);
	// lwz r11,8556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dbee8
	if (ctx.cr6.eq) goto loc_820DBEE8;
loc_820DBE44:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820DBE50:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dbed8
	if (ctx.cr6.eq) goto loc_820DBED8;
	// bl 0x8215bd60
	ctx.lr = 0x820DBE60;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dbe9c
	if (ctx.cr6.eq) goto loc_820DBE9C;
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x820DBE7C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbe90
	if (ctx.cr6.eq) goto loc_820DBE90;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x820c3a98
	ctx.lr = 0x820DBE8C;
	sub_820C3A98(ctx, base);
	// b 0x820dbed0
	goto loc_820DBED0;
loc_820DBE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820c3a98
	ctx.lr = 0x820DBE98;
	sub_820C3A98(ctx, base);
	// b 0x820dbed0
	goto loc_820DBED0;
loc_820DBE9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dbed8
	if (!ctx.cr6.eq) goto loc_820DBED8;
	// lwz r3,1280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// bl 0x8218e938
	ctx.lr = 0x820DBEC0;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DBED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DBED0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dbef4
	if (!ctx.cr6.eq) goto loc_820DBEF4;
loc_820DBED8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820dbe50
	if (ctx.cr6.lt) goto loc_820DBE50;
loc_820DBEE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820DBEF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DBF08"))) PPC_WEAK_FUNC(sub_820DBF08);
PPC_FUNC_IMPL(__imp__sub_820DBF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DBF10;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lwz r29,-2032(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2032);
	// bgt cr6,0x820dc1dc
	if (ctx.cr6.gt) goto loc_820DC1DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820dc10c
	// bdzf 4*cr6+eq,0x820dc1e8
	// bdzf 4*cr6+eq,0x820dc2cc
	// bdzf 4*cr6+eq,0x820dc3b8
	// bne cr6,0x820dc3e4
	if (!ctx.cr6.eq) goto loc_820DC3E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820dbf60
	if (!ctx.cr6.lt) goto loc_820DBF60;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820dbf70
	goto loc_820DBF70;
loc_820DBF60:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bgt cr6,0x820dbf70
	if (ctx.cr6.gt) goto loc_820DBF70;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820DBF70:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-5052
	ctx.r9.s64 = ctx.r9.s64 + -5052;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,1936(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1936);
	// bne cr6,0x820dc01c
	if (!ctx.cr6.eq) goto loc_820DC01C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
loc_820DBFAC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,1936(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// lwz r11,1028(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1028);
	// lfs f12,868(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbfe0
	if (ctx.cr6.eq) goto loc_820DBFE0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// b 0x820dbfe4
	goto loc_820DBFE4;
loc_820DBFE0:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_820DBFE4:
	// fmsubs f0,f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820dbff4
	if (ctx.cr6.lt) goto loc_820DBFF4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_820DBFF4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820dbfac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DBFAC;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc098
	if (ctx.cr6.eq) goto loc_820DC098;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc098
	if (ctx.cr6.eq) goto loc_820DC098;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x820dc098
	goto loc_820DC098;
loc_820DC01C:
	// lwz r9,1028(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	// lfs f12,868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dc048
	if (ctx.cr6.eq) goto loc_820DC048;
	// lhz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x820dc050
	goto loc_820DC050;
loc_820DC048:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820DC050:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820dc098
	if (ctx.cr6.lt) goto loc_820DC098;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820dc080
	if (!ctx.cr6.eq) goto loc_820DC080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db640
	ctx.lr = 0x820DC07C;
	sub_820DB640(ctx, base);
	// b 0x820dc098
	goto loc_820DC098;
loc_820DC080:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820dc098
	if (!ctx.cr6.eq) goto loc_820DC098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbaf8
	ctx.lr = 0x820DC090;
	sub_820DBAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dba18
	ctx.lr = 0x820DC098;
	sub_820DBA18(ctx, base);
loc_820DC098:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc0ac
	if (ctx.cr6.eq) goto loc_820DC0AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820dc0c4
	goto loc_820DC0C4;
loc_820DC0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbe18
	ctx.lr = 0x820DC0B4;
	sub_820DBE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc1dc
	if (ctx.cr6.eq) goto loc_820DC1DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_820DC0C4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbaf8
	ctx.lr = 0x820DC0D0;
	sub_820DBAF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128020
	ctx.lr = 0x820DC0DC;
	sub_82128020(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x82128030
	ctx.lr = 0x820DC0E8;
	sub_82128030(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8612(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8612);
	// bl 0x8212d7d0
	ctx.lr = 0x820DC0F8;
	sub_8212D7D0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820DC10C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820dc120
	if (!ctx.cr6.lt) goto loc_820DC120;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820dc12c
	goto loc_820DC12C;
loc_820DC120:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x820dc12c
	if (!ctx.cr6.gt) goto loc_820DC12C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DC12C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,1936(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1936);
	// lwz r11,1028(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1028);
	// lfs f12,868(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc16c
	if (ctx.cr6.eq) goto loc_820DC16C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x820dc174
	goto loc_820DC174;
loc_820DC16C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820DC174:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820dc19c
	if (!ctx.cr6.lt) goto loc_820DC19C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbcc8
	ctx.lr = 0x820DC194;
	sub_820DBCC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc1dc
	if (ctx.cr6.eq) goto loc_820DC1DC;
loc_820DC19C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc1c0
	if (ctx.cr6.eq) goto loc_820DC1C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_820DC1C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x820db640
	ctx.lr = 0x820DC1D4;
	sub_820DB640(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_820DC1DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820DC1E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820dc1fc
	if (!ctx.cr6.lt) goto loc_820DC1FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820dc208
	goto loc_820DC208;
loc_820DC1FC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x820dc208
	if (!ctx.cr6.gt) goto loc_820DC208;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DC208:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,1936(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1936);
	// lwz r11,1028(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1028);
	// lfs f12,868(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc248
	if (ctx.cr6.eq) goto loc_820DC248;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x820dc250
	goto loc_820DC250;
loc_820DC248:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820DC250:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820dc278
	if (!ctx.cr6.lt) goto loc_820DC278;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dbcc8
	ctx.lr = 0x820DC270;
	sub_820DBCC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc1dc
	if (ctx.cr6.eq) goto loc_820DC1DC;
loc_820DC278:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc29c
	if (ctx.cr6.eq) goto loc_820DC29C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_820DC29C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x820dbaf8
	ctx.lr = 0x820DC2B0;
	sub_820DBAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dba18
	ctx.lr = 0x820DC2B8;
	sub_820DBA18(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820DC2CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
loc_820DC2F4:
	// lwz r11,-5052(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5052);
	// lwz r7,1936(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// lwz r11,1028(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1028);
	// lfs f12,868(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc328
	if (ctx.cr6.eq) goto loc_820DC328;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// b 0x820dc32c
	goto loc_820DC32C;
loc_820DC328:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_820DC32C:
	// fmsubs f0,f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820dc33c
	if (ctx.cr6.lt) goto loc_820DC33C;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_820DC33C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820dc2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DC2F4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc360
	if (ctx.cr6.eq) goto loc_820DC360;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc360
	if (ctx.cr6.eq) goto loc_820DC360;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_820DC360:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dc1dc
	if (ctx.cr6.eq) goto loc_820DC1DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820dbaf8
	ctx.lr = 0x820DC37C;
	sub_820DBAF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128020
	ctx.lr = 0x820DC388;
	sub_82128020(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// bl 0x82128030
	ctx.lr = 0x820DC394;
	sub_82128030(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8612(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8612);
	// bl 0x8212d7d0
	ctx.lr = 0x820DC3A4;
	sub_8212D7D0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820DC3B8:
	// bl 0x8212d8c8
	ctx.lr = 0x820DC3BC;
	sub_8212D8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc1dc
	if (ctx.cr6.eq) goto loc_820DC1DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ori r3,r3,50132
	ctx.r3.u64 = ctx.r3.u64 | 50132;
	// bl 0x8208f658
	ctx.lr = 0x820DC3D8;
	sub_8208F658(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820DC3E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DC3F0"))) PPC_WEAK_FUNC(sub_820DC3F0);
PPC_FUNC_IMPL(__imp__sub_820DC3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820cc428
	ctx.lr = 0x820DC408;
	sub_820CC428(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,16460
	ctx.r10.s64 = ctx.r11.s64 + 16460;
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

__attribute__((alias("__imp__sub_820DC42C"))) PPC_WEAK_FUNC(sub_820DC42C);
PPC_FUNC_IMPL(__imp__sub_820DC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC430"))) PPC_WEAK_FUNC(sub_820DC430);
PPC_FUNC_IMPL(__imp__sub_820DC430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x820DC448;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DC450;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC45C;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// bl 0x820b2dc8
	ctx.lr = 0x820DC46C;
	sub_820B2DC8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x820DC478;
	sub_822AA648(ctx, base);
	// li r10,42
	ctx.r10.s64 = 42;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821d14d8
	ctx.lr = 0x820DC488;
	sub_821D14D8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-4980(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4980, ctx.r11.u32);
	// stw r10,-4964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4964, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x820DC4A8;
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

__attribute__((alias("__imp__sub_820DC4C4"))) PPC_WEAK_FUNC(sub_820DC4C4);
PPC_FUNC_IMPL(__imp__sub_820DC4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC4C8"))) PPC_WEAK_FUNC(sub_820DC4C8);
PPC_FUNC_IMPL(__imp__sub_820DC4C8) {
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
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094d28
	ctx.lr = 0x820DC4E0;
	sub_82094D28(ctx, base);
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

__attribute__((alias("__imp__sub_820DC4F4"))) PPC_WEAK_FUNC(sub_820DC4F4);
PPC_FUNC_IMPL(__imp__sub_820DC4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC4F8"))) PPC_WEAK_FUNC(sub_820DC4F8);
PPC_FUNC_IMPL(__imp__sub_820DC4F8) {
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x820DC510;
	sub_82229A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc52c
	if (ctx.cr6.eq) goto loc_820DC52C;
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
loc_820DC52C:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094d38
	ctx.lr = 0x820DC538;
	sub_82094D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC548"))) PPC_WEAK_FUNC(sub_820DC548);
PPC_FUNC_IMPL(__imp__sub_820DC548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x820DC560;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DC568;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC574;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820dc58c
	if (ctx.cr6.eq) goto loc_820DC58C;
	// bl 0x820f1188
	ctx.lr = 0x820DC588;
	sub_820F1188(ctx, base);
	// bl 0x820b5a00
	ctx.lr = 0x820DC58C;
	sub_820B5A00(ctx, base);
loc_820DC58C:
	// bl 0x8208e990
	ctx.lr = 0x820DC590;
	sub_8208E990(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094d48
	ctx.lr = 0x820DC59C;
	sub_82094D48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC5A4;
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

__attribute__((alias("__imp__sub_820DC5C0"))) PPC_WEAK_FUNC(sub_820DC5C0);
PPC_FUNC_IMPL(__imp__sub_820DC5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x820DC5D8;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DC5E0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC5EC;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x820DC5F8;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820dc610
	if (!ctx.cr6.eq) goto loc_820DC610;
loc_820DC604:
	// bl 0x821837d0
	ctx.lr = 0x820DC608;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820dc62c
	goto loc_820DC62C;
loc_820DC610:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820dc604
	if (ctx.cr6.eq) goto loc_820DC604;
	// bl 0x821837d0
	ctx.lr = 0x820DC628;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820DC62C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC644"))) PPC_WEAK_FUNC(sub_820DC644);
PPC_FUNC_IMPL(__imp__sub_820DC644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC648"))) PPC_WEAK_FUNC(sub_820DC648);
PPC_FUNC_IMPL(__imp__sub_820DC648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82182e90
	ctx.lr = 0x820DC660;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DC668;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC674;
	sub_821837D0(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094d58
	ctx.lr = 0x820DC680;
	sub_82094D58(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2bd8
	ctx.lr = 0x820DC68C;
	sub_820B2BD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x820DC698;
	sub_820B2BC0(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,-4984(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4984);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r31,r11,15460
	ctx.r31.s64 = ctx.r11.s64 + 15460;
	// lwz r3,15460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15460);
	// beq cr6,0x820dc6d4
	if (ctx.cr6.eq) goto loc_820DC6D4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_820DC6D4:
	// bl 0x8216d070
	ctx.lr = 0x820DC6D8;
	sub_8216D070(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8216d4a0
	ctx.lr = 0x820DC6E0;
	sub_8216D4A0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc6f8
	if (ctx.cr6.eq) goto loc_820DC6F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82167158
	ctx.lr = 0x820DC6F8;
	sub_82167158(ctx, base);
loc_820DC6F8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc710
	if (ctx.cr6.eq) goto loc_820DC710;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82169308
	ctx.lr = 0x820DC710;
	sub_82169308(ctx, base);
loc_820DC710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DC718;
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

__attribute__((alias("__imp__sub_820DC734"))) PPC_WEAK_FUNC(sub_820DC734);
PPC_FUNC_IMPL(__imp__sub_820DC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC738"))) PPC_WEAK_FUNC(sub_820DC738);
PPC_FUNC_IMPL(__imp__sub_820DC738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820cc578
	ctx.lr = 0x820DC750;
	sub_820CC578(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,16492
	ctx.r9.s64 = ctx.r11.s64 + 16492;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820DC77C"))) PPC_WEAK_FUNC(sub_820DC77C);
PPC_FUNC_IMPL(__imp__sub_820DC77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC780"))) PPC_WEAK_FUNC(sub_820DC780);
PPC_FUNC_IMPL(__imp__sub_820DC780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r11,13768
	ctx.r9.s64 = ctx.r11.s64 + 13768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820dc7b8
	if (ctx.cr6.eq) goto loc_820DC7B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DC7B4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DC7B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DC7CC"))) PPC_WEAK_FUNC(sub_820DC7CC);
PPC_FUNC_IMPL(__imp__sub_820DC7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC7D0"))) PPC_WEAK_FUNC(sub_820DC7D0);
PPC_FUNC_IMPL(__imp__sub_820DC7D0) {
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
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820dc810
	if (ctx.cr6.eq) goto loc_820DC810;
	// bl 0x8215bec8
	ctx.lr = 0x820DC7F0;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820dc810
	if (ctx.cr6.eq) goto loc_820DC810;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x820DC810;
	sub_821EA8B8(ctx, base);
loc_820DC810:
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

__attribute__((alias("__imp__sub_820DC824"))) PPC_WEAK_FUNC(sub_820DC824);
PPC_FUNC_IMPL(__imp__sub_820DC824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC828"))) PPC_WEAK_FUNC(sub_820DC828);
PPC_FUNC_IMPL(__imp__sub_820DC828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DC830;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-788(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea3e0
	ctx.lr = 0x820DC848;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc868
	if (ctx.cr6.eq) goto loc_820DC868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea3f0
	ctx.lr = 0x820DC858;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dc868
	if (!ctx.cr6.eq) goto loc_820DC868;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820DC868:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc880
	if (ctx.cr6.eq) goto loc_820DC880;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_820DC880:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x820DC890;
	sub_820B2BC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x820DC89C;
	sub_820B2BA8(ctx, base);
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094db0
	ctx.lr = 0x820DC8B0;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x820DC8BC;
	sub_82094DD0(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r30,72
	ctx.r30.s64 = 72;
	// addi r31,r11,-20416
	ctx.r31.s64 = ctx.r11.s64 + -20416;
loc_820DC8C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc8f8
	if (ctx.cr6.eq) goto loc_820DC8F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4f8
	ctx.lr = 0x820DC8E0;
	sub_820EF4F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82163ef8
	ctx.lr = 0x820DC8F0;
	sub_82163EF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,1240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1240, ctx.r29.u32);
loc_820DC8F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820dc8c8
	if (!ctx.cr0.eq) goto loc_820DC8C8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc91c
	if (ctx.cr6.eq) goto loc_820DC91C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82129940
	ctx.lr = 0x820DC91C;
	sub_82129940(ctx, base);
loc_820DC91C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc934
	if (ctx.cr6.eq) goto loc_820DC934;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82167158
	ctx.lr = 0x820DC934;
	sub_82167158(ctx, base);
loc_820DC934:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc94c
	if (ctx.cr6.eq) goto loc_820DC94C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82169308
	ctx.lr = 0x820DC94C;
	sub_82169308(ctx, base);
loc_820DC94C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82081800
	ctx.lr = 0x820DC954;
	sub_82081800(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15460);
	// bl 0x8216d4e8
	ctx.lr = 0x820DC960;
	sub_8216D4E8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-1744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1744);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DC984"))) PPC_WEAK_FUNC(sub_820DC984);
PPC_FUNC_IMPL(__imp__sub_820DC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DC988"))) PPC_WEAK_FUNC(sub_820DC988);
PPC_FUNC_IMPL(__imp__sub_820DC988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DC990;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x82081b88
	ctx.lr = 0x820DC9C4;
	sub_82081B88(ctx, base);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// stb r29,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82081b98
	ctx.lr = 0x820DC9E4;
	sub_82081B98(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dc9f8
	if (ctx.cr6.eq) goto loc_820DC9F8;
	// bl 0x82080188
	ctx.lr = 0x820DC9F8;
	sub_82080188(ctx, base);
loc_820DC9F8:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-8552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8552);
	// bl 0x820b2c00
	ctx.lr = 0x820DCA04;
	sub_820B2C00(ctx, base);
	// lwz r3,-8552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8552);
	// bl 0x820b2eb0
	ctx.lr = 0x820DCA0C;
	sub_820B2EB0(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094d68
	ctx.lr = 0x820DCA18;
	sub_82094D68(ctx, base);
	// bl 0x821d1600
	ctx.lr = 0x820DCA1C;
	sub_821D1600(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r29,72
	ctx.r29.s64 = 72;
	// addi r11,r10,-20416
	ctx.r11.s64 = ctx.r10.s64 + -20416;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820DCA2C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dca4c
	if (ctx.cr6.eq) goto loc_820DCA4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DCA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DCA4C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r31,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r30.u32 = ea;
	// bne 0x820dca2c
	if (!ctx.cr0.eq) goto loc_820DCA2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DCA64"))) PPC_WEAK_FUNC(sub_820DCA64);
PPC_FUNC_IMPL(__imp__sub_820DCA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DCA68"))) PPC_WEAK_FUNC(sub_820DCA68);
PPC_FUNC_IMPL(__imp__sub_820DCA68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DCA84"))) PPC_WEAK_FUNC(sub_820DCA84);
PPC_FUNC_IMPL(__imp__sub_820DCA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DCA88"))) PPC_WEAK_FUNC(sub_820DCA88);
PPC_FUNC_IMPL(__imp__sub_820DCA88) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dcabc
	if (ctx.cr6.eq) goto loc_820DCABC;
	// bl 0x820e1cd8
	ctx.lr = 0x820DCAAC;
	sub_820E1CD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f1,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2758
	ctx.lr = 0x820DCABC;
	sub_820E2758(ctx, base);
loc_820DCABC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DCAD0"))) PPC_WEAK_FUNC(sub_820DCAD0);
PPC_FUNC_IMPL(__imp__sub_820DCAD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DCAE0"))) PPC_WEAK_FUNC(sub_820DCAE0);
PPC_FUNC_IMPL(__imp__sub_820DCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,50020
	ctx.r9.u64 = ctx.r11.u64 | 50020;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// lwsync 
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r3,-8472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8472, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DCB04"))) PPC_WEAK_FUNC(sub_820DCB04);
PPC_FUNC_IMPL(__imp__sub_820DCB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DCB08"))) PPC_WEAK_FUNC(sub_820DCB08);
PPC_FUNC_IMPL(__imp__sub_820DCB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-8472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8472, ctx.r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dcb54
	if (ctx.cr6.eq) goto loc_820DCB54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DCB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DCB54:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DCB70"))) PPC_WEAK_FUNC(sub_820DCB70);
PPC_FUNC_IMPL(__imp__sub_820DCB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DCB78;
	sub_82248784(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215c068
	ctx.lr = 0x820DCB94;
	sub_8215C068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DCB9C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCBA8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820DCBAC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820dcbc4
	if (ctx.cr6.eq) goto loc_820DCBC4;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82183448
	ctx.lr = 0x820DCBC0;
	sub_82183448(ctx, base);
	// b 0x820dcbcc
	goto loc_820DCBCC;
loc_820DCBC4:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x821845a0
	ctx.lr = 0x820DCBCC;
	sub_821845A0(ctx, base);
loc_820DCBCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dcbe0
	if (ctx.cr6.eq) goto loc_820DCBE0;
	// bl 0x820e21b0
	ctx.lr = 0x820DCBD8;
	sub_820E21B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820dcbe4
	goto loc_820DCBE4;
loc_820DCBE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820DCBE4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192f80
	ctx.lr = 0x820DCBF0;
	sub_82192F80(ctx, base);
	// li r30,16
	ctx.r30.s64 = 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820DCC00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dcc00
	if (!ctx.cr6.eq) goto loc_820DCC00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x820dcc34
	if (ctx.cr6.gt) goto loc_820DCC34;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_820DCC34:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x820DCC40;
	sub_82248A40(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192f80
	ctx.lr = 0x820DCC4C;
	sub_82192F80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dcca0
	if (ctx.cr6.eq) goto loc_820DCCA0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_820DCC60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dcc60
	if (!ctx.cr6.eq) goto loc_820DCC60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x820dcc94
	if (ctx.cr6.gt) goto loc_820DCC94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_820DCC94:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x820DCCA0;
	sub_82248A40(ctx, base);
loc_820DCCA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192b08
	ctx.lr = 0x820DCCA8;
	sub_82192B08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192b08
	ctx.lr = 0x820DCCB0;
	sub_82192B08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192f00
	ctx.lr = 0x820DCCBC;
	sub_82192F00(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82192f00
	ctx.lr = 0x820DCCCC;
	sub_82192F00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f1,f31
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x82192f00
	ctx.lr = 0x820DCCE4;
	sub_82192F00(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82192f00
	ctx.lr = 0x820DCD08;
	sub_82192F00(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192f00
	ctx.lr = 0x820DCD18;
	sub_82192F00(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x82192f00
	ctx.lr = 0x820DCD28;
	sub_82192F00(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x820e1dd0
	ctx.lr = 0x820DCD50;
	sub_820E1DD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192b08
	ctx.lr = 0x820DCD58;
	sub_82192B08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192b08
	ctx.lr = 0x820DCD60;
	sub_82192B08(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82192d88
	ctx.lr = 0x820DCD70;
	sub_82192D88(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// bl 0x82192b08
	ctx.lr = 0x820DCD80;
	sub_82192B08(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dcde8
	if (ctx.cr6.eq) goto loc_820DCDE8;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820dcda4
	if (!ctx.cr6.gt) goto loc_820DCDA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820DCDA4:
	// bl 0x82080d68
	ctx.lr = 0x820DCDA8;
	sub_82080D68(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820dcde8
	if (!ctx.cr6.gt) goto loc_820DCDE8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820DCDC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dcb70
	ctx.lr = 0x820DCDCC;
	sub_820DCB70(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820dcdc0
	if (ctx.cr6.lt) goto loc_820DCDC0;
loc_820DCDE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCDF0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_820DCE08"))) PPC_WEAK_FUNC(sub_820DCE08);
PPC_FUNC_IMPL(__imp__sub_820DCE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DCE10;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8215c068
	ctx.lr = 0x820DCE20;
	sub_8215C068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DCE28;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCE34;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820dce50
	if (!ctx.cr6.eq) goto loc_820DCE50;
loc_820DCE3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCE44;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820DCE50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dce3c
	if (ctx.cr6.eq) goto loc_820DCE3C;
	// lwz r3,188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DCE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820e1c48
	ctx.lr = 0x820DCE80;
	sub_820E1C48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dce3c
	if (ctx.cr6.eq) goto loc_820DCE3C;
	// bl 0x820e1c20
	ctx.lr = 0x820DCE90;
	sub_820E1C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dce3c
	if (ctx.cr6.eq) goto loc_820DCE3C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x820DCEA4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dceb8
	if (ctx.cr6.eq) goto loc_820DCEB8;
	// bl 0x820df298
	ctx.lr = 0x820DCEB0;
	sub_820DF298(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820dcebc
	goto loc_820DCEBC;
loc_820DCEB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820DCEBC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820dcedc
	if (!ctx.cr6.gt) goto loc_820DCEDC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820DCEDC:
	// bl 0x82080d68
	ctx.lr = 0x820DCEE0;
	sub_82080D68(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x820dcf24
	if (!ctx.cr6.gt) goto loc_820DCF24;
loc_820DCEF8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x820dcef8
	if (ctx.cr6.lt) goto loc_820DCEF8;
loc_820DCF24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCF2C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DCF38"))) PPC_WEAK_FUNC(sub_820DCF38);
PPC_FUNC_IMPL(__imp__sub_820DCF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DCF40;
	sub_82248784(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215c068
	ctx.lr = 0x820DCF50;
	sub_8215C068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DCF58;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCF64;
	sub_821837D0(ctx, base);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820DCF78;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820dcf98
	if (ctx.cr6.eq) goto loc_820DCF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820DCF8C;
	sub_8218AE98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dcfac
	if (!ctx.cr6.eq) goto loc_820DCFAC;
loc_820DCF98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DCFA0;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820DCFAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820DCFB8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820dcfd4
	if (ctx.cr6.eq) goto loc_820DCFD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820DCFCC;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820dcfd8
	goto loc_820DCFD8;
loc_820DCFD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820DCFD8:
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821929f8
	ctx.lr = 0x820DCFE8;
	sub_821929F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82192b08
	ctx.lr = 0x820DCFF0;
	sub_82192B08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820dd048
	if (ctx.cr6.eq) goto loc_820DD048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,16516
	ctx.r31.s64 = ctx.r11.s64 + 16516;
loc_820DD000:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82192f80
	ctx.lr = 0x820DD00C;
	sub_82192F80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a360
	ctx.lr = 0x820DD018;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dd038
	if (!ctx.cr6.eq) goto loc_820DD038;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dcb70
	ctx.lr = 0x820DD02C;
	sub_820DCB70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820dd038
	if (!ctx.cr6.eq) goto loc_820DD038;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820DD038:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82192b08
	ctx.lr = 0x820DD040;
	sub_82192B08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820dd000
	if (!ctx.cr6.eq) goto loc_820DD000;
loc_820DD048:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82192ab8
	ctx.lr = 0x820DD050;
	sub_82192AB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820DD05C;
	sub_82183E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DD064;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DD070"))) PPC_WEAK_FUNC(sub_820DD070);
PPC_FUNC_IMPL(__imp__sub_820DD070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DD078;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215c068
	ctx.lr = 0x820DD088;
	sub_8215C068(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820DD090;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DD09C;
	sub_821837D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dd0bc
	if (ctx.cr6.eq) goto loc_820DD0BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DD0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DD0BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820dcf38
	ctx.lr = 0x820DD0D0;
	sub_820DCF38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820DD0DC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DD0E4"))) PPC_WEAK_FUNC(sub_820DD0E4);
PPC_FUNC_IMPL(__imp__sub_820DD0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD0E8"))) PPC_WEAK_FUNC(sub_820DD0E8);
PPC_FUNC_IMPL(__imp__sub_820DD0E8) {
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
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,50030
	ctx.r4.u64 = ctx.r4.u64 | 50030;
	// bl 0x820dcad0
	ctx.lr = 0x820DD108;
	sub_820DCAD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-8468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8468, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD138"))) PPC_WEAK_FUNC(sub_820DD138);
PPC_FUNC_IMPL(__imp__sub_820DD138) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8468, ctx.r11.u32);
	// b 0x82144a70
	sub_82144A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD14C"))) PPC_WEAK_FUNC(sub_820DD14C);
PPC_FUNC_IMPL(__imp__sub_820DD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD150"))) PPC_WEAK_FUNC(sub_820DD150);
PPC_FUNC_IMPL(__imp__sub_820DD150) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dd180
	if (ctx.cr6.eq) goto loc_820DD180;
	// bl 0x820e1cd8
	ctx.lr = 0x820DD174;
	sub_820E1CD8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f1,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2758
	ctx.lr = 0x820DD180;
	sub_820E2758(ctx, base);
loc_820DD180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD194"))) PPC_WEAK_FUNC(sub_820DD194);
PPC_FUNC_IMPL(__imp__sub_820DD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD198"))) PPC_WEAK_FUNC(sub_820DD198);
PPC_FUNC_IMPL(__imp__sub_820DD198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD1B4"))) PPC_WEAK_FUNC(sub_820DD1B4);
PPC_FUNC_IMPL(__imp__sub_820DD1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD1B8"))) PPC_WEAK_FUNC(sub_820DD1B8);
PPC_FUNC_IMPL(__imp__sub_820DD1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820dd1f8
	if (!ctx.cr6.gt) goto loc_820DD1F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DD1D8:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f1,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820dd1d8
	if (ctx.cr6.lt) goto loc_820DD1D8;
loc_820DD1F8:
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD200"))) PPC_WEAK_FUNC(sub_820DD200);
PPC_FUNC_IMPL(__imp__sub_820DD200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// b 0x820ddc58
	sub_820DDC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD208"))) PPC_WEAK_FUNC(sub_820DD208);
PPC_FUNC_IMPL(__imp__sub_820DD208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// b 0x820ddaf8
	sub_820DDAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD210"))) PPC_WEAK_FUNC(sub_820DD210);
PPC_FUNC_IMPL(__imp__sub_820DD210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// b 0x820dd9a8
	sub_820DD9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD218"))) PPC_WEAK_FUNC(sub_820DD218);
PPC_FUNC_IMPL(__imp__sub_820DD218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820dddc0
	sub_820DDDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD220"))) PPC_WEAK_FUNC(sub_820DD220);
PPC_FUNC_IMPL(__imp__sub_820DD220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// b 0x820dd858
	sub_820DD858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD228"))) PPC_WEAK_FUNC(sub_820DD228);
PPC_FUNC_IMPL(__imp__sub_820DD228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-832
	ctx.r3.s64 = ctx.r3.s64 + -832;
	// b 0x820dd5b0
	sub_820DD5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD230"))) PPC_WEAK_FUNC(sub_820DD230);
PPC_FUNC_IMPL(__imp__sub_820DD230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd278
	if (ctx.cr6.eq) goto loc_820DD278;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820DD264:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820dd264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DD264;
	// lwz r3,-1736(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1736);
	// bl 0x821d1688
	ctx.lr = 0x820DD278;
	sub_821D1688(ctx, base);
loc_820DD278:
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

__attribute__((alias("__imp__sub_820DD290"))) PPC_WEAK_FUNC(sub_820DD290);
PPC_FUNC_IMPL(__imp__sub_820DD290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x820DD2BC;
	sub_821859A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r9,r10,16524
	ctx.r9.s64 = ctx.r10.s64 + 16524;
	// addi r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 34;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,798
	ctx.r5.s64 = 798;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// bl 0x82248f70
	ctx.lr = 0x820DD2F4;
	sub_82248F70(ctx, base);
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

__attribute__((alias("__imp__sub_820DD310"))) PPC_WEAK_FUNC(sub_820DD310);
PPC_FUNC_IMPL(__imp__sub_820DD310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,16524
	ctx.r10.s64 = ctx.r11.s64 + 16524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DD33C;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dd358
	if (ctx.cr6.eq) goto loc_820DD358;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DD354;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DD358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD370"))) PPC_WEAK_FUNC(sub_820DD370);
PPC_FUNC_IMPL(__imp__sub_820DD370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x820DD390;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dd3d4
	if (!ctx.cr6.eq) goto loc_820DD3D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DD3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DD3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820DD3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DD3D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD3E8"))) PPC_WEAK_FUNC(sub_820DD3E8);
PPC_FUNC_IMPL(__imp__sub_820DD3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821ad498
	ctx.lr = 0x820DD414;
	sub_821AD498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820DD420;
	sub_821AD1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x820DD42C;
	sub_821AD240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x820DD438;
	sub_821AD2D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad528
	ctx.lr = 0x820DD444;
	sub_821AD528(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad288
	ctx.lr = 0x820DD450;
	sub_821AD288(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// bl 0x821a2b58
	ctx.lr = 0x820DD45C;
	sub_821A2B58(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x820DD46C;
	sub_821AF640(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821afa00
	ctx.lr = 0x820DD478;
	sub_821AFA00(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD494"))) PPC_WEAK_FUNC(sub_820DD494);
PPC_FUNC_IMPL(__imp__sub_820DD494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD498"))) PPC_WEAK_FUNC(sub_820DD498);
PPC_FUNC_IMPL(__imp__sub_820DD498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820DD4C4;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820DD4D0;
	sub_821AD240(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// bl 0x821a2b00
	ctx.lr = 0x820DD4E0;
	sub_821A2B00(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820DD4F0;
	sub_821AF5E0(ctx, base);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x821af9a0
	ctx.lr = 0x820DD4FC;
	sub_821AF9A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD514"))) PPC_WEAK_FUNC(sub_820DD514);
PPC_FUNC_IMPL(__imp__sub_820DD514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD518"))) PPC_WEAK_FUNC(sub_820DD518);
PPC_FUNC_IMPL(__imp__sub_820DD518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820DD520;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd5a8
	if (ctx.cr6.eq) goto loc_820DD5A8;
	// addi r30,r3,34
	ctx.r30.s64 = ctx.r3.s64 + 34;
loc_820DD544:
	// lhz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r28,2337
	ctx.r9.s64 = ctx.r28.s64 + 2337;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x820dd574
	if (ctx.cr6.eq) goto loc_820DD574;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a27b0
	ctx.lr = 0x820DD570;
	sub_820A27B0(ctx, base);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_820DD574:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DD594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820dd544
	if (ctx.cr6.lt) goto loc_820DD544;
loc_820DD5A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820DD5B0"))) PPC_WEAK_FUNC(sub_820DD5B0);
PPC_FUNC_IMPL(__imp__sub_820DD5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16576
	ctx.r9.s64 = ctx.r11.s64 + 16576;
	// addi r8,r10,16544
	ctx.r8.s64 = ctx.r10.s64 + 16544;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DD5EC;
	sub_821883B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16524
	ctx.r6.s64 = ctx.r7.s64 + 16524;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DD600;
	sub_82185A50(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820dd61c
	if (ctx.cr6.eq) goto loc_820DD61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DD618;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DD61C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD634"))) PPC_WEAK_FUNC(sub_820DD634);
PPC_FUNC_IMPL(__imp__sub_820DD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD638"))) PPC_WEAK_FUNC(sub_820DD638);
PPC_FUNC_IMPL(__imp__sub_820DD638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r30.u16);
loc_820DD658:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce0b8
	ctx.lr = 0x820DD664;
	sub_820CE0B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce010
	ctx.lr = 0x820DD678;
	sub_820CE010(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dd6fc
	if (!ctx.cr6.eq) goto loc_820DD6FC;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820dd6fc
	if (ctx.cr6.eq) goto loc_820DD6FC;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// sthx r30,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u16);
loc_820DD6FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,399
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 399, ctx.xer);
	// blt cr6,0x820dd658
	if (ctx.cr6.lt) goto loc_820DD658;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820dd738
	if (ctx.cr0.lt) goto loc_820DD738;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820DD72C:
	// lhzu r9,-2(r11)
	// sthu r9,2(r10)
	// bdnz 0x820dd72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DD72C;
loc_820DD738:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD750"))) PPC_WEAK_FUNC(sub_820DD750);
PPC_FUNC_IMPL(__imp__sub_820DD750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820DD758;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad910
	ctx.lr = 0x820DD778;
	sub_821AD910(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x820DD784;
	sub_821A2A18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dd7b0
	if (ctx.cr6.eq) goto loc_820DD7B0;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x820dd7a4
	if (!ctx.cr6.eq) goto loc_820DD7A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x820dd7d4
	if (ctx.cr6.eq) goto loc_820DD7D4;
loc_820DD7A4:
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x820dd7cc
	goto loc_820DD7CC;
loc_820DD7B0:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x820dd7c4
	if (!ctx.cr6.eq) goto loc_820DD7C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x820dd7d4
	if (ctx.cr6.eq) goto loc_820DD7D4;
loc_820DD7C4:
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,32
	ctx.r4.s64 = 32;
loc_820DD7CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad8c8
	ctx.lr = 0x820DD7D4;
	sub_821AD8C8(ctx, base);
loc_820DD7D4:
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd850
	if (ctx.cr6.eq) goto loc_820DD850;
	// addi r29,r31,34
	ctx.r29.s64 = ctx.r31.s64 + 34;
loc_820DD7EC:
	// lhz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r28,2337
	ctx.r9.s64 = ctx.r28.s64 + 2337;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820dd81c
	if (ctx.cr6.eq) goto loc_820DD81C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a27b0
	ctx.lr = 0x820DD818;
	sub_820A27B0(ctx, base);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_820DD81C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DD83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820dd7ec
	if (ctx.cr6.lt) goto loc_820DD7EC;
loc_820DD850:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820DD858"))) PPC_WEAK_FUNC(sub_820DD858);
PPC_FUNC_IMPL(__imp__sub_820DD858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16628
	ctx.r9.s64 = ctx.r11.s64 + 16628;
	// addi r8,r10,16596
	ctx.r8.s64 = ctx.r10.s64 + 16596;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DD894;
	sub_821883B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16524
	ctx.r6.s64 = ctx.r7.s64 + 16524;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DD8A8;
	sub_82185A50(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820dd8c4
	if (ctx.cr6.eq) goto loc_820DD8C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DD8C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DD8C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD8DC"))) PPC_WEAK_FUNC(sub_820DD8DC);
PPC_FUNC_IMPL(__imp__sub_820DD8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DD8E0"))) PPC_WEAK_FUNC(sub_820DD8E0);
PPC_FUNC_IMPL(__imp__sub_820DD8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// sth r30,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r30.u16);
loc_820DD900:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce0b8
	ctx.lr = 0x820DD90C;
	sub_820CE0B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dd974
	if (ctx.cr6.eq) goto loc_820DD974;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce010
	ctx.lr = 0x820DD920;
	sub_820CE010(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820dd974
	if (!ctx.cr6.eq) goto loc_820DD974;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dd974
	if (ctx.cr6.eq) goto loc_820DD974;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820dd974
	if (ctx.cr6.eq) goto loc_820DD974;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd974
	if (ctx.cr6.eq) goto loc_820DD974;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
loc_820DD974:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,399
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 399, ctx.xer);
	// blt cr6,0x820dd900
	if (ctx.cr6.lt) goto loc_820DD900;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DD998"))) PPC_WEAK_FUNC(sub_820DD998);
PPC_FUNC_IMPL(__imp__sub_820DD998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,16844
	ctx.r4.s64 = ctx.r11.s64 + 16844;
	// b 0x820dd518
	sub_820DD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DD9A8"))) PPC_WEAK_FUNC(sub_820DD9A8);
PPC_FUNC_IMPL(__imp__sub_820DD9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16680
	ctx.r9.s64 = ctx.r11.s64 + 16680;
	// addi r8,r10,16648
	ctx.r8.s64 = ctx.r10.s64 + 16648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DD9E4;
	sub_821883B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16524
	ctx.r6.s64 = ctx.r7.s64 + 16524;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DD9F8;
	sub_82185A50(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820dda14
	if (ctx.cr6.eq) goto loc_820DDA14;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DDA10;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DDA14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDA2C"))) PPC_WEAK_FUNC(sub_820DDA2C);
PPC_FUNC_IMPL(__imp__sub_820DDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDA30"))) PPC_WEAK_FUNC(sub_820DDA30);
PPC_FUNC_IMPL(__imp__sub_820DDA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// sth r30,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r30.u16);
loc_820DDA50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce0b8
	ctx.lr = 0x820DDA5C;
	sub_820CE0B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ddac4
	if (ctx.cr6.eq) goto loc_820DDAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce010
	ctx.lr = 0x820DDA70;
	sub_820CE010(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ddac4
	if (!ctx.cr6.eq) goto loc_820DDAC4;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ddac4
	if (ctx.cr6.eq) goto loc_820DDAC4;
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820ddac4
	if (ctx.cr6.eq) goto loc_820DDAC4;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddac4
	if (ctx.cr6.eq) goto loc_820DDAC4;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
loc_820DDAC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,399
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 399, ctx.xer);
	// blt cr6,0x820dda50
	if (ctx.cr6.lt) goto loc_820DDA50;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDAE8"))) PPC_WEAK_FUNC(sub_820DDAE8);
PPC_FUNC_IMPL(__imp__sub_820DDAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16884
	ctx.r4.s64 = ctx.r11.s64 + 16884;
	// b 0x820dd518
	sub_820DD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDAF8"))) PPC_WEAK_FUNC(sub_820DDAF8);
PPC_FUNC_IMPL(__imp__sub_820DDAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16732
	ctx.r9.s64 = ctx.r11.s64 + 16732;
	// addi r8,r10,16700
	ctx.r8.s64 = ctx.r10.s64 + 16700;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DDB34;
	sub_821883B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16524
	ctx.r6.s64 = ctx.r7.s64 + 16524;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DDB48;
	sub_82185A50(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ddb64
	if (ctx.cr6.eq) goto loc_820DDB64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DDB60;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DDB64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDB7C"))) PPC_WEAK_FUNC(sub_820DDB7C);
PPC_FUNC_IMPL(__imp__sub_820DDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDB80"))) PPC_WEAK_FUNC(sub_820DDB80);
PPC_FUNC_IMPL(__imp__sub_820DDB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// sth r30,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r30.u16);
loc_820DDBA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce0b8
	ctx.lr = 0x820DDBAC;
	sub_820CE0B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ddc18
	if (ctx.cr6.eq) goto loc_820DDC18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce010
	ctx.lr = 0x820DDBC0;
	sub_820CE010(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ddc18
	if (!ctx.cr6.eq) goto loc_820DDC18;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ddc18
	if (ctx.cr6.eq) goto loc_820DDC18;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820ddc18
	if (ctx.cr6.eq) goto loc_820DDC18;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ddc18
	if (ctx.cr6.eq) goto loc_820DDC18;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
loc_820DDC18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,399
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 399, ctx.xer);
	// blt cr6,0x820ddba0
	if (ctx.cr6.lt) goto loc_820DDBA0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDC3C"))) PPC_WEAK_FUNC(sub_820DDC3C);
PPC_FUNC_IMPL(__imp__sub_820DDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDC40"))) PPC_WEAK_FUNC(sub_820DDC40);
PPC_FUNC_IMPL(__imp__sub_820DDC40) {
	PPC_FUNC_PROLOGUE();
	// b 0x820dd3e8
	sub_820DD3E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDC44"))) PPC_WEAK_FUNC(sub_820DDC44);
PPC_FUNC_IMPL(__imp__sub_820DDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDC48"))) PPC_WEAK_FUNC(sub_820DDC48);
PPC_FUNC_IMPL(__imp__sub_820DDC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,16924
	ctx.r4.s64 = ctx.r11.s64 + 16924;
	// b 0x820dd518
	sub_820DD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDC58"))) PPC_WEAK_FUNC(sub_820DDC58);
PPC_FUNC_IMPL(__imp__sub_820DDC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16784
	ctx.r9.s64 = ctx.r11.s64 + 16784;
	// addi r8,r10,16752
	ctx.r8.s64 = ctx.r10.s64 + 16752;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,832
	ctx.r3.s64 = ctx.r3.s64 + 832;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DDC94;
	sub_821883B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16524
	ctx.r6.s64 = ctx.r7.s64 + 16524;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x82185a50
	ctx.lr = 0x820DDCA8;
	sub_82185A50(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ddcc4
	if (ctx.cr6.eq) goto loc_820DDCC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DDCC0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DDCC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDCDC"))) PPC_WEAK_FUNC(sub_820DDCDC);
PPC_FUNC_IMPL(__imp__sub_820DDCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDCE0"))) PPC_WEAK_FUNC(sub_820DDCE0);
PPC_FUNC_IMPL(__imp__sub_820DDCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// sth r30,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r30.u16);
loc_820DDD00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce0b8
	ctx.lr = 0x820DDD0C;
	sub_820CE0B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ddd84
	if (ctx.cr6.eq) goto loc_820DDD84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820ce010
	ctx.lr = 0x820DDD20;
	sub_820CE010(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ddd84
	if (!ctx.cr6.eq) goto loc_820DDD84;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ddd84
	if (ctx.cr6.eq) goto loc_820DDD84;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820ddd84
	if (ctx.cr6.eq) goto loc_820DDD84;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ddd68
	if (!ctx.cr6.eq) goto loc_820DDD68;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddd84
	if (ctx.cr6.eq) goto loc_820DDD84;
loc_820DDD68:
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r9,r11,17
	ctx.r9.s64 = ctx.r11.s64 + 17;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
loc_820DDD84:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,399
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 399, ctx.xer);
	// blt cr6,0x820ddd00
	if (ctx.cr6.lt) goto loc_820DDD00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDDA8"))) PPC_WEAK_FUNC(sub_820DDDA8);
PPC_FUNC_IMPL(__imp__sub_820DDDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,16956
	ctx.r4.s64 = ctx.r11.s64 + 16956;
	// b 0x820dd518
	sub_820DD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDDB8"))) PPC_WEAK_FUNC(sub_820DDDB8);
PPC_FUNC_IMPL(__imp__sub_820DDDB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820dd498
	sub_820DD498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DDDBC"))) PPC_WEAK_FUNC(sub_820DDDBC);
PPC_FUNC_IMPL(__imp__sub_820DDDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDDC0"))) PPC_WEAK_FUNC(sub_820DDDC0);
PPC_FUNC_IMPL(__imp__sub_820DDDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,16836
	ctx.r9.s64 = ctx.r11.s64 + 16836;
	// addi r8,r10,16804
	ctx.r8.s64 = ctx.r10.s64 + 16804;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DDDFC;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820DDE04;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820dde20
	if (ctx.cr6.eq) goto loc_820DDE20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DDE1C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DDE20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DDE38"))) PPC_WEAK_FUNC(sub_820DDE38);
PPC_FUNC_IMPL(__imp__sub_820DDE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820DDE40;
	sub_82248780(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ddf1c
	if (!ctx.cr6.gt) goto loc_820DDF1C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r10,144
	ctx.r31.s64 = ctx.r10.s64 + 144;
	// addi r28,r11,8800
	ctx.r28.s64 = ctx.r11.s64 + 8800;
loc_820DDE70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ddf00
	if (ctx.cr6.eq) goto loc_820DDF00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x82248a40
	ctx.lr = 0x820DDE90;
	sub_82248A40(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_820DDEA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820DDEB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x820dded8
	if (ctx.cr6.eq) goto loc_820DDED8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ddeb4
	if (ctx.cr6.eq) goto loc_820DDEB4;
loc_820DDED8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820ddeec
	if (!ctx.cr6.eq) goto loc_820DDEEC;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
loc_820DDEEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820ddea4
	if (ctx.cr6.lt) goto loc_820DDEA4;
loc_820DDF00:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bne 0x820dde70
	if (!ctx.cr0.eq) goto loc_820DDE70;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820ddf24
	if (ctx.cr6.gt) goto loc_820DDF24;
loc_820DDF1C:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820ddf28
	goto loc_820DDF28;
loc_820DDF24:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_820DDF28:
	// bl 0x82183850
	ctx.lr = 0x820DDF2C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ddf44
	if (ctx.cr6.eq) goto loc_820DDF44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820DDF40;
	sub_82183448(ctx, base);
	// b 0x820ddf50
	goto loc_820DDF50;
loc_820DDF44:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820DDF50;
	sub_821845A0(ctx, base);
loc_820DDF50:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821847a8
	ctx.lr = 0x820DDF64;
	sub_821847A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820DDF6C"))) PPC_WEAK_FUNC(sub_820DDF6C);
PPC_FUNC_IMPL(__imp__sub_820DDF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDF70"))) PPC_WEAK_FUNC(sub_820DDF70);
PPC_FUNC_IMPL(__imp__sub_820DDF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820dd290
	ctx.lr = 0x820DDF94;
	sub_820DD290(ctx, base);
	// lis r4,21316
	ctx.r4.s64 = 1396965376;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19504
	ctx.r4.u64 = ctx.r4.u64 | 19504;
	// bl 0x82188378
	ctx.lr = 0x820DDFA8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r31.u32);
	// addi r9,r11,16576
	ctx.r9.s64 = ctx.r11.s64 + 16576;
	// addi r8,r10,16544
	ctx.r8.s64 = ctx.r10.s64 + 16544;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820dd638
	ctx.lr = 0x820DDFD0;
	sub_820DD638(ctx, base);
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

__attribute__((alias("__imp__sub_820DDFEC"))) PPC_WEAK_FUNC(sub_820DDFEC);
PPC_FUNC_IMPL(__imp__sub_820DDFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DDFF0"))) PPC_WEAK_FUNC(sub_820DDFF0);
PPC_FUNC_IMPL(__imp__sub_820DDFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820dd290
	ctx.lr = 0x820DE014;
	sub_820DD290(ctx, base);
	// lis r4,21316
	ctx.r4.s64 = 1396965376;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x82188378
	ctx.lr = 0x820DE028;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r31.u32);
	// addi r9,r11,16628
	ctx.r9.s64 = ctx.r11.s64 + 16628;
	// addi r8,r10,16596
	ctx.r8.s64 = ctx.r10.s64 + 16596;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820dd8e0
	ctx.lr = 0x820DE050;
	sub_820DD8E0(ctx, base);
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

__attribute__((alias("__imp__sub_820DE06C"))) PPC_WEAK_FUNC(sub_820DE06C);
PPC_FUNC_IMPL(__imp__sub_820DE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE070"))) PPC_WEAK_FUNC(sub_820DE070);
PPC_FUNC_IMPL(__imp__sub_820DE070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820dd290
	ctx.lr = 0x820DE094;
	sub_820DD290(ctx, base);
	// lis r4,21316
	ctx.r4.s64 = 1396965376;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x82188378
	ctx.lr = 0x820DE0A8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r31.u32);
	// addi r9,r11,16680
	ctx.r9.s64 = ctx.r11.s64 + 16680;
	// addi r8,r10,16648
	ctx.r8.s64 = ctx.r10.s64 + 16648;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820dda30
	ctx.lr = 0x820DE0D0;
	sub_820DDA30(ctx, base);
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

__attribute__((alias("__imp__sub_820DE0EC"))) PPC_WEAK_FUNC(sub_820DE0EC);
PPC_FUNC_IMPL(__imp__sub_820DE0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE0F0"))) PPC_WEAK_FUNC(sub_820DE0F0);
PPC_FUNC_IMPL(__imp__sub_820DE0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820dd290
	ctx.lr = 0x820DE114;
	sub_820DD290(ctx, base);
	// lis r4,17235
	ctx.r4.s64 = 1129512960;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17488
	ctx.r4.u64 = ctx.r4.u64 | 17488;
	// bl 0x82188378
	ctx.lr = 0x820DE128;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r31.u32);
	// addi r9,r11,16732
	ctx.r9.s64 = ctx.r11.s64 + 16732;
	// addi r8,r10,16700
	ctx.r8.s64 = ctx.r10.s64 + 16700;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ddb80
	ctx.lr = 0x820DE150;
	sub_820DDB80(ctx, base);
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

__attribute__((alias("__imp__sub_820DE16C"))) PPC_WEAK_FUNC(sub_820DE16C);
PPC_FUNC_IMPL(__imp__sub_820DE16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE170"))) PPC_WEAK_FUNC(sub_820DE170);
PPC_FUNC_IMPL(__imp__sub_820DE170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820dd290
	ctx.lr = 0x820DE194;
	sub_820DD290(ctx, base);
	// lis r4,21316
	ctx.r4.s64 = 1396965376;
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20547
	ctx.r4.u64 = ctx.r4.u64 | 20547;
	// bl 0x82188378
	ctx.lr = 0x820DE1A8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r31.u32);
	// addi r9,r11,16784
	ctx.r9.s64 = ctx.r11.s64 + 16784;
	// addi r8,r10,16752
	ctx.r8.s64 = ctx.r10.s64 + 16752;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ddce0
	ctx.lr = 0x820DE1D0;
	sub_820DDCE0(ctx, base);
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

__attribute__((alias("__imp__sub_820DE1EC"))) PPC_WEAK_FUNC(sub_820DE1EC);
PPC_FUNC_IMPL(__imp__sub_820DE1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE1F0"))) PPC_WEAK_FUNC(sub_820DE1F0);
PPC_FUNC_IMPL(__imp__sub_820DE1F0) {
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
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// ldx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x821af690
	ctx.lr = 0x820DE228;
	sub_821AF690(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x820de25c
	if (!ctx.cr6.gt) goto loc_820DE25C;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x820de258
	if (ctx.cr6.lt) goto loc_820DE258;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
loc_820DE258:
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
loc_820DE25C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7460(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x820DE26C;
	sub_821A2A60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820de384
	if (ctx.cr6.eq) goto loc_820DE384;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x820de318
	if (ctx.cr6.eq) goto loc_820DE318;
	// ld r10,608(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 608);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,608
	ctx.r8.s64 = ctx.r11.s64 + 608;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r7,616(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 616);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820a42e0
	ctx.lr = 0x820DE2CC;
	sub_820A42E0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,17000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820a42e0
	ctx.lr = 0x820DE318;
	sub_820A42E0(ctx, base);
loc_820DE318:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,8308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8308);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,3688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3688);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8332(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8332);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16996(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16996);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x821af760
	ctx.lr = 0x820DE36C;
	sub_821AF760(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af820
	ctx.lr = 0x820DE378;
	sub_821AF820(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af8e0
	ctx.lr = 0x820DE384;
	sub_821AF8E0(ctx, base);
loc_820DE384:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_820DE3A0"))) PPC_WEAK_FUNC(sub_820DE3A0);
PPC_FUNC_IMPL(__imp__sub_820DE3A0) {
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
	// bl 0x82092930
	ctx.lr = 0x820DE3B8;
	sub_82092930(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,-7468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7468);
	// bl 0x821a75f0
	ctx.lr = 0x820DE3D0;
	sub_821A75F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de408
	if (ctx.cr6.eq) goto loc_820DE408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DE3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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
loc_820DE408:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DE424"))) PPC_WEAK_FUNC(sub_820DE424);
PPC_FUNC_IMPL(__imp__sub_820DE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE428"))) PPC_WEAK_FUNC(sub_820DE428);
PPC_FUNC_IMPL(__imp__sub_820DE428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DE430;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820de514
	if (!ctx.cr6.lt) goto loc_820DE514;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820de46c
	if (!ctx.cr6.gt) goto loc_820DE46C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820DE46C:
	// bl 0x82080d68
	ctx.lr = 0x820DE470;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x820de4b8
	if (ctx.cr6.eq) goto loc_820DE4B8;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820de4b0
	if (ctx.cr0.lt) goto loc_820DE4B0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DE490:
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
	// stwu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820de490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DE490;
loc_820DE4B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820de4bc
	goto loc_820DE4BC;
loc_820DE4B8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820DE4BC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820de4ec
	if (ctx.cr6.eq) goto loc_820DE4EC;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
loc_820DE4D0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bne cr6,0x820de4d0
	if (!ctx.cr6.eq) goto loc_820DE4D0;
loc_820DE4EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de504
	if (ctx.cr6.eq) goto loc_820DE504;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820DE500;
	sub_82183E40(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_820DE504:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820DE514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DE52C"))) PPC_WEAK_FUNC(sub_820DE52C);
PPC_FUNC_IMPL(__imp__sub_820DE52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DE530"))) PPC_WEAK_FUNC(sub_820DE530);
PPC_FUNC_IMPL(__imp__sub_820DE530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DE538;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// addi r9,r11,17036
	ctx.r9.s64 = ctx.r11.s64 + 17036;
	// addi r8,r10,17004
	ctx.r8.s64 = ctx.r10.s64 + 17004;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de580
	if (ctx.cr6.eq) goto loc_820DE580;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af5e0
	ctx.lr = 0x820DE574;
	sub_821AF5E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7460);
	// bl 0x821af530
	ctx.lr = 0x820DE580;
	sub_821AF530(ctx, base);
loc_820DE580:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r30,-7480(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ae380
	ctx.lr = 0x820DE594;
	sub_821AE380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x821ae208
	ctx.lr = 0x820DE5A0;
	sub_821AE208(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x820de3a0
	ctx.lr = 0x820DE5A8;
	sub_820DE3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821883b8
	ctx.lr = 0x820DE5B0;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x820DE5B8;
	sub_82185A50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DE5C0"))) PPC_WEAK_FUNC(sub_820DE5C0);
PPC_FUNC_IMPL(__imp__sub_820DE5C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820decd0
	sub_820DECD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DE5C8"))) PPC_WEAK_FUNC(sub_820DE5C8);
PPC_FUNC_IMPL(__imp__sub_820DE5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x820DE5D0;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249920
	ctx.lr = 0x820DE5D8;
	sub_82249920(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-8976(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deba4
	if (ctx.cr6.eq) goto loc_820DEBA4;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820de624
	if (!ctx.cr6.eq) goto loc_820DE624;
loc_820DE5FC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-7460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820deba4
	if (ctx.cr6.eq) goto loc_820DEBA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af5e0
	ctx.lr = 0x820DE614;
	sub_821AF5E0(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8224996c
	ctx.lr = 0x820DE620;
	sub_8224996C(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_820DE624:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r28,-444(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + -444);
	// lwz r10,-4984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4984);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bne cr6,0x820de65c
	if (!ctx.cr6.eq) goto loc_820DE65C;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82161148
	ctx.lr = 0x820DE650;
	sub_82161148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820de66c
	if (!ctx.cr6.eq) goto loc_820DE66C;
loc_820DE65C:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82161148
	ctx.lr = 0x820DE668;
	sub_82161148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_820DE66C:
	// lwz r3,-444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -444);
	// bl 0x82161060
	ctx.lr = 0x820DE674;
	sub_82161060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de5fc
	if (ctx.cr6.eq) goto loc_820DE5FC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,17044
	ctx.r4.s64 = ctx.r10.s64 + 17044;
	// lwz r28,-19048(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x8218a540
	ctx.lr = 0x820DE698;
	sub_8218A540(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r11,-8976(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8976);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// stb r9,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r9.u8);
	// lwz r4,16020(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// bl 0x821a1790
	ctx.lr = 0x820DE6B8;
	sub_821A1790(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82092930
	ctx.lr = 0x820DE6C0;
	sub_82092930(ctx, base);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820de5fc
	if (ctx.cr6.eq) goto loc_820DE5FC;
	// addi r25,r30,76
	ctx.r25.s64 = ctx.r30.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// bl 0x821a9d78
	ctx.lr = 0x820DE6E4;
	sub_821A9D78(ctx, base);
	// addi r24,r30,80
	ctx.r24.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821a9ea8
	ctx.lr = 0x820DE6F4;
	sub_821A9EA8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r23,300(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// stw r11,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r11.u32);
	// lwz r22,304(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r10.u32);
	// bl 0x821a9ce8
	ctx.lr = 0x820DE71C;
	sub_821A9CE8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r31,-7488(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x820DE72C;
	sub_821ADDC0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820DE738;
	sub_821ADD20(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820DE744;
	sub_821ADC30(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x820DE750;
	sub_821ADC58(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x820DE75C;
	sub_821ADCA8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820DE768;
	sub_821ADCD0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x820DE774;
	sub_821ADD70(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x820DE784;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x820DE790;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820DE79C;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x820DE7A8;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad288
	ctx.lr = 0x820DE7B4;
	sub_821AD288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad2d0
	ctx.lr = 0x820DE7C0;
	sub_821AD2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad528
	ctx.lr = 0x820DE7CC;
	sub_821AD528(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x820DE7DC;
	sub_821AD6A0(ctx, base);
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
	// lfs f26,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f26.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x820DE804;
	sub_821A9FE8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821b29d0
	ctx.lr = 0x820DE80C;
	sub_821B29D0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lfs f0,8060(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// li r26,0
	ctx.r26.s64 = 0;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmuls f28,f6,f0
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fdivs f27,f26,f7
	ctx.f27.f64 = double(float(ctx.f26.f64 / ctx.f7.f64));
	// bl 0x821d25f8
	ctx.lr = 0x820DE878;
	sub_821D25F8(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r7.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r6,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// bl 0x820dd230
	ctx.lr = 0x820DE890;
	sub_820DD230(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r29,288
	ctx.r29.s64 = ctx.r29.s64 + 288;
	// li r14,255
	ctx.r14.s64 = 255;
	// lfs f30,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820DE8AC:
	// lfs f0,320(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820de8d0
	if (!ctx.cr6.eq) goto loc_820DE8D0;
	// lfs f0,324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820de8d0
	if (!ctx.cr6.eq) goto loc_820DE8D0;
	// lfs f0,328(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820dea54
	if (ctx.cr6.eq) goto loc_820DEA54;
loc_820DE8D0:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820de9c4
	if (!ctx.cr6.eq) goto loc_820DE9C4;
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82160e88
	ctx.lr = 0x820DE8F0;
	sub_82160E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820de928
	if (ctx.cr6.lt) goto loc_820DE928;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bge cr6,0x820de928
	if (!ctx.cr6.lt) goto loc_820DE928;
	// bl 0x820ecc38
	ctx.lr = 0x820DE904;
	sub_820ECC38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820de928
	if (ctx.cr6.eq) goto loc_820DE928;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de928
	if (ctx.cr6.eq) goto loc_820DE928;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
loc_820DE928:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82160e98
	ctx.lr = 0x820DE940;
	sub_82160E98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82092930
	ctx.lr = 0x820DE948;
	sub_82092930(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820de9b8
	if (ctx.cr6.eq) goto loc_820DE9B8;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82160e98
	ctx.lr = 0x820DE96C;
	sub_82160E98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x821d25f8
	ctx.lr = 0x820DE97C;
	sub_821D25F8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// stfs f10,512(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,516(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// b 0x820de9c4
	goto loc_820DE9C4;
loc_820DE9B8:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x821d25f8
	ctx.lr = 0x820DE9C4;
	sub_821D25F8(ctx, base);
loc_820DE9C4:
	// lfs f12,320(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f0,328(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stw r14,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r14.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f7.u64);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fctiwz f8,f13
	ctx.f8.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f8.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f6.u64);
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f27
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// fmuls f0,f5,f27
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmadds f1,f2,f29,f29
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 + ctx.f29.f64));
	// fmadds f2,f0,f28,f28
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f28.f64));
	// bl 0x821d1718
	ctx.lr = 0x820DEA34;
	sub_821D1718(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f3,168(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d1a98
	ctx.lr = 0x820DEA48;
	sub_821D1A98(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821b6008
	ctx.lr = 0x820DEA50;
	sub_821B6008(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_820DEA54:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r27,10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 10, ctx.xer);
	// blt cr6,0x820de8ac
	if (ctx.cr6.lt) goto loc_820DE8AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821aa098
	ctx.lr = 0x820DEA98;
	sub_821AA098(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a9fe8
	ctx.lr = 0x820DEAB8;
	sub_821A9FE8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a9ce8
	ctx.lr = 0x820DEAC8;
	sub_821A9CE8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a9e08
	ctx.lr = 0x820DEAD4;
	sub_821A9E08(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deaec
	if (ctx.cr6.eq) goto loc_820DEAEC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a9f48
	ctx.lr = 0x820DEAEC;
	sub_821A9F48(ctx, base);
loc_820DEAEC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820deb04
	if (ctx.cr6.eq) goto loc_820DEB04;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a9f48
	ctx.lr = 0x820DEB04;
	sub_821A9F48(ctx, base);
loc_820DEB04:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820DEB10;
	sub_821AD600(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820DEB1C;
	sub_821AD498(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x820DEB28;
	sub_821AD288(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820DEB34;
	sub_821AD1F8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820DEB40;
	sub_821AD240(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820DEB4C;
	sub_821AD2D0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820DEB58;
	sub_821AD528(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// stw r23,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r23.u32);
	// stw r22,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r22.u32);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820deb84
	if (ctx.cr6.eq) goto loc_820DEB84;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x821af530
	ctx.lr = 0x820DEB78;
	sub_821AF530(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// bl 0x821af5e0
	ctx.lr = 0x820DEB84;
	sub_821AF5E0(ctx, base);
loc_820DEB84:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820deb9c
	if (ctx.cr6.eq) goto loc_820DEB9C;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x821d16c0
	ctx.lr = 0x820DEB9C;
	sub_821D16C0(ctx, base);
loc_820DEB9C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821b1dc0
	ctx.lr = 0x820DEBA4;
	sub_821B1DC0(ctx, base);
loc_820DEBA4:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8224996c
	ctx.lr = 0x820DEBB0;
	sub_8224996C(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DEBB4"))) PPC_WEAK_FUNC(sub_820DEBB4);
PPC_FUNC_IMPL(__imp__sub_820DEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEBB8"))) PPC_WEAK_FUNC(sub_820DEBB8);
PPC_FUNC_IMPL(__imp__sub_820DEBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820DEBC0;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820DEBD8;
	sub_82185740(ctx, base);
	// lis r4,17235
	ctx.r4.s64 = 1129512960;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// bl 0x82188378
	ctx.lr = 0x820DEBEC;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r8,r11,16836
	ctx.r8.s64 = ctx.r11.s64 + 16836;
	// addi r7,r9,16804
	ctx.r7.s64 = ctx.r9.s64 + 16804;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r7,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r7.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820DEC18:
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
	// stwu r25,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dec18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DEC18;
	// stw r28,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r28.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,17056
	ctx.r4.s64 = ctx.r11.s64 + 17056;
	// bl 0x8218a540
	ctx.lr = 0x820DEC4C;
	sub_8218A540(ctx, base);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// li r27,10
	ctx.r27.s64 = 10;
	// ori r29,r11,52429
	ctx.r29.u64 = ctx.r11.u64 | 52429;
loc_820DEC60:
	// mulhwu r11,r31,r29
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r29.u32)) >> 32;
	// lwz r4,16020(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16020);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r10,r31,r27
	ctx.r10.u32 = ctx.r31.u32 / ctx.r27.u32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// bl 0x821a1790
	ctx.lr = 0x820DEC9C;
	sub_821A1790(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// stwu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// blt cr6,0x820dec60
	if (ctx.cr6.lt) goto loc_820DEC60;
	// stw r25,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r25,308(r28)
	PPC_STORE_U32(ctx.r28.u32 + 308, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820DECCC"))) PPC_WEAK_FUNC(sub_820DECCC);
PPC_FUNC_IMPL(__imp__sub_820DECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DECD0"))) PPC_WEAK_FUNC(sub_820DECD0);
PPC_FUNC_IMPL(__imp__sub_820DECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820de530
	ctx.lr = 0x820DECF0;
	sub_820DE530(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ded0c
	if (ctx.cr6.eq) goto loc_820DED0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DED08;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DED0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DED24"))) PPC_WEAK_FUNC(sub_820DED24);
PPC_FUNC_IMPL(__imp__sub_820DED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DED28"))) PPC_WEAK_FUNC(sub_820DED28);
PPC_FUNC_IMPL(__imp__sub_820DED28) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,-7468(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7468);
	// bl 0x82112458
	ctx.lr = 0x820DED78;
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

__attribute__((alias("__imp__sub_820DEDCC"))) PPC_WEAK_FUNC(sub_820DEDCC);
PPC_FUNC_IMPL(__imp__sub_820DEDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEDD0"))) PPC_WEAK_FUNC(sub_820DEDD0);
PPC_FUNC_IMPL(__imp__sub_820DEDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DEDD8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x820DEDF0;
	sub_821859A0(ctx, base);
	// lis r4,21328
	ctx.r4.s64 = 1397751808;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17491
	ctx.r4.u64 = ctx.r4.u64 | 17491;
	// bl 0x82188378
	ctx.lr = 0x820DEE04;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,17036
	ctx.r9.s64 = ctx.r11.s64 + 17036;
	// addi r8,r10,17004
	ctx.r8.s64 = ctx.r10.s64 + 17004;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// lwz r3,-19048(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x820DEE50;
	sub_821A2548(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r9,300
	ctx.r9.s64 = 300;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
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
	// li r4,512
	ctx.r4.s64 = 512;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8226b2c0
	ctx.lr = 0x820DEE8C;
	sub_8226B2C0(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x820DEE98;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x820DEEA4;
	sub_820DED28(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x82092930
	ctx.lr = 0x820DEEC0;
	sub_82092930(ctx, base);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820def00
	if (ctx.cr6.eq) goto loc_820DEF00;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DEF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DEF00:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184800
	ctx.lr = 0x820DEF10;
	sub_82184800(ctx, base);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// bl 0x8226b3e0
	ctx.lr = 0x820DEF2C;
	sub_8226B3E0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DEF50"))) PPC_WEAK_FUNC(sub_820DEF50);
PPC_FUNC_IMPL(__imp__sub_820DEF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DEF78"))) PPC_WEAK_FUNC(sub_820DEF78);
PPC_FUNC_IMPL(__imp__sub_820DEF78) {
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
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,22082
	ctx.r4.u64 = ctx.r4.u64 | 22082;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820DEF9C;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,17064
	ctx.r8.s64 = ctx.r9.s64 + 17064;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820DEFEC"))) PPC_WEAK_FUNC(sub_820DEFEC);
PPC_FUNC_IMPL(__imp__sub_820DEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DEFF0"))) PPC_WEAK_FUNC(sub_820DEFF0);
PPC_FUNC_IMPL(__imp__sub_820DEFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,17064
	ctx.r10.s64 = ctx.r11.s64 + 17064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820DF01C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820df038
	if (ctx.cr6.eq) goto loc_820DF038;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DF034;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DF038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF050"))) PPC_WEAK_FUNC(sub_820DF050);
PPC_FUNC_IMPL(__imp__sub_820DF050) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820df140
	if (ctx.cr6.eq) goto loc_820DF140;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lwz r10,-4900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df140
	if (ctx.cr6.eq) goto loc_820DF140;
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df09c
	if (ctx.cr6.eq) goto loc_820DF09C;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x820df0a0
	goto loc_820DF0A0;
loc_820DF09C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820DF0A0:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820df0c0
	if (!ctx.cr6.gt) goto loc_820DF0C0;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x820df0cc
	goto loc_820DF0CC;
loc_820DF0C0:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820df140
	if (ctx.cr6.eq) goto loc_820DF140;
loc_820DF0CC:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r3,712(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df140
	if (ctx.cr6.eq) goto loc_820DF140;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820df11c
	if (!ctx.cr6.eq) goto loc_820DF11C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DF100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820DF11C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820df140
	if (!ctx.cr6.eq) goto loc_820DF140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DF140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DF140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF154"))) PPC_WEAK_FUNC(sub_820DF154);
PPC_FUNC_IMPL(__imp__sub_820DF154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF158"))) PPC_WEAK_FUNC(sub_820DF158);
PPC_FUNC_IMPL(__imp__sub_820DF158) {
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
	// lwz r10,-4900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820df188
	if (!ctx.cr6.eq) goto loc_820DF188;
loc_820DF174:
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
loc_820DF188:
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df1d8
	if (ctx.cr6.eq) goto loc_820DF1D8;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x820df1dc
	goto loc_820DF1DC;
loc_820DF1D8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_820DF1DC:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r3,712(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df174
	if (ctx.cr6.eq) goto loc_820DF174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DF1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820DF210"))) PPC_WEAK_FUNC(sub_820DF210);
PPC_FUNC_IMPL(__imp__sub_820DF210) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df278
	if (ctx.cr6.eq) goto loc_820DF278;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,22082
	ctx.r4.u64 = ctx.r4.u64 | 22082;
	// bl 0x821882d0
	ctx.lr = 0x820DF254;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df278
	if (ctx.cr6.eq) goto loc_820DF278;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df278
	if (ctx.cr6.eq) goto loc_820DF278;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820df158
	ctx.lr = 0x820DF278;
	sub_820DF158(ctx, base);
loc_820DF278:
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

__attribute__((alias("__imp__sub_820DF294"))) PPC_WEAK_FUNC(sub_820DF294);
PPC_FUNC_IMPL(__imp__sub_820DF294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF298"))) PPC_WEAK_FUNC(sub_820DF298);
PPC_FUNC_IMPL(__imp__sub_820DF298) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17096
	ctx.r9.s64 = ctx.r10.s64 + 17096;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF2BC"))) PPC_WEAK_FUNC(sub_820DF2BC);
PPC_FUNC_IMPL(__imp__sub_820DF2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF2C0"))) PPC_WEAK_FUNC(sub_820DF2C0);
PPC_FUNC_IMPL(__imp__sub_820DF2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DF2C8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,-8472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8472);
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x820df32c
	if (!ctx.cr6.gt) goto loc_820DF32C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820DF2F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x820e2308
	ctx.lr = 0x820DF310;
	sub_820E2308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820df338
	if (ctx.cr6.eq) goto loc_820DF338;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820df2f4
	if (ctx.cr6.lt) goto loc_820DF2F4;
loc_820DF32C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820DF338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DF344"))) PPC_WEAK_FUNC(sub_820DF344);
PPC_FUNC_IMPL(__imp__sub_820DF344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF348"))) PPC_WEAK_FUNC(sub_820DF348);
PPC_FUNC_IMPL(__imp__sub_820DF348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DF350;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,-8468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8468);
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x820df3b4
	if (!ctx.cr6.gt) goto loc_820DF3B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820DF37C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x820e2308
	ctx.lr = 0x820DF398;
	sub_820E2308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820df3c0
	if (ctx.cr6.eq) goto loc_820DF3C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820df37c
	if (ctx.cr6.lt) goto loc_820DF37C;
loc_820DF3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820DF3C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DF3CC"))) PPC_WEAK_FUNC(sub_820DF3CC);
PPC_FUNC_IMPL(__imp__sub_820DF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF3D0"))) PPC_WEAK_FUNC(sub_820DF3D0);
PPC_FUNC_IMPL(__imp__sub_820DF3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,17096
	ctx.r10.s64 = ctx.r11.s64 + 17096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820df40c
	if (ctx.cr6.eq) goto loc_820DF40C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820DF40C;
	sub_82183E40(ctx, base);
loc_820DF40C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df430
	if (ctx.cr6.eq) goto loc_820DF430;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DF42C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DF430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF448"))) PPC_WEAK_FUNC(sub_820DF448);
PPC_FUNC_IMPL(__imp__sub_820DF448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820DF450;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,17112
	ctx.r9.s64 = ctx.r11.s64 + 17112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,1556(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1556, ctx.r29.u8);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4a8
	ctx.lr = 0x820DF480;
	sub_820EF4A8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x821af000
	ctx.lr = 0x820DF490;
	sub_821AF000(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4e8
	ctx.lr = 0x820DF4A0;
	sub_820EF4E8(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r30,6
	ctx.r30.s64 = 6;
loc_820DF4A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df4c8
	if (ctx.cr6.eq) goto loc_820DF4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DF4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DF4C8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820df4a8
	if (!ctx.cr0.eq) goto loc_820DF4A8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820DF4DC"))) PPC_WEAK_FUNC(sub_820DF4DC);
PPC_FUNC_IMPL(__imp__sub_820DF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF4E0"))) PPC_WEAK_FUNC(sub_820DF4E0);
PPC_FUNC_IMPL(__imp__sub_820DF4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,1496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF4EC"))) PPC_WEAK_FUNC(sub_820DF4EC);
PPC_FUNC_IMPL(__imp__sub_820DF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF4F0"))) PPC_WEAK_FUNC(sub_820DF4F0);
PPC_FUNC_IMPL(__imp__sub_820DF4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// lfs f2,17100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1880);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82186ab0
	sub_82186AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820DF510"))) PPC_WEAK_FUNC(sub_820DF510);
PPC_FUNC_IMPL(__imp__sub_820DF510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF514"))) PPC_WEAK_FUNC(sub_820DF514);
PPC_FUNC_IMPL(__imp__sub_820DF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF518"))) PPC_WEAK_FUNC(sub_820DF518);
PPC_FUNC_IMPL(__imp__sub_820DF518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DF520;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r9,17112
	ctx.r8.s64 = ctx.r9.s64 + 17112;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r7,20500
	ctx.r7.s64 = 20500;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stfs f31,60(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f31,76(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// bl 0x822aa648
	ctx.lr = 0x820DF588;
	sub_822AA648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097288
	ctx.lr = 0x820DF594;
	sub_82097288(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r30,596
	ctx.r28.s64 = ctx.r30.s64 + 596;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r10,1920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,1936(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lwz r8,344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// stw r5,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r5.u32);
	// stw r29,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r29.u32);
	// stw r29,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r29.u32);
	// stw r8,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r8.u32);
	// bl 0x820ef4c0
	ctx.lr = 0x820DF5D8;
	sub_820EF4C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4b0
	ctx.lr = 0x820DF5E4;
	sub_820EF4B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4a8
	ctx.lr = 0x820DF5F0;
	sub_820EF4A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef4c8
	ctx.lr = 0x820DF5FC;
	sub_820EF4C8(ctx, base);
	// stw r29,1376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1376, ctx.r29.u32);
	// stw r29,1580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1580, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,1576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1576, ctx.r29.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x820fcfb8
	ctx.lr = 0x820DF624;
	sub_820FCFB8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// bl 0x8210f458
	ctx.lr = 0x820DF630;
	sub_8210F458(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r5,932(r4)
	PPC_STORE_U16(ctx.r4.u32 + 932, ctx.r5.u16);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f31,868(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f31,924(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// stfs f31,928(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// sth r6,936(r11)
	PPC_STORE_U16(ctx.r11.u32 + 936, ctx.r6.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DF66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r29.u32);
	// bl 0x820e29f8
	ctx.lr = 0x820DF680;
	sub_820E29F8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x820e29f8
	ctx.lr = 0x820DF690;
	sub_820E29F8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820e29f8
	ctx.lr = 0x820DF6A0;
	sub_820E29F8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x820e29f8
	ctx.lr = 0x820DF6B0;
	sub_820E29F8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e29f8
	ctx.lr = 0x820DF6C0;
	sub_820E29F8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x820e29f8
	ctx.lr = 0x820DF6D0;
	sub_820E29F8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DF6E4"))) PPC_WEAK_FUNC(sub_820DF6E4);
PPC_FUNC_IMPL(__imp__sub_820DF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

