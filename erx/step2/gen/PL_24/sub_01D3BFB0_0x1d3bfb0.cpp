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

// Function: sub_01D3BFB0
// Address: 0x1d3bfb0 - 0x1d3bfb8
void sub_01D3BFB0_0x1d3bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3BFB0_0x1d3bfb0");
#endif

    ctx->pc = 0x1d3bfb0u;

    // 0x1d3bfb0: 0x80b16c2  j           func_2C5B08
    ctx->pc = 0x1D3BFB0u;
    ctx->pc = 0x2C5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B08u, 0x1D3BFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3BFB8u;
}
