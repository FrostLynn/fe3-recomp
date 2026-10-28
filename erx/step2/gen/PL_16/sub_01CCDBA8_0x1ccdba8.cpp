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

// Function: sub_01CCDBA8
// Address: 0x1ccdba8 - 0x1ccdbb0
void sub_01CCDBA8_0x1ccdba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDBA8_0x1ccdba8");
#endif

    ctx->pc = 0x1ccdba8u;

    // 0x1ccdba8: 0x80b2286  j           func_2C8A18
    ctx->pc = 0x1CCDBA8u;
    ctx->pc = 0x2C8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A18u, 0x1CCDBA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDBB0u;
}
