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

// Function: sub_01D9CB00
// Address: 0x1d9cb00 - 0x1d9cb08
void sub_01D9CB00_0x1d9cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CB00_0x1d9cb00");
#endif

    ctx->pc = 0x1d9cb00u;

    // 0x1d9cb00: 0x80b0c8e  j           func_2C3238
    ctx->pc = 0x1D9CB00u;
    ctx->pc = 0x2C3238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3238u, 0x1D9CB00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CB08u;
}
