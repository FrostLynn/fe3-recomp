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

// Function: sub_01D3C130
// Address: 0x1d3c130 - 0x1d3c138
void sub_01D3C130_0x1d3c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C130_0x1d3c130");
#endif

    ctx->pc = 0x1d3c130u;

    // 0x1d3c130: 0x80b118a  j           func_2C4628
    ctx->pc = 0x1D3C130u;
    ctx->pc = 0x2C4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4628u, 0x1D3C130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C138u;
}
