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

// Function: sub_01C76188
// Address: 0x1c76188 - 0x1c76190
void sub_01C76188_0x1c76188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76188_0x1c76188");
#endif

    ctx->pc = 0x1c76188u;

    // 0x1c76188: 0x80b26d8  j           func_2C9B60
    ctx->pc = 0x1C76188u;
    ctx->pc = 0x2C9B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B60u, 0x1C76188u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76190u;
}
