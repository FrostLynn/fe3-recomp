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

// Function: sub_01D88D70
// Address: 0x1d88d70 - 0x1d88d78
void sub_01D88D70_0x1d88d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88D70_0x1d88d70");
#endif

    ctx->pc = 0x1d88d70u;

    // 0x1d88d70: 0x80b0fe8  j           func_2C3FA0
    ctx->pc = 0x1D88D70u;
    ctx->pc = 0x2C3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FA0u, 0x1D88D70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88D78u;
}
