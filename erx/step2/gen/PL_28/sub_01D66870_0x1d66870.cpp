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

// Function: sub_01D66870
// Address: 0x1d66870 - 0x1d66878
void sub_01D66870_0x1d66870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66870_0x1d66870");
#endif

    ctx->pc = 0x1d66870u;

    // 0x1d66870: 0x80b0b9e  j           func_2C2E78
    ctx->pc = 0x1D66870u;
    ctx->pc = 0x2C2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E78u, 0x1D66870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66878u;
}
