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

// Function: sub_01D3C200
// Address: 0x1d3c200 - 0x1d3c208
void sub_01D3C200_0x1d3c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C200_0x1d3c200");
#endif

    ctx->pc = 0x1d3c200u;

    // 0x1d3c200: 0x80b1482  j           func_2C5208
    ctx->pc = 0x1D3C200u;
    ctx->pc = 0x2C5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5208u, 0x1D3C200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C208u;
}
