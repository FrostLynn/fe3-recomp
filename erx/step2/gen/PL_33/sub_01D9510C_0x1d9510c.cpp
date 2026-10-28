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

// Function: sub_01D9510C
// Address: 0x1d9510c - 0x1d9511c
void sub_01D9510C_0x1d9510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9510C_0x1d9510c");
#endif

    ctx->pc = 0x1d9510cu;

    // 0x1d9510c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9510Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95114u;
    // 0x1d95114: 0x0  nop
    ctx->pc = 0x1d95114u;
    // NOP
    // 0x1d95118: 0x0  nop
    ctx->pc = 0x1d95118u;
    // NOP
    ctx->pc = 0x1d9511cu;
}
