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

// Function: sub_01D3C120
// Address: 0x1d3c120 - 0x1d3c128
void sub_01D3C120_0x1d3c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C120_0x1d3c120");
#endif

    ctx->pc = 0x1d3c120u;

    // 0x1d3c120: 0x80b1164  j           func_2C4590
    ctx->pc = 0x1D3C120u;
    ctx->pc = 0x2C4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4590u, 0x1D3C120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C128u;
}
