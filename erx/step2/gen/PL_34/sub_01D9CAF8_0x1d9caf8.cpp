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

// Function: sub_01D9CAF8
// Address: 0x1d9caf8 - 0x1d9cb00
void sub_01D9CAF8_0x1d9caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CAF8_0x1d9caf8");
#endif

    ctx->pc = 0x1d9caf8u;

    // 0x1d9caf8: 0x80b0c76  j           func_2C31D8
    ctx->pc = 0x1D9CAF8u;
    ctx->pc = 0x2C31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D8u, 0x1D9CAF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CB00u;
}
