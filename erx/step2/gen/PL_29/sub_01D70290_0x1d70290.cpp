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

// Function: sub_01D70290
// Address: 0x1d70290 - 0x1d70298
void sub_01D70290_0x1d70290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70290_0x1d70290");
#endif

    ctx->pc = 0x1d70290u;

    // 0x1d70290: 0x80b1ad2  j           func_2C6B48
    ctx->pc = 0x1D70290u;
    ctx->pc = 0x2C6B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B48u, 0x1D70290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70298u;
}
