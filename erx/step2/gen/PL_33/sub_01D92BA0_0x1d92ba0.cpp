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

// Function: sub_01D92BA0
// Address: 0x1d92ba0 - 0x1d92ba8
void sub_01D92BA0_0x1d92ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92BA0_0x1d92ba0");
#endif

    ctx->pc = 0x1d92ba0u;

    // 0x1d92ba0: 0x80b165c  j           func_2C5970
    ctx->pc = 0x1D92BA0u;
    ctx->pc = 0x2C5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5970u, 0x1D92BA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92BA8u;
}
