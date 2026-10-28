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

// Function: sub_01CEFBD0
// Address: 0x1cefbd0 - 0x1cefbd8
void sub_01CEFBD0_0x1cefbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFBD0_0x1cefbd0");
#endif

    ctx->pc = 0x1cefbd0u;

    // 0x1cefbd0: 0x80b1ec0  j           func_2C7B00
    ctx->pc = 0x1CEFBD0u;
    ctx->pc = 0x2C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7B00u, 0x1CEFBD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFBD8u;
}
