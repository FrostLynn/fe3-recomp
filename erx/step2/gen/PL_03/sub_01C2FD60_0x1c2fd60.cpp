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

// Function: sub_01C2FD60
// Address: 0x1c2fd60 - 0x1c2fd68
void sub_01C2FD60_0x1c2fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FD60_0x1c2fd60");
#endif

    ctx->pc = 0x1c2fd60u;

    // 0x1c2fd60: 0x80b1558  j           func_2C5560
    ctx->pc = 0x1C2FD60u;
    ctx->pc = 0x2C5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5560u, 0x1C2FD60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FD68u;
}
