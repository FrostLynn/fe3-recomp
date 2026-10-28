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

// Function: sub_01DCD868
// Address: 0x1dcd868 - 0x1dcd870
void sub_01DCD868_0x1dcd868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCD868_0x1dcd868");
#endif

    ctx->pc = 0x1dcd868u;

    // 0x1dcd868: 0x80a9b1c  j           func_2A6C70
    ctx->pc = 0x1DCD868u;
    ctx->pc = 0x2A6C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C70u, 0x1DCD868u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCD870u;
}
