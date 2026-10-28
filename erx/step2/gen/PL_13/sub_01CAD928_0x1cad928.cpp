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

// Function: sub_01CAD928
// Address: 0x1cad928 - 0x1cad930
void sub_01CAD928_0x1cad928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD928_0x1cad928");
#endif

    ctx->pc = 0x1cad928u;

    // 0x1cad928: 0x80b2542  j           func_2C9508
    ctx->pc = 0x1CAD928u;
    ctx->pc = 0x2C9508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9508u, 0x1CAD928u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD930u;
}
