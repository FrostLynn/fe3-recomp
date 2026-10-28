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

// Function: sub_01D88B08
// Address: 0x1d88b08 - 0x1d88b10
void sub_01D88B08_0x1d88b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88B08_0x1d88b08");
#endif

    ctx->pc = 0x1d88b08u;

    // 0x1d88b08: 0x80b2b44  j           func_2CAD10
    ctx->pc = 0x1D88B08u;
    ctx->pc = 0x2CAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD10u, 0x1D88B08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88B10u;
}
