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

// Function: sub_01D66C58
// Address: 0x1d66c58 - 0x1d66c60
void sub_01D66C58_0x1d66c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66C58_0x1d66c58");
#endif

    ctx->pc = 0x1d66c58u;

    // 0x1d66c58: 0x80b12ce  j           func_2C4B38
    ctx->pc = 0x1D66C58u;
    ctx->pc = 0x2C4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B38u, 0x1D66C58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66C60u;
}
