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

// Function: sub_01DC43A0
// Address: 0x1dc43a0 - 0x1dc43a8
void sub_01DC43A0_0x1dc43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC43A0_0x1dc43a0");
#endif

    ctx->pc = 0x1dc43a0u;

    // 0x1dc43a0: 0x80b0d6e  j           func_2C35B8
    ctx->pc = 0x1DC43A0u;
    ctx->pc = 0x2C35B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35B8u, 0x1DC43A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC43A8u;
}
