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

// Function: sub_01CFDD40
// Address: 0x1cfdd40 - 0x1cfdd48
void sub_01CFDD40_0x1cfdd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD40_0x1cfdd40");
#endif

    ctx->pc = 0x1cfdd40u;

    // 0x1cfdd40: 0x809c834  j           func_2720D0
    ctx->pc = 0x1CFDD40u;
    ctx->pc = 0x2720D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2720D0u, 0x1CFDD40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDD48u;
}
