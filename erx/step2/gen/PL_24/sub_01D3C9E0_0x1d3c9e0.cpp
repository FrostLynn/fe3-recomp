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

// Function: sub_01D3C9E0
// Address: 0x1d3c9e0 - 0x1d3cb08
void sub_01D3C9E0_0x1d3c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C9E0_0x1d3c9e0");
#endif

    switch (ctx->pc) {
        case 0x1d3ca08u: goto label_1d3ca08;
        case 0x1d3ca1cu: goto label_1d3ca1c;
        case 0x1d3ca20u: goto label_1d3ca20;
        case 0x1d3ca40u: goto label_1d3ca40;
        case 0x1d3ca50u: goto label_1d3ca50;
        case 0x1d3ca84u: goto label_1d3ca84;
        case 0x1d3cabcu: goto label_1d3cabc;
        case 0x1d3cac8u: goto label_1d3cac8;
        case 0x1d3cad8u: goto label_1d3cad8;
        case 0x1d3caf0u: goto label_1d3caf0;
        default: break;
    }

    ctx->pc = 0x1d3c9e0u;

    // 0x1d3c9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3c9e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3c9e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c9ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3c9f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3c9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3c9f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3c9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3ca00: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CA00u;
    SET_GPR_U32(ctx, 31, 0x1D3CA08u);
    ctx->pc = 0x1D3CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CA00u;
    // 0x1d3ca04: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CA00u, 0x1D3CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CA08u;
label_1d3ca08:
    // 0x1d3ca08: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d3ca08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d3ca0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3CA0Cu;
    {
        const bool branch_taken_0x1d3ca0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA0Cu;
        // 0x1d3ca10: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca0c) {
            ctx->pc = 0x1D3CA58u;
            goto label_1d3ca58;
        }
    }
    ctx->pc = 0x1D3CA14u;
    // 0x1d3ca14: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3CA14u;
    {
        const bool branch_taken_0x1d3ca14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d3ca14) {
            ctx->pc = 0x1D3CA38u;
            goto label_1d3ca38;
        }
    }
    ctx->pc = 0x1D3CA1Cu;
label_1d3ca1c:
    // 0x1d3ca1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3ca1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ca20:
    // 0x1d3ca20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3ca20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ca24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3ca24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3ca28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3ca28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3ca2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3ca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3ca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA30u;
        // 0x1d3ca34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CA38u;
label_1d3ca38:
    // 0x1d3ca38: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3CA38u;
    SET_GPR_U32(ctx, 31, 0x1D3CA40u);
    ctx->pc = 0x1D3CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CA38u;
    // 0x1d3ca3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3CA38u, 0x1D3CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CA40u;
label_1d3ca40:
    // 0x1d3ca40: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D3CA40u;
    {
        const bool branch_taken_0x1d3ca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D3CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA40u;
        // 0x1d3ca44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca40) {
            ctx->pc = 0x1D3CA1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ca1c;
        }
    }
    ctx->pc = 0x1D3CA48u;
    // 0x1d3ca48: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3CA48u;
    SET_GPR_U32(ctx, 31, 0x1D3CA50u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3CA48u, 0x1D3CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CA50u;
label_1d3ca50:
    // 0x1d3ca50: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3CA50u;
    {
        const bool branch_taken_0x1d3ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA50u;
        // 0x1d3ca54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca50) {
            ctx->pc = 0x1D3CA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ca20;
        }
    }
    ctx->pc = 0x1D3CA58u;
label_1d3ca58:
    // 0x1d3ca58: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d3ca58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d3ca5c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3CA5Cu;
    {
        const bool branch_taken_0x1d3ca5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA5Cu;
        // 0x1d3ca60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca5c) {
            ctx->pc = 0x1D3CA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ca20;
        }
    }
    ctx->pc = 0x1D3CA64u;
    // 0x1d3ca64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d3ca64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3ca70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3ca74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ca78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3ca78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ca7c: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3CA7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3CA84u);
    ctx->pc = 0x1D3CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CA7Cu;
    // 0x1d3ca80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3CA7Cu, 0x1D3CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CA84u;
label_1d3ca84:
    // 0x1d3ca84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3ca84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ca88: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D3CA88u;
    {
        const bool branch_taken_0x1d3ca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA88u;
        // 0x1d3ca8c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca88) {
            ctx->pc = 0x1D3CA1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ca1c;
        }
    }
    ctx->pc = 0x1D3CA90u;
    // 0x1d3ca90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3ca94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3ca98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3ca9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3ca9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3caa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3caa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3caa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3caa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3caa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3caac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3caacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3cab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3cab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cab4: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3CAB4u;
    SET_GPR_U32(ctx, 31, 0x1D3CABCu);
    ctx->pc = 0x1D3CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CAB4u;
    // 0x1d3cab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3CAB4u, 0x1D3CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CABCu;
label_1d3cabc:
    // 0x1d3cabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3cabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cac0: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3CAC0u;
    SET_GPR_U32(ctx, 31, 0x1D3CAC8u);
    ctx->pc = 0x1D3CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CAC0u;
    // 0x1d3cac4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3CAC0u, 0x1D3CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CAC8u;
label_1d3cac8:
    // 0x1d3cac8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3cacc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3caccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3cad0: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CAD0u;
    SET_GPR_U32(ctx, 31, 0x1D3CAD8u);
    ctx->pc = 0x1D3CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CAD0u;
    // 0x1d3cad4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CAD0u, 0x1D3CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CAD8u;
label_1d3cad8:
    // 0x1d3cad8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3cad8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3cadc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d3cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d3cae0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d3cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d3cae4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3cae8: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CAE8u;
    SET_GPR_U32(ctx, 31, 0x1D3CAF0u);
    ctx->pc = 0x1D3CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CAE8u;
    // 0x1d3caec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CAE8u, 0x1D3CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CAF0u;
label_1d3caf0:
    // 0x1d3caf0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d3caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d3caf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3caf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3caf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3caf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3cafc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CAFCu;
        // 0x1d3cb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CB04u;
    // 0x1d3cb04: 0x0  nop
    ctx->pc = 0x1d3cb04u;
    // NOP
    ctx->pc = 0x1d3cb08u;
}
