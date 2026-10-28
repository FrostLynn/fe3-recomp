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

// Function: sub_01D46558
// Address: 0x1d46558 - 0x1d46560
void sub_01D46558_0x1d46558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46558_0x1d46558");
#endif

    ctx->pc = 0x1d46558u;

    // 0x1d46558: 0x80b2542  j           func_2C9508
    ctx->pc = 0x1D46558u;
    ctx->pc = 0x2C9508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9508u, 0x1D46558u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46560u;
}
