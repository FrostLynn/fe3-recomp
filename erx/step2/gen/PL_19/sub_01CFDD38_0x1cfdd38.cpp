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

// Function: sub_01CFDD38
// Address: 0x1cfdd38 - 0x1cfdd40
void sub_01CFDD38_0x1cfdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD38_0x1cfdd38");
#endif

    ctx->pc = 0x1cfdd38u;

    // 0x1cfdd38: 0x80b2ecc  j           func_2CBB30
    ctx->pc = 0x1CFDD38u;
    ctx->pc = 0x2CBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB30u, 0x1CFDD38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDD40u;
}
