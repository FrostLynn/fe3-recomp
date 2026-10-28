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

// Function: sub_01D33BF0
// Address: 0x1d33bf0 - 0x1d33bf8
void sub_01D33BF0_0x1d33bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33BF0_0x1d33bf0");
#endif

    ctx->pc = 0x1d33bf0u;

    // 0x1d33bf0: 0x80b1f5e  j           func_2C7D78
    ctx->pc = 0x1D33BF0u;
    ctx->pc = 0x2C7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D78u, 0x1D33BF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33BF8u;
}
