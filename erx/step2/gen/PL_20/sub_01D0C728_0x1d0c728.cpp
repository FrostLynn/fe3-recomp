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

// Function: sub_01D0C728
// Address: 0x1d0c728 - 0x1d0c730
void sub_01D0C728_0x1d0c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C728_0x1d0c728");
#endif

    ctx->pc = 0x1d0c728u;

    // 0x1d0c728: 0x80b0f3e  j           func_2C3CF8
    ctx->pc = 0x1D0C728u;
    ctx->pc = 0x2C3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF8u, 0x1D0C728u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C730u;
}
