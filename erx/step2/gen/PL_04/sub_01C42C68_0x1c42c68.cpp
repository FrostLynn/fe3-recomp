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

// Function: sub_01C42C68
// Address: 0x1c42c68 - 0x1c42c70
void sub_01C42C68_0x1c42c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42C68_0x1c42c68");
#endif

    ctx->pc = 0x1c42c68u;

    // 0x1c42c68: 0x80b2510  j           func_2C9440
    ctx->pc = 0x1C42C68u;
    ctx->pc = 0x2C9440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9440u, 0x1C42C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42C70u;
}
