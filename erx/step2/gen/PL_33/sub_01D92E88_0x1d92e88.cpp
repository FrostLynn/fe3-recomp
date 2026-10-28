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

// Function: sub_01D92E88
// Address: 0x1d92e88 - 0x1d92e90
void sub_01D92E88_0x1d92e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92E88_0x1d92e88");
#endif

    ctx->pc = 0x1d92e88u;

    // 0x1d92e88: 0x80b1e10  j           func_2C7840
    ctx->pc = 0x1D92E88u;
    ctx->pc = 0x2C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7840u, 0x1D92E88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92E90u;
}
