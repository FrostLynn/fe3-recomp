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

// Function: sub_01D89318
// Address: 0x1d89318 - 0x1d89320
void sub_01D89318_0x1d89318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89318_0x1d89318");
#endif

    ctx->pc = 0x1d89318u;

    // 0x1d89318: 0x80b0f3c  j           func_2C3CF0
    ctx->pc = 0x1D89318u;
    ctx->pc = 0x2C3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF0u, 0x1D89318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D89320u;
}
