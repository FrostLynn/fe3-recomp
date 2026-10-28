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

// Function: sub_01CEFDB8
// Address: 0x1cefdb8 - 0x1cefdc0
void sub_01CEFDB8_0x1cefdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFDB8_0x1cefdb8");
#endif

    ctx->pc = 0x1cefdb8u;

    // 0x1cefdb8: 0x80b2610  j           func_2C9840
    ctx->pc = 0x1CEFDB8u;
    ctx->pc = 0x2C9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9840u, 0x1CEFDB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFDC0u;
}
