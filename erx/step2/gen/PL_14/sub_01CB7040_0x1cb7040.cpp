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

// Function: sub_01CB7040
// Address: 0x1cb7040 - 0x1cb7048
void sub_01CB7040_0x1cb7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7040_0x1cb7040");
#endif

    ctx->pc = 0x1cb7040u;

    // 0x1cb7040: 0x80b2866  j           func_2CA198
    ctx->pc = 0x1CB7040u;
    ctx->pc = 0x2CA198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA198u, 0x1CB7040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7048u;
}
