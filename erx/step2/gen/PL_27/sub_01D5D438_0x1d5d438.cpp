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

// Function: sub_01D5D438
// Address: 0x1d5d438 - 0x1d5d440
void sub_01D5D438_0x1d5d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D438_0x1d5d438");
#endif

    ctx->pc = 0x1d5d438u;

    // 0x1d5d438: 0x80b2166  j           func_2C8598
    ctx->pc = 0x1D5D438u;
    ctx->pc = 0x2C8598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8598u, 0x1D5D438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D440u;
}
