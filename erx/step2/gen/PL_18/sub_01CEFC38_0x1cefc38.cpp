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

// Function: sub_01CEFC38
// Address: 0x1cefc38 - 0x1cefc40
void sub_01CEFC38_0x1cefc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFC38_0x1cefc38");
#endif

    ctx->pc = 0x1cefc38u;

    // 0x1cefc38: 0x80b2032  j           func_2C80C8
    ctx->pc = 0x1CEFC38u;
    ctx->pc = 0x2C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C80C8u, 0x1CEFC38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFC40u;
}
