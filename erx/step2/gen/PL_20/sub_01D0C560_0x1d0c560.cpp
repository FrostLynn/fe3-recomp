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

// Function: sub_01D0C560
// Address: 0x1d0c560 - 0x1d0c568
void sub_01D0C560_0x1d0c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C560_0x1d0c560");
#endif

    ctx->pc = 0x1d0c560u;

    // 0x1d0c560: 0x80b2510  j           func_2C9440
    ctx->pc = 0x1D0C560u;
    ctx->pc = 0x2C9440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9440u, 0x1D0C560u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C568u;
}
