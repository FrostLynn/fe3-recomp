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

// Function: sub_01C50230
// Address: 0x1c50230 - 0x1c50238
void sub_01C50230_0x1c50230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50230_0x1c50230");
#endif

    ctx->pc = 0x1c50230u;

    // 0x1c50230: 0x80b27bc  j           func_2C9EF0
    ctx->pc = 0x1C50230u;
    ctx->pc = 0x2C9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EF0u, 0x1C50230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50238u;
}
