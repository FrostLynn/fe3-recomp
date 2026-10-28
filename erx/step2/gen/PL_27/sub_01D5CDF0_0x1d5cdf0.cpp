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

// Function: sub_01D5CDF0
// Address: 0x1d5cdf0 - 0x1d5cdf8
void sub_01D5CDF0_0x1d5cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CDF0_0x1d5cdf0");
#endif

    ctx->pc = 0x1d5cdf0u;

    // 0x1d5cdf0: 0x80b0b24  j           func_2C2C90
    ctx->pc = 0x1D5CDF0u;
    ctx->pc = 0x2C2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C90u, 0x1D5CDF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CDF8u;
}
