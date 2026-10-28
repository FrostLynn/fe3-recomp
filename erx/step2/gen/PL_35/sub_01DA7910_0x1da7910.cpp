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

// Function: sub_01DA7910
// Address: 0x1da7910 - 0x1da7918
void sub_01DA7910_0x1da7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7910_0x1da7910");
#endif

    ctx->pc = 0x1da7910u;

    // 0x1da7910: 0x80b1aa6  j           func_2C6A98
    ctx->pc = 0x1DA7910u;
    ctx->pc = 0x2C6A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6A98u, 0x1DA7910u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7918u;
}
