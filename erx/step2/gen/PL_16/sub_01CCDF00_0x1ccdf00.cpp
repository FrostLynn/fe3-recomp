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

// Function: sub_01CCDF00
// Address: 0x1ccdf00 - 0x1ccdf08
void sub_01CCDF00_0x1ccdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDF00_0x1ccdf00");
#endif

    ctx->pc = 0x1ccdf00u;

    // 0x1ccdf00: 0x80b32a2  j           func_2CCA88
    ctx->pc = 0x1CCDF00u;
    ctx->pc = 0x2CCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCA88u, 0x1CCDF00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDF08u;
}
