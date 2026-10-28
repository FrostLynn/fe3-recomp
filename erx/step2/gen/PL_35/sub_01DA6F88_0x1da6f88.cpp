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

// Function: sub_01DA6F88
// Address: 0x1da6f88 - 0x1da6f90
void sub_01DA6F88_0x1da6f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA6F88_0x1da6f88");
#endif

    ctx->pc = 0x1da6f88u;

    // 0x1da6f88: 0x80b0ece  j           func_2C3B38
    ctx->pc = 0x1DA6F88u;
    ctx->pc = 0x2C3B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B38u, 0x1DA6F88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA6F90u;
}
