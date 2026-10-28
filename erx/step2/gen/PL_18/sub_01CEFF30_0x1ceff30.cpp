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

// Function: sub_01CEFF30
// Address: 0x1ceff30 - 0x1ceff38
void sub_01CEFF30_0x1ceff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFF30_0x1ceff30");
#endif

    ctx->pc = 0x1ceff30u;

    // 0x1ceff30: 0x80b0f3c  j           func_2C3CF0
    ctx->pc = 0x1CEFF30u;
    ctx->pc = 0x2C3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF0u, 0x1CEFF30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFF38u;
}
