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

// Function: sub_01CB7200
// Address: 0x1cb7200 - 0x1cb7208
void sub_01CB7200_0x1cb7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7200_0x1cb7200");
#endif

    ctx->pc = 0x1cb7200u;

    // 0x1cb7200: 0x80b1a78  j           func_2C69E0
    ctx->pc = 0x1CB7200u;
    ctx->pc = 0x2C69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C69E0u, 0x1CB7200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7208u;
}
