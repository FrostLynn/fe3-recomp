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

// Function: sub_01D9C998
// Address: 0x1d9c998 - 0x1d9c9a0
void sub_01D9C998_0x1d9c998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9C998_0x1d9c998");
#endif

    ctx->pc = 0x1d9c998u;

    // 0x1d9c998: 0x80ae432  j           func_2B90C8
    ctx->pc = 0x1D9C998u;
    ctx->pc = 0x2B90C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B90C8u, 0x1D9C998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9C9A0u;
}
