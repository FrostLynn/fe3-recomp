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

// Function: sub_01D26C28
// Address: 0x1d26c28 - 0x1d26c30
void sub_01D26C28_0x1d26c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26C28_0x1d26c28");
#endif

    ctx->pc = 0x1d26c28u;

    // 0x1d26c28: 0x80d97b0  j           func_365EC0
    ctx->pc = 0x1D26C28u;
    ctx->pc = 0x365EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365EC0u, 0x1D26C28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26C30u;
}
