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

// Function: sub_01C42D00
// Address: 0x1c42d00 - 0x1c42d08
void sub_01C42D00_0x1c42d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42D00_0x1c42d00");
#endif

    ctx->pc = 0x1c42d00u;

    // 0x1c42d00: 0x80b274c  j           func_2C9D30
    ctx->pc = 0x1C42D00u;
    ctx->pc = 0x2C9D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D30u, 0x1C42D00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42D08u;
}
