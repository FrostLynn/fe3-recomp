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

// Function: sub_01DA7448
// Address: 0x1da7448 - 0x1da7450
void sub_01DA7448_0x1da7448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7448_0x1da7448");
#endif

    ctx->pc = 0x1da7448u;

    // 0x1da7448: 0x80b152e  j           func_2C54B8
    ctx->pc = 0x1DA7448u;
    ctx->pc = 0x2C54B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54B8u, 0x1DA7448u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7450u;
}
