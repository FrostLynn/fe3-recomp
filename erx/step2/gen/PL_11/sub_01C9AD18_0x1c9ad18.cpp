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

// Function: sub_01C9AD18
// Address: 0x1c9ad18 - 0x1c9ae50
void sub_01C9AD18_0x1c9ad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AD18_0x1c9ad18");
#endif

    switch (ctx->pc) {
        case 0x1c9ad38u: goto label_1c9ad38;
        case 0x1c9ad4cu: goto label_1c9ad4c;
        case 0x1c9ad50u: goto label_1c9ad50;
        case 0x1c9ad6cu: goto label_1c9ad6c;
        case 0x1c9ad7cu: goto label_1c9ad7c;
        case 0x1c9adc8u: goto label_1c9adc8;
        case 0x1c9ae04u: goto label_1c9ae04;
        case 0x1c9ae10u: goto label_1c9ae10;
        case 0x1c9ae20u: goto label_1c9ae20;
        case 0x1c9ae38u: goto label_1c9ae38;
        default: break;
    }

    ctx->pc = 0x1c9ad18u;

    // 0x1c9ad18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9ad1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9ad20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9ad24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9ad28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9ad28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ad2c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9ad30: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AD30u;
    SET_GPR_U32(ctx, 31, 0x1C9AD38u);
    ctx->pc = 0x1C9AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AD30u;
    // 0x1c9ad34: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AD30u, 0x1C9AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD38u;
label_1c9ad38:
    // 0x1c9ad38: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c9ad38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c9ad3c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9AD3Cu;
    {
        const bool branch_taken_0x1c9ad3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD3Cu;
        // 0x1c9ad40: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad3c) {
            ctx->pc = 0x1C9AD88u;
            goto label_1c9ad88;
        }
    }
    ctx->pc = 0x1C9AD44u;
    // 0x1c9ad44: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9AD44u;
    {
        const bool branch_taken_0x1c9ad44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c9ad44) {
            ctx->pc = 0x1C9AD64u;
            goto label_1c9ad64;
        }
    }
    ctx->pc = 0x1C9AD4Cu;
label_1c9ad4c:
    // 0x1c9ad4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9ad4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ad50:
    // 0x1c9ad50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9ad50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ad54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9ad54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ad58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9ad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD5Cu;
        // 0x1c9ad60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AD64u;
label_1c9ad64:
    // 0x1c9ad64: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9AD64u;
    SET_GPR_U32(ctx, 31, 0x1C9AD6Cu);
    ctx->pc = 0x1C9AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AD64u;
    // 0x1c9ad68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9AD64u, 0x1C9AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD6Cu;
label_1c9ad6c:
    // 0x1c9ad6c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C9AD6Cu;
    {
        const bool branch_taken_0x1c9ad6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C9AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD6Cu;
        // 0x1c9ad70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad6c) {
            ctx->pc = 0x1C9AD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ad4c;
        }
    }
    ctx->pc = 0x1C9AD74u;
    // 0x1c9ad74: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9AD74u;
    SET_GPR_U32(ctx, 31, 0x1C9AD7Cu);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9AD74u, 0x1C9AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD7Cu;
label_1c9ad7c:
    // 0x1c9ad7c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C9AD7Cu;
    {
        const bool branch_taken_0x1c9ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD7Cu;
        // 0x1c9ad80: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad7c) {
            ctx->pc = 0x1C9AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ad50;
        }
    }
    ctx->pc = 0x1C9AD84u;
    // 0x1c9ad84: 0x0  nop
    ctx->pc = 0x1c9ad84u;
    // NOP
label_1c9ad88:
    // 0x1c9ad88: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c9ad88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c9ad8c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C9AD8Cu;
    {
        const bool branch_taken_0x1c9ad8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8Cu;
        // 0x1c9ad90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad8c) {
            ctx->pc = 0x1C9AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ad50;
        }
    }
    ctx->pc = 0x1C9AD94u;
    // 0x1c9ad94: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c9ad94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c9ad98: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1c9ad98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1c9ad9c: 0x25cec890  addiu       $t6, $t6, -0x3770
    ctx->pc = 0x1c9ad9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953104));
    // 0x1c9ada0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ada4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c9ada4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c9ada8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adac: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c9adacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c9adb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9adb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adb4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c9adb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9adb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9adb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9adbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9adc0: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9ADC0u;
    SET_GPR_U32(ctx, 31, 0x1C9ADC8u);
    ctx->pc = 0x1C9ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ADC0u;
    // 0x1c9adc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9ADC0u, 0x1C9ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ADC8u;
label_1c9adc8:
    // 0x1c9adc8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9adc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9adcc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C9ADCCu;
    {
        const bool branch_taken_0x1c9adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ADCCu;
        // 0x1c9add0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9adcc) {
            ctx->pc = 0x1C9AD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ad4c;
        }
    }
    ctx->pc = 0x1C9ADD4u;
    // 0x1c9add4: 0x0  nop
    ctx->pc = 0x1c9add4u;
    // NOP
    // 0x1c9add8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9addc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9addcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9ade0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9ade4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9ade4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ade8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9adec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9adecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9adf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adf4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9adf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9adf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9adf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adfc: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9ADFCu;
    SET_GPR_U32(ctx, 31, 0x1C9AE04u);
    ctx->pc = 0x1C9AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ADFCu;
    // 0x1c9ae00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9ADFCu, 0x1C9AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AE04u;
label_1c9ae04:
    // 0x1c9ae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae08: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9AE08u;
    SET_GPR_U32(ctx, 31, 0x1C9AE10u);
    ctx->pc = 0x1C9AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE08u;
    // 0x1c9ae0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9AE08u, 0x1C9AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AE10u;
label_1c9ae10:
    // 0x1c9ae10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9ae14: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9ae18: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AE18u;
    SET_GPR_U32(ctx, 31, 0x1C9AE20u);
    ctx->pc = 0x1C9AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE18u;
    // 0x1c9ae1c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AE18u, 0x1C9AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AE20u;
label_1c9ae20:
    // 0x1c9ae20: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9ae20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ae24: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c9ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c9ae28: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c9ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c9ae2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9ae30: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AE30u;
    SET_GPR_U32(ctx, 31, 0x1C9AE38u);
    ctx->pc = 0x1C9AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE30u;
    // 0x1c9ae34: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AE30u, 0x1C9AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AE38u;
label_1c9ae38:
    // 0x1c9ae38: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c9ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c9ae3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9ae3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ae40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE44u;
        // 0x1c9ae48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AE4Cu;
    // 0x1c9ae4c: 0x0  nop
    ctx->pc = 0x1c9ae4cu;
    // NOP
    ctx->pc = 0x1c9ae50u;
}
