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

// Function: sub_01D92818
// Address: 0x1d92818 - 0x1d92820
void sub_01D92818_0x1d92818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92818_0x1d92818");
#endif

    ctx->pc = 0x1d92818u;

    // 0x1d92818: 0x80d97d4  j           func_365F50
    ctx->pc = 0x1D92818u;
    ctx->pc = 0x365F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F50u, 0x1D92818u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D92820u;
}
