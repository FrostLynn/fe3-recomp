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

// Function: sub_01C6AD48
// Address: 0x1c6ad48 - 0x1c6ae10
void sub_01C6AD48_0x1c6ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6AD48_0x1c6ad48");
#endif

    switch (ctx->pc) {
        case 0x1c6ad64u: goto label_1c6ad64;
        case 0x1c6ad74u: goto label_1c6ad74;
        case 0x1c6ad80u: goto label_1c6ad80;
        case 0x1c6ad90u: goto label_1c6ad90;
        case 0x1c6ada8u: goto label_1c6ada8;
        case 0x1c6add4u: goto label_1c6add4;
        default: break;
    }

    ctx->pc = 0x1c6ad48u;

    // 0x1c6ad48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6ad4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6ad50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ad54: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6ad58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ad58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ad5c: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AD5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AD64u);
    ctx->pc = 0x1C6AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD5Cu;
    // 0x1c6ad60: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AD5Cu, 0x1C6AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD64u;
label_1c6ad64:
    // 0x1c6ad64: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c6ad64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c6ad68: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c6ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6ad6c: 0xc71aa4a  jal         func_1C6A928
    ctx->pc = 0x1C6AD6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AD74u);
    ctx->pc = 0x1C6AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD6Cu;
    // 0x1c6ad70: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A928u, 0x1C6AD6Cu, 0x1C6AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD74u;
label_1c6ad74:
    // 0x1c6ad74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6ad74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6ad78: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AD78u;
    SET_GPR_U32(ctx, 31, 0x1C6AD80u);
    ctx->pc = 0x1C6AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD78u;
    // 0x1c6ad7c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AD78u, 0x1C6AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD80u;
label_1c6ad80:
    // 0x1c6ad80: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c6ad80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c6ad84: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c6ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6ad88: 0xc71aa4a  jal         func_1C6A928
    ctx->pc = 0x1C6AD88u;
    SET_GPR_U32(ctx, 31, 0x1C6AD90u);
    ctx->pc = 0x1C6AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD88u;
    // 0x1c6ad8c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A928u, 0x1C6AD88u, 0x1C6AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD90u;
label_1c6ad90:
    // 0x1c6ad90: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c6ad90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c6ad94: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6AD94u;
    {
        const bool branch_taken_0x1c6ad94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ad94) {
            ctx->pc = 0x1C6AD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6AD94u;
            // 0x1c6ad98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6ADFCu;
            goto label_1c6adfc;
        }
    }
    ctx->pc = 0x1C6AD9Cu;
    // 0x1c6ad9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c6ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6ada0: 0xc71a7aa  jal         func_1C69EA8
    ctx->pc = 0x1C6ADA0u;
    SET_GPR_U32(ctx, 31, 0x1C6ADA8u);
    ctx->pc = 0x1C6ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ADA0u;
    // 0x1c6ada4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EA8u, 0x1C6ADA0u, 0x1C6ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ADA8u;
label_1c6ada8:
    // 0x1c6ada8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6adacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6adb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6adb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6adb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6adb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adbc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6adbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6adc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c6adc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6ADC4u;
    {
        const bool branch_taken_0x1c6adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ADC4u;
        // 0x1c6adc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6adc4) {
            ctx->pc = 0x1C6ADF8u;
            goto label_1c6adf8;
        }
    }
    ctx->pc = 0x1C6ADCCu;
    // 0x1c6adcc: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6ADCCu;
    SET_GPR_U32(ctx, 31, 0x1C6ADD4u);
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6ADCCu, 0x1C6ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ADD4u;
label_1c6add4:
    // 0x1c6add4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6add4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6add8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c6add8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6addc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c6addcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c6ade0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c6ade0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c6ade4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c6ade4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6ade8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6ADE8u;
    {
        const bool branch_taken_0x1c6ade8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ADE8u;
        // 0x1c6adec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ade8) {
            ctx->pc = 0x1C6ADFCu;
            goto label_1c6adfc;
        }
    }
    ctx->pc = 0x1C6ADF0u;
    // 0x1c6adf0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c6adf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6adf4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c6adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c6adf8:
    // 0x1c6adf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6adf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6adfc:
    // 0x1c6adfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6adfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AE04u;
        // 0x1c6ae08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AE0Cu;
    // 0x1c6ae0c: 0x0  nop
    ctx->pc = 0x1c6ae0cu;
    // NOP
    ctx->pc = 0x1c6ae10u;
}
