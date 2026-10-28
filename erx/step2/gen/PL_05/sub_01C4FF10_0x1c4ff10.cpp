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

// Function: sub_01C4FF10
// Address: 0x1c4ff10 - 0x1c4ff18
void sub_01C4FF10_0x1c4ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FF10_0x1c4ff10");
#endif

    ctx->pc = 0x1c4ff10u;

    // 0x1c4ff10: 0x80b1468  j           func_2C51A0
    ctx->pc = 0x1C4FF10u;
    ctx->pc = 0x2C51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51A0u, 0x1C4FF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FF18u;
}
