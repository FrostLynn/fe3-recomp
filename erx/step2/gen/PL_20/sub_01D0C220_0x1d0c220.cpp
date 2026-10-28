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

// Function: sub_01D0C220
// Address: 0x1d0c220 - 0x1d0c228
void sub_01D0C220_0x1d0c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C220_0x1d0c220");
#endif

    ctx->pc = 0x1d0c220u;

    // 0x1d0c220: 0x80b1162  j           func_2C4588
    ctx->pc = 0x1D0C220u;
    ctx->pc = 0x2C4588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4588u, 0x1D0C220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C228u;
}
