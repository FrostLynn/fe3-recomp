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

// Function: sub_01D0C7D0
// Address: 0x1d0c7d0 - 0x1d0c7d8
void sub_01D0C7D0_0x1d0c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C7D0_0x1d0c7d0");
#endif

    ctx->pc = 0x1d0c7d0u;

    // 0x1d0c7d0: 0x80b2e78  j           func_2CB9E0
    ctx->pc = 0x1D0C7D0u;
    ctx->pc = 0x2CB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9E0u, 0x1D0C7D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C7D8u;
}
