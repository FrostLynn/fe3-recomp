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

// Function: sub_01DE6E58
// Address: 0x1de6e58 - 0x1de6e60
void sub_01DE6E58_0x1de6e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6E58_0x1de6e58");
#endif

    ctx->pc = 0x1de6e58u;

    // 0x1de6e58: 0x80a6440  j           func_299100
    ctx->pc = 0x1DE6E58u;
    ctx->pc = 0x299100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299100u, 0x1DE6E58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE6E60u;
}
