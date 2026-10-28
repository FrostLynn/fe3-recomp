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

// Function: sub_01CEFD38
// Address: 0x1cefd38 - 0x1cefd40
void sub_01CEFD38_0x1cefd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFD38_0x1cefd38");
#endif

    ctx->pc = 0x1cefd38u;

    // 0x1cefd38: 0x80b2494  j           func_2C9250
    ctx->pc = 0x1CEFD38u;
    ctx->pc = 0x2C9250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9250u, 0x1CEFD38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFD40u;
}
