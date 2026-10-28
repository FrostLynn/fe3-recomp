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

// Function: sub_01D0C760
// Address: 0x1d0c760 - 0x1d0c768
void sub_01D0C760_0x1d0c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C760_0x1d0c760");
#endif

    ctx->pc = 0x1d0c760u;

    // 0x1d0c760: 0x80b29da  j           func_2CA768
    ctx->pc = 0x1D0C760u;
    ctx->pc = 0x2CA768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA768u, 0x1D0C760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C768u;
}
