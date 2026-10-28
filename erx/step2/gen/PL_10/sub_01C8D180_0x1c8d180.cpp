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

// Function: sub_01C8D180
// Address: 0x1c8d180 - 0x1c8d188
void sub_01C8D180_0x1c8d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D180_0x1c8d180");
#endif

    ctx->pc = 0x1c8d180u;

    // 0x1c8d180: 0x80b1c5a  j           func_2C7168
    ctx->pc = 0x1C8D180u;
    ctx->pc = 0x2C7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7168u, 0x1C8D180u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D188u;
}
