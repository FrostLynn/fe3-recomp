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

// Function: sub_01D19020
// Address: 0x1d19020 - 0x1d19028
void sub_01D19020_0x1d19020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19020_0x1d19020");
#endif

    ctx->pc = 0x1d19020u;

    // 0x1d19020: 0x80d97c2  j           func_365F08
    ctx->pc = 0x1D19020u;
    ctx->pc = 0x365F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F08u, 0x1D19020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19028u;
}
