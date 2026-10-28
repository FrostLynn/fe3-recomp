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

// Function: sub_01CEFAC0
// Address: 0x1cefac0 - 0x1cefac8
void sub_01CEFAC0_0x1cefac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFAC0_0x1cefac0");
#endif

    ctx->pc = 0x1cefac0u;

    // 0x1cefac0: 0x80b13b0  j           func_2C4EC0
    ctx->pc = 0x1CEFAC0u;
    ctx->pc = 0x2C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4EC0u, 0x1CEFAC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFAC8u;
}
