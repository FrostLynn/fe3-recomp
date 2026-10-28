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

// Function: sub_01D19CB0
// Address: 0x1d19cb0 - 0x1d19d40
void sub_01D19CB0_0x1d19cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19CB0_0x1d19cb0");
#endif

    switch (ctx->pc) {
        case 0x1d19cc4u: goto label_1d19cc4;
        case 0x1d19cd8u: goto label_1d19cd8;
        case 0x1d19cdcu: goto label_1d19cdc;
        case 0x1d19d24u: goto label_1d19d24;
        default: break;
    }

    ctx->pc = 0x1d19cb0u;

    // 0x1d19cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19cbc: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D19CBCu;
    SET_GPR_U32(ctx, 31, 0x1D19CC4u);
    ctx->pc = 0x1D19CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19CBCu;
    // 0x1d19cc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D19CBCu, 0x1D19CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19CC4u;
label_1d19cc4:
    // 0x1d19cc4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d19cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19cc8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D19CC8u;
    {
        const bool branch_taken_0x1d19cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D19CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19CC8u;
        // 0x1d19ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19cc8) {
            ctx->pc = 0x1D19CECu;
            goto label_1d19cec;
        }
    }
    ctx->pc = 0x1D19CD0u;
    // 0x1d19cd0: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D19CD0u;
    SET_GPR_U32(ctx, 31, 0x1D19CD8u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D19CD0u, 0x1D19CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19CD8u;
label_1d19cd8:
    // 0x1d19cd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d19cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d19cdc:
    // 0x1d19cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19ce0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d19ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19CE4u;
        // 0x1d19ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19CECu;
label_1d19cec:
    // 0x1d19cec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D19CECu;
    {
        const bool branch_taken_0x1d19cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19CECu;
        // 0x1d19cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19cec) {
            ctx->pc = 0x1D19CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19cdc;
        }
    }
    ctx->pc = 0x1D19CF4u;
    // 0x1d19cf4: 0x0  nop
    ctx->pc = 0x1d19cf4u;
    // NOP
    // 0x1d19cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19d04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d19d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19d0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d19d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d19d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d18: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d19d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d19d1c: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D19D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D19D24u);
    ctx->pc = 0x1D19D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19D1Cu;
    // 0x1d19d20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D19D1Cu, 0x1D19D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19D24u;
label_1d19d24:
    // 0x1d19d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d19d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19d30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d19d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19d34: 0x874641e  j           func_1D19078
    ctx->pc = 0x1D19D34u;
    ctx->pc = 0x1D19D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19D34u;
    // 0x1d19d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    sub_01D19078_0x1d19078(rdram, ctx, runtime); return;
    ctx->pc = 0x1D19D3Cu;
    // 0x1d19d3c: 0x0  nop
    ctx->pc = 0x1d19d3cu;
    // NOP
    ctx->pc = 0x1d19d40u;
}
