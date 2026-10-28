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

// Function: sub_01D3BF10
// Address: 0x1d3bf10 - 0x1d3bf18
void sub_01D3BF10_0x1d3bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3BF10_0x1d3bf10");
#endif

    ctx->pc = 0x1d3bf10u;

    // 0x1d3bf10: 0x80b1cce  j           func_2C7338
    ctx->pc = 0x1D3BF10u;
    ctx->pc = 0x2C7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7338u, 0x1D3BF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3BF18u;
}
