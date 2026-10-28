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

// Function: sub_01D0BD78
// Address: 0x1d0bd78 - 0x1d0bd80
void sub_01D0BD78_0x1d0bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BD78_0x1d0bd78");
#endif

    ctx->pc = 0x1d0bd78u;

    // 0x1d0bd78: 0x80b2bda  j           func_2CAF68
    ctx->pc = 0x1D0BD78u;
    ctx->pc = 0x2CAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF68u, 0x1D0BD78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BD80u;
}
