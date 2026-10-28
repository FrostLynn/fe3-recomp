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

// Function: sub_01DB16F0
// Address: 0x1db16f0 - 0x1db16f8
void sub_01DB16F0_0x1db16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB16F0_0x1db16f0");
#endif

    ctx->pc = 0x1db16f0u;

    // 0x1db16f0: 0x80b246e  j           func_2C91B8
    ctx->pc = 0x1DB16F0u;
    ctx->pc = 0x2C91B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C91B8u, 0x1DB16F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB16F8u;
}
