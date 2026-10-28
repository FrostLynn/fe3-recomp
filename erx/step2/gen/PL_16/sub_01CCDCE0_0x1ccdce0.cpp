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

// Function: sub_01CCDCE0
// Address: 0x1ccdce0 - 0x1ccdce8
void sub_01CCDCE0_0x1ccdce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDCE0_0x1ccdce0");
#endif

    ctx->pc = 0x1ccdce0u;

    // 0x1ccdce0: 0x80b2730  j           func_2C9CC0
    ctx->pc = 0x1CCDCE0u;
    ctx->pc = 0x2C9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CC0u, 0x1CCDCE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDCE8u;
}
