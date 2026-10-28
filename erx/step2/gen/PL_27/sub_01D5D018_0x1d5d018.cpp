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

// Function: sub_01D5D018
// Address: 0x1d5d018 - 0x1d5d020
void sub_01D5D018_0x1d5d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D018_0x1d5d018");
#endif

    ctx->pc = 0x1d5d018u;

    // 0x1d5d018: 0x80b1ce4  j           func_2C7390
    ctx->pc = 0x1D5D018u;
    ctx->pc = 0x2C7390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7390u, 0x1D5D018u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D020u;
}
