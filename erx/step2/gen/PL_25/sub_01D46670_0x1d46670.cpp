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

// Function: sub_01D46670
// Address: 0x1d46670 - 0x1d46678
void sub_01D46670_0x1d46670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46670_0x1d46670");
#endif

    ctx->pc = 0x1d46670u;

    // 0x1d46670: 0x80b2922  j           func_2CA488
    ctx->pc = 0x1D46670u;
    ctx->pc = 0x2CA488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA488u, 0x1D46670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46678u;
}
