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

// Function: sub_01DA7438
// Address: 0x1da7438 - 0x1da7440
void sub_01DA7438_0x1da7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7438_0x1da7438");
#endif

    ctx->pc = 0x1da7438u;

    // 0x1da7438: 0x80b151a  j           func_2C5468
    ctx->pc = 0x1DA7438u;
    ctx->pc = 0x2C5468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5468u, 0x1DA7438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7440u;
}
