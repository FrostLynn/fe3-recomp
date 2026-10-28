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

// Function: sub_01D7DDF0
// Address: 0x1d7ddf0 - 0x1d7ddf8
void sub_01D7DDF0_0x1d7ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DDF0_0x1d7ddf0");
#endif

    ctx->pc = 0x1d7ddf0u;

    // 0x1d7ddf0: 0x80b1f5e  j           func_2C7D78
    ctx->pc = 0x1D7DDF0u;
    ctx->pc = 0x2C7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D78u, 0x1D7DDF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DDF8u;
}
