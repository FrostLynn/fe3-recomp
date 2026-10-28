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

// Function: sub_01DBBAC8
// Address: 0x1dbbac8 - 0x1dbbad0
void sub_01DBBAC8_0x1dbbac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBAC8_0x1dbbac8");
#endif

    ctx->pc = 0x1dbbac8u;

    // 0x1dbbac8: 0x80b0cac  j           func_2C32B0
    ctx->pc = 0x1DBBAC8u;
    ctx->pc = 0x2C32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32B0u, 0x1DBBAC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBAD0u;
}
