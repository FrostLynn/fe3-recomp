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

// Function: sub_01C763F8
// Address: 0x1c763f8 - 0x1c76408
void sub_01C763F8_0x1c763f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C763F8_0x1c763f8");
#endif

    ctx->pc = 0x1c763f8u;

    // 0x1c763f8: 0x80b33c8  j           func_2CCF20
    ctx->pc = 0x1C763F8u;
    ctx->pc = 0x2CCF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF20u, 0x1C763F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C76400u;
    // 0x1c76400: 0x0  nop
    ctx->pc = 0x1c76400u;
    // NOP
    // 0x1c76404: 0x0  nop
    ctx->pc = 0x1c76404u;
    // NOP
    ctx->pc = 0x1c76408u;
}
