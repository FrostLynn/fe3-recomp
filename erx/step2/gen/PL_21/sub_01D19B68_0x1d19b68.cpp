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

// Function: sub_01D19B68
// Address: 0x1d19b68 - 0x1d19b78
void sub_01D19B68_0x1d19b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19B68_0x1d19b68");
#endif

    ctx->pc = 0x1d19b68u;

    // 0x1d19b68: 0x80b2f9a  j           func_2CBE68
    ctx->pc = 0x1D19B68u;
    ctx->pc = 0x2CBE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE68u, 0x1D19B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19B70u;
    // 0x1d19b70: 0x0  nop
    ctx->pc = 0x1d19b70u;
    // NOP
    // 0x1d19b74: 0x0  nop
    ctx->pc = 0x1d19b74u;
    // NOP
    ctx->pc = 0x1d19b78u;
}
