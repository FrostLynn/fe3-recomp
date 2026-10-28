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

// Function: sub_01D5D310
// Address: 0x1d5d310 - 0x1d5d318
void sub_01D5D310_0x1d5d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D310_0x1d5d310");
#endif

    ctx->pc = 0x1d5d310u;

    // 0x1d5d310: 0x80b1558  j           func_2C5560
    ctx->pc = 0x1D5D310u;
    ctx->pc = 0x2C5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5560u, 0x1D5D310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D318u;
}
