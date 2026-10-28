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

// Function: sub_01DD6C78
// Address: 0x1dd6c78 - 0x1dd6c88
void sub_01DD6C78_0x1dd6c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C78_0x1dd6c78");
#endif

    ctx->pc = 0x1dd6c78u;

    // 0x1dd6c78: 0x80b0898  j           func_2C2260
    ctx->pc = 0x1DD6C78u;
    ctx->pc = 0x2C2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2260u, 0x1DD6C78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD6C80u;
    // 0x1dd6c80: 0x0  nop
    ctx->pc = 0x1dd6c80u;
    // NOP
    // 0x1dd6c84: 0x0  nop
    ctx->pc = 0x1dd6c84u;
    // NOP
    ctx->pc = 0x1dd6c88u;
}
