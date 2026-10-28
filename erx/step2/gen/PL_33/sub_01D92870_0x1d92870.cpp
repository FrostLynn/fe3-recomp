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

// Function: sub_01D92870
// Address: 0x1d92870 - 0x1d92878
void sub_01D92870_0x1d92870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92870_0x1d92870");
#endif

    ctx->pc = 0x1d92870u;

    // 0x1d92870: 0x80ad7e2  j           func_2B5F88
    ctx->pc = 0x1D92870u;
    ctx->pc = 0x2B5F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F88u, 0x1D92870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92878u;
}
