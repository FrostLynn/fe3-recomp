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

// Function: sub_01CB6988
// Address: 0x1cb6988 - 0x1cb6990
void sub_01CB6988_0x1cb6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6988_0x1cb6988");
#endif

    ctx->pc = 0x1cb6988u;

    // 0x1cb6988: 0x80b1c5a  j           func_2C7168
    ctx->pc = 0x1CB6988u;
    ctx->pc = 0x2C7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7168u, 0x1CB6988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6990u;
}
