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

// Function: sub_01D485E4
// Address: 0x1d485e4 - 0x1d485f8
void sub_01D485E4_0x1d485e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D485E4_0x1d485e4");
#endif

    switch (ctx->pc) {
        case 0x1d485f0u: goto label_1d485f0;
        default: break;
    }

    ctx->pc = 0x1d485e4u;

    // 0x1d485e4: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d485e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d485e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D485E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D485ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D485E8u;
        // 0x1d485ec: 0x25e2fed0  addiu       $v0, $t7, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D485E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D485F0u;
label_1d485f0:
    // 0x1d485f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D485F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D485F0u;
        // 0x1d485f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D485F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D485F8u;
}
