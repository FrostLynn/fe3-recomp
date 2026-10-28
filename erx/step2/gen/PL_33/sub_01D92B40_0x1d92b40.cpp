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

// Function: sub_01D92B40
// Address: 0x1d92b40 - 0x1d92b48
void sub_01D92B40_0x1d92b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92B40_0x1d92b40");
#endif

    ctx->pc = 0x1d92b40u;

    // 0x1d92b40: 0x80b1d54  j           func_2C7550
    ctx->pc = 0x1D92B40u;
    ctx->pc = 0x2C7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7550u, 0x1D92B40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92B48u;
}
