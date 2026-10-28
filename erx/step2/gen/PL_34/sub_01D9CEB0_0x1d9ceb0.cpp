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

// Function: sub_01D9CEB0
// Address: 0x1d9ceb0 - 0x1d9ceb8
void sub_01D9CEB0_0x1d9ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CEB0_0x1d9ceb0");
#endif

    ctx->pc = 0x1d9ceb0u;

    // 0x1d9ceb0: 0x80b13b0  j           func_2C4EC0
    ctx->pc = 0x1D9CEB0u;
    ctx->pc = 0x2C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4EC0u, 0x1D9CEB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CEB8u;
}
