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

// Function: sub_01DB3854
// Address: 0x1db3854 - 0x1db3864
void sub_01DB3854_0x1db3854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3854_0x1db3854");
#endif

    ctx->pc = 0x1db3854u;

    // 0x1db3854: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB385Cu;
    // 0x1db385c: 0x0  nop
    ctx->pc = 0x1db385cu;
    // NOP
    // 0x1db3860: 0x0  nop
    ctx->pc = 0x1db3860u;
    // NOP
    ctx->pc = 0x1db3864u;
}
