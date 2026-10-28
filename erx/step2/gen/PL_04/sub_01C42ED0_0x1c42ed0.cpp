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

// Function: sub_01C42ED0
// Address: 0x1c42ed0 - 0x1c42ed8
void sub_01C42ED0_0x1c42ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42ED0_0x1c42ed0");
#endif

    ctx->pc = 0x1c42ed0u;

    // 0x1c42ed0: 0x80b1462  j           func_2C5188
    ctx->pc = 0x1C42ED0u;
    ctx->pc = 0x2C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5188u, 0x1C42ED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42ED8u;
}
