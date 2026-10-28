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

// Function: sub_01D3C268
// Address: 0x1d3c268 - 0x1d3c270
void sub_01D3C268_0x1d3c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C268_0x1d3c268");
#endif

    ctx->pc = 0x1d3c268u;

    // 0x1d3c268: 0x80b1dea  j           func_2C77A8
    ctx->pc = 0x1D3C268u;
    ctx->pc = 0x2C77A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77A8u, 0x1D3C268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C270u;
}
