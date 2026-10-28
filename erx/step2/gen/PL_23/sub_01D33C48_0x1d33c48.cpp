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

// Function: sub_01D33C48
// Address: 0x1d33c48 - 0x1d33c50
void sub_01D33C48_0x1d33c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33C48_0x1d33c48");
#endif

    ctx->pc = 0x1d33c48u;

    // 0x1d33c48: 0x80b2066  j           func_2C8198
    ctx->pc = 0x1D33C48u;
    ctx->pc = 0x2C8198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8198u, 0x1D33C48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33C50u;
}
