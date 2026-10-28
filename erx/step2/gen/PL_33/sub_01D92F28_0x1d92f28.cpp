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

// Function: sub_01D92F28
// Address: 0x1d92f28 - 0x1d92f30
void sub_01D92F28_0x1d92f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92F28_0x1d92f28");
#endif

    ctx->pc = 0x1d92f28u;

    // 0x1d92f28: 0x80b2032  j           func_2C80C8
    ctx->pc = 0x1D92F28u;
    ctx->pc = 0x2C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C80C8u, 0x1D92F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92F30u;
}
