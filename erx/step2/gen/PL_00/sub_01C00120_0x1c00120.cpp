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

// Function: sub_01C00120
// Address: 0x1c00120 - 0x1c00128
void sub_01C00120_0x1c00120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00120_0x1c00120");
#endif

    ctx->pc = 0x1c00120u;

    // 0x1c00120: 0x80b0b56  j           func_2C2D58
    ctx->pc = 0x1C00120u;
    ctx->pc = 0x2C2D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D58u, 0x1C00120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00128u;
}
