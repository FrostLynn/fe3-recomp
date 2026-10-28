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

// Function: sub_01CEFE28
// Address: 0x1cefe28 - 0x1cefe30
void sub_01CEFE28_0x1cefe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFE28_0x1cefe28");
#endif

    ctx->pc = 0x1cefe28u;

    // 0x1cefe28: 0x80b27a8  j           func_2C9EA0
    ctx->pc = 0x1CEFE28u;
    ctx->pc = 0x2C9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EA0u, 0x1CEFE28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFE30u;
}
