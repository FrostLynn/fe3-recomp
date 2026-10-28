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

// Function: sub_01D70150
// Address: 0x1d70150 - 0x1d70158
void sub_01D70150_0x1d70150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70150_0x1d70150");
#endif

    ctx->pc = 0x1d70150u;

    // 0x1d70150: 0x80b0f02  j           func_2C3C08
    ctx->pc = 0x1D70150u;
    ctx->pc = 0x2C3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C08u, 0x1D70150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70158u;
}
