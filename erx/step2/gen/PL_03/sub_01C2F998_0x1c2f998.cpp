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

// Function: sub_01C2F998
// Address: 0x1c2f998 - 0x1c2f9a0
void sub_01C2F998_0x1c2f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F998_0x1c2f998");
#endif

    ctx->pc = 0x1c2f998u;

    // 0x1c2f998: 0x80b1c68  j           func_2C71A0
    ctx->pc = 0x1C2F998u;
    ctx->pc = 0x2C71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71A0u, 0x1C2F998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F9A0u;
}
