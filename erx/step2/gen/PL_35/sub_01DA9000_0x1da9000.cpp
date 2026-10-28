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

// Function: sub_01DA9000
// Address: 0x1da9000 - 0x1da9138
void sub_01DA9000_0x1da9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9000_0x1da9000");
#endif

    switch (ctx->pc) {
        case 0x1da9020u: goto label_1da9020;
        case 0x1da9034u: goto label_1da9034;
        case 0x1da9038u: goto label_1da9038;
        case 0x1da9054u: goto label_1da9054;
        case 0x1da9064u: goto label_1da9064;
        case 0x1da90b0u: goto label_1da90b0;
        case 0x1da90ecu: goto label_1da90ec;
        case 0x1da90f8u: goto label_1da90f8;
        case 0x1da9108u: goto label_1da9108;
        case 0x1da9120u: goto label_1da9120;
        default: break;
    }

    ctx->pc = 0x1da9000u;

    // 0x1da9000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da9004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da9008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da9008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da900c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da9010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da9010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9014: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da9014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da9018: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA9018u;
    SET_GPR_U32(ctx, 31, 0x1DA9020u);
    ctx->pc = 0x1DA901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9018u;
    // 0x1da901c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA9018u, 0x1DA9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9020u;
label_1da9020:
    // 0x1da9020: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1da9020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da9024: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA9024u;
    {
        const bool branch_taken_0x1da9024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9024u;
        // 0x1da9028: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9024) {
            ctx->pc = 0x1DA9070u;
            goto label_1da9070;
        }
    }
    ctx->pc = 0x1DA902Cu;
    // 0x1da902c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA902Cu;
    {
        const bool branch_taken_0x1da902c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1da902c) {
            ctx->pc = 0x1DA904Cu;
            goto label_1da904c;
        }
    }
    ctx->pc = 0x1DA9034u;
label_1da9034:
    // 0x1da9034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da9034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da9038:
    // 0x1da9038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da9038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da903c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da903cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da9040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da9040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da9044: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9044u;
        // 0x1da9048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA904Cu;
label_1da904c:
    // 0x1da904c: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA904Cu;
    SET_GPR_U32(ctx, 31, 0x1DA9054u);
    ctx->pc = 0x1DA9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA904Cu;
    // 0x1da9050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA904Cu, 0x1DA9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9054u;
label_1da9054:
    // 0x1da9054: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DA9054u;
    {
        const bool branch_taken_0x1da9054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DA9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9054u;
        // 0x1da9058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9054) {
            ctx->pc = 0x1DA9034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9034;
        }
    }
    ctx->pc = 0x1DA905Cu;
    // 0x1da905c: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA905Cu;
    SET_GPR_U32(ctx, 31, 0x1DA9064u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA905Cu, 0x1DA9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9064u;
label_1da9064:
    // 0x1da9064: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DA9064u;
    {
        const bool branch_taken_0x1da9064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9064u;
        // 0x1da9068: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9064) {
            ctx->pc = 0x1DA9038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9038;
        }
    }
    ctx->pc = 0x1DA906Cu;
    // 0x1da906c: 0x0  nop
    ctx->pc = 0x1da906cu;
    // NOP
label_1da9070:
    // 0x1da9070: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1da9070u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1da9074: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA9074u;
    {
        const bool branch_taken_0x1da9074 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9074u;
        // 0x1da9078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9074) {
            ctx->pc = 0x1DA9038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9038;
        }
    }
    ctx->pc = 0x1DA907Cu;
    // 0x1da907c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1da907cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1da9080: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1da9080u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1da9084: 0x25ceac60  addiu       $t6, $t6, -0x53A0
    ctx->pc = 0x1da9084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945888));
    // 0x1da9088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da9088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da908c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da908cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da9090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da9090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9094: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da9094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da9098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da9098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da909c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da909cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da90a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da90a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da90a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da90a8: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA90A8u;
    SET_GPR_U32(ctx, 31, 0x1DA90B0u);
    ctx->pc = 0x1DA90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA90A8u;
    // 0x1da90ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA90A8u, 0x1DA90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA90B0u;
label_1da90b0:
    // 0x1da90b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da90b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da90b4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DA90B4u;
    {
        const bool branch_taken_0x1da90b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA90B4u;
        // 0x1da90b8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da90b4) {
            ctx->pc = 0x1DA9034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9034;
        }
    }
    ctx->pc = 0x1DA90BCu;
    // 0x1da90bc: 0x0  nop
    ctx->pc = 0x1da90bcu;
    // NOP
    // 0x1da90c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da90c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da90c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da90c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da90c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da90c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da90cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da90ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da90d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da90d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da90d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da90dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da90e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da90e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90e4: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA90E4u;
    SET_GPR_U32(ctx, 31, 0x1DA90ECu);
    ctx->pc = 0x1DA90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA90E4u;
    // 0x1da90e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA90E4u, 0x1DA90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA90ECu;
label_1da90ec:
    // 0x1da90ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da90f0: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA90F0u;
    SET_GPR_U32(ctx, 31, 0x1DA90F8u);
    ctx->pc = 0x1DA90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA90F0u;
    // 0x1da90f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA90F0u, 0x1DA90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA90F8u;
label_1da90f8:
    // 0x1da90f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da90fc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da90fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da9100: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA9100u;
    SET_GPR_U32(ctx, 31, 0x1DA9108u);
    ctx->pc = 0x1DA9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9100u;
    // 0x1da9104: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA9100u, 0x1DA9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9108u;
label_1da9108:
    // 0x1da9108: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da9108u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da910c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da9110: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1da9110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1da9114: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da9114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da9118: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA9118u;
    SET_GPR_U32(ctx, 31, 0x1DA9120u);
    ctx->pc = 0x1DA911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9118u;
    // 0x1da911c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA9118u, 0x1DA9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9120u;
label_1da9120:
    // 0x1da9120: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da9120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da9124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da9124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da9128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da912c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA912Cu;
        // 0x1da9130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9134u;
    // 0x1da9134: 0x0  nop
    ctx->pc = 0x1da9134u;
    // NOP
    ctx->pc = 0x1da9138u;
}
