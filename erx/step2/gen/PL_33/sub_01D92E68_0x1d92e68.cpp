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

// Function: sub_01D92E68
// Address: 0x1d92e68 - 0x1d92e70
void sub_01D92E68_0x1d92e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92E68_0x1d92e68");
#endif

    ctx->pc = 0x1d92e68u;

    // 0x1d92e68: 0x80b1dd8  j           func_2C7760
    ctx->pc = 0x1D92E68u;
    ctx->pc = 0x2C7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7760u, 0x1D92E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92E70u;
}
