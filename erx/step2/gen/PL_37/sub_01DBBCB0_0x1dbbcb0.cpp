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

// Function: sub_01DBBCB0
// Address: 0x1dbbcb0 - 0x1dbbcb8
void sub_01DBBCB0_0x1dbbcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBCB0_0x1dbbcb0");
#endif

    ctx->pc = 0x1dbbcb0u;

    // 0x1dbbcb0: 0x80b2bc2  j           func_2CAF08
    ctx->pc = 0x1DBBCB0u;
    ctx->pc = 0x2CAF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF08u, 0x1DBBCB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBCB8u;
}
