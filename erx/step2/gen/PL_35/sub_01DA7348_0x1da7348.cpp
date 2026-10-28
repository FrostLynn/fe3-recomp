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

// Function: sub_01DA7348
// Address: 0x1da7348 - 0x1da7350
void sub_01DA7348_0x1da7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7348_0x1da7348");
#endif

    ctx->pc = 0x1da7348u;

    // 0x1da7348: 0x80b118a  j           func_2C4628
    ctx->pc = 0x1DA7348u;
    ctx->pc = 0x2C4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4628u, 0x1DA7348u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7350u;
}
