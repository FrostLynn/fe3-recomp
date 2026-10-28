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

// Function: sub_01C81168
// Address: 0x1c81168 - 0x1c81170
void sub_01C81168_0x1c81168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81168_0x1c81168");
#endif

    ctx->pc = 0x1c81168u;

    // 0x1c81168: 0x80b1be0  j           func_2C6F80
    ctx->pc = 0x1C81168u;
    ctx->pc = 0x2C6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F80u, 0x1C81168u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81170u;
}
