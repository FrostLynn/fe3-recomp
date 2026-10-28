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

// Function: sub_01D19438
// Address: 0x1d19438 - 0x1d19440
void sub_01D19438_0x1d19438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19438_0x1d19438");
#endif

    ctx->pc = 0x1d19438u;

    // 0x1d19438: 0x80b0d1c  j           func_2C3470
    ctx->pc = 0x1D19438u;
    ctx->pc = 0x2C3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3470u, 0x1D19438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19440u;
}
