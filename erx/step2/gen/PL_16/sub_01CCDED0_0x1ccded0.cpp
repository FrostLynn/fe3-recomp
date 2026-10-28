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

// Function: sub_01CCDED0
// Address: 0x1ccded0 - 0x1ccded8
void sub_01CCDED0_0x1ccded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDED0_0x1ccded0");
#endif

    ctx->pc = 0x1ccded0u;

    // 0x1ccded0: 0x80b1a16  j           func_2C6858
    ctx->pc = 0x1CCDED0u;
    ctx->pc = 0x2C6858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6858u, 0x1CCDED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDED8u;
}
