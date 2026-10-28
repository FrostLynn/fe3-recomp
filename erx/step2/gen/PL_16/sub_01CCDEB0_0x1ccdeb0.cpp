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

// Function: sub_01CCDEB0
// Address: 0x1ccdeb0 - 0x1ccdeb8
void sub_01CCDEB0_0x1ccdeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDEB0_0x1ccdeb0");
#endif

    ctx->pc = 0x1ccdeb0u;

    // 0x1ccdeb0: 0x80b323a  j           func_2CC8E8
    ctx->pc = 0x1CCDEB0u;
    ctx->pc = 0x2CC8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC8E8u, 0x1CCDEB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCDEB8u;
}
