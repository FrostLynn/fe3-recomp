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

// Function: sub_01D33A80
// Address: 0x1d33a80 - 0x1d33a88
void sub_01D33A80_0x1d33a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33A80_0x1d33a80");
#endif

    ctx->pc = 0x1d33a80u;

    // 0x1d33a80: 0x80b1222  j           func_2C4888
    ctx->pc = 0x1D33A80u;
    ctx->pc = 0x2C4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4888u, 0x1D33A80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33A88u;
}
