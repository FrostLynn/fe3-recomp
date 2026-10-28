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

// Function: sub_01CC2BB0
// Address: 0x1cc2bb0 - 0x1cc2bb8
void sub_01CC2BB0_0x1cc2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2BB0_0x1cc2bb0");
#endif

    ctx->pc = 0x1cc2bb0u;

    // 0x1cc2bb0: 0x80b22b0  j           func_2C8AC0
    ctx->pc = 0x1CC2BB0u;
    ctx->pc = 0x2C8AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AC0u, 0x1CC2BB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2BB8u;
}
