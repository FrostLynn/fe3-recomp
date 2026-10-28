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

// Function: sub_01D19110
// Address: 0x1d19110 - 0x1d19118
void sub_01D19110_0x1d19110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19110_0x1d19110");
#endif

    ctx->pc = 0x1d19110u;

    // 0x1d19110: 0x80b0b22  j           func_2C2C88
    ctx->pc = 0x1D19110u;
    ctx->pc = 0x2C2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C88u, 0x1D19110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19118u;
}
