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

// Function: sub_01C76818
// Address: 0x1c76818 - 0x1c768e0
void sub_01C76818_0x1c76818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76818_0x1c76818");
#endif

    switch (ctx->pc) {
        case 0x1c76834u: goto label_1c76834;
        case 0x1c76844u: goto label_1c76844;
        case 0x1c76850u: goto label_1c76850;
        case 0x1c76860u: goto label_1c76860;
        case 0x1c76878u: goto label_1c76878;
        case 0x1c768a4u: goto label_1c768a4;
        default: break;
    }

    ctx->pc = 0x1c76818u;

    // 0x1c76818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c76818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7681c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c76820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76824: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c76824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c76828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c76828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7682c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C7682Cu;
    SET_GPR_U32(ctx, 31, 0x1C76834u);
    ctx->pc = 0x1C76830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7682Cu;
    // 0x1c76830: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C7682Cu, 0x1C76834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76834u;
label_1c76834:
    // 0x1c76834: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c76834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c76838: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c76838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c7683c: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C7683Cu;
    SET_GPR_U32(ctx, 31, 0x1C76844u);
    ctx->pc = 0x1C76840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7683Cu;
    // 0x1c76840: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C7683Cu, 0x1C76844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76844u;
label_1c76844:
    // 0x1c76844: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c76844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c76848: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76848u;
    SET_GPR_U32(ctx, 31, 0x1C76850u);
    ctx->pc = 0x1C7684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76848u;
    // 0x1c7684c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76848u, 0x1C76850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76850u;
label_1c76850:
    // 0x1c76850: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c76850u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c76854: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c76854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c76858: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C76858u;
    SET_GPR_U32(ctx, 31, 0x1C76860u);
    ctx->pc = 0x1C7685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76858u;
    // 0x1c7685c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C76858u, 0x1C76860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76860u;
label_1c76860:
    // 0x1c76860: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c76860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c76864: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C76864u;
    {
        const bool branch_taken_0x1c76864 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c76864) {
            ctx->pc = 0x1C76868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C76864u;
            // 0x1c76868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C768CCu;
            goto label_1c768cc;
        }
    }
    ctx->pc = 0x1C7686Cu;
    // 0x1c7686c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c7686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c76870: 0xc71d668  jal         func_1C759A0
    ctx->pc = 0x1C76870u;
    SET_GPR_U32(ctx, 31, 0x1C76878u);
    ctx->pc = 0x1C76874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76870u;
    // 0x1c76874: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C759A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C759A0u, 0x1C76870u, 0x1C76878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76878u;
label_1c76878:
    // 0x1c76878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7687c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76880: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c76880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c76884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c76884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c76888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7688c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c7688cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c76890: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c76890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c76894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C76894u;
    {
        const bool branch_taken_0x1c76894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76894u;
        // 0x1c76898: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76894) {
            ctx->pc = 0x1C768C8u;
            goto label_1c768c8;
        }
    }
    ctx->pc = 0x1C7689Cu;
    // 0x1c7689c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7689Cu;
    SET_GPR_U32(ctx, 31, 0x1C768A4u);
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7689Cu, 0x1C768A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C768A4u;
label_1c768a4:
    // 0x1c768a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c768a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c768a8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c768a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c768ac: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c768acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c768b0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c768b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c768b4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c768b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c768b8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C768B8u;
    {
        const bool branch_taken_0x1c768b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C768BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C768B8u;
        // 0x1c768bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c768b8) {
            ctx->pc = 0x1C768CCu;
            goto label_1c768cc;
        }
    }
    ctx->pc = 0x1C768C0u;
    // 0x1c768c0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c768c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c768c4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c768c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c768c8:
    // 0x1c768c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c768c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c768cc:
    // 0x1c768cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c768ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c768d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c768d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c768d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C768D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C768D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C768D4u;
        // 0x1c768d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C768D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C768DCu;
    // 0x1c768dc: 0x0  nop
    ctx->pc = 0x1c768dcu;
    // NOP
    ctx->pc = 0x1c768e0u;
}
