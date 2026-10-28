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

// Function: sub_01D0C440
// Address: 0x1d0c440 - 0x1d0c448
void sub_01D0C440_0x1d0c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C440_0x1d0c440");
#endif

    ctx->pc = 0x1d0c440u;

    // 0x1d0c440: 0x80b205a  j           func_2C8168
    ctx->pc = 0x1D0C440u;
    ctx->pc = 0x2C8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8168u, 0x1D0C440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C448u;
}
