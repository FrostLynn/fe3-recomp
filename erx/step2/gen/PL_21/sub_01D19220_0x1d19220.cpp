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

// Function: sub_01D19220
// Address: 0x1d19220 - 0x1d19228
void sub_01D19220_0x1d19220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19220_0x1d19220");
#endif

    ctx->pc = 0x1d19220u;

    // 0x1d19220: 0x80b2b44  j           func_2CAD10
    ctx->pc = 0x1D19220u;
    ctx->pc = 0x2CAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD10u, 0x1D19220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19228u;
}
