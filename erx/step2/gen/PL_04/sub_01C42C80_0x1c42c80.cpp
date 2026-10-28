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

// Function: sub_01C42C80
// Address: 0x1c42c80 - 0x1c42c88
void sub_01C42C80_0x1c42c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42C80_0x1c42c80");
#endif

    ctx->pc = 0x1c42c80u;

    // 0x1c42c80: 0x80b2556  j           func_2C9558
    ctx->pc = 0x1C42C80u;
    ctx->pc = 0x2C9558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9558u, 0x1C42C80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42C88u;
}
