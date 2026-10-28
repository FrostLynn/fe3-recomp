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

// Function: sub_01D92B50
// Address: 0x1d92b50 - 0x1d92b58
void sub_01D92B50_0x1d92b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92B50_0x1d92b50");
#endif

    ctx->pc = 0x1d92b50u;

    // 0x1d92b50: 0x80b1d80  j           func_2C7600
    ctx->pc = 0x1D92B50u;
    ctx->pc = 0x2C7600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7600u, 0x1D92B50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92B58u;
}
