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

// Function: sub_01D78040
// Address: 0x1d78040 - 0x1d78048
void sub_01D78040_0x1d78040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78040_0x1d78040");
#endif

    ctx->pc = 0x1d78040u;

    // 0x1d78040: 0x80b2284  j           func_2C8A10
    ctx->pc = 0x1D78040u;
    ctx->pc = 0x2C8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A10u, 0x1D78040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D78048u;
}
