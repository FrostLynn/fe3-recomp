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

// Function: sub_01D0C658
// Address: 0x1d0c658 - 0x1d0c660
void sub_01D0C658_0x1d0c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C658_0x1d0c658");
#endif

    ctx->pc = 0x1d0c658u;

    // 0x1d0c658: 0x80b2898  j           func_2CA260
    ctx->pc = 0x1D0C658u;
    ctx->pc = 0x2CA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA260u, 0x1D0C658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C660u;
}
