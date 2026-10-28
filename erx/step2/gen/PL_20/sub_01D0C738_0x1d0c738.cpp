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

// Function: sub_01D0C738
// Address: 0x1d0c738 - 0x1d0c740
void sub_01D0C738_0x1d0c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C738_0x1d0c738");
#endif

    ctx->pc = 0x1d0c738u;

    // 0x1d0c738: 0x80b294e  j           func_2CA538
    ctx->pc = 0x1D0C738u;
    ctx->pc = 0x2CA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA538u, 0x1D0C738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C740u;
}
