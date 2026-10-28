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

// Function: sub_01CB9454
// Address: 0x1cb9454 - 0x1cb9464
void sub_01CB9454_0x1cb9454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9454_0x1cb9454");
#endif

    ctx->pc = 0x1cb9454u;

    // 0x1cb9454: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB945Cu;
    // 0x1cb945c: 0x0  nop
    ctx->pc = 0x1cb945cu;
    // NOP
    // 0x1cb9460: 0x0  nop
    ctx->pc = 0x1cb9460u;
    // NOP
    ctx->pc = 0x1cb9464u;
}
