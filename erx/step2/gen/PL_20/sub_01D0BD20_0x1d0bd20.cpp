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

// Function: sub_01D0BD20
// Address: 0x1d0bd20 - 0x1d0bd30
void sub_01D0BD20_0x1d0bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BD20_0x1d0bd20");
#endif

    ctx->pc = 0x1d0bd20u;

    // 0x1d0bd20: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D0BD20u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D0BD20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BD28u;
    // 0x1d0bd28: 0x0  nop
    ctx->pc = 0x1d0bd28u;
    // NOP
    // 0x1d0bd2c: 0x0  nop
    ctx->pc = 0x1d0bd2cu;
    // NOP
    ctx->pc = 0x1d0bd30u;
}
