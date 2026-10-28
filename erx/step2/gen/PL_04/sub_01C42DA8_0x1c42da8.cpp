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

// Function: sub_01C42DA8
// Address: 0x1c42da8 - 0x1c42db0
void sub_01C42DA8_0x1c42da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42DA8_0x1c42da8");
#endif

    ctx->pc = 0x1c42da8u;

    // 0x1c42da8: 0x80b294c  j           func_2CA530
    ctx->pc = 0x1C42DA8u;
    ctx->pc = 0x2CA530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA530u, 0x1C42DA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42DB0u;
}
