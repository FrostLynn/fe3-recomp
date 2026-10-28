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

// Function: sub_01C4FA90
// Address: 0x1c4fa90 - 0x1c4fa98
void sub_01C4FA90_0x1c4fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FA90_0x1c4fa90");
#endif

    ctx->pc = 0x1c4fa90u;

    // 0x1c4fa90: 0x80b0ec2  j           func_2C3B08
    ctx->pc = 0x1C4FA90u;
    ctx->pc = 0x2C3B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B08u, 0x1C4FA90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FA98u;
}
