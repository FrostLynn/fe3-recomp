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

// Function: sub_01C42D88
// Address: 0x1c42d88 - 0x1c42d90
void sub_01C42D88_0x1c42d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42D88_0x1c42d88");
#endif

    ctx->pc = 0x1c42d88u;

    // 0x1c42d88: 0x80b28ce  j           func_2CA338
    ctx->pc = 0x1C42D88u;
    ctx->pc = 0x2CA338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA338u, 0x1C42D88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42D90u;
}
