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

// Function: sub_01DE0730
// Address: 0x1de0730 - 0x1de0738
void sub_01DE0730_0x1de0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0730_0x1de0730");
#endif

    ctx->pc = 0x1de0730u;

    // 0x1de0730: 0x80a96c2  j           func_2A5B08
    ctx->pc = 0x1DE0730u;
    ctx->pc = 0x2A5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B08u, 0x1DE0730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE0738u;
}
