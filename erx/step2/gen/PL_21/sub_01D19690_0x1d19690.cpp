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

// Function: sub_01D19690
// Address: 0x1d19690 - 0x1d19698
void sub_01D19690_0x1d19690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19690_0x1d19690");
#endif

    ctx->pc = 0x1d19690u;

    // 0x1d19690: 0x80b1dfe  j           func_2C77F8
    ctx->pc = 0x1D19690u;
    ctx->pc = 0x2C77F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77F8u, 0x1D19690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19698u;
}
