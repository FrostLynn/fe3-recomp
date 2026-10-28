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

// Function: sub_01DD9CD0
// Address: 0x1dd9cd0 - 0x1dd9ce8
void sub_01DD9CD0_0x1dd9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9CD0_0x1dd9cd0");
#endif

    ctx->pc = 0x1dd9cd0u;

    // 0x1dd9cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9CD8u;
    // 0x1dd9cd8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9cdc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd9cdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9CE0u;
        // 0x1dd9ce4: 0xa1ee0428  sb          $t6, 0x428($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9CE8u;
}
