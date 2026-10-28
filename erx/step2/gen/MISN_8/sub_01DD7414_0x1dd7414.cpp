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

// Function: sub_01DD7414
// Address: 0x1dd7414 - 0x1dd7424
void sub_01DD7414_0x1dd7414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7414_0x1dd7414");
#endif

    ctx->pc = 0x1dd7414u;

    // 0x1dd7414: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD741Cu;
    // 0x1dd741c: 0x0  nop
    ctx->pc = 0x1dd741cu;
    // NOP
    // 0x1dd7420: 0x0  nop
    ctx->pc = 0x1dd7420u;
    // NOP
    ctx->pc = 0x1dd7424u;
}
