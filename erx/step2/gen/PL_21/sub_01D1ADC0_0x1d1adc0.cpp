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

// Function: sub_01D1ADC0
// Address: 0x1d1adc0 - 0x1d1aec8
void sub_01D1ADC0_0x1d1adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1ADC0_0x1d1adc0");
#endif

    switch (ctx->pc) {
        case 0x1d1addcu: goto label_1d1addc;
        case 0x1d1ade4u: goto label_1d1ade4;
        case 0x1d1adf8u: goto label_1d1adf8;
        case 0x1d1ae00u: goto label_1d1ae00;
        case 0x1d1ae04u: goto label_1d1ae04;
        case 0x1d1ae40u: goto label_1d1ae40;
        case 0x1d1ae68u: goto label_1d1ae68;
        case 0x1d1ae74u: goto label_1d1ae74;
        case 0x1d1ae80u: goto label_1d1ae80;
        case 0x1d1ae94u: goto label_1d1ae94;
        case 0x1d1aeacu: goto label_1d1aeac;
        default: break;
    }

    ctx->pc = 0x1d1adc0u;

    // 0x1d1adc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1adc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1adc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1adc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1adcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1adccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1add0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1add4: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1ADD4u;
    SET_GPR_U32(ctx, 31, 0x1D1ADDCu);
    ctx->pc = 0x1D1ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ADD4u;
    // 0x1d1add8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1ADD4u, 0x1D1ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ADDCu;
label_1d1addc:
    // 0x1d1addc: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1ADDCu;
    SET_GPR_U32(ctx, 31, 0x1D1ADE4u);
    ctx->pc = 0x1D1ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ADDCu;
    // 0x1d1ade0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1ADDCu, 0x1D1ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ADE4u;
label_1d1ade4:
    // 0x1d1ade4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1ade4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ade8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1ADE8u;
    {
        const bool branch_taken_0x1d1ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ADE8u;
        // 0x1d1adec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ade8) {
            ctx->pc = 0x1D1AE14u;
            goto label_1d1ae14;
        }
    }
    ctx->pc = 0x1D1ADF0u;
    // 0x1d1adf0: 0xc746430  jal         func_1D190C0
    ctx->pc = 0x1D1ADF0u;
    SET_GPR_U32(ctx, 31, 0x1D1ADF8u);
    ctx->pc = 0x1D190C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190C0u, 0x1D1ADF0u, 0x1D1ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ADF8u;
label_1d1adf8:
    // 0x1d1adf8: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1ADF8u;
    SET_GPR_U32(ctx, 31, 0x1D1AE00u);
    ctx->pc = 0x1D1ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ADF8u;
    // 0x1d1adfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1ADF8u, 0x1D1AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE00u;
label_1d1ae00:
    // 0x1d1ae00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1ae04:
    // 0x1d1ae04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ae04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ae08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1ae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ae0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE0Cu;
        // 0x1d1ae10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AE14u;
label_1d1ae14:
    // 0x1d1ae14: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1AE14u;
    {
        const bool branch_taken_0x1d1ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE14u;
        // 0x1d1ae18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae14) {
            ctx->pc = 0x1D1AE04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ae04;
        }
    }
    ctx->pc = 0x1D1AE1Cu;
    // 0x1d1ae1c: 0x0  nop
    ctx->pc = 0x1d1ae1cu;
    // NOP
    // 0x1d1ae20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1ae24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1ae28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1ae2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1ae30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1ae30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1ae38: 0xc74641c  jal         func_1D19070
    ctx->pc = 0x1D1AE38u;
    SET_GPR_U32(ctx, 31, 0x1D1AE40u);
    ctx->pc = 0x1D1AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE38u;
    // 0x1d1ae3c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19070u, 0x1D1AE38u, 0x1D1AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE40u;
label_1d1ae40:
    // 0x1d1ae40: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1ae44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1ae44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1ae48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ae4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1ae4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae50: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d1ae50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1ae54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1ae54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1ae5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae60: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1AE60u;
    SET_GPR_U32(ctx, 31, 0x1D1AE68u);
    ctx->pc = 0x1D1AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE60u;
    // 0x1d1ae64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1AE60u, 0x1D1AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE68u;
label_1d1ae68:
    // 0x1d1ae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae6c: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1AE6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AE74u);
    ctx->pc = 0x1D1AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE6Cu;
    // 0x1d1ae70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1AE6Cu, 0x1D1AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE74u;
label_1d1ae74:
    // 0x1d1ae74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1ae78: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1AE78u;
    SET_GPR_U32(ctx, 31, 0x1D1AE80u);
    ctx->pc = 0x1D1AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE78u;
    // 0x1d1ae7c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1AE78u, 0x1D1AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE80u;
label_1d1ae80:
    // 0x1d1ae80: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d1ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d1ae84: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d1ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d1ae88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d1ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1ae8c: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D1AE8Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AE94u);
    ctx->pc = 0x1D1AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE8Cu;
    // 0x1d1ae90: 0x240500e7  addiu       $a1, $zero, 0xE7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D1AE8Cu, 0x1D1AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE94u;
label_1d1ae94:
    // 0x1d1ae94: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1ae94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ae98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1ae98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1ae9c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d1ae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d1aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1aea4: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1AEA4u;
    SET_GPR_U32(ctx, 31, 0x1D1AEACu);
    ctx->pc = 0x1D1AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AEA4u;
    // 0x1d1aea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1AEA4u, 0x1D1AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AEACu;
label_1d1aeac:
    // 0x1d1aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1aeb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1aeb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1aeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1aeb8: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x1d1aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1d1aebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1aec0: 0x8746422  j           func_1D19088
    ctx->pc = 0x1D1AEC0u;
    ctx->pc = 0x1D1AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AEC0u;
    // 0x1d1aec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19088u;
    sub_01D19088_0x1d19088(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1AEC8u;
}
