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

// Function: sub_01D19298
// Address: 0x1d19298 - 0x1d192a0
void sub_01D19298_0x1d19298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19298_0x1d19298");
#endif

    ctx->pc = 0x1d19298u;

    // 0x1d19298: 0x80b1c5a  j           func_2C7168
    ctx->pc = 0x1D19298u;
    ctx->pc = 0x2C7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7168u, 0x1D19298u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D192A0u;
}
