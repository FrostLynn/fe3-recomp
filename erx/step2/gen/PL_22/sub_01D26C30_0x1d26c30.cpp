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

// Function: sub_01D26C30
// Address: 0x1d26c30 - 0x1d26c40
void sub_01D26C30_0x1d26c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26C30_0x1d26c30");
#endif

    ctx->pc = 0x1d26c30u;

    // 0x1d26c30: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D26C30u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D26C30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26C38u;
    // 0x1d26c38: 0x0  nop
    ctx->pc = 0x1d26c38u;
    // NOP
    // 0x1d26c3c: 0x0  nop
    ctx->pc = 0x1d26c3cu;
    // NOP
    ctx->pc = 0x1d26c40u;
}
