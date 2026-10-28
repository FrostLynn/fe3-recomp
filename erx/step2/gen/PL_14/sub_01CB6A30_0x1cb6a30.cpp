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

// Function: sub_01CB6A30
// Address: 0x1cb6a30 - 0x1cb6a38
void sub_01CB6A30_0x1cb6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6A30_0x1cb6a30");
#endif

    ctx->pc = 0x1cb6a30u;

    // 0x1cb6a30: 0x80b1ce4  j           func_2C7390
    ctx->pc = 0x1CB6A30u;
    ctx->pc = 0x2C7390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7390u, 0x1CB6A30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6A38u;
}
