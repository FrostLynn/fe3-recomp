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

// Function: sub_01D67128
// Address: 0x1d67128 - 0x1d67130
void sub_01D67128_0x1d67128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67128_0x1d67128");
#endif

    ctx->pc = 0x1d67128u;

    // 0x1d67128: 0x80b2ada  j           func_2CAB68
    ctx->pc = 0x1D67128u;
    ctx->pc = 0x2CAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB68u, 0x1D67128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D67130u;
}
