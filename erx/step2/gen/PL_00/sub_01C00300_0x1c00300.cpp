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

// Function: sub_01C00300
// Address: 0x1c00300 - 0x1c00308
void sub_01C00300_0x1c00300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00300_0x1c00300");
#endif

    ctx->pc = 0x1c00300u;

    // 0x1c00300: 0x80b1816  j           func_2C6058
    ctx->pc = 0x1C00300u;
    ctx->pc = 0x2C6058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6058u, 0x1C00300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00308u;
}
