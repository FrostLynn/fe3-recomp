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

// Function: sub_01CCF5A0
// Address: 0x1ccf5a0 - 0x1ccf6b0
void sub_01CCF5A0_0x1ccf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF5A0_0x1ccf5a0");
#endif

    switch (ctx->pc) {
        case 0x1ccf5c0u: goto label_1ccf5c0;
        case 0x1ccf5d4u: goto label_1ccf5d4;
        case 0x1ccf5d8u: goto label_1ccf5d8;
        case 0x1ccf5f4u: goto label_1ccf5f4;
        case 0x1ccf604u: goto label_1ccf604;
        case 0x1ccf650u: goto label_1ccf650;
        case 0x1ccf68cu: goto label_1ccf68c;
        case 0x1ccf698u: goto label_1ccf698;
        default: break;
    }

    ctx->pc = 0x1ccf5a0u;

    // 0x1ccf5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccf5ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf5b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccf5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf5b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ccf5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccf5b8: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF5B8u;
    SET_GPR_U32(ctx, 31, 0x1CCF5C0u);
    ctx->pc = 0x1CCF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF5B8u;
    // 0x1ccf5bc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF5B8u, 0x1CCF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF5C0u;
label_1ccf5c0:
    // 0x1ccf5c0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ccf5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ccf5c4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCF5C4u;
    {
        const bool branch_taken_0x1ccf5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF5C4u;
        // 0x1ccf5c8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf5c4) {
            ctx->pc = 0x1CCF610u;
            goto label_1ccf610;
        }
    }
    ctx->pc = 0x1CCF5CCu;
    // 0x1ccf5cc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCF5CCu;
    {
        const bool branch_taken_0x1ccf5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ccf5cc) {
            ctx->pc = 0x1CCF5ECu;
            goto label_1ccf5ec;
        }
    }
    ctx->pc = 0x1CCF5D4u;
label_1ccf5d4:
    // 0x1ccf5d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccf5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf5d8:
    // 0x1ccf5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf5dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF5E4u;
        // 0x1ccf5e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF5ECu;
label_1ccf5ec:
    // 0x1ccf5ec: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF5ECu;
    SET_GPR_U32(ctx, 31, 0x1CCF5F4u);
    ctx->pc = 0x1CCF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF5ECu;
    // 0x1ccf5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF5ECu, 0x1CCF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF5F4u;
label_1ccf5f4:
    // 0x1ccf5f4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CCF5F4u;
    {
        const bool branch_taken_0x1ccf5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CCF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF5F4u;
        // 0x1ccf5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf5f4) {
            ctx->pc = 0x1CCF5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf5d4;
        }
    }
    ctx->pc = 0x1CCF5FCu;
    // 0x1ccf5fc: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF5FCu;
    SET_GPR_U32(ctx, 31, 0x1CCF604u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF5FCu, 0x1CCF604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF604u;
label_1ccf604:
    // 0x1ccf604: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CCF604u;
    {
        const bool branch_taken_0x1ccf604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF604u;
        // 0x1ccf608: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf604) {
            ctx->pc = 0x1CCF5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf5d8;
        }
    }
    ctx->pc = 0x1CCF60Cu;
    // 0x1ccf60c: 0x0  nop
    ctx->pc = 0x1ccf60cu;
    // NOP
label_1ccf610:
    // 0x1ccf610: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ccf610u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ccf614: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CCF614u;
    {
        const bool branch_taken_0x1ccf614 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF614u;
        // 0x1ccf618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf614) {
            ctx->pc = 0x1CCF5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf5d8;
        }
    }
    ctx->pc = 0x1CCF61Cu;
    // 0x1ccf61c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ccf61cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ccf620: 0x3c0e01cd  lui         $t6, 0x1CD
    ctx->pc = 0x1ccf620u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
    // 0x1ccf624: 0x25ce4660  addiu       $t6, $t6, 0x4660
    ctx->pc = 0x1ccf624u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18016));
    // 0x1ccf628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf62c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ccf62cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ccf630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf634: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccf634u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccf638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf63c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ccf63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf644: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf648: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF648u;
    SET_GPR_U32(ctx, 31, 0x1CCF650u);
    ctx->pc = 0x1CCF64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF648u;
    // 0x1ccf64c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF648u, 0x1CCF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF650u;
label_1ccf650:
    // 0x1ccf650: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf650u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf654: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CCF654u;
    {
        const bool branch_taken_0x1ccf654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF654u;
        // 0x1ccf658: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf654) {
            ctx->pc = 0x1CCF5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf5d4;
        }
    }
    ctx->pc = 0x1CCF65Cu;
    // 0x1ccf65c: 0x0  nop
    ctx->pc = 0x1ccf65cu;
    // NOP
    // 0x1ccf660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf664: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf67c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf680: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf684: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF684u;
    SET_GPR_U32(ctx, 31, 0x1CCF68Cu);
    ctx->pc = 0x1CCF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF684u;
    // 0x1ccf688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF684u, 0x1CCF68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF68Cu;
label_1ccf68c:
    // 0x1ccf68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf690: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF690u;
    SET_GPR_U32(ctx, 31, 0x1CCF698u);
    ctx->pc = 0x1CCF694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF690u;
    // 0x1ccf694: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF690u, 0x1CCF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF698u;
label_1ccf698:
    // 0x1ccf698: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ccf698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ccf69c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF6A4u;
        // 0x1ccf6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF6ACu;
    // 0x1ccf6ac: 0x0  nop
    ctx->pc = 0x1ccf6acu;
    // NOP
    ctx->pc = 0x1ccf6b0u;
}
