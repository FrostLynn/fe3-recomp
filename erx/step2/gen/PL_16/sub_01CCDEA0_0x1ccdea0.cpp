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

// Function: sub_01CCDEA0
// Address: 0x1ccdea0 - 0x1ccdea8
void sub_01CCDEA0_0x1ccdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDEA0_0x1ccdea0");
#endif

    ctx->pc = 0x1ccdea0u;

    // 0x1ccdea0: 0x80b2a3a  j           func_2CA8E8
    ctx->pc = 0x1CCDEA0u;
    ctx->pc = 0x2CA8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8E8u, 0x1CCDEA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDEA8u;
}
