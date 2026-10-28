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

// Function: sub_01D70850
// Address: 0x1d70850 - 0x1d70858
void sub_01D70850_0x1d70850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70850_0x1d70850");
#endif

    ctx->pc = 0x1d70850u;

    // 0x1d70850: 0x80b25e2  j           func_2C9788
    ctx->pc = 0x1D70850u;
    ctx->pc = 0x2C9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9788u, 0x1D70850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70858u;
}
