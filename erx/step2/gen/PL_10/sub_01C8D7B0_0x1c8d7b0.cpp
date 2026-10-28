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

// Function: sub_01C8D7B0
// Address: 0x1c8d7b0 - 0x1c8d7b8
void sub_01C8D7B0_0x1c8d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D7B0_0x1c8d7b0");
#endif

    ctx->pc = 0x1c8d7b0u;

    // 0x1c8d7b0: 0x80b26b6  j           func_2C9AD8
    ctx->pc = 0x1C8D7B0u;
    ctx->pc = 0x2C9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AD8u, 0x1C8D7B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D7B8u;
}
