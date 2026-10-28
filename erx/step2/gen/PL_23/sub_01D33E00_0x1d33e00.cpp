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

// Function: sub_01D33E00
// Address: 0x1d33e00 - 0x1d33e08
void sub_01D33E00_0x1d33e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33E00_0x1d33e00");
#endif

    ctx->pc = 0x1d33e00u;

    // 0x1d33e00: 0x80b2762  j           func_2C9D88
    ctx->pc = 0x1D33E00u;
    ctx->pc = 0x2C9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D88u, 0x1D33E00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33E08u;
}
