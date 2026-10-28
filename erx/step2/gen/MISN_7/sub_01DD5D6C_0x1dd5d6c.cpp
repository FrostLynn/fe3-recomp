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

// Function: sub_01DD5D6C
// Address: 0x1dd5d6c - 0x1dd5d7c
void sub_01DD5D6C_0x1dd5d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5D6C_0x1dd5d6c");
#endif

    ctx->pc = 0x1dd5d6cu;

    // 0x1dd5d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5D74u;
    // 0x1dd5d74: 0x0  nop
    ctx->pc = 0x1dd5d74u;
    // NOP
    // 0x1dd5d78: 0x0  nop
    ctx->pc = 0x1dd5d78u;
    // NOP
    ctx->pc = 0x1dd5d7cu;
}
