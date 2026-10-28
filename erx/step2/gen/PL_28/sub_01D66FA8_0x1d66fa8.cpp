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

// Function: sub_01D66FA8
// Address: 0x1d66fa8 - 0x1d66fb0
void sub_01D66FA8_0x1d66fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66FA8_0x1d66fa8");
#endif

    ctx->pc = 0x1d66fa8u;

    // 0x1d66fa8: 0x80b2740  j           func_2C9D00
    ctx->pc = 0x1D66FA8u;
    ctx->pc = 0x2C9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D00u, 0x1D66FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66FB0u;
}
