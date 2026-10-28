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

// Function: sub_01C8D778
// Address: 0x1c8d778 - 0x1c8d780
void sub_01C8D778_0x1c8d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D778_0x1c8d778");
#endif

    ctx->pc = 0x1c8d778u;

    // 0x1c8d778: 0x80b25b8  j           func_2C96E0
    ctx->pc = 0x1C8D778u;
    ctx->pc = 0x2C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C96E0u, 0x1C8D778u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D780u;
}
