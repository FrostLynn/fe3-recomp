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

// Function: sub_01D5D380
// Address: 0x1d5d380 - 0x1d5d388
void sub_01D5D380_0x1d5d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D380_0x1d5d380");
#endif

    ctx->pc = 0x1d5d380u;

    // 0x1d5d380: 0x80b1f00  j           func_2C7C00
    ctx->pc = 0x1D5D380u;
    ctx->pc = 0x2C7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C00u, 0x1D5D380u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D388u;
}
