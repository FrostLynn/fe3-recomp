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

// Function: sub_01C42DB8
// Address: 0x1c42db8 - 0x1c42dc0
void sub_01C42DB8_0x1c42db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42DB8_0x1c42db8");
#endif

    ctx->pc = 0x1c42db8u;

    // 0x1c42db8: 0x80b0f84  j           func_2C3E10
    ctx->pc = 0x1C42DB8u;
    ctx->pc = 0x2C3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E10u, 0x1C42DB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42DC0u;
}
