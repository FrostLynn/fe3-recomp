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

// Function: sub_01D66FD8
// Address: 0x1d66fd8 - 0x1d66fe0
void sub_01D66FD8_0x1d66fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66FD8_0x1d66fd8");
#endif

    ctx->pc = 0x1d66fd8u;

    // 0x1d66fd8: 0x80b27bc  j           func_2C9EF0
    ctx->pc = 0x1D66FD8u;
    ctx->pc = 0x2C9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EF0u, 0x1D66FD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66FE0u;
}
