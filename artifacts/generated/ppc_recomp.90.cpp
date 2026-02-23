#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A1DB8"))) PPC_WEAK_FUNC(sub_823A1DB8);
PPC_FUNC_IMPL(__imp__sub_823A1DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1dec
	if (ctx.cr6.eq) goto loc_823A1DEC;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823a1dec
	if (ctx.cr6.eq) goto loc_823A1DEC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82256f70
	ctx.lr = 0x823A1DEC;
	sub_82256F70(ctx, base);
loc_823A1DEC:
	// bl 0x823abbf8
	ctx.lr = 0x823A1DF0;
	sub_823ABBF8(ctx, base);
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a1e10
	if (ctx.cr6.eq) goto loc_823A1E10;
	// bl 0x823a43b0
	ctx.lr = 0x823A1E00;
	sub_823A43B0(ctx, base);
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823a72d0
	ctx.lr = 0x823A1E10;
	sub_823A72D0(ctx, base);
loc_823A1E10:
	// bl 0x823a4360
	ctx.lr = 0x823A1E14;
	sub_823A4360(ctx, base);
	// lwz r3,-4832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1e3c
	if (ctx.cr6.eq) goto loc_823A1E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4832, ctx.r11.u32);
loc_823A1E3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1E50"))) PPC_WEAK_FUNC(sub_823A1E50);
PPC_FUNC_IMPL(__imp__sub_823A1E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1E5C"))) PPC_WEAK_FUNC(sub_823A1E5C);
PPC_FUNC_IMPL(__imp__sub_823A1E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A1E60"))) PPC_WEAK_FUNC(sub_823A1E60);
PPC_FUNC_IMPL(__imp__sub_823A1E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a70f0
	ctx.lr = 0x823A1E78;
	sub_823A70F0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-27512
	ctx.r8.s64 = ctx.r10.s64 + -27512;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823A1EA0;
	sub_823A86F8(ctx, base);
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

__attribute__((alias("__imp__sub_823A1EB8"))) PPC_WEAK_FUNC(sub_823A1EB8);
PPC_FUNC_IMPL(__imp__sub_823A1EB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A1ED0"))) PPC_WEAK_FUNC(sub_823A1ED0);
PPC_FUNC_IMPL(__imp__sub_823A1ED0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823a2024
	if (ctx.cr6.eq) goto loc_823A2024;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,24833
	ctx.r11.u64 = ctx.r11.u64 | 24833;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a22f0
	if (ctx.cr6.gt) {
		sub_823A22F0(ctx, base);
		return;
	}
	// beq cr6,0x823a2340
	if (ctx.cr6.eq) {
		// ERROR 823A2340
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20737
	ctx.r11.u64 = ctx.r11.u64 | 20737;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a21a8
	if (ctx.cr6.gt) {
		sub_823A21A8(ctx, base);
		return;
	}
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2080
	if (ctx.cr6.gt) goto loc_823A2080;
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) {
		// ERROR 823A258C
		return;
	}
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r11,r11,49171
	ctx.r11.u64 = ctx.r11.u64 | 49171;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a1fe4
	if (ctx.cr6.gt) goto loc_823A1FE4;
	// beq cr6,0x823a1f90
	if (ctx.cr6.eq) goto loc_823A1F90;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r11,r11,4337
	ctx.r11.u64 = ctx.r11.u64 | 4337;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a1f98
	if (ctx.cr6.gt) goto loc_823A1F98;
	// beq cr6,0x823a1f90
	if (ctx.cr6.eq) goto loc_823A1F90;
	// cmplwi cr6,r4,1243
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1243, ctx.xer);
	// bgt cr6,0x823a1f78
	if (ctx.cr6.gt) goto loc_823A1F78;
	// beq cr6,0x823a1f6c
	if (ctx.cr6.eq) goto loc_823A1F6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a1f90
	if (ctx.cr6.eq) goto loc_823A1F90;
	// cmplwi cr6,r4,1229
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1229, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) goto loc_823A2024;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
loc_823A1F6C:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_823A1F78:
	// cmplwi cr6,r4,1627
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1627, ctx.xer);
	// beq cr6,0x823a2024
	if (ctx.cr6.eq) goto loc_823A2024;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r10,r11,4336
	ctx.r10.u64 = ctx.r11.u64 | 4336;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) goto loc_823A2024;
loc_823A1F90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A1F98:
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r11,r11,45552
	ctx.r11.u64 = ctx.r11.u64 | 45552;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a1fc8
	if (ctx.cr6.gt) goto loc_823A1FC8;
	// beq cr6,0x823a1f90
	if (ctx.cr6.eq) goto loc_823A1F90;
	// addis r11,r4,-21
	ctx.r11.s64 = ctx.r4.s64 + -1376256;
	// addic. r11,r11,-25097
	ctx.xer.ca = ctx.r11.u32 > 25096;
	ctx.r11.s64 = ctx.r11.s64 + -25097;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a1f90
	if (ctx.cr0.eq) goto loc_823A1F90;
	// cmplwi cr6,r11,12282
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12282, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) goto loc_823A2024;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A1FC8:
	// addis r11,r4,-22
	ctx.r11.s64 = ctx.r4.s64 + -1441792;
	// addic. r11,r11,19983
	ctx.xer.ca = ctx.r11.u32 > 4294947312;
	ctx.r11.s64 = ctx.r11.s64 + 19983;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a1f90
	if (ctx.cr0.eq) goto loc_823A1F90;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) goto loc_823A2024;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A1FE4:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2050
	if (ctx.cr6.gt) goto loc_823A2050;
	// beq cr6,0x823a23f8
	if (ctx.cr6.eq) {
		// ERROR 823A23F8
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2030
	if (ctx.cr6.gt) goto loc_823A2030;
	// beq cr6,0x823a219c
	if (ctx.cr6.eq) {
		// ERROR 823A219C
		return;
	}
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,16389
	ctx.r10.u64 = ctx.r11.u64 | 16389;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823a2024
	if (ctx.cr6.eq) goto loc_823A2024;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
loc_823A2024:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823A2030:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a20e8
	if (ctx.cr0.eq) {
		// ERROR 823A20E8
		return;
	}
	// lis r3,1
	ctx.r3.s64 = 65536;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823A2050:
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) goto loc_823A2024;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2024
	if (ctx.cr6.eq) goto loc_823A2024;
	// bdz 0x823a258c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A258C;
	// bdnz 0x823a258c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A258C;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823A2080:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a20f4
	if (ctx.cr6.gt) {
		sub_823A20F4(ctx, base);
		return;
	}
	// beq cr6,0x823a20e8
	if (ctx.cr6.eq) {
		// ERROR 823A20E8
		return;
	}
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) goto loc_823A2024;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8380
	ctx.r12.s64 = ctx.r12.s64 + 8380;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
    loc_823A258C:
        ;
}

