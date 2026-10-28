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

// Function: sub_01C5FFB8
// Address: 0x1c5ffb8 - 0x1c5ffc0
void sub_01C5FFB8_0x1c5ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5FFB8_0x1c5ffb8");
#endif

    ctx->pc = 0x1c5ffb8u;

    // 0x1c5ffb8: 0x80b2a46  j           func_2CA918
    ctx->pc = 0x1C5FFB8u;
    ctx->pc = 0x2CA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA918u, 0x1C5FFB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5FFC0u;
}
