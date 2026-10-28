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

// Function: sub_01C42920
// Address: 0x1c42920 - 0x1c42928
void sub_01C42920_0x1c42920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42920_0x1c42920");
#endif

    ctx->pc = 0x1c42920u;

    // 0x1c42920: 0x80b1150  j           func_2C4540
    ctx->pc = 0x1C42920u;
    ctx->pc = 0x2C4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4540u, 0x1C42920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42928u;
}
