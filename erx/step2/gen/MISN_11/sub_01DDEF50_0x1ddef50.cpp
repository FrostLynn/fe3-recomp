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

// Function: sub_01DDEF50
// Address: 0x1ddef50 - 0x1ddef58
void sub_01DDEF50_0x1ddef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDEF50_0x1ddef50");
#endif

    ctx->pc = 0x1ddef50u;

    // 0x1ddef50: 0x808b692  j           func_22DA48
    ctx->pc = 0x1DDEF50u;
    ctx->pc = 0x22DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DA48u, 0x1DDEF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DDEF58u;
}
