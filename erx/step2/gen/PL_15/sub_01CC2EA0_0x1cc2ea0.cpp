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

// Function: sub_01CC2EA0
// Address: 0x1cc2ea0 - 0x1cc2ea8
void sub_01CC2EA0_0x1cc2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2EA0_0x1cc2ea0");
#endif

    ctx->pc = 0x1cc2ea0u;

    // 0x1cc2ea0: 0x80b3276  j           func_2CC9D8
    ctx->pc = 0x1CC2EA0u;
    ctx->pc = 0x2CC9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9D8u, 0x1CC2EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2EA8u;
}
