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

// Function: sub_01D0C330
// Address: 0x1d0c330 - 0x1d0c338
void sub_01D0C330_0x1d0c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C330_0x1d0c330");
#endif

    ctx->pc = 0x1d0c330u;

    // 0x1d0c330: 0x80b151c  j           func_2C5470
    ctx->pc = 0x1D0C330u;
    ctx->pc = 0x2C5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5470u, 0x1D0C330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C338u;
}
