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

// Function: sub_01C42EE0
// Address: 0x1c42ee0 - 0x1c42ee8
void sub_01C42EE0_0x1c42ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42EE0_0x1c42ee0");
#endif

    ctx->pc = 0x1c42ee0u;

    // 0x1c42ee0: 0x80b1466  j           func_2C5198
    ctx->pc = 0x1C42EE0u;
    ctx->pc = 0x2C5198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5198u, 0x1C42EE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42EE8u;
}
