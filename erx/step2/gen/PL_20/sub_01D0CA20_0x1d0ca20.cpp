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

// Function: sub_01D0CA20
// Address: 0x1d0ca20 - 0x1d0cb00
void sub_01D0CA20_0x1d0ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CA20_0x1d0ca20");
#endif

    switch (ctx->pc) {
        case 0x1d0ca34u: goto label_1d0ca34;
        case 0x1d0ca48u: goto label_1d0ca48;
        case 0x1d0ca4cu: goto label_1d0ca4c;
        case 0x1d0ca68u: goto label_1d0ca68;
        case 0x1d0ca74u: goto label_1d0ca74;
        case 0x1d0caa4u: goto label_1d0caa4;
        case 0x1d0cad0u: goto label_1d0cad0;
        case 0x1d0cadcu: goto label_1d0cadc;
        default: break;
    }

    ctx->pc = 0x1d0ca20u;

    // 0x1d0ca20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0ca24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0ca28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0ca2c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0CA2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0CA34u);
    ctx->pc = 0x1D0CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CA2Cu;
    // 0x1d0ca30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0CA2Cu, 0x1D0CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CA34u;
label_1d0ca34:
    // 0x1d0ca34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0ca34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ca38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0CA38u;
    {
        const bool branch_taken_0x1d0ca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA38u;
        // 0x1d0ca3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca38) {
            ctx->pc = 0x1D0CA5Cu;
            goto label_1d0ca5c;
        }
    }
    ctx->pc = 0x1D0CA40u;
    // 0x1d0ca40: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0CA40u;
    SET_GPR_U32(ctx, 31, 0x1D0CA48u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0CA40u, 0x1D0CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CA48u;
label_1d0ca48:
    // 0x1d0ca48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0ca4c:
    // 0x1d0ca4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0ca4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ca50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0ca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ca54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA54u;
        // 0x1d0ca58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CA5Cu;
label_1d0ca5c:
    // 0x1d0ca5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0ca60: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CA60u;
    SET_GPR_U32(ctx, 31, 0x1D0CA68u);
    ctx->pc = 0x1D0CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CA60u;
    // 0x1d0ca64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CA60u, 0x1D0CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CA68u;
label_1d0ca68:
    // 0x1d0ca68: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d0ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d0ca6c: 0xc742f64  jal         func_1D0BD90
    ctx->pc = 0x1D0CA6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0CA74u);
    ctx->pc = 0x1D0CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CA6Cu;
    // 0x1d0ca70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD90u, 0x1D0CA6Cu, 0x1D0CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CA74u;
label_1d0ca74:
    // 0x1d0ca74: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D0CA74u;
    {
        const bool branch_taken_0x1d0ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA74u;
        // 0x1d0ca78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca74) {
            ctx->pc = 0x1D0CA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ca4c;
        }
    }
    ctx->pc = 0x1D0CA7Cu;
    // 0x1d0ca7c: 0x0  nop
    ctx->pc = 0x1d0ca7cu;
    // NOP
    // 0x1d0ca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ca84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0ca88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0ca8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0ca90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0ca90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ca94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0ca94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ca98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0ca9c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CA9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0CAA4u);
    ctx->pc = 0x1D0CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CA9Cu;
    // 0x1d0caa0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CA9Cu, 0x1D0CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CAA4u;
label_1d0caa4:
    // 0x1d0caa4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d0caa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d0caa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0caac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0caacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0cab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cab4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0cab4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0cab8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0cab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cabc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d0cabcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d0cac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0cac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cac4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0cac8: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0CAC8u;
    SET_GPR_U32(ctx, 31, 0x1D0CAD0u);
    ctx->pc = 0x1D0CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CAC8u;
    // 0x1d0cacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0CAC8u, 0x1D0CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CAD0u;
label_1d0cad0:
    // 0x1d0cad0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0cad4: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CAD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CADCu);
    ctx->pc = 0x1D0CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CAD4u;
    // 0x1d0cad8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CAD4u, 0x1D0CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CADCu;
label_1d0cadc:
    // 0x1d0cadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0cadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0cae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0cae8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d0cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d0caec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0caecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0caf0: 0x8742f66  j           func_1D0BD98
    ctx->pc = 0x1D0CAF0u;
    ctx->pc = 0x1D0CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CAF0u;
    // 0x1d0caf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD98u;
    sub_01D0BD98_0x1d0bd98(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0CAF8u;
    // 0x1d0caf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CB00u;
}
