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

// Function: sub_01D5CE28
// Address: 0x1d5ce28 - 0x1d5ce30
void sub_01D5CE28_0x1d5ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CE28_0x1d5ce28");
#endif

    ctx->pc = 0x1d5ce28u;

    // 0x1d5ce28: 0x80b0dc4  j           func_2C3710
    ctx->pc = 0x1D5CE28u;
    ctx->pc = 0x2C3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3710u, 0x1D5CE28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CE30u;
}
