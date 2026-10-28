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

// Function: sub_01D46628
// Address: 0x1d46628 - 0x1d46630
void sub_01D46628_0x1d46628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46628_0x1d46628");
#endif

    ctx->pc = 0x1d46628u;

    // 0x1d46628: 0x80b2866  j           func_2CA198
    ctx->pc = 0x1D46628u;
    ctx->pc = 0x2CA198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA198u, 0x1D46628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46630u;
}
