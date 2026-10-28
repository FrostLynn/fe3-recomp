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

// Function: sub_01C6ABF8
// Address: 0x1c6abf8 - 0x1c6ad20
void sub_01C6ABF8_0x1c6abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6ABF8_0x1c6abf8");
#endif

    switch (ctx->pc) {
        case 0x1c6ac20u: goto label_1c6ac20;
        case 0x1c6ac34u: goto label_1c6ac34;
        case 0x1c6ac38u: goto label_1c6ac38;
        case 0x1c6ac58u: goto label_1c6ac58;
        case 0x1c6ac68u: goto label_1c6ac68;
        case 0x1c6ac9cu: goto label_1c6ac9c;
        case 0x1c6acd4u: goto label_1c6acd4;
        case 0x1c6ace0u: goto label_1c6ace0;
        case 0x1c6acf0u: goto label_1c6acf0;
        case 0x1c6ad08u: goto label_1c6ad08;
        default: break;
    }

    ctx->pc = 0x1c6abf8u;

    // 0x1c6abf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6abfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6ac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ac04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6ac08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6ac08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6ac10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6ac10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6ac18: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AC18u;
    SET_GPR_U32(ctx, 31, 0x1C6AC20u);
    ctx->pc = 0x1C6AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AC18u;
    // 0x1c6ac1c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AC18u, 0x1C6AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC20u;
label_1c6ac20:
    // 0x1c6ac20: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c6ac20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c6ac24: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6AC24u;
    {
        const bool branch_taken_0x1c6ac24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC24u;
        // 0x1c6ac28: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac24) {
            ctx->pc = 0x1C6AC70u;
            goto label_1c6ac70;
        }
    }
    ctx->pc = 0x1C6AC2Cu;
    // 0x1c6ac2c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AC2Cu;
    {
        const bool branch_taken_0x1c6ac2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6ac2c) {
            ctx->pc = 0x1C6AC50u;
            goto label_1c6ac50;
        }
    }
    ctx->pc = 0x1C6AC34u;
label_1c6ac34:
    // 0x1c6ac34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6ac34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ac38:
    // 0x1c6ac38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ac3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6ac3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ac40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ac44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC48u;
        // 0x1c6ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AC50u;
label_1c6ac50:
    // 0x1c6ac50: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6AC50u;
    SET_GPR_U32(ctx, 31, 0x1C6AC58u);
    ctx->pc = 0x1C6AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AC50u;
    // 0x1c6ac54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6AC50u, 0x1C6AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC58u;
label_1c6ac58:
    // 0x1c6ac58: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C6AC58u;
    {
        const bool branch_taken_0x1c6ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC58u;
        // 0x1c6ac5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac58) {
            ctx->pc = 0x1C6AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ac34;
        }
    }
    ctx->pc = 0x1C6AC60u;
    // 0x1c6ac60: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6AC60u;
    SET_GPR_U32(ctx, 31, 0x1C6AC68u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6AC60u, 0x1C6AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC68u;
label_1c6ac68:
    // 0x1c6ac68: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C6AC68u;
    {
        const bool branch_taken_0x1c6ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC68u;
        // 0x1c6ac6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac68) {
            ctx->pc = 0x1C6AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ac38;
        }
    }
    ctx->pc = 0x1C6AC70u;
label_1c6ac70:
    // 0x1c6ac70: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c6ac70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c6ac74: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C6AC74u;
    {
        const bool branch_taken_0x1c6ac74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AC74u;
        // 0x1c6ac78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac74) {
            ctx->pc = 0x1C6AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ac38;
        }
    }
    ctx->pc = 0x1C6AC7Cu;
    // 0x1c6ac7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c6ac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6ac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6ac88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6ac8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6ac90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ac94: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6AC94u;
    SET_GPR_U32(ctx, 31, 0x1C6AC9Cu);
    ctx->pc = 0x1C6AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AC94u;
    // 0x1c6ac98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6AC94u, 0x1C6AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC9Cu;
label_1c6ac9c:
    // 0x1c6ac9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6ac9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6aca0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C6ACA0u;
    {
        const bool branch_taken_0x1c6aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ACA0u;
        // 0x1c6aca4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aca0) {
            ctx->pc = 0x1C6AC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ac34;
        }
    }
    ctx->pc = 0x1C6ACA8u;
    // 0x1c6aca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6acac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6acb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6acb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6acb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6acb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6acbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6acbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6acc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6acc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6acc4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6acc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6acc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6acc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6accc: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6ACCCu;
    SET_GPR_U32(ctx, 31, 0x1C6ACD4u);
    ctx->pc = 0x1C6ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ACCCu;
    // 0x1c6acd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6ACCCu, 0x1C6ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ACD4u;
label_1c6acd4:
    // 0x1c6acd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6acd8: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6ACD8u;
    SET_GPR_U32(ctx, 31, 0x1C6ACE0u);
    ctx->pc = 0x1C6ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ACD8u;
    // 0x1c6acdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6ACD8u, 0x1C6ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ACE0u;
label_1c6ace0:
    // 0x1c6ace0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6ace4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6ace8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6ACE8u;
    SET_GPR_U32(ctx, 31, 0x1C6ACF0u);
    ctx->pc = 0x1C6ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ACE8u;
    // 0x1c6acec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6ACE8u, 0x1C6ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ACF0u;
label_1c6acf0:
    // 0x1c6acf0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6acf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6acf4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c6acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c6acf8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c6acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c6acfc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6ad00: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AD00u;
    SET_GPR_U32(ctx, 31, 0x1C6AD08u);
    ctx->pc = 0x1C6AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD00u;
    // 0x1c6ad04: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AD00u, 0x1C6AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD08u;
label_1c6ad08:
    // 0x1c6ad08: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c6ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c6ad0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ad0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ad10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6ad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ad14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AD14u;
        // 0x1c6ad18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AD1Cu;
    // 0x1c6ad1c: 0x0  nop
    ctx->pc = 0x1c6ad1cu;
    // NOP
    ctx->pc = 0x1c6ad20u;
}
