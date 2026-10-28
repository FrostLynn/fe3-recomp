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

// Function: sub_01CCF818
// Address: 0x1ccf818 - 0x1ccf950
void sub_01CCF818_0x1ccf818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF818_0x1ccf818");
#endif

    switch (ctx->pc) {
        case 0x1ccf838u: goto label_1ccf838;
        case 0x1ccf84cu: goto label_1ccf84c;
        case 0x1ccf850u: goto label_1ccf850;
        case 0x1ccf86cu: goto label_1ccf86c;
        case 0x1ccf87cu: goto label_1ccf87c;
        case 0x1ccf8c8u: goto label_1ccf8c8;
        case 0x1ccf904u: goto label_1ccf904;
        case 0x1ccf910u: goto label_1ccf910;
        case 0x1ccf920u: goto label_1ccf920;
        case 0x1ccf938u: goto label_1ccf938;
        default: break;
    }

    ctx->pc = 0x1ccf818u;

    // 0x1ccf818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccf820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccf824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccf828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf82c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ccf82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccf830: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF830u;
    SET_GPR_U32(ctx, 31, 0x1CCF838u);
    ctx->pc = 0x1CCF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF830u;
    // 0x1ccf834: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF830u, 0x1CCF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF838u;
label_1ccf838:
    // 0x1ccf838: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ccf838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ccf83c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCF83Cu;
    {
        const bool branch_taken_0x1ccf83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF83Cu;
        // 0x1ccf840: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf83c) {
            ctx->pc = 0x1CCF888u;
            goto label_1ccf888;
        }
    }
    ctx->pc = 0x1CCF844u;
    // 0x1ccf844: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCF844u;
    {
        const bool branch_taken_0x1ccf844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ccf844) {
            ctx->pc = 0x1CCF864u;
            goto label_1ccf864;
        }
    }
    ctx->pc = 0x1CCF84Cu;
label_1ccf84c:
    // 0x1ccf84c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccf84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf850:
    // 0x1ccf850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf85c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF85Cu;
        // 0x1ccf860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF864u;
label_1ccf864:
    // 0x1ccf864: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF864u;
    SET_GPR_U32(ctx, 31, 0x1CCF86Cu);
    ctx->pc = 0x1CCF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF864u;
    // 0x1ccf868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF864u, 0x1CCF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF86Cu;
label_1ccf86c:
    // 0x1ccf86c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CCF86Cu;
    {
        const bool branch_taken_0x1ccf86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CCF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF86Cu;
        // 0x1ccf870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf86c) {
            ctx->pc = 0x1CCF84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf84c;
        }
    }
    ctx->pc = 0x1CCF874u;
    // 0x1ccf874: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF874u;
    SET_GPR_U32(ctx, 31, 0x1CCF87Cu);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF874u, 0x1CCF87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF87Cu;
label_1ccf87c:
    // 0x1ccf87c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CCF87Cu;
    {
        const bool branch_taken_0x1ccf87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF87Cu;
        // 0x1ccf880: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf87c) {
            ctx->pc = 0x1CCF850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf850;
        }
    }
    ctx->pc = 0x1CCF884u;
    // 0x1ccf884: 0x0  nop
    ctx->pc = 0x1ccf884u;
    // NOP
label_1ccf888:
    // 0x1ccf888: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ccf888u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ccf88c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CCF88Cu;
    {
        const bool branch_taken_0x1ccf88c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF88Cu;
        // 0x1ccf890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf88c) {
            ctx->pc = 0x1CCF850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf850;
        }
    }
    ctx->pc = 0x1CCF894u;
    // 0x1ccf894: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ccf894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ccf898: 0x3c0e01cd  lui         $t6, 0x1CD
    ctx->pc = 0x1ccf898u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
    // 0x1ccf89c: 0x25ce4680  addiu       $t6, $t6, 0x4680
    ctx->pc = 0x1ccf89cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18048));
    // 0x1ccf8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ccf8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ccf8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8ac: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccf8acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccf8b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ccf8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf8b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf8b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf8c0: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF8C0u;
    SET_GPR_U32(ctx, 31, 0x1CCF8C8u);
    ctx->pc = 0x1CCF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF8C0u;
    // 0x1ccf8c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF8C0u, 0x1CCF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF8C8u;
label_1ccf8c8:
    // 0x1ccf8c8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf8cc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CCF8CCu;
    {
        const bool branch_taken_0x1ccf8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF8CCu;
        // 0x1ccf8d0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf8cc) {
            ctx->pc = 0x1CCF84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf84c;
        }
    }
    ctx->pc = 0x1CCF8D4u;
    // 0x1ccf8d4: 0x0  nop
    ctx->pc = 0x1ccf8d4u;
    // NOP
    // 0x1ccf8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf8dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf8e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf8e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf8ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf8f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf8f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf8fc: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF8FCu;
    SET_GPR_U32(ctx, 31, 0x1CCF904u);
    ctx->pc = 0x1CCF900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF8FCu;
    // 0x1ccf900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF8FCu, 0x1CCF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF904u;
label_1ccf904:
    // 0x1ccf904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf908: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF908u;
    SET_GPR_U32(ctx, 31, 0x1CCF910u);
    ctx->pc = 0x1CCF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF908u;
    // 0x1ccf90c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF908u, 0x1CCF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF910u;
label_1ccf910:
    // 0x1ccf910: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf914: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccf914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccf918: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF918u;
    SET_GPR_U32(ctx, 31, 0x1CCF920u);
    ctx->pc = 0x1CCF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF918u;
    // 0x1ccf91c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF918u, 0x1CCF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF920u;
label_1ccf920:
    // 0x1ccf920: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf920u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf924: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ccf924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ccf928: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1ccf928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1ccf92c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf930: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF930u;
    SET_GPR_U32(ctx, 31, 0x1CCF938u);
    ctx->pc = 0x1CCF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF930u;
    // 0x1ccf934: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF930u, 0x1CCF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF938u;
label_1ccf938:
    // 0x1ccf938: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ccf938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ccf93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf944: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF944u;
        // 0x1ccf948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF94Cu;
    // 0x1ccf94c: 0x0  nop
    ctx->pc = 0x1ccf94cu;
    // NOP
    ctx->pc = 0x1ccf950u;
}
