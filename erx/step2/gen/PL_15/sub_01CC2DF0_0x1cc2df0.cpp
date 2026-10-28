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

// Function: sub_01CC2DF0
// Address: 0x1cc2df0 - 0x1cc2df8
void sub_01CC2DF0_0x1cc2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2DF0_0x1cc2df0");
#endif

    ctx->pc = 0x1cc2df0u;

    // 0x1cc2df0: 0x80b0fac  j           func_2C3EB0
    ctx->pc = 0x1CC2DF0u;
    ctx->pc = 0x2C3EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EB0u, 0x1CC2DF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2DF8u;
}
