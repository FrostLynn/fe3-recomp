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

// Function: sub_01D190F0
// Address: 0x1d190f0 - 0x1d190f8
void sub_01D190F0_0x1d190f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D190F0_0x1d190f0");
#endif

    ctx->pc = 0x1d190f0u;

    // 0x1d190f0: 0x80b0930  j           func_2C24C0
    ctx->pc = 0x1D190F0u;
    ctx->pc = 0x2C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24C0u, 0x1D190F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D190F8u;
}
