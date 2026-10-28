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

// Function: sub_01D89230
// Address: 0x1d89230 - 0x1d89238
void sub_01D89230_0x1d89230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89230_0x1d89230");
#endif

    ctx->pc = 0x1d89230u;

    // 0x1d89230: 0x80b2826  j           func_2CA098
    ctx->pc = 0x1D89230u;
    ctx->pc = 0x2CA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA098u, 0x1D89230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D89238u;
}
