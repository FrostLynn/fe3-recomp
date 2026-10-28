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

// Function: sub_01DD9630
// Address: 0x1dd9630 - 0x1dd9638
void sub_01DD9630_0x1dd9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9630_0x1dd9630");
#endif

    ctx->pc = 0x1dd9630u;

    // 0x1dd9630: 0x80a96c2  j           func_2A5B08
    ctx->pc = 0x1DD9630u;
    ctx->pc = 0x2A5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B08u, 0x1DD9630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD9638u;
}
