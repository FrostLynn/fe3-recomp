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

// Function: sub_01C447F0
// Address: 0x1c447f0 - 0x1c448d8
void sub_01C447F0_0x1c447f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C447F0_0x1c447f0");
#endif

    switch (ctx->pc) {
        case 0x1c44804u: goto label_1c44804;
        case 0x1c44818u: goto label_1c44818;
        case 0x1c4481cu: goto label_1c4481c;
        case 0x1c44838u: goto label_1c44838;
        case 0x1c44844u: goto label_1c44844;
        case 0x1c44884u: goto label_1c44884;
        case 0x1c448b0u: goto label_1c448b0;
        case 0x1c448bcu: goto label_1c448bc;
        case 0x1c448c8u: goto label_1c448c8;
        default: break;
    }

    ctx->pc = 0x1c447f0u;

    // 0x1c447f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c447f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c447f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c447f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c447f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c447f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c447fc: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C447FCu;
    SET_GPR_U32(ctx, 31, 0x1C44804u);
    ctx->pc = 0x1C44800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C447FCu;
    // 0x1c44800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C447FCu, 0x1C44804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44804u;
label_1c44804:
    // 0x1c44804: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44808: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44808u;
    {
        const bool branch_taken_0x1c44808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C4480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44808u;
        // 0x1c4480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44808) {
            ctx->pc = 0x1C4482Cu;
            goto label_1c4482c;
        }
    }
    ctx->pc = 0x1C44810u;
    // 0x1c44810: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C44810u;
    SET_GPR_U32(ctx, 31, 0x1C44818u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C44810u, 0x1C44818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44818u;
label_1c44818:
    // 0x1c44818: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c44818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c4481c:
    // 0x1c4481c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4481cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44820: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44824: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44824u;
        // 0x1c44828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4482Cu;
label_1c4482c:
    // 0x1c4482c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c4482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c44830: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C44830u;
    SET_GPR_U32(ctx, 31, 0x1C44838u);
    ctx->pc = 0x1C44834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44830u;
    // 0x1c44834: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C44830u, 0x1C44838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44838u;
label_1c44838:
    // 0x1c44838: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c44838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c4483c: 0xc710924  jal         func_1C42490
    ctx->pc = 0x1C4483Cu;
    SET_GPR_U32(ctx, 31, 0x1C44844u);
    ctx->pc = 0x1C44840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4483Cu;
    // 0x1c44840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42490u, 0x1C4483Cu, 0x1C44844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44844u;
label_1c44844:
    // 0x1c44844: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C44844u;
    {
        const bool branch_taken_0x1c44844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44844u;
        // 0x1c44848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44844) {
            ctx->pc = 0x1C4481Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4481c;
        }
    }
    ctx->pc = 0x1C4484Cu;
    // 0x1c4484c: 0x0  nop
    ctx->pc = 0x1c4484cu;
    // NOP
    // 0x1c44850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c44854: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44854u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c44858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c4485c: 0x25eef808  addiu       $t6, $t7, -0x7F8
    ctx->pc = 0x1c4485cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965256));
    // 0x1c44860: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c44860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c44864: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c44864u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C4F80Cu));
    // 0x1c44868: 0x8dedf808  lw          $t5, -0x7F8($t7)
    ctx->pc = 0x1c44868u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C4F808u));
    // 0x1c4486c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4486cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44870: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c44870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c44874: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c44874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c44878: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c44878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c4487c: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C4487Cu;
    SET_GPR_U32(ctx, 31, 0x1C44884u);
    ctx->pc = 0x1C44880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4487Cu;
    // 0x1c44880: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C4487Cu, 0x1C44884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44884u;
label_1c44884:
    // 0x1c44884: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c44884u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c44888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c44888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4488c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4488cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44890: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c44890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44894: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c44894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c44898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c44898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4489c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c4489cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c448a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c448a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c448a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c448a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c448a8: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C448A8u;
    SET_GPR_U32(ctx, 31, 0x1C448B0u);
    ctx->pc = 0x1C448ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C448A8u;
    // 0x1c448ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C448A8u, 0x1C448B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C448B0u;
label_1c448b0:
    // 0x1c448b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c448b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c448b4: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C448B4u;
    SET_GPR_U32(ctx, 31, 0x1C448BCu);
    ctx->pc = 0x1C448B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C448B4u;
    // 0x1c448b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C448B4u, 0x1C448BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C448BCu;
label_1c448bc:
    // 0x1c448bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c448bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c448c0: 0xc710926  jal         func_1C42498
    ctx->pc = 0x1C448C0u;
    SET_GPR_U32(ctx, 31, 0x1C448C8u);
    ctx->pc = 0x1C448C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C448C0u;
    // 0x1c448c4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42498u, 0x1C448C0u, 0x1C448C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C448C8u;
label_1c448c8:
    // 0x1c448c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c448c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c448cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c448ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c448d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C448D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C448D0u;
        // 0x1c448d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C448D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C448D8u;
}
