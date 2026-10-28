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

// Function: sub_01D519F0
// Address: 0x1d519f0 - 0x1d519f8
void sub_01D519F0_0x1d519f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D519F0_0x1d519f0");
#endif

    ctx->pc = 0x1d519f0u;

    // 0x1d519f0: 0x80b1a62  j           func_2C6988
    ctx->pc = 0x1D519F0u;
    ctx->pc = 0x2C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6988u, 0x1D519F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D519F8u;
}
