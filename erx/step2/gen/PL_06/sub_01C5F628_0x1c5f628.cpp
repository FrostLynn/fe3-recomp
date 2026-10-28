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

// Function: sub_01C5F628
// Address: 0x1c5f628 - 0x1c5f630
void sub_01C5F628_0x1c5f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F628_0x1c5f628");
#endif

    ctx->pc = 0x1c5f628u;

    // 0x1c5f628: 0x80b0b7c  j           func_2C2DF0
    ctx->pc = 0x1C5F628u;
    ctx->pc = 0x2C2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2DF0u, 0x1C5F628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F630u;
}
