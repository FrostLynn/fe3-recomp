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

// Function: sub_01CCDCC0
// Address: 0x1ccdcc0 - 0x1ccdcc8
void sub_01CCDCC0_0x1ccdcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDCC0_0x1ccdcc0");
#endif

    ctx->pc = 0x1ccdcc0u;

    // 0x1ccdcc0: 0x80b2704  j           func_2C9C10
    ctx->pc = 0x1CCDCC0u;
    ctx->pc = 0x2C9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C10u, 0x1CCDCC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDCC8u;
}
