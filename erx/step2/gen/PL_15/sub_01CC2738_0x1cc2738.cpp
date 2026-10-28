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

// Function: sub_01CC2738
// Address: 0x1cc2738 - 0x1cc2740
void sub_01CC2738_0x1cc2738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2738_0x1cc2738");
#endif

    ctx->pc = 0x1cc2738u;

    // 0x1cc2738: 0x80b1d6a  j           func_2C75A8
    ctx->pc = 0x1CC2738u;
    ctx->pc = 0x2C75A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C75A8u, 0x1CC2738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2740u;
}
