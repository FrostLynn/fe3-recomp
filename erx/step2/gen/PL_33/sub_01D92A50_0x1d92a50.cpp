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

// Function: sub_01D92A50
// Address: 0x1d92a50 - 0x1d92a58
void sub_01D92A50_0x1d92a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92A50_0x1d92a50");
#endif

    ctx->pc = 0x1d92a50u;

    // 0x1d92a50: 0x80b1928  j           func_2C64A0
    ctx->pc = 0x1D92A50u;
    ctx->pc = 0x2C64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64A0u, 0x1D92A50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92A58u;
}
