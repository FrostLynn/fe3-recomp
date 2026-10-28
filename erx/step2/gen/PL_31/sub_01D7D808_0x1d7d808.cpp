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

// Function: sub_01D7D808
// Address: 0x1d7d808 - 0x1d7d810
void sub_01D7D808_0x1d7d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D808_0x1d7d808");
#endif

    ctx->pc = 0x1d7d808u;

    // 0x1d7d808: 0x80b0b42  j           func_2C2D08
    ctx->pc = 0x1D7D808u;
    ctx->pc = 0x2C2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D08u, 0x1D7D808u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7D810u;
}
