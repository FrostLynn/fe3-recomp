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

// Function: sub_01D77C48
// Address: 0x1d77c48 - 0x1d77c50
void sub_01D77C48_0x1d77c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77C48_0x1d77c48");
#endif

    ctx->pc = 0x1d77c48u;

    // 0x1d77c48: 0x80b0b9e  j           func_2C2E78
    ctx->pc = 0x1D77C48u;
    ctx->pc = 0x2C2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E78u, 0x1D77C48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77C50u;
}
