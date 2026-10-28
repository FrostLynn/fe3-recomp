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

// Function: sub_01D9D150
// Address: 0x1d9d150 - 0x1d9d158
void sub_01D9D150_0x1d9d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D150_0x1d9d150");
#endif

    ctx->pc = 0x1d9d150u;

    // 0x1d9d150: 0x80b24fc  j           func_2C93F0
    ctx->pc = 0x1D9D150u;
    ctx->pc = 0x2C93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F0u, 0x1D9D150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D158u;
}
