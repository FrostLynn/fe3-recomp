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

// Function: sub_01C1FB40
// Address: 0x1c1fb40 - 0x1c1fb48
void sub_01C1FB40_0x1c1fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FB40_0x1c1fb40");
#endif

    ctx->pc = 0x1c1fb40u;

    // 0x1c1fb40: 0x80b0f3c  j           func_2C3CF0
    ctx->pc = 0x1C1FB40u;
    ctx->pc = 0x2C3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF0u, 0x1C1FB40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FB48u;
}
