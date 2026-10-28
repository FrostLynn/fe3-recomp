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

// Function: sub_01CEFD10
// Address: 0x1cefd10 - 0x1cefd18
void sub_01CEFD10_0x1cefd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFD10_0x1cefd10");
#endif

    ctx->pc = 0x1cefd10u;

    // 0x1cefd10: 0x80b245a  j           func_2C9168
    ctx->pc = 0x1CEFD10u;
    ctx->pc = 0x2C9168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9168u, 0x1CEFD10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFD18u;
}
