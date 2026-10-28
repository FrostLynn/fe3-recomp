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

// Function: sub_01C5FD78
// Address: 0x1c5fd78 - 0x1c5fd80
void sub_01C5FD78_0x1c5fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5FD78_0x1c5fd78");
#endif

    ctx->pc = 0x1c5fd78u;

    // 0x1c5fd78: 0x80b25b8  j           func_2C96E0
    ctx->pc = 0x1C5FD78u;
    ctx->pc = 0x2C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C96E0u, 0x1C5FD78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5FD80u;
}
