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

// Function: sub_01CCDB20
// Address: 0x1ccdb20 - 0x1ccdb28
void sub_01CCDB20_0x1ccdb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDB20_0x1ccdb20");
#endif

    ctx->pc = 0x1ccdb20u;

    // 0x1ccdb20: 0x80b2032  j           func_2C80C8
    ctx->pc = 0x1CCDB20u;
    ctx->pc = 0x2C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C80C8u, 0x1CCDB20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDB28u;
}
