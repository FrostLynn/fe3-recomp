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

// Function: sub_01D3C020
// Address: 0x1d3c020 - 0x1d3c028
void sub_01D3C020_0x1d3c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C020_0x1d3c020");
#endif

    ctx->pc = 0x1d3c020u;

    // 0x1d3c020: 0x80b0d1c  j           func_2C3470
    ctx->pc = 0x1D3C020u;
    ctx->pc = 0x2C3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3470u, 0x1D3C020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C028u;
}
