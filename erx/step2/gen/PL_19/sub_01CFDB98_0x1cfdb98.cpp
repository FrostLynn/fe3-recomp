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

// Function: sub_01CFDB98
// Address: 0x1cfdb98 - 0x1cfdba0
void sub_01CFDB98_0x1cfdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDB98_0x1cfdb98");
#endif

    ctx->pc = 0x1cfdb98u;

    // 0x1cfdb98: 0x80b2922  j           func_2CA488
    ctx->pc = 0x1CFDB98u;
    ctx->pc = 0x2CA488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA488u, 0x1CFDB98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDBA0u;
}
