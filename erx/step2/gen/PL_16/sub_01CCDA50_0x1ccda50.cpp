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

// Function: sub_01CCDA50
// Address: 0x1ccda50 - 0x1ccda58
void sub_01CCDA50_0x1ccda50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDA50_0x1ccda50");
#endif

    ctx->pc = 0x1ccda50u;

    // 0x1ccda50: 0x80b1558  j           func_2C5560
    ctx->pc = 0x1CCDA50u;
    ctx->pc = 0x2C5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5560u, 0x1CCDA50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDA58u;
}
