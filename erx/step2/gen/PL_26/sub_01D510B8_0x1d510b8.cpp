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

// Function: sub_01D510B8
// Address: 0x1d510b8 - 0x1d510c0
void sub_01D510B8_0x1d510b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D510B8_0x1d510b8");
#endif

    ctx->pc = 0x1d510b8u;

    // 0x1d510b8: 0x80b0bb0  j           func_2C2EC0
    ctx->pc = 0x1D510B8u;
    ctx->pc = 0x2C2EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2EC0u, 0x1D510B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D510C0u;
}
