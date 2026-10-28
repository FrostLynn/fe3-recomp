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

// Function: sub_01DBBCC0
// Address: 0x1dbbcc0 - 0x1dbbcc8
void sub_01DBBCC0_0x1dbbcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBCC0_0x1dbbcc0");
#endif

    ctx->pc = 0x1dbbcc0u;

    // 0x1dbbcc0: 0x80b2bd0  j           func_2CAF40
    ctx->pc = 0x1DBBCC0u;
    ctx->pc = 0x2CAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF40u, 0x1DBBCC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBCC8u;
}
