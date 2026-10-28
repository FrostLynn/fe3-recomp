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

// Function: sub_01DB0F58
// Address: 0x1db0f58 - 0x1db0f60
void sub_01DB0F58_0x1db0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB0F58_0x1db0f58");
#endif

    ctx->pc = 0x1db0f58u;

    // 0x1db0f58: 0x80a96b6  j           func_2A5AD8
    ctx->pc = 0x1DB0F58u;
    ctx->pc = 0x2A5AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AD8u, 0x1DB0F58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB0F60u;
}
