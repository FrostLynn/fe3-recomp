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

// Function: sub_01C00338
// Address: 0x1c00338 - 0x1c00340
void sub_01C00338_0x1c00338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00338_0x1c00338");
#endif

    ctx->pc = 0x1c00338u;

    // 0x1c00338: 0x80b1ce4  j           func_2C7390
    ctx->pc = 0x1C00338u;
    ctx->pc = 0x2C7390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7390u, 0x1C00338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00340u;
}
