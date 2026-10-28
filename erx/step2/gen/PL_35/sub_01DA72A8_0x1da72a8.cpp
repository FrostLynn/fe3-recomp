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

// Function: sub_01DA72A8
// Address: 0x1da72a8 - 0x1da72b0
void sub_01DA72A8_0x1da72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA72A8_0x1da72a8");
#endif

    ctx->pc = 0x1da72a8u;

    // 0x1da72a8: 0x80b1000  j           func_2C4000
    ctx->pc = 0x1DA72A8u;
    ctx->pc = 0x2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4000u, 0x1DA72A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA72B0u;
}
