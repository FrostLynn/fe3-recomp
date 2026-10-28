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

// Function: sub_01CAE6B0
// Address: 0x1cae6b0 - 0x1cae7c0
void sub_01CAE6B0_0x1cae6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE6B0_0x1cae6b0");
#endif

    switch (ctx->pc) {
        case 0x1cae6d0u: goto label_1cae6d0;
        case 0x1cae6e4u: goto label_1cae6e4;
        case 0x1cae6e8u: goto label_1cae6e8;
        case 0x1cae704u: goto label_1cae704;
        case 0x1cae714u: goto label_1cae714;
        case 0x1cae760u: goto label_1cae760;
        case 0x1cae79cu: goto label_1cae79c;
        case 0x1cae7a8u: goto label_1cae7a8;
        default: break;
    }

    ctx->pc = 0x1cae6b0u;

    // 0x1cae6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae6b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae6bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae6c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cae6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae6c4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cae6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cae6c8: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE6C8u;
    SET_GPR_U32(ctx, 31, 0x1CAE6D0u);
    ctx->pc = 0x1CAE6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE6C8u;
    // 0x1cae6cc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE6C8u, 0x1CAE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE6D0u;
label_1cae6d0:
    // 0x1cae6d0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cae6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cae6d4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAE6D4u;
    {
        const bool branch_taken_0x1cae6d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE6D4u;
        // 0x1cae6d8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae6d4) {
            ctx->pc = 0x1CAE720u;
            goto label_1cae720;
        }
    }
    ctx->pc = 0x1CAE6DCu;
    // 0x1cae6dc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAE6DCu;
    {
        const bool branch_taken_0x1cae6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cae6dc) {
            ctx->pc = 0x1CAE6FCu;
            goto label_1cae6fc;
        }
    }
    ctx->pc = 0x1CAE6E4u;
label_1cae6e4:
    // 0x1cae6e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cae6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cae6e8:
    // 0x1cae6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae6f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE6F4u;
        // 0x1cae6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE6FCu;
label_1cae6fc:
    // 0x1cae6fc: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE6FCu;
    SET_GPR_U32(ctx, 31, 0x1CAE704u);
    ctx->pc = 0x1CAE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE6FCu;
    // 0x1cae700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE6FCu, 0x1CAE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE704u;
label_1cae704:
    // 0x1cae704: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CAE704u;
    {
        const bool branch_taken_0x1cae704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CAE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE704u;
        // 0x1cae708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae704) {
            ctx->pc = 0x1CAE6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae6e4;
        }
    }
    ctx->pc = 0x1CAE70Cu;
    // 0x1cae70c: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE70Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE714u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE70Cu, 0x1CAE714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE714u;
label_1cae714:
    // 0x1cae714: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CAE714u;
    {
        const bool branch_taken_0x1cae714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE714u;
        // 0x1cae718: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae714) {
            ctx->pc = 0x1CAE6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae6e8;
        }
    }
    ctx->pc = 0x1CAE71Cu;
    // 0x1cae71c: 0x0  nop
    ctx->pc = 0x1cae71cu;
    // NOP
label_1cae720:
    // 0x1cae720: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cae720u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cae724: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CAE724u;
    {
        const bool branch_taken_0x1cae724 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE724u;
        // 0x1cae728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae724) {
            ctx->pc = 0x1CAE6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae6e8;
        }
    }
    ctx->pc = 0x1CAE72Cu;
    // 0x1cae72c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cae72cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cae730: 0x3c0e01cb  lui         $t6, 0x1CB
    ctx->pc = 0x1cae730u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)459 << 16));
    // 0x1cae734: 0x25cef610  addiu       $t6, $t6, -0x9F0
    ctx->pc = 0x1cae734u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964752));
    // 0x1cae738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cae738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae73c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cae73cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cae740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae744: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cae744u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cae748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae74c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cae74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cae750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae754: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae758: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE758u;
    SET_GPR_U32(ctx, 31, 0x1CAE760u);
    ctx->pc = 0x1CAE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE758u;
    // 0x1cae75c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE758u, 0x1CAE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE760u;
label_1cae760:
    // 0x1cae760: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae760u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae764: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CAE764u;
    {
        const bool branch_taken_0x1cae764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE764u;
        // 0x1cae768: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae764) {
            ctx->pc = 0x1CAE6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae6e4;
        }
    }
    ctx->pc = 0x1CAE76Cu;
    // 0x1cae76c: 0x0  nop
    ctx->pc = 0x1cae76cu;
    // NOP
    // 0x1cae770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae774: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae78c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae790: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae790u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae794: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE794u;
    SET_GPR_U32(ctx, 31, 0x1CAE79Cu);
    ctx->pc = 0x1CAE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE794u;
    // 0x1cae798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE794u, 0x1CAE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE79Cu;
label_1cae79c:
    // 0x1cae79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae7a0: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE7A0u;
    SET_GPR_U32(ctx, 31, 0x1CAE7A8u);
    ctx->pc = 0x1CAE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE7A0u;
    // 0x1cae7a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE7A0u, 0x1CAE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE7A8u;
label_1cae7a8:
    // 0x1cae7a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cae7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cae7ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE7B4u;
        // 0x1cae7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE7BCu;
    // 0x1cae7bc: 0x0  nop
    ctx->pc = 0x1cae7bcu;
    // NOP
    ctx->pc = 0x1cae7c0u;
}
