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

// Function: sub_01D19470
// Address: 0x1d19470 - 0x1d19478
void sub_01D19470_0x1d19470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19470_0x1d19470");
#endif

    ctx->pc = 0x1d19470u;

    // 0x1d19470: 0x80b0fc2  j           func_2C3F08
    ctx->pc = 0x1D19470u;
    ctx->pc = 0x2C3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F08u, 0x1D19470u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19478u;
}
