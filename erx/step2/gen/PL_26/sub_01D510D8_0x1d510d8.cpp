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

// Function: sub_01D510D8
// Address: 0x1d510d8 - 0x1d510e0
void sub_01D510D8_0x1d510d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D510D8_0x1d510d8");
#endif

    ctx->pc = 0x1d510d8u;

    // 0x1d510d8: 0x80b0c56  j           func_2C3158
    ctx->pc = 0x1D510D8u;
    ctx->pc = 0x2C3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3158u, 0x1D510D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D510E0u;
}
