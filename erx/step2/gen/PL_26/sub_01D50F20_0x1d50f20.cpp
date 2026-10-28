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

// Function: sub_01D50F20
// Address: 0x1d50f20 - 0x1d50f30
void sub_01D50F20_0x1d50f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D50F20_0x1d50f20");
#endif

    ctx->pc = 0x1d50f20u;

    // 0x1d50f20: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D50F20u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D50F20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D50F28u;
    // 0x1d50f28: 0x0  nop
    ctx->pc = 0x1d50f28u;
    // NOP
    // 0x1d50f2c: 0x0  nop
    ctx->pc = 0x1d50f2cu;
    // NOP
    ctx->pc = 0x1d50f30u;
}
