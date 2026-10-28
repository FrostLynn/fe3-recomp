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

// Function: sub_01DA7800
// Address: 0x1da7800 - 0x1da7808
void sub_01DA7800_0x1da7800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7800_0x1da7800");
#endif

    ctx->pc = 0x1da7800u;

    // 0x1da7800: 0x80b0fa8  j           func_2C3EA0
    ctx->pc = 0x1DA7800u;
    ctx->pc = 0x2C3EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EA0u, 0x1DA7800u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7808u;
}
