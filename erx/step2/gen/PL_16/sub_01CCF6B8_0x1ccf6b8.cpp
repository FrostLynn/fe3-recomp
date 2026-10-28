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

// Function: sub_01CCF6B8
// Address: 0x1ccf6b8 - 0x1ccf7f0
void sub_01CCF6B8_0x1ccf6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF6B8_0x1ccf6b8");
#endif

    switch (ctx->pc) {
        case 0x1ccf6d8u: goto label_1ccf6d8;
        case 0x1ccf6ecu: goto label_1ccf6ec;
        case 0x1ccf6f0u: goto label_1ccf6f0;
        case 0x1ccf70cu: goto label_1ccf70c;
        case 0x1ccf71cu: goto label_1ccf71c;
        case 0x1ccf768u: goto label_1ccf768;
        case 0x1ccf7a4u: goto label_1ccf7a4;
        case 0x1ccf7b0u: goto label_1ccf7b0;
        case 0x1ccf7c0u: goto label_1ccf7c0;
        case 0x1ccf7d8u: goto label_1ccf7d8;
        default: break;
    }

    ctx->pc = 0x1ccf6b8u;

    // 0x1ccf6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf6c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccf6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccf6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf6c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccf6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf6cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ccf6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccf6d0: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF6D0u;
    SET_GPR_U32(ctx, 31, 0x1CCF6D8u);
    ctx->pc = 0x1CCF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF6D0u;
    // 0x1ccf6d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF6D0u, 0x1CCF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF6D8u;
label_1ccf6d8:
    // 0x1ccf6d8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ccf6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ccf6dc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCF6DCu;
    {
        const bool branch_taken_0x1ccf6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF6DCu;
        // 0x1ccf6e0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf6dc) {
            ctx->pc = 0x1CCF728u;
            goto label_1ccf728;
        }
    }
    ctx->pc = 0x1CCF6E4u;
    // 0x1ccf6e4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCF6E4u;
    {
        const bool branch_taken_0x1ccf6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ccf6e4) {
            ctx->pc = 0x1CCF704u;
            goto label_1ccf704;
        }
    }
    ctx->pc = 0x1CCF6ECu;
label_1ccf6ec:
    // 0x1ccf6ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccf6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf6f0:
    // 0x1ccf6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf6f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF6FCu;
        // 0x1ccf700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF704u;
label_1ccf704:
    // 0x1ccf704: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF704u;
    SET_GPR_U32(ctx, 31, 0x1CCF70Cu);
    ctx->pc = 0x1CCF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF704u;
    // 0x1ccf708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF704u, 0x1CCF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF70Cu;
label_1ccf70c:
    // 0x1ccf70c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CCF70Cu;
    {
        const bool branch_taken_0x1ccf70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CCF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF70Cu;
        // 0x1ccf710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf70c) {
            ctx->pc = 0x1CCF6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf6ec;
        }
    }
    ctx->pc = 0x1CCF714u;
    // 0x1ccf714: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF714u;
    SET_GPR_U32(ctx, 31, 0x1CCF71Cu);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF714u, 0x1CCF71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF71Cu;
label_1ccf71c:
    // 0x1ccf71c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CCF71Cu;
    {
        const bool branch_taken_0x1ccf71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF71Cu;
        // 0x1ccf720: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf71c) {
            ctx->pc = 0x1CCF6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf6f0;
        }
    }
    ctx->pc = 0x1CCF724u;
    // 0x1ccf724: 0x0  nop
    ctx->pc = 0x1ccf724u;
    // NOP
label_1ccf728:
    // 0x1ccf728: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ccf728u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ccf72c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CCF72Cu;
    {
        const bool branch_taken_0x1ccf72c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF72Cu;
        // 0x1ccf730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf72c) {
            ctx->pc = 0x1CCF6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf6f0;
        }
    }
    ctx->pc = 0x1CCF734u;
    // 0x1ccf734: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ccf734u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ccf738: 0x3c0e01cd  lui         $t6, 0x1CD
    ctx->pc = 0x1ccf738u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
    // 0x1ccf73c: 0x25ce4670  addiu       $t6, $t6, 0x4670
    ctx->pc = 0x1ccf73cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18032));
    // 0x1ccf740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf744: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ccf744u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ccf748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf74c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccf74cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccf750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf754: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ccf754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf758: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf75c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf75cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf760: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF760u;
    SET_GPR_U32(ctx, 31, 0x1CCF768u);
    ctx->pc = 0x1CCF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF760u;
    // 0x1ccf764: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF760u, 0x1CCF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF768u;
label_1ccf768:
    // 0x1ccf768: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf768u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf76c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CCF76Cu;
    {
        const bool branch_taken_0x1ccf76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF76Cu;
        // 0x1ccf770: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf76c) {
            ctx->pc = 0x1CCF6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf6ec;
        }
    }
    ctx->pc = 0x1CCF774u;
    // 0x1ccf774: 0x0  nop
    ctx->pc = 0x1ccf774u;
    // NOP
    // 0x1ccf778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf77c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf794: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf798: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf79c: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF79Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF7A4u);
    ctx->pc = 0x1CCF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF79Cu;
    // 0x1ccf7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF79Cu, 0x1CCF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF7A4u;
label_1ccf7a4:
    // 0x1ccf7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf7a8: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF7A8u;
    SET_GPR_U32(ctx, 31, 0x1CCF7B0u);
    ctx->pc = 0x1CCF7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF7A8u;
    // 0x1ccf7ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF7A8u, 0x1CCF7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF7B0u;
label_1ccf7b0:
    // 0x1ccf7b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf7b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccf7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccf7b8: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF7B8u;
    SET_GPR_U32(ctx, 31, 0x1CCF7C0u);
    ctx->pc = 0x1CCF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF7B8u;
    // 0x1ccf7bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF7B8u, 0x1CCF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF7C0u;
label_1ccf7c0:
    // 0x1ccf7c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf7c4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ccf7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ccf7c8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1ccf7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1ccf7cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf7d0: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF7D0u;
    SET_GPR_U32(ctx, 31, 0x1CCF7D8u);
    ctx->pc = 0x1CCF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF7D0u;
    // 0x1ccf7d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF7D0u, 0x1CCF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF7D8u;
label_1ccf7d8:
    // 0x1ccf7d8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ccf7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ccf7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf7e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF7E4u;
        // 0x1ccf7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF7ECu;
    // 0x1ccf7ec: 0x0  nop
    ctx->pc = 0x1ccf7ecu;
    // NOP
    ctx->pc = 0x1ccf7f0u;
}
