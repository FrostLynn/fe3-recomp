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

// Function: sub_01DCA338
// Address: 0x1dca338 - 0x1dca340
void sub_01DCA338_0x1dca338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA338_0x1dca338");
#endif

    ctx->pc = 0x1dca338u;

    // 0x1dca338: 0x80a96c2  j           func_2A5B08
    ctx->pc = 0x1DCA338u;
    ctx->pc = 0x2A5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B08u, 0x1DCA338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCA340u;
}
