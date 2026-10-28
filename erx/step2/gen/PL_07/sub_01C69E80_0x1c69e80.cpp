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

// Function: sub_01C69E80
// Address: 0x1c69e80 - 0x1c69e88
void sub_01C69E80_0x1c69e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C69E80_0x1c69e80");
#endif

    ctx->pc = 0x1c69e80u;

    // 0x1c69e80: 0x80b2bda  j           func_2CAF68
    ctx->pc = 0x1C69E80u;
    ctx->pc = 0x2CAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF68u, 0x1C69E80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C69E88u;
}
