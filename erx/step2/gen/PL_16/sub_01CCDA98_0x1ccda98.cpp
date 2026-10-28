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

// Function: sub_01CCDA98
// Address: 0x1ccda98 - 0x1ccdaa0
void sub_01CCDA98_0x1ccda98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDA98_0x1ccda98");
#endif

    ctx->pc = 0x1ccda98u;

    // 0x1ccda98: 0x80b1e8a  j           func_2C7A28
    ctx->pc = 0x1CCDA98u;
    ctx->pc = 0x2C7A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A28u, 0x1CCDA98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDAA0u;
}
