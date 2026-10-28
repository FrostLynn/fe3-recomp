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

// Function: sub_01D19128
// Address: 0x1d19128 - 0x1d19130
void sub_01D19128_0x1d19128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19128_0x1d19128");
#endif

    ctx->pc = 0x1d19128u;

    // 0x1d19128: 0x80b0b56  j           func_2C2D58
    ctx->pc = 0x1D19128u;
    ctx->pc = 0x2C2D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D58u, 0x1D19128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19130u;
}
