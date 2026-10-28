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

// Function: sub_01DA7290
// Address: 0x1da7290 - 0x1da7298
void sub_01DA7290_0x1da7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7290_0x1da7290");
#endif

    ctx->pc = 0x1da7290u;

    // 0x1da7290: 0x80b0fea  j           func_2C3FA8
    ctx->pc = 0x1DA7290u;
    ctx->pc = 0x2C3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FA8u, 0x1DA7290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7298u;
}
