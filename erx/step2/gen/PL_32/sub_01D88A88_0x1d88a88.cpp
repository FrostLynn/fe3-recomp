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

// Function: sub_01D88A88
// Address: 0x1d88a88 - 0x1d88a90
void sub_01D88A88_0x1d88a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88A88_0x1d88a88");
#endif

    ctx->pc = 0x1d88a88u;

    // 0x1d88a88: 0x80b0eee  j           func_2C3BB8
    ctx->pc = 0x1D88A88u;
    ctx->pc = 0x2C3BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BB8u, 0x1D88A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88A90u;
}
