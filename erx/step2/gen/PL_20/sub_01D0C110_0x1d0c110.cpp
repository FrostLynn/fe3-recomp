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

// Function: sub_01D0C110
// Address: 0x1d0c110 - 0x1d0c118
void sub_01D0C110_0x1d0c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C110_0x1d0c110");
#endif

    ctx->pc = 0x1d0c110u;

    // 0x1d0c110: 0x80b0cd4  j           func_2C3350
    ctx->pc = 0x1D0C110u;
    ctx->pc = 0x2C3350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3350u, 0x1D0C110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C118u;
}
