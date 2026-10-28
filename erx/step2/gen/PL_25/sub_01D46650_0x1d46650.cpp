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

// Function: sub_01D46650
// Address: 0x1d46650 - 0x1d46658
void sub_01D46650_0x1d46650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46650_0x1d46650");
#endif

    ctx->pc = 0x1d46650u;

    // 0x1d46650: 0x80b28a8  j           func_2CA2A0
    ctx->pc = 0x1D46650u;
    ctx->pc = 0x2CA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A0u, 0x1D46650u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46658u;
}
