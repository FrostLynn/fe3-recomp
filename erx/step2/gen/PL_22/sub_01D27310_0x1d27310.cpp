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

// Function: sub_01D27310
// Address: 0x1d27310 - 0x1d27318
void sub_01D27310_0x1d27310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27310_0x1d27310");
#endif

    ctx->pc = 0x1d27310u;

    // 0x1d27310: 0x80b1fac  j           func_2C7EB0
    ctx->pc = 0x1D27310u;
    ctx->pc = 0x2C7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EB0u, 0x1D27310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27318u;
}
