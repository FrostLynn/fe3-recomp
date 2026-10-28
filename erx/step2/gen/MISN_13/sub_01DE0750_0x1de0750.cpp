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

// Function: sub_01DE0750
// Address: 0x1de0750 - 0x1de0758
void sub_01DE0750_0x1de0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0750_0x1de0750");
#endif

    ctx->pc = 0x1de0750u;

    // 0x1de0750: 0x80a6472  j           func_2991C8
    ctx->pc = 0x1DE0750u;
    ctx->pc = 0x2991C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991C8u, 0x1DE0750u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE0758u;
}
