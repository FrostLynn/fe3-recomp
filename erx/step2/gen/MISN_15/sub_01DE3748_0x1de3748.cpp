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

// Function: sub_01DE3748
// Address: 0x1de3748 - 0x1de3758
void sub_01DE3748_0x1de3748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3748_0x1de3748");
#endif

    ctx->pc = 0x1de3748u;

    // 0x1de3748: 0x8088afc  j           func_222BF0
    ctx->pc = 0x1DE3748u;
    ctx->pc = 0x222BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222BF0u, 0x1DE3748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE3750u;
    // 0x1de3750: 0x80e5244  j           func_394910
    ctx->pc = 0x1DE3750u;
    ctx->pc = 0x394910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394910u, 0x1DE3750u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE3758u;
}