__attribute__((alias("__imp__sub_823A20BC"))) PPC_WEAK_FUNC(sub_823A20BC);
PPC_FUNC_IMPL(__imp__sub_823A20BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A20F4"))) PPC_WEAK_FUNC(sub_823A20F4);
PPC_FUNC_IMPL(__imp__sub_823A20F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2154
	if (ctx.cr6.gt) goto loc_823A2154;
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) {
		// ERROR 823A258C
		return;
	}
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-4097
	ctx.r11.s64 = ctx.r11.s64 + -4097;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a20e8
	if (ctx.cr6.eq) {
		// ERROR 823A20E8
		return;
	}
	// bdz 0x823a258c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A258C;
	// bdz 0x823a213c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A213C;
	// bdz 0x823a20e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A20E8;
	// bdz 0x823a2148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2148;
	// bdz 0x823a2278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2278;
	// b 0x823a258c
	// ERROR 823A258C
	return;
loc_823A213C:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823A2148:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823A2154:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,12307
	ctx.r11.u64 = ctx.r11.u64 | 12307;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a218c
	if (ctx.cr6.gt) goto loc_823A218C;
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,4353
	ctx.r10.u64 = ctx.r11.u64 | 4353;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a258c
	if (ctx.cr0.eq) {
		// ERROR 823A258C
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
loc_823A218C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20736
	ctx.r10.u64 = ctx.r11.u64 | 20736;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
    loc_823A20E8:
        ;
    loc_823A2278:
        ;
    loc_823A258C:
        ;
}

__attribute__((alias("__imp__sub_823A21A8"))) PPC_WEAK_FUNC(sub_823A21A8);
PPC_FUNC_IMPL(__imp__sub_823A21A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20992
	ctx.r11.u64 = ctx.r11.u64 | 20992;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2284
	if (ctx.cr6.gt) {
		sub_823A2284(ctx, base);
		return;
	}
	// beq cr6,0x823a219c
	if (ctx.cr6.eq) {
		// ERROR 823A219C
		return;
	}
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-20738
	ctx.r11.s64 = ctx.r11.s64 + -20738;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8676
	ctx.r12.s64 = ctx.r12.s64 + 8676;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A21E4"))) PPC_WEAK_FUNC(sub_823A21E4);
PPC_FUNC_IMPL(__imp__sub_823A21E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8508(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8508);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2284"))) PPC_WEAK_FUNC(sub_823A2284);
PPC_FUNC_IMPL(__imp__sub_823A2284) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-20993
	ctx.r11.s64 = ctx.r11.s64 + -20993;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8876
	ctx.r12.s64 = ctx.r12.s64 + 8876;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A22AC"))) PPC_WEAK_FUNC(sub_823A22AC);
PPC_FUNC_IMPL(__imp__sub_823A22AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,9932(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9932);
	// lwz r17,8932(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8932);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,8308(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8308);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,8424(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8424);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A22F0"))) PPC_WEAK_FUNC(sub_823A22F0);
PPC_FUNC_IMPL(__imp__sub_823A22F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,25090
	ctx.r11.u64 = ctx.r11.u64 | 25090;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a234c
	if (ctx.cr6.gt) goto loc_823A234C;
	// beq cr6,0x823a26cc
	if (ctx.cr6.eq) {
		// ERROR 823A26CC
		return;
	}
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-24834
	ctx.r11.s64 = ctx.r11.s64 + -24834;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// bdz 0x823a2340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2340;
	// bdz 0x823a2278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2278;
	// bdz 0x823a2278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2278;
	// bdz 0x823a2024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2024;
	// bdz 0x823a2340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2340;
	// bdz 0x823a2278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2278;
	// bdz 0x823a2278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2278;
	// b 0x823a2278
	// ERROR 823A2278
	return;
loc_823A2340:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	return;
loc_823A234C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,28673
	ctx.r11.u64 = ctx.r11.u64 | 28673;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2410
	if (ctx.cr6.gt) {
		sub_823A2410(ctx, base);
		return;
	}
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) {
		// ERROR 823A258C
		return;
	}
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-25091
	ctx.r11.s64 = ctx.r11.s64 + -25091;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9096
	ctx.r12.s64 = ctx.r12.s64 + 9096;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
    loc_823A2024:
        ;
    loc_823A2278:
        ;
}

__attribute__((alias("__imp__sub_823A2388"))) PPC_WEAK_FUNC(sub_823A2388);
PPC_FUNC_IMPL(__imp__sub_823A2388) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9220(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9220);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8080(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8080);
	// lwz r17,9208(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9208);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8508(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8508);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2404"))) PPC_WEAK_FUNC(sub_823A2404);
PPC_FUNC_IMPL(__imp__sub_823A2404) {
	PPC_FUNC_PROLOGUE();
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2410"))) PPC_WEAK_FUNC(sub_823A2410);
PPC_FUNC_IMPL(__imp__sub_823A2410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,45316
	ctx.r11.u64 = ctx.r11.u64 | 45316;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a25e4
	if (ctx.cr6.gt) goto loc_823A25E4;
	// beq cr6,0x823a219c
	if (ctx.cr6.eq) {
		// ERROR 823A219C
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,37378
	ctx.r11.u64 = ctx.r11.u64 | 37378;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2518
	if (ctx.cr6.gt) goto loc_823A2518;
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,36865
	ctx.r11.u64 = ctx.r11.u64 | 36865;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a24ac
	if (ctx.cr6.gt) goto loc_823A24AC;
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,28932
	ctx.r11.u64 = ctx.r11.u64 | 28932;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a248c
	if (ctx.cr6.gt) goto loc_823A248C;
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,28929
	ctx.r10.u64 = ctx.r11.u64 | 28929;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a2278
	if (ctx.cr0.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823A248C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a258c
	if (ctx.cr0.eq) goto loc_823A258C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// b 0x823a2588
	goto loc_823A2588;
loc_823A24AC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,36869
	ctx.r11.u64 = ctx.r11.u64 | 36869;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a24ec
	if (ctx.cr6.gt) goto loc_823A24EC;
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,36866
	ctx.r10.u64 = ctx.r11.u64 | 36866;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a2278
	if (ctx.cr0.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823A24EC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,37120
	ctx.r10.u64 = ctx.r11.u64 | 37120;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a2278
	if (ctx.cr0.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x823a26cc
	if (ctx.cr6.eq) {
		// ERROR 823A26CC
		return;
	}
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_823A2518:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,45061
	ctx.r11.u64 = ctx.r11.u64 | 45061;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a2598
	if (ctx.cr6.gt) goto loc_823A2598;
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,45057
	ctx.r11.u64 = ctx.r11.u64 | 45057;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a256c
	if (ctx.cr6.gt) goto loc_823A256C;
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,37380
	ctx.r10.u64 = ctx.r11.u64 | 37380;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a2278
	if (ctx.cr0.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823A256C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,45058
	ctx.r10.u64 = ctx.r11.u64 | 45058;
loc_823A2574:
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a258c
	if (ctx.cr0.eq) goto loc_823A258C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
loc_823A2588:
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
loc_823A258C:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_823A2598:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,45065
	ctx.r11.u64 = ctx.r11.u64 | 45065;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a25b8
	if (ctx.cr6.gt) goto loc_823A25B8;
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) goto loc_823A258C;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,45062
	ctx.r10.u64 = ctx.r11.u64 | 45062;
	// b 0x823a2574
	goto loc_823A2574;
loc_823A25B8:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,45313
	ctx.r10.u64 = ctx.r11.u64 | 45313;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a213c
	if (ctx.cr0.eq) {
		// ERROR 823A213C
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823a2024
	if (!ctx.cr6.eq) {
		// ERROR 823A2024
		return;
	}
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// blr 
	return;
loc_823A25E4:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,49153
	ctx.r11.u64 = ctx.r11.u64 | 49153;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a264c
	if (ctx.cr6.gt) {
		// ERROR 823A264C
		return;
	}
	// beq cr6,0x823a2278
	if (ctx.cr6.eq) {
		// ERROR 823A2278
		return;
	}
	// addis r11,r4,32746
	ctx.r11.s64 = ctx.r4.s64 + 2146041856;
	// addi r11,r11,20219
	ctx.r11.s64 = ctx.r11.s64 + 20219;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9760
	ctx.r12.s64 = ctx.r12.s64 + 9760;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A2620"))) PPC_WEAK_FUNC(sub_823A2620);
PPC_FUNC_IMPL(__imp__sub_823A2620) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,8604(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8604);
	// lwz r17,8604(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8604);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,8604(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8604);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9024(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9024);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lis r11,-32682
	ctx.r11.s64 = -2141847552;
	// ori r11,r11,61441
	ctx.r11.u64 = ctx.r11.u64 | 61441;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a26f0
	if (ctx.cr6.gt) {
		sub_823A26F0(ctx, base);
		return;
	}
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) {
		// ERROR 823A258C
		return;
	}
	// addis r11,r4,32746
	ctx.r11.s64 = ctx.r4.s64 + 2146041856;
	// addi r11,r11,16382
	ctx.r11.s64 = ctx.r11.s64 + 16382;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x823a2024
	if (ctx.cr6.gt) {
		// ERROR 823A2024
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9864
	ctx.r12.s64 = ctx.r12.s64 + 9864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A2688"))) PPC_WEAK_FUNC(sub_823A2688);
PPC_FUNC_IMPL(__imp__sub_823A2688) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,9932(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9932);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9944(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9944);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lwz r17,9956(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9956);
	// lwz r17,8824(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8824);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,8228(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8228);
	// lwz r17,9932(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9932);
	// lwz r17,9612(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9612);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A26D8"))) PPC_WEAK_FUNC(sub_823A26D8);
PPC_FUNC_IMPL(__imp__sub_823A26D8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A26E4"))) PPC_WEAK_FUNC(sub_823A26E4);
PPC_FUNC_IMPL(__imp__sub_823A26E4) {
	PPC_FUNC_PROLOGUE();
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A26F0"))) PPC_WEAK_FUNC(sub_823A26F0);
PPC_FUNC_IMPL(__imp__sub_823A26F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32682
	ctx.r11.s64 = -2141847552;
	// ori r10,r11,61442
	ctx.r10.u64 = ctx.r11.u64 | 61442;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a258c
	if (ctx.cr0.eq) {
		// ERROR 823A258C
		return;
	}
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a258c
	if (ctx.cr6.eq) {
		// ERROR 823A258C
		return;
	}
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2714"))) PPC_WEAK_FUNC(sub_823A2714);
PPC_FUNC_IMPL(__imp__sub_823A2714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2718"))) PPC_WEAK_FUNC(sub_823A2718);
PPC_FUNC_IMPL(__imp__sub_823A2718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A2720;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a275c
	if (ctx.cr6.eq) goto loc_823A275C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A275C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a6e10
	ctx.lr = 0x823A2774;
	sub_823A6E10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A277C"))) PPC_WEAK_FUNC(sub_823A277C);
PPC_FUNC_IMPL(__imp__sub_823A277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2780"))) PPC_WEAK_FUNC(sub_823A2780);
PPC_FUNC_IMPL(__imp__sub_823A2780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A27A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823585a0
	ctx.lr = 0x823A27B4;
	sub_823585A0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A27D0"))) PPC_WEAK_FUNC(sub_823A27D0);
PPC_FUNC_IMPL(__imp__sub_823A27D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-27464
	ctx.r10.s64 = ctx.r11.s64 + -27464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A2800;
	sub_82356EB8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-31544
	ctx.r7.s64 = ctx.r9.s64 + -31544;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823a2824
	if (ctx.cr6.eq) goto loc_823A2824;
	// bl 0x82357128
	ctx.lr = 0x823A2820;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A2824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A283C"))) PPC_WEAK_FUNC(sub_823A283C);
PPC_FUNC_IMPL(__imp__sub_823A283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2840"))) PPC_WEAK_FUNC(sub_823A2840);
PPC_FUNC_IMPL(__imp__sub_823A2840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-27448
	ctx.r10.s64 = ctx.r11.s64 + -27448;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82356e70
	ctx.lr = 0x823A287C;
	sub_82356E70(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356e70
	ctx.lr = 0x823A2884;
	sub_82356E70(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823A28A4"))) PPC_WEAK_FUNC(sub_823A28A4);
PPC_FUNC_IMPL(__imp__sub_823A28A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A28A8"))) PPC_WEAK_FUNC(sub_823A28A8);
PPC_FUNC_IMPL(__imp__sub_823A28A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-27448
	ctx.r10.s64 = ctx.r11.s64 + -27448;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A28D0;
	sub_82356EB8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82356eb8
	ctx.lr = 0x823A28D8;
	sub_82356EB8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,-31544
	ctx.r8.s64 = ctx.r9.s64 + -31544;
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

__attribute__((alias("__imp__sub_823A28F8"))) PPC_WEAK_FUNC(sub_823A28F8);
PPC_FUNC_IMPL(__imp__sub_823A28F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A2934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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
}

__attribute__((alias("__imp__sub_823A2954"))) PPC_WEAK_FUNC(sub_823A2954);
PPC_FUNC_IMPL(__imp__sub_823A2954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2958"))) PPC_WEAK_FUNC(sub_823A2958);
PPC_FUNC_IMPL(__imp__sub_823A2958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-27448
	ctx.r10.s64 = ctx.r11.s64 + -27448;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A2988;
	sub_82356EB8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82356eb8
	ctx.lr = 0x823A2990;
	sub_82356EB8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-31544
	ctx.r7.s64 = ctx.r9.s64 + -31544;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823a29b4
	if (ctx.cr6.eq) goto loc_823A29B4;
	// bl 0x82357128
	ctx.lr = 0x823A29B0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A29B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A29CC"))) PPC_WEAK_FUNC(sub_823A29CC);
PPC_FUNC_IMPL(__imp__sub_823A29CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A29D0"))) PPC_WEAK_FUNC(sub_823A29D0);
PPC_FUNC_IMPL(__imp__sub_823A29D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A29E4"))) PPC_WEAK_FUNC(sub_823A29E4);
PPC_FUNC_IMPL(__imp__sub_823A29E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A29E8"))) PPC_WEAK_FUNC(sub_823A29E8);
PPC_FUNC_IMPL(__imp__sub_823A29E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823a2a1c
	if (ctx.cr6.eq) goto loc_823A2A1C;
	// bl 0x82357128
	ctx.lr = 0x823A2A18;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A2A1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2A30"))) PPC_WEAK_FUNC(sub_823A2A30);
PPC_FUNC_IMPL(__imp__sub_823A2A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a2ae4
	if (!ctx.cr6.eq) goto loc_823A2AE4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A2A58;
	sub_823570E0(ctx, base);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x823570f0
	ctx.lr = 0x823A2A60;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a2a74
	if (ctx.cr6.eq) goto loc_823A2A74;
	// bl 0x823a1e60
	ctx.lr = 0x823A2A6C;
	sub_823A1E60(ctx, base);
	// stw r3,-4832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4832, ctx.r3.u32);
	// b 0x823a2a7c
	goto loc_823A2A7C;
loc_823A2A74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4832, ctx.r11.u32);
loc_823A2A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A2A84;
	sub_823570E0(ctx, base);
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a2ae0
	if (ctx.cr6.eq) goto loc_823A2AE0;
	// bl 0x823a6190
	ctx.lr = 0x823A2A94;
	sub_823A6190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a2adc
	if (ctx.cr6.eq) goto loc_823A2ADC;
	// lwz r3,-4832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// bl 0x823a71f8
	ctx.lr = 0x823A2AA8;
	sub_823A71F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a2adc
	if (ctx.cr6.eq) goto loc_823A2ADC;
	// bl 0x823ac1d0
	ctx.lr = 0x823A2AB4;
	sub_823AC1D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a2adc
	if (ctx.cr6.eq) goto loc_823A2ADC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822565c8
	ctx.lr = 0x823A2AC4;
	sub_822565C8(ctx, base);
	// lwz r11,-4832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// lwz r3,-4832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4832);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a2ae4
	if (!ctx.cr6.eq) goto loc_823A2AE4;
loc_823A2ADC:
	// bl 0x823a1db8
	ctx.lr = 0x823A2AE0;
	sub_823A1DB8(ctx, base);
loc_823A2AE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A2AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2AF8"))) PPC_WEAK_FUNC(sub_823A2AF8);
PPC_FUNC_IMPL(__imp__sub_823A2AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// addi r10,r11,-27512
	ctx.r10.s64 = ctx.r11.s64 + -27512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823ab568
	ctx.lr = 0x823A2B28;
	sub_823AB568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a7188
	ctx.lr = 0x823A2B30;
	sub_823A7188(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a2b48
	if (ctx.cr6.eq) goto loc_823A2B48;
	// bl 0x82357128
	ctx.lr = 0x823A2B44;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A2B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2B60"))) PPC_WEAK_FUNC(sub_823A2B60);
PPC_FUNC_IMPL(__imp__sub_823A2B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A2B68;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2bf4
	if (ctx.cr6.eq) goto loc_823A2BF4;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x823A2B8C;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823a2bb4
	if (!ctx.cr6.gt) goto loc_823A2BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A2BA4;
	sub_823A86F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A2BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a2c44
	if (ctx.cr6.eq) goto loc_823A2C44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A2BF0;
	sub_823A86F8(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_823A2BF4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2c44
	if (ctx.cr6.eq) goto loc_823A2C44;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r6,r10,4
	ctx.r6.u64 = ctx.r10.u64 | 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,36(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823A2C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_823A2C44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A2C4C"))) PPC_WEAK_FUNC(sub_823A2C4C);
PPC_FUNC_IMPL(__imp__sub_823A2C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2C50"))) PPC_WEAK_FUNC(sub_823A2C50);
PPC_FUNC_IMPL(__imp__sub_823A2C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A2C58;
	sub_8224878C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,4336
	ctx.r11.u64 = ctx.r11.u64 | 4336;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823a2d78
	if (ctx.cr6.gt) goto loc_823A2D78;
	// beq cr6,0x823a2d28
	if (ctx.cr6.eq) goto loc_823A2D28;
	// addis r11,r4,32747
	ctx.r11.s64 = ctx.r4.s64 + 2146107392;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823a2d88
	if (ctx.cr6.gt) goto loc_823A2D88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a2dd8
	if (ctx.cr6.eq) goto loc_823A2DD8;
	// bdz 0x823a2dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2DD8;
	// bdz 0x823a2cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2CB0;
	// bdz 0x823a2cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2CBC;
	// bdz 0x823a2cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2CC8;
	// bdz 0x823a2d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823A2D10;
	// b 0x823a2d1c
	goto loc_823A2D1C;
loc_823A2CB0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// b 0x823a2de0
	goto loc_823A2DE0;
loc_823A2CBC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x823a2de0
	goto loc_823A2DE0;
loc_823A2CC8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r11,-27440
	ctx.r9.s64 = ctx.r11.s64 + -27440;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A2D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r6,-31544
	ctx.r5.s64 = ctx.r6.s64 + -31544;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x823a2dd8
	goto loc_823A2DD8;
loc_823A2D10:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x823a2de0
	goto loc_823A2DE0;
loc_823A2D1C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x823a2de0
	goto loc_823A2DE0;
loc_823A2D28:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,-27440
	ctx.r9.s64 = ctx.r11.s64 + -27440;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823A2D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A2D78:
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r10,r11,4337
	ctx.r10.u64 = ctx.r11.u64 | 4337;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823a2d94
	if (ctx.cr6.eq) goto loc_823A2D94;
loc_823A2D88:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x823a2de0
	goto loc_823A2DE0;
loc_823A2D94:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r9,r11,-27440
	ctx.r9.s64 = ctx.r11.s64 + -27440;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A2DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r6,-31544
	ctx.r5.s64 = ctx.r6.s64 + -31544;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
loc_823A2DD8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
loc_823A2DE0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a2e28
	if (!ctx.cr6.eq) goto loc_823A2E28;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r8,r9,-27456
	ctx.r8.s64 = ctx.r9.s64 + -27456;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823A2E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A2E28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A2E30"))) PPC_WEAK_FUNC(sub_823A2E30);
PPC_FUNC_IMPL(__imp__sub_823A2E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x8234df50
	ctx.lr = 0x823A2E54;
	sub_8234DF50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a2ee0
	if (!ctx.cr6.eq) goto loc_823A2EE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-27464
	ctx.r30.s64 = ctx.r11.s64 + -27464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82356e70
	ctx.lr = 0x823A2E80;
	sub_82356E70(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823585a0
	ctx.lr = 0x823A2E8C;
	sub_823585A0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356fe0
	ctx.lr = 0x823A2E98;
	sub_82356FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82357038
	ctx.lr = 0x823A2EA4;
	sub_82357038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823A2EAC;
	sub_82356EB8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82248a40
	ctx.lr = 0x823A2EBC;
	sub_82248A40(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A2ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356eb8
	ctx.lr = 0x823A2EE0;
	sub_82356EB8(ctx, base);
loc_823A2EE0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2EF8"))) PPC_WEAK_FUNC(sub_823A2EF8);
PPC_FUNC_IMPL(__imp__sub_823A2EF8) {
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
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r7,r9,-27440
	ctx.r7.s64 = ctx.r9.s64 + -27440;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A2F5C"))) PPC_WEAK_FUNC(sub_823A2F5C);
PPC_FUNC_IMPL(__imp__sub_823A2F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A2F60"))) PPC_WEAK_FUNC(sub_823A2F60);
PPC_FUNC_IMPL(__imp__sub_823A2F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A2F68;
	sub_82248780(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823A2F84;
	sub_823A0F10(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823a315c
	if (ctx.cr6.gt) goto loc_823A315C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823a315c
	// bdzf 4*cr6+eq,0x823a2fe0
	// bdzf 4*cr6+eq,0x823a315c
	// bdzf 4*cr6+eq,0x823a315c
	// bdzf 4*cr6+eq,0x823a315c
	// bdzf 4*cr6+eq,0x823a2ff8
	// bdzf 4*cr6+eq,0x823a30d0
	// bne cr6,0x823a3118
	if (!ctx.cr6.eq) goto loc_823A3118;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// bl 0x8237d130
	ctx.lr = 0x823A2FD0;
	sub_8237D130(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A2FE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A2FF8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370c48
	ctx.lr = 0x823A3004;
	sub_82370C48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372388
	ctx.lr = 0x823A3014;
	sub_82372388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356e70
	ctx.lr = 0x823A3020;
	sub_82356E70(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x823a3040
	if (ctx.cr6.eq) goto loc_823A3040;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356f10
	ctx.lr = 0x823A3034;
	sub_82356F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x823a3044
	if (!ctx.cr6.eq) goto loc_823A3044;
loc_823A3040:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A3044:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356e70
	ctx.lr = 0x823A304C;
	sub_82356E70(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x823a3060
	if (ctx.cr6.eq) goto loc_823A3060;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356f10
	ctx.lr = 0x823A3060;
	sub_82356F10(ctx, base);
loc_823A3060:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a2840
	ctx.lr = 0x823A3068;
	sub_823A2840(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82357038
	ctx.lr = 0x823A3074;
	sub_82357038(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82357038
	ctx.lr = 0x823A3080;
	sub_82357038(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A30A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x823a28a8
	ctx.lr = 0x823A30AC;
	sub_823A28A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823A30B4;
	sub_82356EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823A30BC;
	sub_82356EB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372340
	ctx.lr = 0x823A30C4;
	sub_82372340(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A30D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1368
	ctx.lr = 0x823A30DC;
	sub_823A1368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a30f0
	if (!ctx.cr6.eq) goto loc_823A30F0;
loc_823A30E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A30F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a13d8
	ctx.lr = 0x823A30FC;
	sub_823A13D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a12c8
	ctx.lr = 0x823A310C;
	sub_823A12C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A3118:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1368
	ctx.lr = 0x823A3124;
	sub_823A1368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a30e4
	if (ctx.cr6.eq) goto loc_823A30E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a13d8
	ctx.lr = 0x823A3138;
	sub_823A13D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a1468
	ctx.lr = 0x823A3148;
	sub_823A1468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a315c
	if (!ctx.cr6.eq) goto loc_823A315C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1840
	ctx.lr = 0x823A315C;
	sub_823A1840(ctx, base);
loc_823A315C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A3168"))) PPC_WEAK_FUNC(sub_823A3168);
PPC_FUNC_IMPL(__imp__sub_823A3168) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3178"))) PPC_WEAK_FUNC(sub_823A3178);
PPC_FUNC_IMPL(__imp__sub_823A3178) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x8241e0ac
	ctx.lr = 0x823A31AC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a3254
	if (ctx.cr6.eq) goto loc_823A3254;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addis r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -33554432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823a3254
	if (ctx.cr6.gt) goto loc_823A3254;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12768
	ctx.r12.s64 = ctx.r12.s64 + 12768;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,12808(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12808);
	// lwz r17,12840(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12840);
	// lwz r17,12872(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12872);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// lwz r17,12884(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12884);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a2c50
	ctx.lr = 0x823A3214;
	sub_823A2C50(ctx, base);
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
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a2e30
	ctx.lr = 0x823A3234;
	sub_823A2E30(ctx, base);
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
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a2ef8
	ctx.lr = 0x823A3254;
	sub_823A2EF8(ctx, base);
loc_823A3254:
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

__attribute__((alias("__imp__sub_823A3268"))) PPC_WEAK_FUNC(sub_823A3268);
PPC_FUNC_IMPL(__imp__sub_823A3268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a6c30
	ctx.lr = 0x823A3280;
	sub_823A6C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a2b60
	ctx.lr = 0x823A3288;
	sub_823A2B60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a3178
	ctx.lr = 0x823A3290;
	sub_823A3178(ctx, base);
	// bl 0x823a43b0
	ctx.lr = 0x823A3294;
	sub_823A43B0(ctx, base);
	// bl 0x823a62e0
	ctx.lr = 0x823A3298;
	sub_823A62E0(ctx, base);
	// bl 0x823abc48
	ctx.lr = 0x823A329C;
	sub_823ABC48(ctx, base);
	// bl 0x823ac340
	ctx.lr = 0x823A32A0;
	sub_823AC340(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A32B4"))) PPC_WEAK_FUNC(sub_823A32B4);
PPC_FUNC_IMPL(__imp__sub_823A32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A32B8"))) PPC_WEAK_FUNC(sub_823A32B8);
PPC_FUNC_IMPL(__imp__sub_823A32B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a32f4
	if (ctx.cr6.eq) goto loc_823A32F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A32EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4828, ctx.r11.u32);
loc_823A32F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3308"))) PPC_WEAK_FUNC(sub_823A3308);
PPC_FUNC_IMPL(__imp__sub_823A3308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4828);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3314"))) PPC_WEAK_FUNC(sub_823A3314);
PPC_FUNC_IMPL(__imp__sub_823A3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3318"))) PPC_WEAK_FUNC(sub_823A3318);
PPC_FUNC_IMPL(__imp__sub_823A3318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A332C"))) PPC_WEAK_FUNC(sub_823A332C);
PPC_FUNC_IMPL(__imp__sub_823A332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3330"))) PPC_WEAK_FUNC(sub_823A3330);
PPC_FUNC_IMPL(__imp__sub_823A3330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a3378
	if (ctx.cr6.eq) goto loc_823A3378;
loc_823A3354:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A336C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a3354
	if (!ctx.cr6.eq) goto loc_823A3354;
loc_823A3378:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A33A0"))) PPC_WEAK_FUNC(sub_823A33A0);
PPC_FUNC_IMPL(__imp__sub_823A33A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A33A8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x823a33ec
	if (ctx.cr6.lt) goto loc_823A33EC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823a33e0
	if (ctx.cr6.eq) goto loc_823A33E0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_823A33E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A33EC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x823ac9a8
	ctx.lr = 0x823A33F4;
	sub_823AC9A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a3420
	if (!ctx.cr6.eq) goto loc_823A3420;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823a3414
	if (ctx.cr6.eq) goto loc_823A3414;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_823A3414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A3420:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A3440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3478
	if (!ctx.cr6.eq) goto loc_823A3478;
loc_823A3448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A345C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A3470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a3448
	if (ctx.cr6.eq) goto loc_823A3448;
loc_823A3478:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a34bc
	if (!ctx.cr6.eq) goto loc_823A34BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A34B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a34fc
	if (!ctx.cr6.eq) goto loc_823A34FC;
loc_823A34BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823a34dc
	if (ctx.cr6.eq) goto loc_823A34DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A34D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_823A34DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a34fc
	if (ctx.cr6.eq) goto loc_823A34FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A34F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_823A34FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac6c0
	ctx.lr = 0x823A3504;
	sub_823AC6C0(ctx, base);
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
	ctx.lr = 0x823A351C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A3528"))) PPC_WEAK_FUNC(sub_823A3528);
PPC_FUNC_IMPL(__imp__sub_823A3528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A3530;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x823A3544;
	sub_823570E0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823570f0
	ctx.lr = 0x823A354C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a3584
	if (ctx.cr6.eq) goto loc_823A3584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30912
	ctx.r9.s64 = ctx.r10.s64 + 30912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x823a3588
	goto loc_823A3588;
loc_823A3584:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823A3588:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A3590;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a35a4
	if (!ctx.cr6.eq) goto loc_823A35A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A35A4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A35BC"))) PPC_WEAK_FUNC(sub_823A35BC);
PPC_FUNC_IMPL(__imp__sub_823A35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A35C0"))) PPC_WEAK_FUNC(sub_823A35C0);
PPC_FUNC_IMPL(__imp__sub_823A35C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A35C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a361c
	if (ctx.cr6.eq) goto loc_823A361C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A35F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a3604
	if (ctx.cr6.eq) goto loc_823A3604;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_823A3604:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a3610
	if (ctx.cr6.eq) goto loc_823A3610;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_823A3610:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823A361C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A3624"))) PPC_WEAK_FUNC(sub_823A3624);
PPC_FUNC_IMPL(__imp__sub_823A3624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3628"))) PPC_WEAK_FUNC(sub_823A3628);
PPC_FUNC_IMPL(__imp__sub_823A3628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a369c
	if (!ctx.cr6.eq) goto loc_823A369C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A3650;
	sub_823570E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823570f0
	ctx.lr = 0x823A3658;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823a368c
	if (ctx.cr6.eq) goto loc_823A368C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r10,-27432
	ctx.r9.s64 = ctx.r10.s64 + -27432;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r3,-4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4828, ctx.r3.u32);
	// b 0x823a3690
	goto loc_823A3690;
loc_823A368C:
	// stw r11,-4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4828, ctx.r11.u32);
loc_823A3690:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A3698;
	sub_823570E0(ctx, base);
	// lwz r3,-4828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4828);
loc_823A369C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A36B0"))) PPC_WEAK_FUNC(sub_823A36B0);
PPC_FUNC_IMPL(__imp__sub_823A36B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a36f0
	if (ctx.cr6.eq) goto loc_823A36F0;
loc_823A36CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A36E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a36cc
	if (!ctx.cr6.eq) goto loc_823A36CC;
loc_823A36F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3704"))) PPC_WEAK_FUNC(sub_823A3704);
PPC_FUNC_IMPL(__imp__sub_823A3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3708"))) PPC_WEAK_FUNC(sub_823A3708);
PPC_FUNC_IMPL(__imp__sub_823A3708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a3784
	if (ctx.cr6.eq) goto loc_823A3784;
loc_823A3730:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a375c
	if (!ctx.cr6.lt) goto loc_823A375C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a377c
	if (!ctx.cr6.eq) goto loc_823A377C;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x823a3768
	goto loc_823A3768;
loc_823A375C:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_823A3768:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3784
	if (!ctx.cr6.eq) goto loc_823A3784;
loc_823A377C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a3730
	if (!ctx.cr6.eq) goto loc_823A3730;
loc_823A3784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A379C"))) PPC_WEAK_FUNC(sub_823A379C);
PPC_FUNC_IMPL(__imp__sub_823A379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A37A0"))) PPC_WEAK_FUNC(sub_823A37A0);
PPC_FUNC_IMPL(__imp__sub_823A37A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a37e0
	if (ctx.cr6.eq) goto loc_823A37E0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_823A37B4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823a37d4
	if (ctx.cr6.eq) goto loc_823A37D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a37b4
	if (!ctx.cr6.eq) goto loc_823A37B4;
loc_823A37D4:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x823ac8d8
	sub_823AC8D8(ctx, base);
	return;
loc_823A37E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A37E8"))) PPC_WEAK_FUNC(sub_823A37E8);
PPC_FUNC_IMPL(__imp__sub_823A37E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a381c
	if (ctx.cr6.eq) goto loc_823A381C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a381c
	if (ctx.cr6.eq) goto loc_823A381C;
loc_823A3800:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823a3824
	if (ctx.cr6.eq) goto loc_823A3824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a3800
	if (!ctx.cr6.eq) goto loc_823A3800;
loc_823A381C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A3824:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A382C"))) PPC_WEAK_FUNC(sub_823A382C);
PPC_FUNC_IMPL(__imp__sub_823A382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3830"))) PPC_WEAK_FUNC(sub_823A3830);
PPC_FUNC_IMPL(__imp__sub_823A3830) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a3898
	if (ctx.cr6.eq) goto loc_823A3898;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_823A384C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823a386c
	if (ctx.cr6.eq) goto loc_823A386C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a384c
	if (!ctx.cr6.eq) goto loc_823A384C;
loc_823A386C:
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A3898:
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

__attribute__((alias("__imp__sub_823A38AC"))) PPC_WEAK_FUNC(sub_823A38AC);
PPC_FUNC_IMPL(__imp__sub_823A38AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A38B0"))) PPC_WEAK_FUNC(sub_823A38B0);
PPC_FUNC_IMPL(__imp__sub_823A38B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a3528
	ctx.lr = 0x823A38C8;
	sub_823A3528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a38e4
	if (!ctx.cr6.eq) goto loc_823A38E4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A38E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a38fc
	if (ctx.cr6.eq) goto loc_823A38FC;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_823A38FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a3910
	if (!ctx.cr6.eq) goto loc_823A3910;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823A3910:
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

__attribute__((alias("__imp__sub_823A3928"))) PPC_WEAK_FUNC(sub_823A3928);
PPC_FUNC_IMPL(__imp__sub_823A3928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a3978
	if (ctx.cr6.eq) goto loc_823A3978;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x823a35c0
	ctx.lr = 0x823A3954;
	sub_823A35C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a3974
	if (!ctx.cr6.eq) goto loc_823A3974;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a3974
	if (!ctx.cr6.eq) goto loc_823A3974;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A3974:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823A3978:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3990"))) PPC_WEAK_FUNC(sub_823A3990);
PPC_FUNC_IMPL(__imp__sub_823A3990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a39e0
	if (ctx.cr6.eq) goto loc_823A39E0;
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x823a35c0
	ctx.lr = 0x823A39BC;
	sub_823A35C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a39dc
	if (!ctx.cr6.eq) goto loc_823A39DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a39dc
	if (!ctx.cr6.eq) goto loc_823A39DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A39DC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823A39E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A39F8"))) PPC_WEAK_FUNC(sub_823A39F8);
PPC_FUNC_IMPL(__imp__sub_823A39F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-27432
	ctx.r10.s64 = ctx.r11.s64 + -27432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823a3330
	ctx.lr = 0x823A3A28;
	sub_823A3330(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a3a40
	if (ctx.cr6.eq) goto loc_823A3A40;
	// bl 0x82357128
	ctx.lr = 0x823A3A3C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A3A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3A58"))) PPC_WEAK_FUNC(sub_823A3A58);
PPC_FUNC_IMPL(__imp__sub_823A3A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A3A60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// blt cr6,0x823a3ab8
	if (ctx.cr6.lt) goto loc_823A3AB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,32288
	ctx.r8.s64 = ctx.r11.s64 + 32288;
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A3AB8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823ac9a8
	ctx.lr = 0x823A3AC4;
	sub_823AC9A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a3b08
	if (!ctx.cr6.eq) goto loc_823A3B08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,32288
	ctx.r8.s64 = ctx.r11.s64 + 32288;
	// ori r7,r10,6
	ctx.r7.u64 = ctx.r10.u64 | 6;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A3B08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x823544b8
	ctx.lr = 0x823A3B1C;
	sub_823544B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x823a38b0
	ctx.lr = 0x823A3B28;
	sub_823A38B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3b60
	if (!ctx.cr6.eq) goto loc_823A3B60;
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
	ctx.lr = 0x823A3B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 | 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// b 0x823a3b78
	goto loc_823A3B78;
loc_823A3B60:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// sth r8,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r8.u16);
loc_823A3B78:
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A3B9C"))) PPC_WEAK_FUNC(sub_823A3B9C);
PPC_FUNC_IMPL(__imp__sub_823A3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3BA0"))) PPC_WEAK_FUNC(sub_823A3BA0);
PPC_FUNC_IMPL(__imp__sub_823A3BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A3BA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a3c1c
	if (ctx.cr6.eq) goto loc_823A3C1C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_823A3BC8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823a3be8
	if (ctx.cr6.eq) goto loc_823A3BE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a3bc8
	if (!ctx.cr6.eq) goto loc_823A3BC8;
loc_823A3BE8:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3c34
	if (!ctx.cr6.eq) goto loc_823A3C34;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A3C1C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A3C34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823a3ca4
	if (!ctx.cr6.eq) goto loc_823A3CA4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3cd0
	if (!ctx.cr6.eq) goto loc_823A3CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A3CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823a3ccc
	goto loc_823A3CCC;
loc_823A3CA4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A3CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823A3CCC:
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_823A3CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac6c0
	ctx.lr = 0x823A3CD8;
	sub_823AC6C0(ctx, base);
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
	ctx.lr = 0x823A3CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823a3d10
	if (!ctx.cr6.eq) goto loc_823A3D10;
	// bl 0x823a3928
	ctx.lr = 0x823A3D04;
	sub_823A3928(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A3D10:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a3d2c
	if (!ctx.cr6.eq) goto loc_823A3D2C;
	// bl 0x823a3990
	ctx.lr = 0x823A3D20;
	sub_823A3990(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A3D2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a35c0
	ctx.lr = 0x823A3D34;
	sub_823A35C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A3D40"))) PPC_WEAK_FUNC(sub_823A3D40);
PPC_FUNC_IMPL(__imp__sub_823A3D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a3d7c
	if (ctx.cr6.eq) goto loc_823A3D7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4824, ctx.r11.u32);
loc_823A3D7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3D90"))) PPC_WEAK_FUNC(sub_823A3D90);
PPC_FUNC_IMPL(__imp__sub_823A3D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3D9C"))) PPC_WEAK_FUNC(sub_823A3D9C);
PPC_FUNC_IMPL(__imp__sub_823A3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3DA0"))) PPC_WEAK_FUNC(sub_823A3DA0);
PPC_FUNC_IMPL(__imp__sub_823A3DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a3de8
	if (ctx.cr6.eq) goto loc_823A3DE8;
loc_823A3DC4:
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
	ctx.lr = 0x823A3DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a3dc4
	if (!ctx.cr6.eq) goto loc_823A3DC4;
loc_823A3DE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3E10"))) PPC_WEAK_FUNC(sub_823A3E10);
PPC_FUNC_IMPL(__imp__sub_823A3E10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823a3da0
	sub_823A3DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A3E18"))) PPC_WEAK_FUNC(sub_823A3E18);
PPC_FUNC_IMPL(__imp__sub_823A3E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a3e40
	if (ctx.cr6.eq) goto loc_823A3E40;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_823A3E40:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a3e7c
	if (ctx.cr6.eq) goto loc_823A3E7C;
loc_823A3E4C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A3E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3e7c
	if (!ctx.cr6.eq) goto loc_823A3E7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a3e4c
	if (!ctx.cr6.eq) goto loc_823A3E4C;
loc_823A3E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3E94"))) PPC_WEAK_FUNC(sub_823A3E94);
PPC_FUNC_IMPL(__imp__sub_823A3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A3E98"))) PPC_WEAK_FUNC(sub_823A3E98);
PPC_FUNC_IMPL(__imp__sub_823A3E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a3f0c
	if (!ctx.cr6.eq) goto loc_823A3F0C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A3EC0;
	sub_823570E0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823570f0
	ctx.lr = 0x823A3EC8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823a3efc
	if (ctx.cr6.eq) goto loc_823A3EFC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r10,-27428
	ctx.r9.s64 = ctx.r10.s64 + -27428;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,-4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4824, ctx.r3.u32);
	// b 0x823a3f00
	goto loc_823A3F00;
loc_823A3EFC:
	// stw r11,-4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4824, ctx.r11.u32);
loc_823A3F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A3F08;
	sub_823570E0(ctx, base);
	// lwz r3,-4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4824);
loc_823A3F0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3F20"))) PPC_WEAK_FUNC(sub_823A3F20);
PPC_FUNC_IMPL(__imp__sub_823A3F20) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a3f4c
	if (!ctx.cr6.eq) goto loc_823A3F4C;
loc_823A3F38:
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
loc_823A3F4C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a3f74
	if (ctx.cr6.eq) goto loc_823A3F74;
loc_823A3F58:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a3f38
	if (ctx.cr6.eq) goto loc_823A3F38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a3f58
	if (!ctx.cr6.eq) goto loc_823A3F58;
loc_823A3F74:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823a6fa8
	ctx.lr = 0x823A3F80;
	sub_823A6FA8(ctx, base);
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

__attribute__((alias("__imp__sub_823A3F98"))) PPC_WEAK_FUNC(sub_823A3F98);
PPC_FUNC_IMPL(__imp__sub_823A3F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-27428
	ctx.r10.s64 = ctx.r11.s64 + -27428;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823a3da0
	ctx.lr = 0x823A3FC8;
	sub_823A3DA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a3fe0
	if (ctx.cr6.eq) goto loc_823A3FE0;
	// bl 0x82357128
	ctx.lr = 0x823A3FDC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A3FE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A3FF8"))) PPC_WEAK_FUNC(sub_823A3FF8);
PPC_FUNC_IMPL(__imp__sub_823A3FF8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823a40a8
	if (ctx.cr6.eq) goto loc_823A40A8;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a40a8
	if (ctx.cr6.eq) goto loc_823A40A8;
loc_823A4020:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a4050
	if (ctx.cr6.eq) goto loc_823A4050;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a4020
	if (!ctx.cr6.eq) goto loc_823A4020;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A4050:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a4078
	if (!ctx.cr6.eq) goto loc_823A4078;
	// bl 0x823a7020
	ctx.lr = 0x823A4064;
	sub_823A7020(ctx, base);
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
loc_823A4078:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a409c
	if (!ctx.cr6.eq) goto loc_823A409C;
	// bl 0x823a7088
	ctx.lr = 0x823A4088;
	sub_823A7088(ctx, base);
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
loc_823A409C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x823a6b00
	ctx.lr = 0x823A40A4;
	sub_823A6B00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A40A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A40B8"))) PPC_WEAK_FUNC(sub_823A40B8);
PPC_FUNC_IMPL(__imp__sub_823A40B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r8,30912
	ctx.r7.s64 = ctx.r8.s64 + 30912;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A40EC"))) PPC_WEAK_FUNC(sub_823A40EC);
PPC_FUNC_IMPL(__imp__sub_823A40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A40F0"))) PPC_WEAK_FUNC(sub_823A40F0);
PPC_FUNC_IMPL(__imp__sub_823A40F0) {
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
	// ble cr6,0x823a4118
	if (!ctx.cr6.gt) goto loc_823A4118;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823a4118
	if (!ctx.cr6.lt) goto loc_823A4118;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_823A4118:
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4120"))) PPC_WEAK_FUNC(sub_823A4120);
PPC_FUNC_IMPL(__imp__sub_823A4120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4128"))) PPC_WEAK_FUNC(sub_823A4128);
PPC_FUNC_IMPL(__imp__sub_823A4128) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4130"))) PPC_WEAK_FUNC(sub_823A4130);
PPC_FUNC_IMPL(__imp__sub_823A4130) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823a4140
	if (ctx.cr6.eq) goto loc_823A4140;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
loc_823A4140:
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4148"))) PPC_WEAK_FUNC(sub_823A4148);
PPC_FUNC_IMPL(__imp__sub_823A4148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a4164
	if (ctx.cr6.eq) goto loc_823A4164;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823A4164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A416C"))) PPC_WEAK_FUNC(sub_823A416C);
PPC_FUNC_IMPL(__imp__sub_823A416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4170"))) PPC_WEAK_FUNC(sub_823A4170);
PPC_FUNC_IMPL(__imp__sub_823A4170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x823a41b0
	if (ctx.cr6.eq) goto loc_823A41B0;
	// bl 0x82357128
	ctx.lr = 0x823A41AC;
	sub_82357128(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_823A41B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A41C8"))) PPC_WEAK_FUNC(sub_823A41C8);
PPC_FUNC_IMPL(__imp__sub_823A41C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A41D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x823a4204
	if (ctx.cr6.eq) goto loc_823A4204;
	// bl 0x82357128
	ctx.lr = 0x823A4200;
	sub_82357128(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_823A4204:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4244
	if (!ctx.cr6.gt) goto loc_823A4244;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A4218;
	sub_823570E0(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x823570f0
	ctx.lr = 0x823A4220;
	sub_823570F0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A422C;
	sub_823570E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a4244
	if (!ctx.cr6.eq) goto loc_823A4244;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A4244:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a425c
	if (ctx.cr6.eq) goto loc_823A425C;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82358508
	ctx.lr = 0x823A425C;
	sub_82358508(ctx, base);
loc_823A425C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4288"))) PPC_WEAK_FUNC(sub_823A4288);
PPC_FUNC_IMPL(__imp__sub_823A4288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4290;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823a42f0
	if (!ctx.cr6.gt) goto loc_823A42F0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A42BC;
	sub_823570E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82357148
	ctx.lr = 0x823A42CC;
	sub_82357148(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A42D8;
	sub_823570E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a42f0
	if (ctx.cr6.eq) goto loc_823A42F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A42F0:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a4328
	if (ctx.cr6.eq) goto loc_823A4328;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x823A4310;
	sub_82358508(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A4328:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4334"))) PPC_WEAK_FUNC(sub_823A4334);
PPC_FUNC_IMPL(__imp__sub_823A4334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4338"))) PPC_WEAK_FUNC(sub_823A4338);
PPC_FUNC_IMPL(__imp__sub_823A4338) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A4360"))) PPC_WEAK_FUNC(sub_823A4360);
PPC_FUNC_IMPL(__imp__sub_823A4360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a439c
	if (ctx.cr6.eq) goto loc_823A439C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A4394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4820, ctx.r11.u32);
loc_823A439C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A43B0"))) PPC_WEAK_FUNC(sub_823A43B0);
PPC_FUNC_IMPL(__imp__sub_823A43B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4820(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A43BC"))) PPC_WEAK_FUNC(sub_823A43BC);
PPC_FUNC_IMPL(__imp__sub_823A43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A43C0"))) PPC_WEAK_FUNC(sub_823A43C0);
PPC_FUNC_IMPL(__imp__sub_823A43C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A43C8"))) PPC_WEAK_FUNC(sub_823A43C8);
PPC_FUNC_IMPL(__imp__sub_823A43C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A43D0"))) PPC_WEAK_FUNC(sub_823A43D0);
PPC_FUNC_IMPL(__imp__sub_823A43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A43D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x823a4418
	if (ctx.cr6.eq) goto loc_823A4418;
	// bl 0x82357128
	ctx.lr = 0x823A4414;
	sub_82357128(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_823A4418:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a4430
	if (ctx.cr6.eq) goto loc_823A4430;
	// bl 0x82357128
	ctx.lr = 0x823A442C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A4430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4438"))) PPC_WEAK_FUNC(sub_823A4438);
PPC_FUNC_IMPL(__imp__sub_823A4438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// beq cr6,0x823a446c
	if (ctx.cr6.eq) goto loc_823A446C;
	// bl 0x82357128
	ctx.lr = 0x823A4468;
	sub_82357128(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_823A446C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A4474;
	sub_82356EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A448C"))) PPC_WEAK_FUNC(sub_823A448C);
PPC_FUNC_IMPL(__imp__sub_823A448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4490"))) PPC_WEAK_FUNC(sub_823A4490);
PPC_FUNC_IMPL(__imp__sub_823A4490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A4498;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a44c8
	if (ctx.cr6.eq) goto loc_823A44C8;
	// bl 0x82357128
	ctx.lr = 0x823A44C4;
	sub_82357128(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_823A44C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a44f4
	if (ctx.cr6.eq) goto loc_823A44F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a44f4
	if (ctx.cr6.eq) goto loc_823A44F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A44E0;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823A44E8;
	sub_823570F0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A44F4;
	sub_823570E0(ctx, base);
loc_823A44F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a452c
	if (ctx.cr6.eq) goto loc_823A452C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357038
	ctx.lr = 0x823A450C;
	sub_82357038(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x823A4520;
	sub_82358508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A452C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A4538"))) PPC_WEAK_FUNC(sub_823A4538);
PPC_FUNC_IMPL(__imp__sub_823A4538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4540;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x823a4580
	if (ctx.cr6.eq) goto loc_823A4580;
	// bl 0x82357128
	ctx.lr = 0x823A457C;
	sub_82357128(ctx, base);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
loc_823A4580:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A4588;
	sub_82356EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4590"))) PPC_WEAK_FUNC(sub_823A4590);
PPC_FUNC_IMPL(__imp__sub_823A4590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bl 0x82357038
	ctx.lr = 0x823A45E8;
	sub_82357038(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823a41c8
	ctx.lr = 0x823A45F4;
	sub_823A41C8(ctx, base);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4628"))) PPC_WEAK_FUNC(sub_823A4628);
PPC_FUNC_IMPL(__imp__sub_823A4628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A4630;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4680
	if (!ctx.cr6.gt) goto loc_823A4680;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823A4650:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A466C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823a4650
	if (ctx.cr6.lt) goto loc_823A4650;
loc_823A4680:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A468C"))) PPC_WEAK_FUNC(sub_823A468C);
PPC_FUNC_IMPL(__imp__sub_823A468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4690"))) PPC_WEAK_FUNC(sub_823A4690);
PPC_FUNC_IMPL(__imp__sub_823A4690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4698;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A46AC;
	sub_82356E70(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
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
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x82356f88
	ctx.lr = 0x823A46FC;
	sub_82356F88(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4710"))) PPC_WEAK_FUNC(sub_823A4710);
PPC_FUNC_IMPL(__imp__sub_823A4710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A4734;
	sub_82356E70(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27424
	ctx.r9.s64 = ctx.r10.s64 + -27424;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x823a4590
	ctx.lr = 0x823A4764;
	sub_823A4590(ctx, base);
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

__attribute__((alias("__imp__sub_823A4780"))) PPC_WEAK_FUNC(sub_823A4780);
PPC_FUNC_IMPL(__imp__sub_823A4780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A4788;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823A4794;
	sub_823A1E50(ctx, base);
	// lwz r31,76(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823accb0
	ctx.lr = 0x823A47A0;
	sub_823ACCB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ad058
	ctx.lr = 0x823A47A8;
	sub_823AD058(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a48c8
	if (!ctx.cr6.gt) goto loc_823A48C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823A47C0:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a4838
	if (ctx.cr6.eq) goto loc_823A4838;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x823a47f4
	if (ctx.cr6.eq) goto loc_823A47F4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_823A47F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A4824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a4838
	if (ctx.cr6.eq) goto loc_823A4838;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_823A4838:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a48b4
	if (ctx.cr6.eq) goto loc_823A48B4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823a4870
	if (ctx.cr6.eq) goto loc_823A4870;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_823A4870:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A48A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a48b4
	if (ctx.cr6.eq) goto loc_823A48B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_823A48B4:
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a47c0
	if (ctx.cr6.lt) goto loc_823A47C0;
loc_823A48C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A48D0"))) PPC_WEAK_FUNC(sub_823A48D0);
PPC_FUNC_IMPL(__imp__sub_823A48D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A48D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,76(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823accb0
	ctx.lr = 0x823A48E8;
	sub_823ACCB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ad058
	ctx.lr = 0x823A48F0;
	sub_823AD058(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823a4980
	if (ctx.cr6.eq) goto loc_823A4980;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// beq cr6,0x823a4918
	if (ctx.cr6.eq) goto loc_823A4918;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_823A4918:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4980
	if (!ctx.cr6.gt) goto loc_823A4980;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823A4928:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a496c
	if (!ctx.cr6.eq) goto loc_823A496C;
	// bl 0x823a1e50
	ctx.lr = 0x823A4940;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A496C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A496C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a4928
	if (ctx.cr6.lt) goto loc_823A4928;
loc_823A4980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A4988"))) PPC_WEAK_FUNC(sub_823A4988);
PPC_FUNC_IMPL(__imp__sub_823A4988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A4990;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82357048
	ctx.lr = 0x823A49A4;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a49c4
	if (ctx.cr6.eq) goto loc_823A49C4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a4a08
	if (ctx.cr6.eq) goto loc_823A4A08;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A49C4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4a08
	if (!ctx.cr6.gt) goto loc_823A4A08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823A49D8:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82357048
	ctx.lr = 0x823A49EC;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a4a14
	if (!ctx.cr6.eq) goto loc_823A4A14;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a49d8
	if (ctx.cr6.lt) goto loc_823A49D8;
loc_823A4A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A4A14:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mulli r11,r29,88
	ctx.r11.s64 = ctx.r29.s64 * 88;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A4A28"))) PPC_WEAK_FUNC(sub_823A4A28);
PPC_FUNC_IMPL(__imp__sub_823A4A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a4988
	ctx.lr = 0x823A4A40;
	sub_823A4988(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4a74
	if (ctx.cr6.eq) goto loc_823A4A74;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x823a4a8c
	if (!ctx.cr6.eq) goto loc_823A4A8C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a4a68
	if (ctx.cr6.eq) goto loc_823A4A68;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A4A68:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_823A4A6C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a4a78
	if (ctx.cr6.eq) goto loc_823A4A78;
loc_823A4A74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A4A78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A4A8C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x823a4a9c
	if (!ctx.cr6.eq) goto loc_823A4A9C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x823a4a6c
	goto loc_823A4A6C;
loc_823A4A9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_823A4AA4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a4a74
	if (!ctx.cr6.eq) goto loc_823A4A74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823a4aa4
	if (ctx.cr6.lt) goto loc_823A4AA4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4AD4"))) PPC_WEAK_FUNC(sub_823A4AD4);
PPC_FUNC_IMPL(__imp__sub_823A4AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4AD8"))) PPC_WEAK_FUNC(sub_823A4AD8);
PPC_FUNC_IMPL(__imp__sub_823A4AD8) {
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
	// bl 0x823a4988
	ctx.lr = 0x823A4AE8;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a4b00
	if (!ctx.cr6.eq) goto loc_823A4B00;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A4B00:
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
}

__attribute__((alias("__imp__sub_823A4B14"))) PPC_WEAK_FUNC(sub_823A4B14);
PPC_FUNC_IMPL(__imp__sub_823A4B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4B18"))) PPC_WEAK_FUNC(sub_823A4B18);
PPC_FUNC_IMPL(__imp__sub_823A4B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a4988
	ctx.lr = 0x823A4B30;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a4b4c
	if (!ctx.cr6.eq) goto loc_823A4B4C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A4B4C:
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_823A4B68"))) PPC_WEAK_FUNC(sub_823A4B68);
PPC_FUNC_IMPL(__imp__sub_823A4B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a4988
	ctx.lr = 0x823A4B88;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4bc8
	if (ctx.cr6.eq) goto loc_823A4BC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82357048
	ctx.lr = 0x823A4B9C;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a4bb8
	if (ctx.cr6.eq) goto loc_823A4BB8;
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x823accb0
	ctx.lr = 0x823A4BAC;
	sub_823ACCB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ad088
	ctx.lr = 0x823A4BB4;
	sub_823AD088(ctx, base);
	// b 0x823a4bc8
	goto loc_823A4BC8;
loc_823A4BB8:
	// ld r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x823accb0
	ctx.lr = 0x823A4BC0;
	sub_823ACCB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ad0b8
	ctx.lr = 0x823A4BC8;
	sub_823AD0B8(ctx, base);
loc_823A4BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4BE0"))) PPC_WEAK_FUNC(sub_823A4BE0);
PPC_FUNC_IMPL(__imp__sub_823A4BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4BE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r30.u32);
	// addi r29,r4,56
	ctx.r29.s64 = ctx.r4.s64 + 56;
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r30.u32);
	// std r30,72(r4)
	PPC_STORE_U64(ctx.r4.u32 + 72, ctx.r30.u64);
	// stw r30,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r30.u32);
	// beq cr6,0x823a4c28
	if (ctx.cr6.eq) goto loc_823A4C28;
	// bl 0x82357128
	ctx.lr = 0x823A4C24;
	sub_82357128(ctx, base);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
loc_823A4C28:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A4C30;
	sub_82356EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4C38"))) PPC_WEAK_FUNC(sub_823A4C38);
PPC_FUNC_IMPL(__imp__sub_823A4C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823A4C40;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a4ce4
	if (ctx.cr6.eq) goto loc_823A4CE4;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r26,r4,r6
	ctx.r26.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_823A4C78:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// bl 0x82357038
	ctx.lr = 0x823A4CA8;
	sub_82357038(ctx, base);
	// add r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823a4cd0
	if (!ctx.cr6.gt) goto loc_823A4CD0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A4CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A4CD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823a4c78
	if (ctx.cr6.lt) goto loc_823A4C78;
loc_823A4CE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823A4CEC"))) PPC_WEAK_FUNC(sub_823A4CEC);
PPC_FUNC_IMPL(__imp__sub_823A4CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4CF0"))) PPC_WEAK_FUNC(sub_823A4CF0);
PPC_FUNC_IMPL(__imp__sub_823A4CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A4CF8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823a4d6c
	if (ctx.cr6.eq) goto loc_823A4D6C;
loc_823A4D18:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823a4d2c
	if (ctx.cr6.gt) goto loc_823A4D2C;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_823A4D2C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4d58
	if (ctx.cr6.eq) goto loc_823A4D58;
	// bl 0x82357128
	ctx.lr = 0x823A4D54;
	sub_82357128(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_823A4D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A4D60;
	sub_82356EB8(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823a4d18
	if (ctx.cr6.lt) goto loc_823A4D18;
loc_823A4D6C:
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A4D7C"))) PPC_WEAK_FUNC(sub_823A4D7C);
PPC_FUNC_IMPL(__imp__sub_823A4D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4D80"))) PPC_WEAK_FUNC(sub_823A4D80);
PPC_FUNC_IMPL(__imp__sub_823A4D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A4D88;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a4db0
	if (!ctx.cr6.eq) goto loc_823A4DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A4DB0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4e28
	if (!ctx.cr6.gt) goto loc_823A4E28;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823A4DC4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x823a4988
	ctx.lr = 0x823A4DD8;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4e14
	if (ctx.cr6.eq) goto loc_823A4E14;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
loc_823A4DE8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a4e14
	if (!ctx.cr6.eq) goto loc_823A4E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823a4de8
	if (ctx.cr6.lt) goto loc_823A4DE8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x823a4288
	ctx.lr = 0x823A4E14;
	sub_823A4288(ctx, base);
loc_823A4E14:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a4dc4
	if (ctx.cr6.lt) goto loc_823A4DC4;
loc_823A4E28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A4E34"))) PPC_WEAK_FUNC(sub_823A4E34);
PPC_FUNC_IMPL(__imp__sub_823A4E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4E38"))) PPC_WEAK_FUNC(sub_823A4E38);
PPC_FUNC_IMPL(__imp__sub_823A4E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4E40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A4E54;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a4e68
	if (!ctx.cr6.eq) goto loc_823A4E68;
loc_823A4E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A4E68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A4E74;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4e5c
	if (ctx.cr6.eq) goto loc_823A4E5C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x823a4e94
	if (ctx.cr6.eq) goto loc_823A4E94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_823A4E94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4EA0"))) PPC_WEAK_FUNC(sub_823A4EA0);
PPC_FUNC_IMPL(__imp__sub_823A4EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823A4EA8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a4f20
	if (!ctx.cr6.gt) goto loc_823A4F20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r26,r11,-27424
	ctx.r26.s64 = ctx.r11.s64 + -27424;
loc_823A4ED0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x823a4f04
	if (ctx.cr6.eq) goto loc_823A4F04;
	// bl 0x82357128
	ctx.lr = 0x823A4F00;
	sub_82357128(ctx, base);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
loc_823A4F04:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A4F0C;
	sub_82356EB8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a4ed0
	if (ctx.cr6.lt) goto loc_823A4ED0;
loc_823A4F20:
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823A4F2C"))) PPC_WEAK_FUNC(sub_823A4F2C);
PPC_FUNC_IMPL(__imp__sub_823A4F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4F30"))) PPC_WEAK_FUNC(sub_823A4F30);
PPC_FUNC_IMPL(__imp__sub_823A4F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A4F38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a4fb0
	if (ctx.cr6.eq) goto loc_823A4FB0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4f80
	if (ctx.cr6.eq) goto loc_823A4F80;
	// bl 0x82357128
	ctx.lr = 0x823A4F7C;
	sub_82357128(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_823A4F80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A4F88;
	sub_82356EB8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a4fa4
	if (ctx.cr6.gt) goto loc_823A4FA4;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_823A4FA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_823A4FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A4FB8"))) PPC_WEAK_FUNC(sub_823A4FB8);
PPC_FUNC_IMPL(__imp__sub_823A4FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a5044
	if (!ctx.cr6.lt) goto loc_823A5044;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a5044
	if (ctx.cr6.eq) goto loc_823A5044;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A5010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823a5038
	if (!ctx.cr6.lt) goto loc_823A5038;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4c38
	ctx.lr = 0x823A5038;
	sub_823A4C38(ctx, base);
loc_823A5038:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823A5044:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A505C"))) PPC_WEAK_FUNC(sub_823A505C);
PPC_FUNC_IMPL(__imp__sub_823A505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5060"))) PPC_WEAK_FUNC(sub_823A5060);
PPC_FUNC_IMPL(__imp__sub_823A5060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823A5068;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a5080
	if (!ctx.cr6.eq) goto loc_823A5080;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823A5080:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add. r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x823a5098
	if (!ctx.cr0.eq) goto loc_823A5098;
loc_823A508C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823A5098:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823A50A0;
	sub_823570E0(ctx, base);
	// mulli r31,r22,88
	ctx.r31.s64 = ctx.r22.s64 * 88;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x823A50B0;
	sub_82357208(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A50BC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823a508c
	if (ctx.cr6.eq) goto loc_823A508C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823585a0
	ctx.lr = 0x823A50D0;
	sub_823585A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a518c
	if (ctx.cr6.eq) goto loc_823A518C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a5178
	if (!ctx.cr6.gt) goto loc_823A5178;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r25,r11,-27424
	ctx.r25.s64 = ctx.r11.s64 + -27424;
loc_823A5100:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823a5114
	if (ctx.cr6.eq) goto loc_823A5114;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a4710
	ctx.lr = 0x823A5114;
	sub_823A4710(ctx, base);
loc_823A5114:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x823a4590
	ctx.lr = 0x823A5124;
	sub_823A4590(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r27,r31,56
	ctx.r27.s64 = ctx.r31.s64 + 56;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// beq cr6,0x823a5158
	if (ctx.cr6.eq) goto loc_823A5158;
	// bl 0x82357128
	ctx.lr = 0x823A5154;
	sub_82357128(ctx, base);
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
loc_823A5158:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A5160;
	sub_82356EB8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// addi r26,r26,88
	ctx.r26.s64 = ctx.r26.s64 + 88;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a5100
	if (ctx.cr6.lt) goto loc_823A5100;
loc_823A5178:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a518c
	if (ctx.cr6.eq) goto loc_823A518C;
	// bl 0x82357240
	ctx.lr = 0x823A5188;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_823A518C:
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r22,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823A51A0"))) PPC_WEAK_FUNC(sub_823A51A0);
PPC_FUNC_IMPL(__imp__sub_823A51A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823A51A8;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// beq cr6,0x823a5248
	if (ctx.cr6.eq) goto loc_823A5248;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// add r22,r4,r6
	ctx.r22.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mulli r30,r5,88
	ctx.r30.s64 = ctx.r5.s64 * 88;
	// mulli r25,r4,88
	ctx.r25.s64 = ctx.r4.s64 * 88;
	// addi r23,r11,-27424
	ctx.r23.s64 = ctx.r11.s64 + -27424;
loc_823A51DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x823a4590
	ctx.lr = 0x823A51EC;
	sub_823A4590(ctx, base);
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x823a5234
	if (!ctx.cr6.gt) goto loc_823A5234;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r23,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r23.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// std r28,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r28.u64);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// beq cr6,0x823a522c
	if (ctx.cr6.eq) goto loc_823A522C;
	// bl 0x82357128
	ctx.lr = 0x823A5228;
	sub_82357128(ctx, base);
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
loc_823A522C:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A5234;
	sub_82356EB8(ctx, base);
loc_823A5234:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,88
	ctx.r25.s64 = ctx.r25.s64 + 88;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823a51dc
	if (ctx.cr6.lt) goto loc_823A51DC;
loc_823A5248:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823A5250"))) PPC_WEAK_FUNC(sub_823A5250);
PPC_FUNC_IMPL(__imp__sub_823A5250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823A5258;
	sub_82248770(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823A5264;
	sub_823A1E50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x8237d2e8
	ctx.lr = 0x823A526C;
	sub_8237D2E8(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a53b8
	if (!ctx.cr6.gt) goto loc_823A53B8;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r22,8
	ctx.r22.s64 = 8;
loc_823A528C:
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// add r29,r26,r11
	ctx.r29.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_823A52A0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823500d0
	ctx.lr = 0x823A52B0;
	sub_823500D0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a52c8
	if (!ctx.cr6.eq) goto loc_823A52C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a52d8
	if (!ctx.cr6.eq) goto loc_823A52D8;
	// b 0x823a52cc
	goto loc_823A52CC;
loc_823A52C8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_823A52CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x823a52a0
	if (ctx.cr6.lt) goto loc_823A52A0;
loc_823A52D8:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x823a53a4
	if (ctx.cr6.eq) goto loc_823A53A4;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A52F4;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5310
	if (ctx.cr6.eq) goto loc_823A5310;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x823a5310
	if (ctx.cr6.eq) goto loc_823A5310;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
loc_823A5310:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a53a4
	if (ctx.cr6.eq) goto loc_823A53A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A5328;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5350
	if (ctx.cr6.eq) goto loc_823A5350;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a5344
	if (ctx.cr6.eq) goto loc_823A5344;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823A5344:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a5354
	if (ctx.cr6.eq) goto loc_823A5354;
loc_823A5350:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823A5354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5368
	if (ctx.cr6.eq) goto loc_823A5368;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
loc_823A5368:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A5398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a53a4
	if (ctx.cr6.eq) goto loc_823A53A4;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_823A53A4:
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,88
	ctx.r26.s64 = ctx.r26.s64 + 88;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a528c
	if (ctx.cr6.lt) goto loc_823A528C;
loc_823A53B8:
	// bl 0x823a0f10
	ctx.lr = 0x823A53BC;
	sub_823A0F10(ctx, base);
	// bl 0x823a4148
	ctx.lr = 0x823A53C0;
	sub_823A4148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5434
	if (ctx.cr6.eq) goto loc_823A5434;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823A53DC;
	sub_823585A0(ctx, base);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a5434
	if (ctx.cr6.eq) goto loc_823A5434;
	// lwz r31,76(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// bl 0x823accb0
	ctx.lr = 0x823A53F0;
	sub_823ACCB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x823ad0e8
	ctx.lr = 0x823A5400;
	sub_823AD0E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5434
	if (ctx.cr6.eq) goto loc_823A5434;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x823a5434
	if (ctx.cr6.gt) goto loc_823A5434;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a5434
	if (ctx.cr6.eq) goto loc_823A5434;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,80
	ctx.r4.s64 = ctx.r28.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a4d80
	ctx.lr = 0x823A5434;
	sub_823A4D80(ctx, base);
loc_823A5434:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823A543C"))) PPC_WEAK_FUNC(sub_823A543C);
PPC_FUNC_IMPL(__imp__sub_823A543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5440"))) PPC_WEAK_FUNC(sub_823A5440);
PPC_FUNC_IMPL(__imp__sub_823A5440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A5448;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x823a5494
	if (!ctx.cr6.gt) goto loc_823A5494;
	// addi r28,r4,24
	ctx.r28.s64 = ctx.r4.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A5468:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82357048
	ctx.lr = 0x823A547C;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a54a0
	if (!ctx.cr6.eq) goto loc_823A54A0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x823a5468
	if (ctx.cr6.lt) goto loc_823A5468;
loc_823A5494:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A54A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x823a4fb8
	ctx.lr = 0x823A54AC;
	sub_823A4FB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A54B8"))) PPC_WEAK_FUNC(sub_823A54B8);
PPC_FUNC_IMPL(__imp__sub_823A54B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A54C0;
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
	// bgt cr6,0x823a54fc
	if (ctx.cr6.gt) goto loc_823A54FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a5060
	ctx.lr = 0x823A54E8;
	sub_823A5060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a54fc
	if (!ctx.cr6.eq) goto loc_823A54FC;
loc_823A54F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A54FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a54f0
	if (ctx.cr6.eq) goto loc_823A54F0;
	// mulli r10,r30,88
	ctx.r10.s64 = ctx.r30.s64 * 88;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823a5520
	if (ctx.cr0.eq) goto loc_823A5520;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4710
	ctx.lr = 0x823A5520;
	sub_823A4710(ctx, base);
loc_823A5520:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4590
	ctx.lr = 0x823A552C;
	sub_823A4590(ctx, base);
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

__attribute__((alias("__imp__sub_823A5544"))) PPC_WEAK_FUNC(sub_823A5544);
PPC_FUNC_IMPL(__imp__sub_823A5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5548"))) PPC_WEAK_FUNC(sub_823A5548);
PPC_FUNC_IMPL(__imp__sub_823A5548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823a55bc
	if (!ctx.cr6.lt) goto loc_823A55BC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a55bc
	if (ctx.cr6.eq) goto loc_823A55BC;
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823a4be0
	ctx.lr = 0x823A5588;
	sub_823A4BE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823a55b0
	if (!ctx.cr6.lt) goto loc_823A55B0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a51a0
	ctx.lr = 0x823A55B0;
	sub_823A51A0(ctx, base);
loc_823A55B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A55BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A55D4"))) PPC_WEAK_FUNC(sub_823A55D4);
PPC_FUNC_IMPL(__imp__sub_823A55D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A55D8"))) PPC_WEAK_FUNC(sub_823A55D8);
PPC_FUNC_IMPL(__imp__sub_823A55D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-27420
	ctx.r10.s64 = ctx.r11.s64 + -27420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823a4cf0
	ctx.lr = 0x823A5604;
	sub_823A4CF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a561c
	if (ctx.cr6.eq) goto loc_823A561C;
	// bl 0x82357240
	ctx.lr = 0x823A5614;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823A561C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5634
	if (ctx.cr6.eq) goto loc_823A5634;
	// bl 0x82357128
	ctx.lr = 0x823A5630;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A5634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A564C"))) PPC_WEAK_FUNC(sub_823A564C);
PPC_FUNC_IMPL(__imp__sub_823A564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5650"))) PPC_WEAK_FUNC(sub_823A5650);
PPC_FUNC_IMPL(__imp__sub_823A5650) {
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
	// bl 0x823a4cf0
	ctx.lr = 0x823A5670;
	sub_823A4CF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5688
	if (ctx.cr6.eq) goto loc_823A5688;
	// bl 0x82357240
	ctx.lr = 0x823A5680;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823A5688:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823570e0
	ctx.lr = 0x823A5690;
	sub_823570E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82357208
	ctx.lr = 0x823A56A4;
	sub_82357208(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A56B0;
	sub_823570E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A56D8"))) PPC_WEAK_FUNC(sub_823A56D8);
PPC_FUNC_IMPL(__imp__sub_823A56D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A56E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-27416
	ctx.r10.s64 = ctx.r11.s64 + -27416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823A5700;
	sub_823A86F8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823a4690
	ctx.lr = 0x823A5708;
	sub_823A4690(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r8,r9,-27420
	ctx.r8.s64 = ctx.r9.s64 + -27420;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823A5768;
	sub_823A86F8(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A5780"))) PPC_WEAK_FUNC(sub_823A5780);
PPC_FUNC_IMPL(__imp__sub_823A5780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A5788;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r3,184
	ctx.r30.s64 = ctx.r3.s64 + 184;
	// addi r10,r11,-27416
	ctx.r10.s64 = ctx.r11.s64 + -27416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x823a4628
	ctx.lr = 0x823A57A8;
	sub_823A4628(ctx, base);
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a57c0
	if (ctx.cr6.eq) goto loc_823A57C0;
	// bl 0x82357240
	ctx.lr = 0x823A57BC;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823A57C0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r30,r28,156
	ctx.r30.s64 = ctx.r28.s64 + 156;
	// addi r10,r11,-27420
	ctx.r10.s64 = ctx.r11.s64 + -27420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r10.u32);
	// bl 0x823a4cf0
	ctx.lr = 0x823A57E0;
	sub_823A4CF0(ctx, base);
	// lwz r3,168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a57f4
	if (ctx.cr6.eq) goto loc_823A57F4;
	// bl 0x82357240
	ctx.lr = 0x823A57F0;
	sub_82357240(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_823A57F4:
	// addi r29,r28,136
	ctx.r29.s64 = ctx.r28.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a4ea0
	ctx.lr = 0x823A5800;
	sub_823A4EA0(ctx, base);
	// lwz r3,140(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5814
	if (ctx.cr6.eq) goto loc_823A5814;
	// bl 0x82357240
	ctx.lr = 0x823A5810;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823A5814:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// lwz r3,128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r27,r30,56
	ctx.r27.s64 = ctx.r30.s64 + 56;
	// stw r31,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r31.u32);
	// stw r10,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r31.u32);
	// std r31,120(r28)
	PPC_STORE_U64(ctx.r28.u32 + 120, ctx.r31.u64);
	// stw r31,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r31.u32);
	// beq cr6,0x823a5854
	if (ctx.cr6.eq) goto loc_823A5854;
	// bl 0x82357128
	ctx.lr = 0x823A5850;
	sub_82357128(ctx, base);
	// stw r31,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r31.u32);
loc_823A5854:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82356eb8
	ctx.lr = 0x823A585C;
	sub_82356EB8(ctx, base);
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x823ab568
	ctx.lr = 0x823A5864;
	sub_823AB568(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,31088
	ctx.r10.s64 = ctx.r11.s64 + 31088;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A5878"))) PPC_WEAK_FUNC(sub_823A5878);
PPC_FUNC_IMPL(__imp__sub_823A5878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A5880;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823accb0
	ctx.lr = 0x823A588C;
	sub_823ACCB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a589c
	if (ctx.cr6.eq) goto loc_823A589C;
	// bl 0x823accc0
	ctx.lr = 0x823A5898;
	sub_823ACCC0(ctx, base);
	// bl 0x823ad4c0
	ctx.lr = 0x823A589C;
	sub_823AD4C0(ctx, base);
loc_823A589C:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823a86f8
	ctx.lr = 0x823A58A4;
	sub_823A86F8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// li r4,88
	ctx.r4.s64 = 88;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823A58D0;
	sub_823585A0(ctx, base);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a4ea0
	ctx.lr = 0x823A58DC;
	sub_823A4EA0(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a58f0
	if (ctx.cr6.eq) goto loc_823A58F0;
	// bl 0x82357240
	ctx.lr = 0x823A58EC;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_823A58F0:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a4cf0
	ctx.lr = 0x823A5904;
	sub_823A4CF0(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5918
	if (ctx.cr6.eq) goto loc_823A5918;
	// bl 0x82357240
	ctx.lr = 0x823A5914;
	sub_82357240(ctx, base);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
loc_823A5918:
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4628
	ctx.lr = 0x823A5924;
	sub_823A4628(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5938
	if (ctx.cr6.eq) goto loc_823A5938;
	// bl 0x82357240
	ctx.lr = 0x823A5934;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823A5938:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A5948"))) PPC_WEAK_FUNC(sub_823A5948);
PPC_FUNC_IMPL(__imp__sub_823A5948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823A5950;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x823a1e50
	ctx.lr = 0x823A595C;
	sub_823A1E50(ctx, base);
	// lwz r11,180(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823a5a7c
	if (!ctx.cr6.lt) goto loc_823A5A7C;
	// lwz r11,144(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a5a7c
	if (!ctx.cr6.gt) goto loc_823A5A7C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_823A5988:
	// lwz r11,140(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 140);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a5a44
	if (!ctx.cr6.eq) goto loc_823A5A44;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5a44
	if (ctx.cr6.eq) goto loc_823A5A44;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A59B8;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5a70
	if (ctx.cr6.eq) goto loc_823A5A70;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
loc_823A59C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a5a70
	if (!ctx.cr6.eq) goto loc_823A5A70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823a59c8
	if (ctx.cr6.lt) goto loc_823A59C8;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r30,840
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 840, ctx.xer);
	// blt cr6,0x823a5a44
	if (ctx.cr6.lt) goto loc_823A5A44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357068
	ctx.lr = 0x823A5A00;
	sub_82357068(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A5A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823a4170
	ctx.lr = 0x823A5A38;
	sub_823A4170(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x82356eb8
	ctx.lr = 0x823A5A44;
	sub_82356EB8(ctx, base);
loc_823A5A44:
	// lwz r11,144(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,88
	ctx.r28.s64 = ctx.r28.s64 + 88;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a5988
	if (ctx.cr6.lt) goto loc_823A5988;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823a5a7c
	if (ctx.cr6.eq) goto loc_823A5A7C;
	// lwz r11,180(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 180, ctx.r11.u32);
	// b 0x823a5a80
	goto loc_823A5A80;
loc_823A5A70:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x823a4170
	ctx.lr = 0x823A5A78;
	sub_823A4170(ctx, base);
	// b 0x823a5a44
	goto loc_823A5A44;
loc_823A5A7C:
	// stw r24,180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 180, ctx.r24.u32);
loc_823A5A80:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a5ab8
	if (ctx.cr6.eq) goto loc_823A5AB8;
	// addi r3,r23,20
	ctx.r3.s64 = ctx.r23.s64 + 20;
	// bl 0x8237d218
	ctx.lr = 0x823A5A94;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823a5ab4
	if (!ctx.cr6.lt) goto loc_823A5AB4;
	// addi r3,r23,156
	ctx.r3.s64 = ctx.r23.s64 + 156;
	// bl 0x823a4f30
	ctx.lr = 0x823A5AAC;
	sub_823A4F30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823A5AB4:
	// stw r24,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r24.u32);
loc_823A5AB8:
	// lwz r11,176(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5cb4
	if (ctx.cr6.eq) goto loc_823A5CB4;
	// addi r31,r23,156
	ctx.r31.s64 = ctx.r23.s64 + 156;
loc_823A5AC8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A5AEC;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5b44
	if (ctx.cr6.eq) goto loc_823A5B44;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
loc_823A5AFC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a5b44
	if (!ctx.cr6.eq) goto loc_823A5B44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823a5afc
	if (ctx.cr6.lt) goto loc_823A5AFC;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a5b6c
	if (!ctx.cr6.eq) goto loc_823A5B6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4cf0
	ctx.lr = 0x823A5B2C;
	sub_823A4CF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5c00
	if (ctx.cr6.eq) goto loc_823A5C00;
	// bl 0x82357240
	ctx.lr = 0x823A5B3C;
	sub_82357240(ctx, base);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// b 0x823a5c00
	goto loc_823A5C00;
loc_823A5B44:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5c00
	if (ctx.cr6.eq) goto loc_823A5C00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x823a5bb8
	goto loc_823A5BB8;
loc_823A5B6C:
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ld r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x823accb0
	ctx.lr = 0x823A5B7C;
	sub_823ACCB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x823ad1f0
	ctx.lr = 0x823A5B8C;
	sub_823AD1F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5c14
	if (ctx.cr6.eq) goto loc_823A5C14;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5c00
	if (ctx.cr6.eq) goto loc_823A5C00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823A5BB8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5bd0
	if (ctx.cr6.eq) goto loc_823A5BD0;
	// bl 0x82357128
	ctx.lr = 0x823A5BCC;
	sub_82357128(ctx, base);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
loc_823A5BD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A5BD8;
	sub_82356EB8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt cr6,0x823a5bf4
	if (ctx.cr6.gt) goto loc_823A5BF4;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_823A5BF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_823A5C00:
	// lwz r11,176(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a5ac8
	if (!ctx.cr6.eq) goto loc_823A5AC8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823A5C14:
	// addi r30,r23,20
	ctx.r30.s64 = ctx.r23.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823A5C20;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x823A5C28;
	sub_8237D130(ctx, base);
	// lwz r10,176(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// beq cr6,0x823a5cb4
	if (ctx.cr6.eq) goto loc_823A5CB4;
loc_823A5C3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a5ca8
	if (ctx.cr6.eq) goto loc_823A5CA8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a5c78
	if (ctx.cr6.eq) goto loc_823A5C78;
	// bl 0x82357128
	ctx.lr = 0x823A5C74;
	sub_82357128(ctx, base);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
loc_823A5C78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823A5C80;
	sub_82356EB8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a5c9c
	if (ctx.cr6.gt) goto loc_823A5C9C;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_823A5C9C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_823A5CA8:
	// lwz r11,176(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a5c3c
	if (!ctx.cr6.eq) goto loc_823A5C3C;
loc_823A5CB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823A5CBC"))) PPC_WEAK_FUNC(sub_823A5CBC);
PPC_FUNC_IMPL(__imp__sub_823A5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CC0"))) PPC_WEAK_FUNC(sub_823A5CC0);
PPC_FUNC_IMPL(__imp__sub_823A5CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A5CC8;
	sub_82248780(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823a4690
	ctx.lr = 0x823A5CE4;
	sub_823A4690(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82357038
	ctx.lr = 0x823A5D14;
	sub_82357038(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// std r31,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r31.u64);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// beq cr6,0x823a5d3c
	if (ctx.cr6.eq) goto loc_823A5D3C;
	// bl 0x82357128
	ctx.lr = 0x823A5D38;
	sub_82357128(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
loc_823A5D3C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x823a5d7c
	if (!ctx.cr6.eq) goto loc_823A5D7C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a5d68
	if (!ctx.cr6.eq) goto loc_823A5D68;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4590
	ctx.lr = 0x823A5D60;
	sub_823A4590(ctx, base);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// b 0x823a5da4
	goto loc_823A5DA4;
loc_823A5D68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4538
	ctx.lr = 0x823A5D70;
	sub_823A4538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A5D7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A5D88;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a5d68
	if (!ctx.cr6.eq) goto loc_823A5D68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x823a54b8
	ctx.lr = 0x823A5D9C;
	sub_823A54B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5d68
	if (ctx.cr6.eq) goto loc_823A5D68;
loc_823A5DA4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r10,r11,-27424
	ctx.r10.s64 = ctx.r11.s64 + -27424;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// std r31,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r31.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// beq cr6,0x823a5dd4
	if (ctx.cr6.eq) goto loc_823A5DD4;
	// bl 0x82357128
	ctx.lr = 0x823A5DD0;
	sub_82357128(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
loc_823A5DD4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356eb8
	ctx.lr = 0x823A5DDC;
	sub_82356EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A5DE8"))) PPC_WEAK_FUNC(sub_823A5DE8);
PPC_FUNC_IMPL(__imp__sub_823A5DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A5DF0;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82357048
	ctx.lr = 0x823A5E04;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5e28
	if (ctx.cr6.eq) goto loc_823A5E28;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,88
	ctx.r4.s64 = 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823585a0
	ctx.lr = 0x823A5E20;
	sub_823585A0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A5E28:
	// bl 0x823a0f10
	ctx.lr = 0x823A5E2C;
	sub_823A0F10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// bl 0x82357068
	ctx.lr = 0x823A5E3C;
	sub_82357068(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357048
	ctx.lr = 0x823A5E48;
	sub_82357048(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x823a5ee4
	if (ctx.cr6.eq) goto loc_823A5EE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a5ec4
	if (!ctx.cr6.gt) goto loc_823A5EC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823A5E68:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82356608
	ctx.lr = 0x823A5E78;
	sub_82356608(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x823a5eb0
	if (ctx.cr6.eq) goto loc_823A5EB0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823A5E90;
	sub_823585A0(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bl 0x823accb0
	ctx.lr = 0x823A5EA8;
	sub_823ACCB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823acf40
	ctx.lr = 0x823A5EB0;
	sub_823ACF40(ctx, base);
loc_823A5EB0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a5e68
	if (ctx.cr6.lt) goto loc_823A5E68;
loc_823A5EC4:
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823a4ea0
	ctx.lr = 0x823A5ECC;
	sub_823A4EA0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A5EDC;
	sub_82356EB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A5EE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a5f2c
	if (!ctx.cr6.gt) goto loc_823A5F2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823A5EF0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82357048
	ctx.lr = 0x823A5F04;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a5f18
	if (ctx.cr6.eq) goto loc_823A5F18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823a5548
	ctx.lr = 0x823A5F18;
	sub_823A5548(ctx, base);
loc_823A5F18:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a5ef0
	if (ctx.cr6.lt) goto loc_823A5EF0;
loc_823A5F2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823A5F34;
	sub_82356EB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A5F3C"))) PPC_WEAK_FUNC(sub_823A5F3C);
PPC_FUNC_IMPL(__imp__sub_823A5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5F40"))) PPC_WEAK_FUNC(sub_823A5F40);
PPC_FUNC_IMPL(__imp__sub_823A5F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A5F48;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// lwz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a6018
	if (!ctx.cr6.eq) goto loc_823A6018;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a600c
	if (ctx.cr6.eq) goto loc_823A600C;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a5cc0
	ctx.lr = 0x823A5F88;
	sub_823A5CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a600c
	if (ctx.cr6.eq) goto loc_823A600C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x823a5fd8
	if (ctx.cr6.eq) goto loc_823A5FD8;
	// bl 0x823585a0
	ctx.lr = 0x823A5FA4;
	sub_823585A0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x823accb0
	ctx.lr = 0x823A5FB4;
	sub_823ACCB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823acdf0
	ctx.lr = 0x823A5FBC;
	sub_823ACDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a6000
	if (ctx.cr6.eq) goto loc_823A6000;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A5FD8:
	// bl 0x823585a0
	ctx.lr = 0x823A5FDC;
	sub_823585A0(ctx, base);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bl 0x823accb0
	ctx.lr = 0x823A5FF0;
	sub_823ACCB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ad3a8
	ctx.lr = 0x823A5FF8;
	sub_823AD3A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a60a8
	if (!ctx.cr6.eq) goto loc_823A60A8;
loc_823A6000:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5de8
	ctx.lr = 0x823A600C;
	sub_823A5DE8(ctx, base);
loc_823A600C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A6018:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A6024;
	sub_823A4988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a600c
	if (ctx.cr6.eq) goto loc_823A600C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a600c
	if (ctx.cr6.eq) goto loc_823A600C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a607c
	if (ctx.cr6.eq) goto loc_823A607C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823A605C;
	sub_823585A0(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x823accb0
	ctx.lr = 0x823A6070;
	sub_823ACCB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823aceb0
	ctx.lr = 0x823A6078;
	sub_823ACEB0(ctx, base);
	// b 0x823a609c
	goto loc_823A609C;
loc_823A607C:
	// bl 0x823585a0
	ctx.lr = 0x823A6080;
	sub_823585A0(ctx, base);
	// ld r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bl 0x823accb0
	ctx.lr = 0x823A6094;
	sub_823ACCB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823acf40
	ctx.lr = 0x823A609C;
	sub_823ACF40(ctx, base);
loc_823A609C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5de8
	ctx.lr = 0x823A60A8;
	sub_823A5DE8(ctx, base);
loc_823A60A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A60B4"))) PPC_WEAK_FUNC(sub_823A60B4);
PPC_FUNC_IMPL(__imp__sub_823A60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A60B8"))) PPC_WEAK_FUNC(sub_823A60B8);
PPC_FUNC_IMPL(__imp__sub_823A60B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A60C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823a60e8
	if (!ctx.cr6.eq) goto loc_823A60E8;
loc_823A60DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A60E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a6104
	if (!ctx.cr6.eq) goto loc_823A6104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5650
	ctx.lr = 0x823A60FC;
	sub_823A5650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a60dc
	if (ctx.cr6.eq) goto loc_823A60DC;
loc_823A6104:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823a6120
	if (ctx.cr6.gt) goto loc_823A6120;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_823A6120:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823a6154
	if (ctx.cr0.eq) goto loc_823A6154;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A6140;
	sub_82356E70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x823a4490
	ctx.lr = 0x823A6154;
	sub_823A4490(ctx, base);
loc_823A6154:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x823a4490
	ctx.lr = 0x823A616C;
	sub_823A4490(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a617c
	if (!ctx.cr6.eq) goto loc_823A617C;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_823A617C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A6190"))) PPC_WEAK_FUNC(sub_823A6190);
PPC_FUNC_IMPL(__imp__sub_823A6190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a61e8
	if (!ctx.cr6.eq) goto loc_823A61E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A61B8;
	sub_823570E0(ctx, base);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x823570f0
	ctx.lr = 0x823A61C0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a61d4
	if (ctx.cr6.eq) goto loc_823A61D4;
	// bl 0x823a56d8
	ctx.lr = 0x823A61CC;
	sub_823A56D8(ctx, base);
	// stw r3,-4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4820, ctx.r3.u32);
	// b 0x823a61dc
	goto loc_823A61DC;
loc_823A61D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4820, ctx.r11.u32);
loc_823A61DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A61E4;
	sub_823570E0(ctx, base);
	// lwz r3,-4820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4820);
loc_823A61E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A61FC"))) PPC_WEAK_FUNC(sub_823A61FC);
PPC_FUNC_IMPL(__imp__sub_823A61FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6200"))) PPC_WEAK_FUNC(sub_823A6200);
PPC_FUNC_IMPL(__imp__sub_823A6200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a5780
	ctx.lr = 0x823A6220;
	sub_823A5780(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6238
	if (ctx.cr6.eq) goto loc_823A6238;
	// bl 0x82357128
	ctx.lr = 0x823A6234;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A6238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6250"))) PPC_WEAK_FUNC(sub_823A6250);
PPC_FUNC_IMPL(__imp__sub_823A6250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A6258;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x823accb0
	ctx.lr = 0x823A6278;
	sub_823ACCB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a62c0
	if (!ctx.cr6.eq) goto loc_823A62C0;
	// bl 0x823ad258
	ctx.lr = 0x823A6284;
	sub_823AD258(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a62b4
	if (ctx.cr6.eq) goto loc_823A62B4;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ad2e8
	ctx.lr = 0x823A62A4;
	sub_823AD2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a62c0
	if (!ctx.cr6.eq) goto loc_823A62C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a5878
	ctx.lr = 0x823A62B4;
	sub_823A5878(ctx, base);
loc_823A62B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A62C0:
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// addi r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 + 20;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// bl 0x8237d170
	ctx.lr = 0x823A62D0;
	sub_8237D170(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A62DC"))) PPC_WEAK_FUNC(sub_823A62DC);
PPC_FUNC_IMPL(__imp__sub_823A62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A62E0"))) PPC_WEAK_FUNC(sub_823A62E0);
PPC_FUNC_IMPL(__imp__sub_823A62E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823accb0
	ctx.lr = 0x823A62F8;
	sub_823ACCB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a6354
	if (ctx.cr6.eq) goto loc_823A6354;
	// bl 0x823ab560
	ctx.lr = 0x823A6304;
	sub_823AB560(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823a634c
	if (ctx.cr6.eq) goto loc_823A634C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823a6354
	if (!ctx.cr6.eq) goto loc_823A6354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a4780
	ctx.lr = 0x823A6320;
	sub_823A4780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5250
	ctx.lr = 0x823A6328;
	sub_823A5250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a5948
	ctx.lr = 0x823A6330;
	sub_823A5948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a48d0
	ctx.lr = 0x823A6338;
	sub_823A48D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A634C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A6354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6368"))) PPC_WEAK_FUNC(sub_823A6368);
PPC_FUNC_IMPL(__imp__sub_823A6368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A6370;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x823a63c0
	if (!ctx.cr6.gt) goto loc_823A63C0;
	// addi r28,r4,24
	ctx.r28.s64 = ctx.r4.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A6394:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82357048
	ctx.lr = 0x823A63A8;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a63d8
	if (!ctx.cr6.eq) goto loc_823A63D8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x823a6394
	if (ctx.cr6.lt) goto loc_823A6394;
loc_823A63C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x823b47f0
	ctx.lr = 0x823A63CC;
	sub_823B47F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A63D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A63E4"))) PPC_WEAK_FUNC(sub_823A63E4);
PPC_FUNC_IMPL(__imp__sub_823A63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A63E8"))) PPC_WEAK_FUNC(sub_823A63E8);
PPC_FUNC_IMPL(__imp__sub_823A63E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823A63F0;
	sub_82248778(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x823a6480
	if (!ctx.cr6.eq) goto loc_823A6480;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823a6480
	if (!ctx.cr6.gt) goto loc_823A6480;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823A6424:
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a646c
	if (!ctx.cr6.eq) goto loc_823A646C;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// bl 0x823a1e50
	ctx.lr = 0x823A6440;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A646C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A646C:
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a6424
	if (ctx.cr6.lt) goto loc_823A6424;
loc_823A6480:
	// lwz r30,192(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823a64fc
	if (!ctx.cr6.gt) goto loc_823A64FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,-26548
	ctx.r27.s64 = ctx.r11.s64 + -26548;
loc_823A6498:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A64B8;
	sub_82356E70(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82357038
	ctx.lr = 0x823A64D8;
	sub_82357038(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a5f40
	ctx.lr = 0x823A64E4;
	sub_823A5F40(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823A64F0;
	sub_82356EB8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bne 0x823a6498
	if (!ctx.cr0.eq) goto loc_823A6498;
loc_823A64FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823A650C"))) PPC_WEAK_FUNC(sub_823A650C);
PPC_FUNC_IMPL(__imp__sub_823A650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6510"))) PPC_WEAK_FUNC(sub_823A6510);
PPC_FUNC_IMPL(__imp__sub_823A6510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A6518;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r26,36(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x823a4988
	ctx.lr = 0x823A653C;
	sub_823A4988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6554
	if (!ctx.cr6.eq) goto loc_823A6554;
loc_823A6548:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A6554:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// beq cr6,0x823a6664
	if (ctx.cr6.eq) goto loc_823A6664;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// beq cr6,0x823a65cc
	if (ctx.cr6.eq) goto loc_823A65CC;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bne cr6,0x823a6548
	if (!ctx.cr6.eq) goto loc_823A6548;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6584
	if (ctx.cr6.eq) goto loc_823A6584;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823A6584:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a65b0
	if (ctx.cr6.eq) goto loc_823A65B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A659C;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a65b0
	if (ctx.cr6.eq) goto loc_823A65B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_823A65B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4b18
	ctx.lr = 0x823A65C0;
	sub_823A4B18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A65CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A65D8;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a66d0
	if (ctx.cr6.eq) goto loc_823A66D0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823A65EC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a66d0
	if (!ctx.cr6.eq) goto loc_823A66D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823a65ec
	if (ctx.cr6.lt) goto loc_823A65EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356e70
	ctx.lr = 0x823A6610;
	sub_82356E70(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4490
	ctx.lr = 0x823A662C;
	sub_823A4490(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6650
	if (ctx.cr6.eq) goto loc_823A6650;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6650
	if (ctx.cr6.eq) goto loc_823A6650;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,156
	ctx.r3.s64 = ctx.r27.s64 + 156;
	// bl 0x823a60b8
	ctx.lr = 0x823A6650;
	sub_823A60B8(ctx, base);
loc_823A6650:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4438
	ctx.lr = 0x823A6658;
	sub_823A4438(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A6664:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a6680
	if (ctx.cr6.eq) goto loc_823A6680;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823A6680:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A668C;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a66a4
	if (ctx.cr6.eq) goto loc_823A66A4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823a66a4
	if (ctx.cr6.eq) goto loc_823A66A4;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
loc_823A66A4:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a66d0
	if (ctx.cr6.eq) goto loc_823A66D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4988
	ctx.lr = 0x823A66BC;
	sub_823A4988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a66d0
	if (ctx.cr6.eq) goto loc_823A66D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_823A66D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A66DC"))) PPC_WEAK_FUNC(sub_823A66DC);
PPC_FUNC_IMPL(__imp__sub_823A66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A66E0"))) PPC_WEAK_FUNC(sub_823A66E0);
PPC_FUNC_IMPL(__imp__sub_823A66E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A66E8;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823a67ac
	if (!ctx.cr6.eq) goto loc_823A67AC;
	// lwz r27,20(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a67ac
	if (ctx.cr6.eq) goto loc_823A67AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,-26548
	ctx.r29.s64 = ctx.r11.s64 + -26548;
loc_823A671C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82356e70
	ctx.lr = 0x823A6734;
	sub_82356E70(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82357038
	ctx.lr = 0x823A6760;
	sub_82357038(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823a6784
	if (ctx.cr6.eq) goto loc_823A6784;
	// bl 0x823a5440
	ctx.lr = 0x823A6780;
	sub_823A5440(ctx, base);
	// b 0x823a6788
	goto loc_823A6788;
loc_823A6784:
	// bl 0x823a6368
	ctx.lr = 0x823A6788;
	sub_823A6368(ctx, base);
loc_823A6788:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a5f40
	ctx.lr = 0x823A6794;
	sub_823A5F40(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82356eb8
	ctx.lr = 0x823A67A0;
	sub_82356EB8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x823a671c
	if (!ctx.cr0.eq) goto loc_823A671C;
loc_823A67AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A67B8"))) PPC_WEAK_FUNC(sub_823A67B8);
PPC_FUNC_IMPL(__imp__sub_823A67B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823a67cc
	if (!ctx.cr6.eq) goto loc_823A67CC;
	// b 0x823a6510
	sub_823A6510(ctx, base);
	return;
loc_823A67CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A67D4"))) PPC_WEAK_FUNC(sub_823A67D4);
PPC_FUNC_IMPL(__imp__sub_823A67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A67D8"))) PPC_WEAK_FUNC(sub_823A67D8);
PPC_FUNC_IMPL(__imp__sub_823A67D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a67e8
	if (!ctx.cr6.eq) goto loc_823A67E8;
loc_823A67E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A67E8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a67e0
	if (!ctx.cr6.eq) goto loc_823A67E0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6800"))) PPC_WEAK_FUNC(sub_823A6800);
PPC_FUNC_IMPL(__imp__sub_823A6800) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6814
	if (!ctx.cr6.eq) goto loc_823A6814;
	// blr 
	return;
loc_823A6814:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A683C"))) PPC_WEAK_FUNC(sub_823A683C);
PPC_FUNC_IMPL(__imp__sub_823A683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6840"))) PPC_WEAK_FUNC(sub_823A6840);
PPC_FUNC_IMPL(__imp__sub_823A6840) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6874
	if (!ctx.cr6.eq) goto loc_823A6874;
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
loc_823A6874:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A68A4;
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
}

__attribute__((alias("__imp__sub_823A68B8"))) PPC_WEAK_FUNC(sub_823A68B8);
PPC_FUNC_IMPL(__imp__sub_823A68B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a68cc
	if (!ctx.cr6.eq) goto loc_823A68CC;
	// blr 
	return;
loc_823A68CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A68F4"))) PPC_WEAK_FUNC(sub_823A68F4);
PPC_FUNC_IMPL(__imp__sub_823A68F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A68F8"))) PPC_WEAK_FUNC(sub_823A68F8);
PPC_FUNC_IMPL(__imp__sub_823A68F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6908"))) PPC_WEAK_FUNC(sub_823A6908);
PPC_FUNC_IMPL(__imp__sub_823A6908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-27404
	ctx.r9.s64 = ctx.r11.s64 + -27404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823a693c
	if (ctx.cr6.eq) goto loc_823A693C;
	// bl 0x82357128
	ctx.lr = 0x823A6938;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A693C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6950"))) PPC_WEAK_FUNC(sub_823A6950);
PPC_FUNC_IMPL(__imp__sub_823A6950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A697C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a6994
	if (ctx.cr6.eq) goto loc_823A6994;
	// bl 0x82357128
	ctx.lr = 0x823A6990;
	sub_82357128(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_823A6994:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823A69B8"))) PPC_WEAK_FUNC(sub_823A69B8);
PPC_FUNC_IMPL(__imp__sub_823A69B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A69C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a69e8
	if (ctx.cr6.eq) goto loc_823A69E8;
	// bl 0x82357128
	ctx.lr = 0x823A69E4;
	sub_82357128(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_823A69E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// beq cr6,0x823a6a3c
	if (ctx.cr6.eq) goto loc_823A6A3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a6a3c
	if (ctx.cr6.eq) goto loc_823A6A3C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823A6A04;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823A6A0C;
	sub_823570F0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A6A18;
	sub_823570E0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6a2c
	if (!ctx.cr6.eq) goto loc_823A6A2C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823A6A2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x823A6A38;
	sub_82358508(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_823A6A3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A6A48"))) PPC_WEAK_FUNC(sub_823A6A48);
PPC_FUNC_IMPL(__imp__sub_823A6A48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6A5C"))) PPC_WEAK_FUNC(sub_823A6A5C);
PPC_FUNC_IMPL(__imp__sub_823A6A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6A60"))) PPC_WEAK_FUNC(sub_823A6A60);
PPC_FUNC_IMPL(__imp__sub_823A6A60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6A6C"))) PPC_WEAK_FUNC(sub_823A6A6C);
PPC_FUNC_IMPL(__imp__sub_823A6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6A70"))) PPC_WEAK_FUNC(sub_823A6A70);
PPC_FUNC_IMPL(__imp__sub_823A6A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A6A78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x823A6A8C;
	sub_823570E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823570f0
	ctx.lr = 0x823A6A94;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a6ac4
	if (ctx.cr6.eq) goto loc_823A6AC4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30912
	ctx.r9.s64 = ctx.r10.s64 + 30912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x823a6ac8
	goto loc_823A6AC8;
loc_823A6AC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823A6AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823A6AD0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a6ae4
	if (!ctx.cr6.eq) goto loc_823A6AE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823A6AE4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A6AFC"))) PPC_WEAK_FUNC(sub_823A6AFC);
PPC_FUNC_IMPL(__imp__sub_823A6AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6B00"))) PPC_WEAK_FUNC(sub_823A6B00);
PPC_FUNC_IMPL(__imp__sub_823A6B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A6B08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a6b5c
	if (ctx.cr6.eq) goto loc_823A6B5C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A6B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a6b44
	if (ctx.cr6.eq) goto loc_823A6B44;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823A6B44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a6b50
	if (ctx.cr6.eq) goto loc_823A6B50;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_823A6B50:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823A6B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A6B64"))) PPC_WEAK_FUNC(sub_823A6B64);
PPC_FUNC_IMPL(__imp__sub_823A6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6B68"))) PPC_WEAK_FUNC(sub_823A6B68);
PPC_FUNC_IMPL(__imp__sub_823A6B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A6B70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// addi r9,r11,-27396
	ctx.r9.s64 = ctx.r11.s64 + -27396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A6B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a6bb4
	if (ctx.cr6.eq) goto loc_823A6BB4;
	// bl 0x82357128
	ctx.lr = 0x823A6BB0;
	sub_82357128(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_823A6BB4:
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82356eb8
	ctx.lr = 0x823A6BC8;
	sub_82356EB8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-27404
	ctx.r10.s64 = ctx.r11.s64 + -27404;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A6BDC"))) PPC_WEAK_FUNC(sub_823A6BDC);
PPC_FUNC_IMPL(__imp__sub_823A6BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6BE0"))) PPC_WEAK_FUNC(sub_823A6BE0);
PPC_FUNC_IMPL(__imp__sub_823A6BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a6b68
	ctx.lr = 0x823A6C00;
	sub_823A6B68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6c18
	if (ctx.cr6.eq) goto loc_823A6C18;
	// bl 0x82357128
	ctx.lr = 0x823A6C14;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A6C18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6C30"))) PPC_WEAK_FUNC(sub_823A6C30);
PPC_FUNC_IMPL(__imp__sub_823A6C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A6C38;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823A6C48;
	sub_823A0F10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823a7850
	ctx.lr = 0x823A6C50;
	sub_823A7850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a6e00
	if (ctx.cr6.eq) goto loc_823A6E00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4120
	ctx.lr = 0x823A6C60;
	sub_823A4120(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x823a6e00
	if (ctx.cr6.eq) goto loc_823A6E00;
	// bl 0x823a3308
	ctx.lr = 0x823A6C74;
	sub_823A3308(ctx, base);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a37e8
	ctx.lr = 0x823A6C84;
	sub_823A37E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a6d64
	if (ctx.cr6.eq) goto loc_823A6D64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a3830
	ctx.lr = 0x823A6C98;
	sub_823A3830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a6e00
	if (!ctx.cr6.eq) goto loc_823A6E00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,47
	ctx.r10.s64 = 47;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a3ba0
	ctx.lr = 0x823A6CC4;
	sub_823A3BA0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a6d34
	if (!ctx.cr6.eq) goto loc_823A6D34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a6d44
	if (!ctx.cr6.eq) goto loc_823A6D44;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// addi r7,r10,-27456
	ctx.r7.s64 = ctx.r10.s64 + -27456;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 1;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A6D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,-31544
	ctx.r7.s64 = ctx.r8.s64 + -31544;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// b 0x823a6d44
	goto loc_823A6D44;
loc_823A6D34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a6d44
	if (ctx.cr6.eq) goto loc_823A6D44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_823A6D44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a3318
	ctx.lr = 0x823A6D50;
	sub_823A3318(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x823a86f8
	ctx.lr = 0x823A6D58;
	sub_823A86F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A6D64:
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d218
	ctx.lr = 0x823A6D70;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x823a6d80
	if (!ctx.cr6.eq) goto loc_823A6D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x823A6D80;
	sub_8237D130(ctx, base);
loc_823A6D80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a4120
	ctx.lr = 0x823A6D88;
	sub_823A4120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x823A6D94;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bgt cr6,0x823a6e00
	if (ctx.cr6.gt) goto loc_823A6E00;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a6e00
	if (!ctx.cr6.eq) goto loc_823A6E00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,47
	ctx.r10.s64 = 47;
	// addi r9,r11,-31560
	ctx.r9.s64 = ctx.r11.s64 + -31560;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,11084(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a3a58
	ctx.lr = 0x823A6DE0;
	sub_823A3A58(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_823A6E00:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A6E0C"))) PPC_WEAK_FUNC(sub_823A6E0C);
PPC_FUNC_IMPL(__imp__sub_823A6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6E10"))) PPC_WEAK_FUNC(sub_823A6E10);
PPC_FUNC_IMPL(__imp__sub_823A6E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823A6E18;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27396
	ctx.r9.s64 = ctx.r11.s64 + -27396;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82356e70
	ctx.lr = 0x823A6E58;
	sub_82356E70(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357038
	ctx.lr = 0x823A6E70;
	sub_82357038(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a69b8
	ctx.lr = 0x823A6E80;
	sub_823A69B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a6e9c
	if (!ctx.cr6.eq) goto loc_823A6E9C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6b68
	ctx.lr = 0x823A6E90;
	sub_823A6B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823A6E9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A6EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6b68
	ctx.lr = 0x823A6EBC;
	sub_823A6B68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823A6EC8"))) PPC_WEAK_FUNC(sub_823A6EC8);
PPC_FUNC_IMPL(__imp__sub_823A6EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A6ED0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823a3d90
	ctx.lr = 0x823A6EE0;
	sub_823A3D90(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a6f20
	if (ctx.cr6.eq) goto loc_823A6F20;
loc_823A6EF0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A6F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a6f2c
	if (!ctx.cr6.eq) goto loc_823A6F2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a6ef0
	if (!ctx.cr6.eq) goto loc_823A6EF0;
loc_823A6F20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a3e18
	ctx.lr = 0x823A6F2C;
	sub_823A3E18(ctx, base);
loc_823A6F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A6F34"))) PPC_WEAK_FUNC(sub_823A6F34);
PPC_FUNC_IMPL(__imp__sub_823A6F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6F38"))) PPC_WEAK_FUNC(sub_823A6F38);
PPC_FUNC_IMPL(__imp__sub_823A6F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A6F40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823a3308
	ctx.lr = 0x823A6F50;
	sub_823A3308(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a6f90
	if (ctx.cr6.eq) goto loc_823A6F90;
loc_823A6F60:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823A6F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a6f9c
	if (!ctx.cr6.eq) goto loc_823A6F9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a6f60
	if (!ctx.cr6.eq) goto loc_823A6F60;
loc_823A6F90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a3708
	ctx.lr = 0x823A6F9C;
	sub_823A3708(ctx, base);
loc_823A6F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A6FA4"))) PPC_WEAK_FUNC(sub_823A6FA4);
PPC_FUNC_IMPL(__imp__sub_823A6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FA8"))) PPC_WEAK_FUNC(sub_823A6FA8);
PPC_FUNC_IMPL(__imp__sub_823A6FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823a6a70
	ctx.lr = 0x823A6FC0;
	sub_823A6A70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823a6fdc
	if (!ctx.cr6.eq) goto loc_823A6FDC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A6FDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a6ff4
	if (ctx.cr6.eq) goto loc_823A6FF4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_823A6FF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a7008
	if (!ctx.cr6.eq) goto loc_823A7008;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823A7008:
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

__attribute__((alias("__imp__sub_823A7020"))) PPC_WEAK_FUNC(sub_823A7020);
PPC_FUNC_IMPL(__imp__sub_823A7020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a7070
	if (ctx.cr6.eq) goto loc_823A7070;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x823a6b00
	ctx.lr = 0x823A704C;
	sub_823A6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a706c
	if (!ctx.cr6.eq) goto loc_823A706C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a706c
	if (!ctx.cr6.eq) goto loc_823A706C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823A706C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823A7070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7088"))) PPC_WEAK_FUNC(sub_823A7088);
PPC_FUNC_IMPL(__imp__sub_823A7088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a70d8
	if (ctx.cr6.eq) goto loc_823A70D8;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x823a6b00
	ctx.lr = 0x823A70B4;
	sub_823A6B00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823a70d4
	if (!ctx.cr6.eq) goto loc_823A70D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823a70d4
	if (!ctx.cr6.eq) goto loc_823A70D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823A70D4:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823A70D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A70F0"))) PPC_WEAK_FUNC(sub_823A70F0);
PPC_FUNC_IMPL(__imp__sub_823A70F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27388
	ctx.r10.s64 = ctx.r11.s64 + -27388;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823A7144;
	sub_823A86F8(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,32288
	ctx.r7.s64 = ctx.r8.s64 + 32288;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A717C"))) PPC_WEAK_FUNC(sub_823A717C);
PPC_FUNC_IMPL(__imp__sub_823A717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7180"))) PPC_WEAK_FUNC(sub_823A7180);
PPC_FUNC_IMPL(__imp__sub_823A7180) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7188"))) PPC_WEAK_FUNC(sub_823A7188);
PPC_FUNC_IMPL(__imp__sub_823A7188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-27388
	ctx.r9.s64 = ctx.r11.s64 + -27388;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a3da0
	ctx.lr = 0x823A71C0;
	sub_823A3DA0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r7,r8,32288
	ctx.r7.s64 = ctx.r8.s64 + 32288;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// bl 0x823ab568
	ctx.lr = 0x823A71D4;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a3da0
	ctx.lr = 0x823A71DC;
	sub_823A3DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A71F4"))) PPC_WEAK_FUNC(sub_823A71F4);
PPC_FUNC_IMPL(__imp__sub_823A71F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A71F8"))) PPC_WEAK_FUNC(sub_823A71F8);
PPC_FUNC_IMPL(__imp__sub_823A71F8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7230
	if (ctx.cr6.eq) goto loc_823A7230;
loc_823A7214:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a724c
	if (ctx.cr6.eq) goto loc_823A724C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a7214
	if (!ctx.cr6.eq) goto loc_823A7214;
loc_823A7230:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823a6fa8
	ctx.lr = 0x823A723C;
	sub_823A6FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A724C:
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

__attribute__((alias("__imp__sub_823A7260"))) PPC_WEAK_FUNC(sub_823A7260);
PPC_FUNC_IMPL(__imp__sub_823A7260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A7268;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-27388
	ctx.r9.s64 = ctx.r11.s64 + -27388;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823a3da0
	ctx.lr = 0x823A7294;
	sub_823A3DA0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r7,r8,32288
	ctx.r7.s64 = ctx.r8.s64 + 32288;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// bl 0x823ab568
	ctx.lr = 0x823A72A8;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a3da0
	ctx.lr = 0x823A72B0;
	sub_823A3DA0(ctx, base);
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823a72c8
	if (ctx.cr6.eq) goto loc_823A72C8;
	// bl 0x82357128
	ctx.lr = 0x823A72C4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A72C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A72D0"))) PPC_WEAK_FUNC(sub_823A72D0);
PPC_FUNC_IMPL(__imp__sub_823A72D0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7308
	if (ctx.cr6.eq) goto loc_823A7308;
loc_823A72E8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823a731c
	if (ctx.cr6.eq) goto loc_823A731C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a72e8
	if (!ctx.cr6.eq) goto loc_823A72E8;
loc_823A7308:
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
loc_823A731C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a7344
	if (!ctx.cr6.eq) goto loc_823A7344;
	// bl 0x823a7020
	ctx.lr = 0x823A7330;
	sub_823A7020(ctx, base);
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
loc_823A7344:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a7368
	if (!ctx.cr6.eq) goto loc_823A7368;
	// bl 0x823a7088
	ctx.lr = 0x823A7354;
	sub_823A7088(ctx, base);
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
loc_823A7368:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x823a6b00
	ctx.lr = 0x823A7370;
	sub_823A6B00(ctx, base);
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

__attribute__((alias("__imp__sub_823A7384"))) PPC_WEAK_FUNC(sub_823A7384);
PPC_FUNC_IMPL(__imp__sub_823A7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7388"))) PPC_WEAK_FUNC(sub_823A7388);
PPC_FUNC_IMPL(__imp__sub_823A7388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7390"))) PPC_WEAK_FUNC(sub_823A7390);
PPC_FUNC_IMPL(__imp__sub_823A7390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7398"))) PPC_WEAK_FUNC(sub_823A7398);
PPC_FUNC_IMPL(__imp__sub_823A7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823A73A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224458
	ctx.lr = 0x823A73B4;
	sub_82224458(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a73cc
	if (ctx.cr6.eq) goto loc_823A73CC;
	// bl 0x82357240
	ctx.lr = 0x823A73C8;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_823A73CC:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A73EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823A7400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823A7408"))) PPC_WEAK_FUNC(sub_823A7408);
PPC_FUNC_IMPL(__imp__sub_823A7408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-27344
	ctx.r9.s64 = ctx.r10.s64 + -27344;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8235a518
	ctx.lr = 0x823A7458;
	sub_8235A518(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235a518
	ctx.lr = 0x823A7464;
	sub_8235A518(ctx, base);
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

__attribute__((alias("__imp__sub_823A747C"))) PPC_WEAK_FUNC(sub_823A747C);
PPC_FUNC_IMPL(__imp__sub_823A747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7480"))) PPC_WEAK_FUNC(sub_823A7480);
PPC_FUNC_IMPL(__imp__sub_823A7480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// addi r10,r11,-27344
	ctx.r10.s64 = ctx.r11.s64 + -27344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8235a538
	ctx.lr = 0x823A74AC;
	sub_8235A538(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8235a538
	ctx.lr = 0x823A74B4;
	sub_8235A538(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224458
	ctx.lr = 0x823A74C0;
	sub_82224458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a74d8
	if (ctx.cr6.eq) goto loc_823A74D8;
	// bl 0x82357240
	ctx.lr = 0x823A74D4;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823A74D8:
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

__attribute__((alias("__imp__sub_823A74F8"))) PPC_WEAK_FUNC(sub_823A74F8);
PPC_FUNC_IMPL(__imp__sub_823A74F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a7480
	ctx.lr = 0x823A7518;
	sub_823A7480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7530
	if (ctx.cr6.eq) goto loc_823A7530;
	// bl 0x82357128
	ctx.lr = 0x823A752C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A7530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7548"))) PPC_WEAK_FUNC(sub_823A7548);
PPC_FUNC_IMPL(__imp__sub_823A7548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-27336
	ctx.r10.s64 = ctx.r11.s64 + -27336;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823574a0
	sub_823574A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A7558"))) PPC_WEAK_FUNC(sub_823A7558);
PPC_FUNC_IMPL(__imp__sub_823A7558) {
	PPC_FUNC_PROLOGUE();
	// b 0x823578e0
	sub_823578E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A755C"))) PPC_WEAK_FUNC(sub_823A755C);
PPC_FUNC_IMPL(__imp__sub_823A755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7560"))) PPC_WEAK_FUNC(sub_823A7560);
PPC_FUNC_IMPL(__imp__sub_823A7560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-27336
	ctx.r10.s64 = ctx.r11.s64 + -27336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823574a0
	ctx.lr = 0x823A758C;
	sub_823574A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a75a4
	if (ctx.cr6.eq) goto loc_823A75A4;
	// bl 0x82357128
	ctx.lr = 0x823A75A0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A75A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A75BC"))) PPC_WEAK_FUNC(sub_823A75BC);
PPC_FUNC_IMPL(__imp__sub_823A75BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A75C0"))) PPC_WEAK_FUNC(sub_823A75C0);
PPC_FUNC_IMPL(__imp__sub_823A75C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82357438
	ctx.lr = 0x823A75E0;
	sub_82357438(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-27336
	ctx.r10.s64 = ctx.r11.s64 + -27336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823578e0
	ctx.lr = 0x823A75F8;
	sub_823578E0(ctx, base);
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

__attribute__((alias("__imp__sub_823A7614"))) PPC_WEAK_FUNC(sub_823A7614);
PPC_FUNC_IMPL(__imp__sub_823A7614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7618"))) PPC_WEAK_FUNC(sub_823A7618);
PPC_FUNC_IMPL(__imp__sub_823A7618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823A7620;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A763C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359918
	ctx.lr = 0x823A7644;
	sub_82359918(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a7704
	if (ctx.cr6.eq) goto loc_823A7704;
loc_823A7654:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x823A7660;
	sub_82359C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x823A7670;
	sub_82359D58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a76f8
	if (ctx.cr6.eq) goto loc_823A76F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82359ba8
	ctx.lr = 0x823A768C;
	sub_82359BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a76c8
	if (!ctx.cr6.eq) goto loc_823A76C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x823A76A0;
	sub_82359D58(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x823A76B0;
	sub_82359C98(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82359248
	ctx.lr = 0x823A76C0;
	sub_82359248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a77a8
	if (ctx.cr6.eq) goto loc_823A77A8;
loc_823A76C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359990
	ctx.lr = 0x823A76D4;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x823a76e4
	if (!ctx.cr6.eq) goto loc_823A76E4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823A76E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235a2a0
	ctx.lr = 0x823A76F0;
	sub_8235A2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a77a8
	if (ctx.cr6.eq) goto loc_823A77A8;
loc_823A76F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823a7654
	if (ctx.cr6.lt) goto loc_823A7654;
loc_823A7704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575e8
	ctx.lr = 0x823A770C;
	sub_823575E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823575e0
	ctx.lr = 0x823A7718;
	sub_823575E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575f8
	ctx.lr = 0x823A7720;
	sub_823575F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823575f0
	ctx.lr = 0x823A772C;
	sub_823575F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357600
	ctx.lr = 0x823A7734;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357068
	ctx.lr = 0x823A7740;
	sub_82357068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357880
	ctx.lr = 0x823A774C;
	sub_82357880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357608
	ctx.lr = 0x823A7754;
	sub_82357608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823578b8
	ctx.lr = 0x823A7764;
	sub_823578B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357618
	ctx.lr = 0x823A776C;
	sub_82357618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357610
	ctx.lr = 0x823A7778;
	sub_82357610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357638
	ctx.lr = 0x823A7780;
	sub_82357638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357630
	ctx.lr = 0x823A778C;
	sub_82357630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82357620
	ctx.lr = 0x823A779C;
	sub_82357620(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823A77A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A77BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823A77C8"))) PPC_WEAK_FUNC(sub_823A77C8);
PPC_FUNC_IMPL(__imp__sub_823A77C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82357438
	ctx.lr = 0x823A77E8;
	sub_82357438(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-27336
	ctx.r10.s64 = ctx.r11.s64 + -27336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823a7618
	ctx.lr = 0x823A7800;
	sub_823A7618(ctx, base);
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

__attribute__((alias("__imp__sub_823A781C"))) PPC_WEAK_FUNC(sub_823A781C);
PPC_FUNC_IMPL(__imp__sub_823A781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7820"))) PPC_WEAK_FUNC(sub_823A7820);
PPC_FUNC_IMPL(__imp__sub_823A7820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A783C"))) PPC_WEAK_FUNC(sub_823A783C);
PPC_FUNC_IMPL(__imp__sub_823A783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7840"))) PPC_WEAK_FUNC(sub_823A7840);
PPC_FUNC_IMPL(__imp__sub_823A7840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7850"))) PPC_WEAK_FUNC(sub_823A7850);
PPC_FUNC_IMPL(__imp__sub_823A7850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7858"))) PPC_WEAK_FUNC(sub_823A7858);
PPC_FUNC_IMPL(__imp__sub_823A7858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27312
	ctx.r11.s64 = ctx.r11.s64 + -27312;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823a7884
	if (ctx.cr0.eq) goto loc_823A7884;
	// bl 0x82357128
	ctx.lr = 0x823A7884;
	sub_82357128(ctx, base);
loc_823A7884:
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

__attribute__((alias("__imp__sub_823A789C"))) PPC_WEAK_FUNC(sub_823A789C);
PPC_FUNC_IMPL(__imp__sub_823A789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A78A0"))) PPC_WEAK_FUNC(sub_823A78A0);
PPC_FUNC_IMPL(__imp__sub_823A78A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r10,-27304
	ctx.r10.s64 = ctx.r10.s64 + -27304;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x823700d8
	sub_823700D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A78B8"))) PPC_WEAK_FUNC(sub_823A78B8);
PPC_FUNC_IMPL(__imp__sub_823A78B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A78E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7904"))) PPC_WEAK_FUNC(sub_823A7904);
PPC_FUNC_IMPL(__imp__sub_823A7904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7908"))) PPC_WEAK_FUNC(sub_823A7908);
PPC_FUNC_IMPL(__imp__sub_823A7908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-27304
	ctx.r11.s64 = ctx.r11.s64 + -27304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82370088
	ctx.lr = 0x823A7930;
	sub_82370088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a78b8
	ctx.lr = 0x823A7938;
	sub_823A78B8(ctx, base);
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

__attribute__((alias("__imp__sub_823A7950"))) PPC_WEAK_FUNC(sub_823A7950);
PPC_FUNC_IMPL(__imp__sub_823A7950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-27304
	ctx.r11.s64 = ctx.r11.s64 + -27304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823700d8
	ctx.lr = 0x823A7980;
	sub_823700D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a7990
	if (ctx.cr0.eq) goto loc_823A7990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823A7990;
	sub_82357128(ctx, base);
loc_823A7990:
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

__attribute__((alias("__imp__sub_823A79AC"))) PPC_WEAK_FUNC(sub_823A79AC);
PPC_FUNC_IMPL(__imp__sub_823A79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A79B0"))) PPC_WEAK_FUNC(sub_823A79B0);
PPC_FUNC_IMPL(__imp__sub_823A79B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x823A79E0;
	sub_82370360(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7A00"))) PPC_WEAK_FUNC(sub_823A7A00);
PPC_FUNC_IMPL(__imp__sub_823A7A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-27304
	ctx.r11.s64 = ctx.r11.s64 + -27304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82370088
	ctx.lr = 0x823A7A30;
	sub_82370088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a78b8
	ctx.lr = 0x823A7A38;
	sub_823A78B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a79b0
	ctx.lr = 0x823A7A44;
	sub_823A79B0(ctx, base);
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

__attribute__((alias("__imp__sub_823A7A60"))) PPC_WEAK_FUNC(sub_823A7A60);
PPC_FUNC_IMPL(__imp__sub_823A7A60) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,256
	ctx.r4.s64 = ctx.r4.s64 + 256;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82389fa0
	sub_82389FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A7A6C"))) PPC_WEAK_FUNC(sub_823A7A6C);
PPC_FUNC_IMPL(__imp__sub_823A7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7A70"))) PPC_WEAK_FUNC(sub_823A7A70);
PPC_FUNC_IMPL(__imp__sub_823A7A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x823A7AA0;
	sub_82370360(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// bl 0x82370360
	ctx.lr = 0x823A7AAC;
	sub_82370360(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x823A7ACC;
	sub_82248A40(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823A7ADC;
	sub_82248A40(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7B00"))) PPC_WEAK_FUNC(sub_823A7B00);
PPC_FUNC_IMPL(__imp__sub_823A7B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r30.u32);
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823827b8
	ctx.lr = 0x823A7B30;
	sub_823827B8(ctx, base);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7B58;
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

__attribute__((alias("__imp__sub_823A7B70"))) PPC_WEAK_FUNC(sub_823A7B70);
PPC_FUNC_IMPL(__imp__sub_823A7B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a7b9c
	if (ctx.cr6.eq) goto loc_823A7B9C;
	// stw r30,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r30.u32);
loc_823A7B9C:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823a7bb0
	if (ctx.cr6.eq) goto loc_823A7BB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823a7bc0
	if (!ctx.cr6.eq) goto loc_823A7BC0;
loc_823A7BB0:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// bl 0x82389d10
	ctx.lr = 0x823A7BC0;
	sub_82389D10(ctx, base);
loc_823A7BC0:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7BF0"))) PPC_WEAK_FUNC(sub_823A7BF0);
PPC_FUNC_IMPL(__imp__sub_823A7BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823A7BF8;
	sub_82248788(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823a7c1c
	if (ctx.cr6.eq) goto loc_823A7C1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a7d24
	goto loc_823A7D24;
loc_823A7C1C:
	// lwz r11,464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a7c58
	if (ctx.cr6.eq) goto loc_823A7C58;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823a7c50
	if (!ctx.cr0.eq) goto loc_823A7C50;
	// bl 0x82381898
	ctx.lr = 0x823A7C38;
	sub_82381898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823A7C50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823a7d24
	goto loc_823A7D24;
loc_823A7C58:
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823A7C64;
	sub_823585A0(ctx, base);
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r10,32684
	ctx.r4.s64 = ctx.r10.s64 + 32684;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82358508
	ctx.lr = 0x823A7C84;
	sub_82358508(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// li r30,10
	ctx.r30.s64 = 10;
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r8,3(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lhz r7,1156(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// beq 0x823a7cd8
	if (ctx.cr0.eq) goto loc_823A7CD8;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x823a7cc8
	if (ctx.cr0.eq) goto loc_823A7CC8;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
loc_823A7CC8:
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// bl 0x82358508
	ctx.lr = 0x823A7CD0;
	sub_82358508(ctx, base);
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// addi r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 10;
loc_823A7CD8:
	// lhz r11,2310(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823a7d0c
	if (ctx.cr0.eq) goto loc_823A7D0C;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x823a7cf8
	if (ctx.cr0.eq) goto loc_823A7CF8;
	// addi r4,r31,1158
	ctx.r4.s64 = ctx.r31.s64 + 1158;
loc_823A7CF8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x823A7D04;
	sub_82358508(ctx, base);
	// lhz r11,2310(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_823A7D0C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,2316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82389ec0
	ctx.lr = 0x823A7D24;
	sub_82389EC0(ctx, base);
loc_823A7D24:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823A7D2C"))) PPC_WEAK_FUNC(sub_823A7D2C);
PPC_FUNC_IMPL(__imp__sub_823A7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7D30"))) PPC_WEAK_FUNC(sub_823A7D30);
PPC_FUNC_IMPL(__imp__sub_823A7D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823A7D38;
	sub_82248778(ctx, base);
	// stwu r1,-2608(r1)
	ea = -2608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,30
	ctx.r25.s64 = 30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823a7d60
	if (ctx.cr6.eq) goto loc_823A7D60;
loc_823A7D58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7D60:
	// lwz r11,464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a7d58
	if (!ctx.cr6.eq) goto loc_823A7D58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,32684
	ctx.r26.s64 = ctx.r11.s64 + 32684;
loc_823A7D74:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x823a7e64
	if (ctx.cr6.eq) goto loc_823A7E64;
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x823585a0
	ctx.lr = 0x823A7D8C;
	sub_823585A0(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823A7D98;
	sub_823585A0(ctx, base);
	// li r5,1218
	ctx.r5.s64 = 1218;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8238a150
	ctx.lr = 0x823A7DA8;
	sub_8238A150(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble 0x823a7d58
	if (!ctx.cr0.gt) goto loc_823A7D58;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// bl 0x82358538
	ctx.lr = 0x823A7DC8;
	sub_82358538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a7d74
	if (!ctx.cr0.eq) goto loc_823A7D74;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823a7d58
	if (ctx.cr6.eq) goto loc_823A7D58;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r30,10
	ctx.r30.s64 = 10;
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// stb r8,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r8.u8);
	// stb r11,2312(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2312, ctx.r11.u8);
	// beq cr6,0x823a7e38
	if (ctx.cr6.eq) goto loc_823A7E38;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,90
	ctx.r4.s64 = ctx.r1.s64 + 90;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82358508
	ctx.lr = 0x823A7E18;
	sub_82358508(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237e958
	ctx.lr = 0x823A7E28;
	sub_8237E958(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r30,r31,10
	ctx.r30.s64 = ctx.r31.s64 + 10;
	// bl 0x823585a0
	ctx.lr = 0x823A7E38;
	sub_823585A0(ctx, base);
loc_823A7E38:
	// subf. r31,r30,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a7e64
	if (ctx.cr0.eq) goto loc_823A7E64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82358508
	ctx.lr = 0x823A7E54;
	sub_82358508(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237e9b8
	ctx.lr = 0x823A7E64;
	sub_8237E9B8(ctx, base);
loc_823A7E64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823A7E68:
	// addi r1,r1,2608
	ctx.r1.s64 = ctx.r1.s64 + 2608;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

