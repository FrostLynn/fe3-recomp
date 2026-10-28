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

// Function: sub_01D92B28
// Address: 0x1d92b28 - 0x1d92b30
void sub_01D92B28_0x1d92b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92B28_0x1d92b28");
#endif

    ctx->pc = 0x1d92b28u;

    // 0x1d92b28: 0x80b1cde  j           func_2C7378
    ctx->pc = 0x1D92B28u;
    ctx->pc = 0x2C7378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7378u, 0x1D92B28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92B30u;
}
