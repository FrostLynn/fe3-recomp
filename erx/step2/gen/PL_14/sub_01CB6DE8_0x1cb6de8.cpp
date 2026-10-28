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

// Function: sub_01CB6DE8
// Address: 0x1cb6de8 - 0x1cb6df0
void sub_01CB6DE8_0x1cb6de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6DE8_0x1cb6de8");
#endif

    ctx->pc = 0x1cb6de8u;

    // 0x1cb6de8: 0x80b1f46  j           func_2C7D18
    ctx->pc = 0x1CB6DE8u;
    ctx->pc = 0x2C7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7D18u, 0x1CB6DE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6DF0u;
}
