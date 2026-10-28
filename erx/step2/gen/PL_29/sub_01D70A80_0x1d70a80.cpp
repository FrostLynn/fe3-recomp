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

// Function: sub_01D70A80
// Address: 0x1d70a80 - 0x1d70a88
void sub_01D70A80_0x1d70a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70A80_0x1d70a80");
#endif

    ctx->pc = 0x1d70a80u;

    // 0x1d70a80: 0x80b2d66  j           func_2CB598
    ctx->pc = 0x1D70A80u;
    ctx->pc = 0x2CB598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB598u, 0x1D70A80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70A88u;
}
