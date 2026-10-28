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

// Function: sub_01DBBAE0
// Address: 0x1dbbae0 - 0x1dbbae8
void sub_01DBBAE0_0x1dbbae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBAE0_0x1dbbae0");
#endif

    ctx->pc = 0x1dbbae0u;

    // 0x1dbbae0: 0x80b0cd8  j           func_2C3360
    ctx->pc = 0x1DBBAE0u;
    ctx->pc = 0x2C3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3360u, 0x1DBBAE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBAE8u;
}
