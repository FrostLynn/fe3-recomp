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

// Function: sub_01DE4E60
// Address: 0x1de4e60 - 0x1de4e68
void sub_01DE4E60_0x1de4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E60_0x1de4e60");
#endif

    ctx->pc = 0x1de4e60u;

    // 0x1de4e60: 0x80a640c  j           func_299030
    ctx->pc = 0x1DE4E60u;
    ctx->pc = 0x299030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299030u, 0x1DE4E60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE4E68u;
}
