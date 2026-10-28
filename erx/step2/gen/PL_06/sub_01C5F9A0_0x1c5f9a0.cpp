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

// Function: sub_01C5F9A0
// Address: 0x1c5f9a0 - 0x1c5f9a8
void sub_01C5F9A0_0x1c5f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F9A0_0x1c5f9a0");
#endif

    ctx->pc = 0x1c5f9a0u;

    // 0x1c5f9a0: 0x80b1024  j           func_2C4090
    ctx->pc = 0x1C5F9A0u;
    ctx->pc = 0x2C4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4090u, 0x1C5F9A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F9A8u;
}
