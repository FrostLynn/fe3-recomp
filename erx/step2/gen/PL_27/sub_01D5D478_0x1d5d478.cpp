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

// Function: sub_01D5D478
// Address: 0x1d5d478 - 0x1d5d480
void sub_01D5D478_0x1d5d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D478_0x1d5d478");
#endif

    ctx->pc = 0x1d5d478u;

    // 0x1d5d478: 0x80b22b0  j           func_2C8AC0
    ctx->pc = 0x1D5D478u;
    ctx->pc = 0x2C8AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AC0u, 0x1D5D478u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D480u;
}
