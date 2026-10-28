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

// Function: sub_01C76288
// Address: 0x1c76288 - 0x1c76290
void sub_01C76288_0x1c76288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76288_0x1c76288");
#endif

    ctx->pc = 0x1c76288u;

    // 0x1c76288: 0x80b0f9c  j           func_2C3E70
    ctx->pc = 0x1C76288u;
    ctx->pc = 0x2C3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E70u, 0x1C76288u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76290u;
}
