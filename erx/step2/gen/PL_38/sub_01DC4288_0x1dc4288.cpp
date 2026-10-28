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

// Function: sub_01DC4288
// Address: 0x1dc4288 - 0x1dc4290
void sub_01DC4288_0x1dc4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4288_0x1dc4288");
#endif

    ctx->pc = 0x1dc4288u;

    // 0x1dc4288: 0x80b0930  j           func_2C24C0
    ctx->pc = 0x1DC4288u;
    ctx->pc = 0x2C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24C0u, 0x1DC4288u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4290u;
}
