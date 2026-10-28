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

// Function: sub_01C4FBF8
// Address: 0x1c4fbf8 - 0x1c4fc00
void sub_01C4FBF8_0x1c4fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FBF8_0x1c4fbf8");
#endif

    ctx->pc = 0x1c4fbf8u;

    // 0x1c4fbf8: 0x80b1abc  j           func_2C6AF0
    ctx->pc = 0x1C4FBF8u;
    ctx->pc = 0x2C6AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6AF0u, 0x1C4FBF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FC00u;
}
