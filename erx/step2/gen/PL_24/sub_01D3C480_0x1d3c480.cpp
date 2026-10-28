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

// Function: sub_01D3C480
// Address: 0x1d3c480 - 0x1d3c488
void sub_01D3C480_0x1d3c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C480_0x1d3c480");
#endif

    ctx->pc = 0x1d3c480u;

    // 0x1d3c480: 0x80b25c6  j           func_2C9718
    ctx->pc = 0x1D3C480u;
    ctx->pc = 0x2C9718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9718u, 0x1D3C480u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C488u;
}
