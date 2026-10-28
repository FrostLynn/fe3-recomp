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

// Function: sub_01D77DE0
// Address: 0x1d77de0 - 0x1d77de8
void sub_01D77DE0_0x1d77de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77DE0_0x1d77de0");
#endif

    ctx->pc = 0x1d77de0u;

    // 0x1d77de0: 0x80b1620  j           func_2C5880
    ctx->pc = 0x1D77DE0u;
    ctx->pc = 0x2C5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5880u, 0x1D77DE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77DE8u;
}
