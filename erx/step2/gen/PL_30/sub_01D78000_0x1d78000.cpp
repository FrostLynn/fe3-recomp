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

// Function: sub_01D78000
// Address: 0x1d78000 - 0x1d78008
void sub_01D78000_0x1d78000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78000_0x1d78000");
#endif

    ctx->pc = 0x1d78000u;

    // 0x1d78000: 0x80b2054  j           func_2C8150
    ctx->pc = 0x1D78000u;
    ctx->pc = 0x2C8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8150u, 0x1D78000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D78008u;
}
