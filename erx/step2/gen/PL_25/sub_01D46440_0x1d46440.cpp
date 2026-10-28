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

// Function: sub_01D46440
// Address: 0x1d46440 - 0x1d46448
void sub_01D46440_0x1d46440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46440_0x1d46440");
#endif

    ctx->pc = 0x1d46440u;

    // 0x1d46440: 0x80b2086  j           func_2C8218
    ctx->pc = 0x1D46440u;
    ctx->pc = 0x2C8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8218u, 0x1D46440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46448u;
}
