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

// Function: sub_01D705C0
// Address: 0x1d705c0 - 0x1d705c8
void sub_01D705C0_0x1d705c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D705C0_0x1d705c0");
#endif

    ctx->pc = 0x1d705c0u;

    // 0x1d705c0: 0x80b1482  j           func_2C5208
    ctx->pc = 0x1D705C0u;
    ctx->pc = 0x2C5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5208u, 0x1D705C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D705C8u;
}
