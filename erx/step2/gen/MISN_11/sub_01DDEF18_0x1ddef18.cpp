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

// Function: sub_01DDEF18
// Address: 0x1ddef18 - 0x1ddef20
void sub_01DDEF18_0x1ddef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDEF18_0x1ddef18");
#endif

    ctx->pc = 0x1ddef18u;

    // 0x1ddef18: 0x80a96b6  j           func_2A5AD8
    ctx->pc = 0x1DDEF18u;
    ctx->pc = 0x2A5AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AD8u, 0x1DDEF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DDEF20u;
}
