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

// Function: sub_01D33748
// Address: 0x1d33748 - 0x1d33750
void sub_01D33748_0x1d33748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33748_0x1d33748");
#endif

    ctx->pc = 0x1d33748u;

    // 0x1d33748: 0x80b1928  j           func_2C64A0
    ctx->pc = 0x1D33748u;
    ctx->pc = 0x2C64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64A0u, 0x1D33748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33750u;
}
