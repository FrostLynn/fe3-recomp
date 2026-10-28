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

// Function: sub_01C42D50
// Address: 0x1c42d50 - 0x1c42d58
void sub_01C42D50_0x1c42d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42D50_0x1c42d50");
#endif

    ctx->pc = 0x1c42d50u;

    // 0x1c42d50: 0x80b2874  j           func_2CA1D0
    ctx->pc = 0x1C42D50u;
    ctx->pc = 0x2CA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA1D0u, 0x1C42D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42D58u;
}
