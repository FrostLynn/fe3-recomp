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

// Function: sub_01D26C20
// Address: 0x1d26c20 - 0x1d26c28
void sub_01D26C20_0x1d26c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26C20_0x1d26c20");
#endif

    ctx->pc = 0x1d26c20u;

    // 0x1d26c20: 0x80d9a0e  j           func_366838
    ctx->pc = 0x1D26C20u;
    ctx->pc = 0x366838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366838u, 0x1D26C20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26C28u;
}
