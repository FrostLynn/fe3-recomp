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

// Function: sub_01DB15C0
// Address: 0x1db15c0 - 0x1db15c8
void sub_01DB15C0_0x1db15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB15C0_0x1db15c0");
#endif

    ctx->pc = 0x1db15c0u;

    // 0x1db15c0: 0x80b1f36  j           func_2C7CD8
    ctx->pc = 0x1DB15C0u;
    ctx->pc = 0x2C7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7CD8u, 0x1DB15C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB15C8u;
}
