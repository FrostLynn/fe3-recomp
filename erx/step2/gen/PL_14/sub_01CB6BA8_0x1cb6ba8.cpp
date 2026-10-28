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

// Function: sub_01CB6BA8
// Address: 0x1cb6ba8 - 0x1cb6bb0
void sub_01CB6BA8_0x1cb6ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6BA8_0x1cb6ba8");
#endif

    ctx->pc = 0x1cb6ba8u;

    // 0x1cb6ba8: 0x80b1024  j           func_2C4090
    ctx->pc = 0x1CB6BA8u;
    ctx->pc = 0x2C4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4090u, 0x1CB6BA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6BB0u;
}
