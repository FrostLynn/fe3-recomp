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

// Function: sub_01D0C6C0
// Address: 0x1d0c6c0 - 0x1d0c6c8
void sub_01D0C6C0_0x1d0c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C6C0_0x1d0c6c0");
#endif

    ctx->pc = 0x1d0c6c0u;

    // 0x1d0c6c0: 0x80b0f9c  j           func_2C3E70
    ctx->pc = 0x1D0C6C0u;
    ctx->pc = 0x2C3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E70u, 0x1D0C6C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C6C8u;
}
