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

// Function: sub_01D92BB8
// Address: 0x1d92bb8 - 0x1d92bc0
void sub_01D92BB8_0x1d92bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92BB8_0x1d92bb8");
#endif

    ctx->pc = 0x1d92bb8u;

    // 0x1d92bb8: 0x80b16c2  j           func_2C5B08
    ctx->pc = 0x1D92BB8u;
    ctx->pc = 0x2C5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B08u, 0x1D92BB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92BC0u;
}
