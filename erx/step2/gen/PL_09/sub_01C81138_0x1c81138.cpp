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

// Function: sub_01C81138
// Address: 0x1c81138 - 0x1c81140
void sub_01C81138_0x1c81138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81138_0x1c81138");
#endif

    ctx->pc = 0x1c81138u;

    // 0x1c81138: 0x80b18d8  j           func_2C6360
    ctx->pc = 0x1C81138u;
    ctx->pc = 0x2C6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6360u, 0x1C81138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81140u;
}
