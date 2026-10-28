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

// Function: sub_01D1B990
// Address: 0x1d1b990 - 0x1d1b9e0
void sub_01D1B990_0x1d1b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B990_0x1d1b990");
#endif

    switch (ctx->pc) {
        case 0x1d1b9a4u: goto label_1d1b9a4;
        case 0x1d1b9b8u: goto label_1d1b9b8;
        case 0x1d1b9bcu: goto label_1d1b9bc;
        default: break;
    }

    ctx->pc = 0x1d1b990u;

    // 0x1d1b990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b99c: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B99Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B9A4u);
    ctx->pc = 0x1D1B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B99Cu;
    // 0x1d1b9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B99Cu, 0x1D1B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B9A4u;
label_1d1b9a4:
    // 0x1d1b9a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b9a8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1B9A8u;
    {
        const bool branch_taken_0x1d1b9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B9A8u;
        // 0x1d1b9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b9a8) {
            ctx->pc = 0x1D1B9CCu;
            goto label_1d1b9cc;
        }
    }
    ctx->pc = 0x1D1B9B0u;
    // 0x1d1b9b0: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B9B0u;
    SET_GPR_U32(ctx, 31, 0x1D1B9B8u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B9B0u, 0x1D1B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B9B8u;
label_1d1b9b8:
    // 0x1d1b9b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1b9bc:
    // 0x1d1b9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b9c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B9C4u;
        // 0x1d1b9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B9CCu;
label_1d1b9cc:
    // 0x1d1b9cc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1B9CCu;
    {
        const bool branch_taken_0x1d1b9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B9CCu;
        // 0x1d1b9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b9cc) {
            ctx->pc = 0x1D1B9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b9bc;
        }
    }
    ctx->pc = 0x1D1B9D4u;
    // 0x1d1b9d4: 0x0  nop
    ctx->pc = 0x1d1b9d4u;
    // NOP
    // 0x1d1b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B9E0u;
}
