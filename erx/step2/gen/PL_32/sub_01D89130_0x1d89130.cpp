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

// Function: sub_01D89130
// Address: 0x1d89130 - 0x1d89138
void sub_01D89130_0x1d89130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89130_0x1d89130");
#endif

    ctx->pc = 0x1d89130u;

    // 0x1d89130: 0x80b24d0  j           func_2C9340
    ctx->pc = 0x1D89130u;
    ctx->pc = 0x2C9340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9340u, 0x1D89130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D89138u;
}
