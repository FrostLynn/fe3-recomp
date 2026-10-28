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

// Function: sub_01CCDE20
// Address: 0x1ccde20 - 0x1ccde28
void sub_01CCDE20_0x1ccde20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDE20_0x1ccde20");
#endif

    ctx->pc = 0x1ccde20u;

    // 0x1ccde20: 0x80b0f3e  j           func_2C3CF8
    ctx->pc = 0x1CCDE20u;
    ctx->pc = 0x2C3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF8u, 0x1CCDE20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDE28u;
}
