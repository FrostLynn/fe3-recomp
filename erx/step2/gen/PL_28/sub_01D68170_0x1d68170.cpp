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

// Function: sub_01D68170
// Address: 0x1d68170 - 0x1d6817c
void sub_01D68170_0x1d68170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D68170_0x1d68170");
#endif

    ctx->pc = 0x1d68170u;

    // 0x1d68170: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d68170u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d68174: 0x3e00008  jr          $ra
    ctx->pc = 0x1D68174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68174u;
        // 0x1d68178: 0x25e2e230  addiu       $v0, $t7, -0x1DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D68174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6817Cu;
}
