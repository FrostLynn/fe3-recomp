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

// Function: sub_01D5D110
// Address: 0x1d5d110 - 0x1d5d118
void sub_01D5D110_0x1d5d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D110_0x1d5d110");
#endif

    ctx->pc = 0x1d5d110u;

    // 0x1d5d110: 0x80b0d1c  j           func_2C3470
    ctx->pc = 0x1D5D110u;
    ctx->pc = 0x2C3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3470u, 0x1D5D110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D118u;
}
