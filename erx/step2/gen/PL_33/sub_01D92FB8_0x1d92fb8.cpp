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

// Function: sub_01D92FB8
// Address: 0x1d92fb8 - 0x1d92fc0
void sub_01D92FB8_0x1d92fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92FB8_0x1d92fb8");
#endif

    ctx->pc = 0x1d92fb8u;

    // 0x1d92fb8: 0x80b2296  j           func_2C8A58
    ctx->pc = 0x1D92FB8u;
    ctx->pc = 0x2C8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A58u, 0x1D92FB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92FC0u;
}
