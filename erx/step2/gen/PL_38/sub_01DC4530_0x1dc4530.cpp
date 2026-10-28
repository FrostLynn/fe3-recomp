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

// Function: sub_01DC4530
// Address: 0x1dc4530 - 0x1dc4538
void sub_01DC4530_0x1dc4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4530_0x1dc4530");
#endif

    ctx->pc = 0x1dc4530u;

    // 0x1dc4530: 0x80b2bc4  j           func_2CAF10
    ctx->pc = 0x1DC4530u;
    ctx->pc = 0x2CAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF10u, 0x1DC4530u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4538u;
}
