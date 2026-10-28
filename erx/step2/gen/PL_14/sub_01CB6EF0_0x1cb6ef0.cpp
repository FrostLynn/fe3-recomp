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

// Function: sub_01CB6EF0
// Address: 0x1cb6ef0 - 0x1cb6ef8
void sub_01CB6EF0_0x1cb6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6EF0_0x1cb6ef0");
#endif

    ctx->pc = 0x1cb6ef0u;

    // 0x1cb6ef0: 0x80b23c6  j           func_2C8F18
    ctx->pc = 0x1CB6EF0u;
    ctx->pc = 0x2C8F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8F18u, 0x1CB6EF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6EF8u;
}
