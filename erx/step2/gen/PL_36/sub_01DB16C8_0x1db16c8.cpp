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

// Function: sub_01DB16C8
// Address: 0x1db16c8 - 0x1db16d0
void sub_01DB16C8_0x1db16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB16C8_0x1db16c8");
#endif

    ctx->pc = 0x1db16c8u;

    // 0x1db16c8: 0x80b23a4  j           func_2C8E90
    ctx->pc = 0x1DB16C8u;
    ctx->pc = 0x2C8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E90u, 0x1DB16C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB16D0u;
}
