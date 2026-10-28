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

// Function: sub_01D92A38
// Address: 0x1d92a38 - 0x1d92a40
void sub_01D92A38_0x1d92a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92A38_0x1d92a38");
#endif

    ctx->pc = 0x1d92a38u;

    // 0x1d92a38: 0x80b18d2  j           func_2C6348
    ctx->pc = 0x1D92A38u;
    ctx->pc = 0x2C6348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6348u, 0x1D92A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92A40u;
}
