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

// Function: sub_01C5332C
// Address: 0x1c5332c - 0x1c53338
void sub_01C5332C_0x1c5332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5332C_0x1c5332c");
#endif

    ctx->pc = 0x1c5332cu;

    // 0x1c5332c: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c5332cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c53330: 0x3e00008  jr          $ra
    ctx->pc = 0x1C53330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C53334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53330u;
        // 0x1c53334: 0x25e2d978  addiu       $v0, $t7, -0x2688 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C53330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C53338u;
}
