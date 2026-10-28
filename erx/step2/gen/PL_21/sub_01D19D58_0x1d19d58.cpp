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

// Function: sub_01D19D58
// Address: 0x1d19d58 - 0x1d19e38
void sub_01D19D58_0x1d19d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19D58_0x1d19d58");
#endif

    switch (ctx->pc) {
        case 0x1d19d6cu: goto label_1d19d6c;
        case 0x1d19d80u: goto label_1d19d80;
        case 0x1d19d84u: goto label_1d19d84;
        case 0x1d19da0u: goto label_1d19da0;
        case 0x1d19dacu: goto label_1d19dac;
        case 0x1d19ddcu: goto label_1d19ddc;
        case 0x1d19e08u: goto label_1d19e08;
        case 0x1d19e14u: goto label_1d19e14;
        default: break;
    }

    ctx->pc = 0x1d19d58u;

    // 0x1d19d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19d60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19d64: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D19D64u;
    SET_GPR_U32(ctx, 31, 0x1D19D6Cu);
    ctx->pc = 0x1D19D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19D64u;
    // 0x1d19d68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D19D64u, 0x1D19D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19D6Cu;
label_1d19d6c:
    // 0x1d19d6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d19d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19d70: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D19D70u;
    {
        const bool branch_taken_0x1d19d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D19D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19D70u;
        // 0x1d19d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19d70) {
            ctx->pc = 0x1D19D94u;
            goto label_1d19d94;
        }
    }
    ctx->pc = 0x1D19D78u;
    // 0x1d19d78: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D19D78u;
    SET_GPR_U32(ctx, 31, 0x1D19D80u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D19D78u, 0x1D19D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19D80u;
label_1d19d80:
    // 0x1d19d80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d19d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d19d84:
    // 0x1d19d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d19d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19D8Cu;
        // 0x1d19d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19D94u;
label_1d19d94:
    // 0x1d19d94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d19d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d19d98: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19D98u;
    SET_GPR_U32(ctx, 31, 0x1D19DA0u);
    ctx->pc = 0x1D19D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19D98u;
    // 0x1d19d9c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19D98u, 0x1D19DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19DA0u;
label_1d19da0:
    // 0x1d19da0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d19da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d19da4: 0xc746428  jal         func_1D190A0
    ctx->pc = 0x1D19DA4u;
    SET_GPR_U32(ctx, 31, 0x1D19DACu);
    ctx->pc = 0x1D19DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19DA4u;
    // 0x1d19da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190A0u, 0x1D19DA4u, 0x1D19DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19DACu;
label_1d19dac:
    // 0x1d19dac: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D19DACu;
    {
        const bool branch_taken_0x1d19dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19DACu;
        // 0x1d19db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19dac) {
            ctx->pc = 0x1D19D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19d84;
        }
    }
    ctx->pc = 0x1D19DB4u;
    // 0x1d19db4: 0x0  nop
    ctx->pc = 0x1d19db4u;
    // NOP
    // 0x1d19db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d19db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d19dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d19dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d19dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d19dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d19dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19dcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d19dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19dd0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d19dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d19dd4: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19DD4u;
    SET_GPR_U32(ctx, 31, 0x1D19DDCu);
    ctx->pc = 0x1D19DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19DD4u;
    // 0x1d19dd8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19DD4u, 0x1D19DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19DDCu;
label_1d19ddc:
    // 0x1d19ddc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d19ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d19de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19de4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d19de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d19de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19dec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d19decu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d19df0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d19df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19df4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d19df4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d19df8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d19df8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19dfc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d19dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d19e00: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D19E00u;
    SET_GPR_U32(ctx, 31, 0x1D19E08u);
    ctx->pc = 0x1D19E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19E00u;
    // 0x1d19e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D19E00u, 0x1D19E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19E08u;
label_1d19e08:
    // 0x1d19e08: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d19e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d19e0c: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D19E14u);
    ctx->pc = 0x1D19E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19E0Cu;
    // 0x1d19e10: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19E0Cu, 0x1D19E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19E14u;
label_1d19e14:
    // 0x1d19e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d19e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d19e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19e20: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d19e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d19e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d19e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19e28: 0x874642a  j           func_1D190A8
    ctx->pc = 0x1D19E28u;
    ctx->pc = 0x1D19E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19E28u;
    // 0x1d19e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A8u;
    sub_01D190A8_0x1d190a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D19E30u;
    // 0x1d19e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19E38u;
}
