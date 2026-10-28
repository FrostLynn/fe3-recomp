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

// Function: sub_01D26FD0
// Address: 0x1d26fd0 - 0x1d26fd8
void sub_01D26FD0_0x1d26fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26FD0_0x1d26fd0");
#endif

    ctx->pc = 0x1d26fd0u;

    // 0x1d26fd0: 0x80b16c4  j           func_2C5B10
    ctx->pc = 0x1D26FD0u;
    ctx->pc = 0x2C5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B10u, 0x1D26FD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26FD8u;
}
