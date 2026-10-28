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

// Function: sub_01DB0FE8
// Address: 0x1db0fe8 - 0x1db0ff0
void sub_01DB0FE8_0x1db0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB0FE8_0x1db0fe8");
#endif

    ctx->pc = 0x1db0fe8u;

    // 0x1db0fe8: 0x80b0a90  j           func_2C2A40
    ctx->pc = 0x1DB0FE8u;
    ctx->pc = 0x2C2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A40u, 0x1DB0FE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB0FF0u;
}
