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

// Function: sub_01DBBCE8
// Address: 0x1dbbce8 - 0x1dbbcf0
void sub_01DBBCE8_0x1dbbce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBCE8_0x1dbbce8");
#endif

    ctx->pc = 0x1dbbce8u;

    // 0x1dbbce8: 0x80a964a  j           func_2A5928
    ctx->pc = 0x1DBBCE8u;
    ctx->pc = 0x2A5928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5928u, 0x1DBBCE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBCF0u;
}
