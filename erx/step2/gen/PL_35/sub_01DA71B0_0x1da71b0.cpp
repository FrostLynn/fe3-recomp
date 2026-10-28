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

// Function: sub_01DA71B0
// Address: 0x1da71b0 - 0x1da71b8
void sub_01DA71B0_0x1da71b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA71B0_0x1da71b0");
#endif

    ctx->pc = 0x1da71b0u;

    // 0x1da71b0: 0x80b165c  j           func_2C5970
    ctx->pc = 0x1DA71B0u;
    ctx->pc = 0x2C5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5970u, 0x1DA71B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA71B8u;
}
