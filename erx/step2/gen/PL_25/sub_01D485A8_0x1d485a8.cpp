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

// Function: sub_01D485A8
// Address: 0x1d485a8 - 0x1d485b4
void sub_01D485A8_0x1d485a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D485A8_0x1d485a8");
#endif

    ctx->pc = 0x1d485a8u;

    // 0x1d485a8: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d485a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d485ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D485ACu;
        // 0x1d485b0: 0x25e2dd50  addiu       $v0, $t7, -0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D485ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D485B4u;
}
