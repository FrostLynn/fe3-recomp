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

// Function: sub_01C9AC00
// Address: 0x1c9ac00 - 0x1c9ad10
void sub_01C9AC00_0x1c9ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AC00_0x1c9ac00");
#endif

    switch (ctx->pc) {
        case 0x1c9ac20u: goto label_1c9ac20;
        case 0x1c9ac34u: goto label_1c9ac34;
        case 0x1c9ac38u: goto label_1c9ac38;
        case 0x1c9ac54u: goto label_1c9ac54;
        case 0x1c9ac64u: goto label_1c9ac64;
        case 0x1c9acb0u: goto label_1c9acb0;
        case 0x1c9acecu: goto label_1c9acec;
        case 0x1c9acf8u: goto label_1c9acf8;
        default: break;
    }

    ctx->pc = 0x1c9ac00u;

    // 0x1c9ac00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9ac04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9ac08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9ac0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9ac10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9ac10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9ac18: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AC18u;
    SET_GPR_U32(ctx, 31, 0x1C9AC20u);
    ctx->pc = 0x1C9AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AC18u;
    // 0x1c9ac1c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AC18u, 0x1C9AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC20u;
label_1c9ac20:
    // 0x1c9ac20: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c9ac20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c9ac24: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9AC24u;
    {
        const bool branch_taken_0x1c9ac24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC24u;
        // 0x1c9ac28: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac24) {
            ctx->pc = 0x1C9AC70u;
            goto label_1c9ac70;
        }
    }
    ctx->pc = 0x1C9AC2Cu;
    // 0x1c9ac2c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9AC2Cu;
    {
        const bool branch_taken_0x1c9ac2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c9ac2c) {
            ctx->pc = 0x1C9AC4Cu;
            goto label_1c9ac4c;
        }
    }
    ctx->pc = 0x1C9AC34u;
label_1c9ac34:
    // 0x1c9ac34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9ac34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ac38:
    // 0x1c9ac38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ac3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9ac3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ac40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC44u;
        // 0x1c9ac48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AC4Cu;
label_1c9ac4c:
    // 0x1c9ac4c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9AC4Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AC54u);
    ctx->pc = 0x1C9AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AC4Cu;
    // 0x1c9ac50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9AC4Cu, 0x1C9AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC54u;
label_1c9ac54:
    // 0x1c9ac54: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C9AC54u;
    {
        const bool branch_taken_0x1c9ac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C9AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC54u;
        // 0x1c9ac58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac54) {
            ctx->pc = 0x1C9AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ac34;
        }
    }
    ctx->pc = 0x1C9AC5Cu;
    // 0x1c9ac5c: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9AC5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AC64u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9AC5Cu, 0x1C9AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC64u;
label_1c9ac64:
    // 0x1c9ac64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C9AC64u;
    {
        const bool branch_taken_0x1c9ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC64u;
        // 0x1c9ac68: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac64) {
            ctx->pc = 0x1C9AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ac38;
        }
    }
    ctx->pc = 0x1C9AC6Cu;
    // 0x1c9ac6c: 0x0  nop
    ctx->pc = 0x1c9ac6cu;
    // NOP
label_1c9ac70:
    // 0x1c9ac70: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c9ac70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c9ac74: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C9AC74u;
    {
        const bool branch_taken_0x1c9ac74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AC74u;
        // 0x1c9ac78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac74) {
            ctx->pc = 0x1C9AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ac38;
        }
    }
    ctx->pc = 0x1C9AC7Cu;
    // 0x1c9ac7c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c9ac7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c9ac80: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1c9ac80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1c9ac84: 0x25cec880  addiu       $t6, $t6, -0x3780
    ctx->pc = 0x1c9ac84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953088));
    // 0x1c9ac88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac8c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c9ac8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c9ac90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9ac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac94: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c9ac94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c9ac98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9ac98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac9c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c9ac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9aca0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9aca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aca4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9aca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aca8: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9ACA8u;
    SET_GPR_U32(ctx, 31, 0x1C9ACB0u);
    ctx->pc = 0x1C9ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ACA8u;
    // 0x1c9acac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9ACA8u, 0x1C9ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ACB0u;
label_1c9acb0:
    // 0x1c9acb0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9acb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9acb4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C9ACB4u;
    {
        const bool branch_taken_0x1c9acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ACB4u;
        // 0x1c9acb8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9acb4) {
            ctx->pc = 0x1C9AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ac34;
        }
    }
    ctx->pc = 0x1C9ACBCu;
    // 0x1c9acbc: 0x0  nop
    ctx->pc = 0x1c9acbcu;
    // NOP
    // 0x1c9acc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9acc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9acc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9acc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9accc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9acccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9acd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9acd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9acd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acdc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9acdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ace0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9ace0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ace4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9ACE4u;
    SET_GPR_U32(ctx, 31, 0x1C9ACECu);
    ctx->pc = 0x1C9ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ACE4u;
    // 0x1c9ace8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9ACE4u, 0x1C9ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ACECu;
label_1c9acec:
    // 0x1c9acec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9acecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acf0: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9ACF0u;
    SET_GPR_U32(ctx, 31, 0x1C9ACF8u);
    ctx->pc = 0x1C9ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ACF0u;
    // 0x1c9acf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9ACF0u, 0x1C9ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ACF8u;
label_1c9acf8:
    // 0x1c9acf8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9acfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ad00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9ad00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ad04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD04u;
        // 0x1c9ad08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AD0Cu;
    // 0x1c9ad0c: 0x0  nop
    ctx->pc = 0x1c9ad0cu;
    // NOP
    ctx->pc = 0x1c9ad10u;
}
