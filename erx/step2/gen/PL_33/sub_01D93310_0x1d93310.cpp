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

// Function: sub_01D93310
// Address: 0x1d93310 - 0x1d93318
void sub_01D93310_0x1d93310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93310_0x1d93310");
#endif

    ctx->pc = 0x1d93310u;

    // 0x1d93310: 0x80b1a78  j           func_2C69E0
    ctx->pc = 0x1D93310u;
    ctx->pc = 0x2C69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C69E0u, 0x1D93310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D93318u;
}
