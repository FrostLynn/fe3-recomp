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

// Function: sub_01CFD628
// Address: 0x1cfd628 - 0x1cfd630
void sub_01CFD628_0x1cfd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD628_0x1cfd628");
#endif

    ctx->pc = 0x1cfd628u;

    // 0x1cfd628: 0x80b0cd6  j           func_2C3358
    ctx->pc = 0x1CFD628u;
    ctx->pc = 0x2C3358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3358u, 0x1CFD628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD630u;
}
