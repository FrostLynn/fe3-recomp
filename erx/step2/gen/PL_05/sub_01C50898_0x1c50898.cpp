#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C50898
// Address: 0x1c50898 - 0x1c50960
void sub_01C50898_0x1c50898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50898_0x1c50898");
#endif

    switch (ctx->pc) {
        case 0x1c508b4u: goto label_1c508b4;
        case 0x1c508c4u: goto label_1c508c4;
        case 0x1c508d0u: goto label_1c508d0;
        case 0x1c508e0u: goto label_1c508e0;
        case 0x1c508f8u: goto label_1c508f8;
        case 0x1c50924u: goto label_1c50924;
        default: break;
    }

    ctx->pc = 0x1c50898u;

    // 0x1c50898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c50898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5089c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c5089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c508a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c508a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c508a4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c508a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c508a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c508a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c508ac: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C508ACu;
    SET_GPR_U32(ctx, 31, 0x1C508B4u);
    ctx->pc = 0x1C508B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C508ACu;
    // 0x1c508b0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C508ACu, 0x1C508B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C508B4u;
label_1c508b4:
    // 0x1c508b4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c508b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c508b8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c508b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c508bc: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C508BCu;
    SET_GPR_U32(ctx, 31, 0x1C508C4u);
    ctx->pc = 0x1C508C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C508BCu;
    // 0x1c508c0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C508BCu, 0x1C508C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C508C4u;
label_1c508c4:
    // 0x1c508c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c508c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c508c8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C508C8u;
    SET_GPR_U32(ctx, 31, 0x1C508D0u);
    ctx->pc = 0x1C508CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C508C8u;
    // 0x1c508cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C508C8u, 0x1C508D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C508D0u;
label_1c508d0:
    // 0x1c508d0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c508d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c508d4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c508d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c508d8: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C508D8u;
    SET_GPR_U32(ctx, 31, 0x1C508E0u);
    ctx->pc = 0x1C508DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C508D8u;
    // 0x1c508dc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C508D8u, 0x1C508E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C508E0u;
label_1c508e0:
    // 0x1c508e0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c508e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c508e4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C508E4u;
    {
        const bool branch_taken_0x1c508e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c508e4) {
            ctx->pc = 0x1C508E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C508E4u;
            // 0x1c508e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5094Cu;
            goto label_1c5094c;
        }
    }
    ctx->pc = 0x1C508ECu;
    // 0x1c508ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c508f0: 0xc713e74  jal         func_1C4F9D0
    ctx->pc = 0x1C508F0u;
    SET_GPR_U32(ctx, 31, 0x1C508F8u);
    ctx->pc = 0x1C508F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C508F0u;
    // 0x1c508f4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9D0u, 0x1C508F0u, 0x1C508F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C508F8u;
label_1c508f8:
    // 0x1c508f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c508f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c508fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c508fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50900: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c50900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c50904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c50904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c50908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5090c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c5090cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c50910: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c50910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c50914: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C50914u;
    {
        const bool branch_taken_0x1c50914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50914u;
        // 0x1c50918: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50914) {
            ctx->pc = 0x1C50948u;
            goto label_1c50948;
        }
    }
    ctx->pc = 0x1C5091Cu;
    // 0x1c5091c: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C5091Cu;
    SET_GPR_U32(ctx, 31, 0x1C50924u);
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C5091Cu, 0x1C50924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50924u;
label_1c50924:
    // 0x1c50924: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c50924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50928: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c50928u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5092c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c5092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c50930: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c50930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c50934: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c50934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c50938: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C50938u;
    {
        const bool branch_taken_0x1c50938 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C5093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50938u;
        // 0x1c5093c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50938) {
            ctx->pc = 0x1C5094Cu;
            goto label_1c5094c;
        }
    }
    ctx->pc = 0x1C50940u;
    // 0x1c50940: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c50940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c50944: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c50944u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c50948:
    // 0x1c50948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5094c:
    // 0x1c5094c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5094cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c50950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50954u;
        // 0x1c50958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5095Cu;
    // 0x1c5095c: 0x0  nop
    ctx->pc = 0x1c5095cu;
    // NOP
    ctx->pc = 0x1c50960u;
}
