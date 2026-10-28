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

// Function: sub_01D5D180
// Address: 0x1d5d180 - 0x1d5d188
void sub_01D5D180_0x1d5d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D180_0x1d5d180");
#endif

    ctx->pc = 0x1d5d180u;

    // 0x1d5d180: 0x80b1000  j           func_2C4000
    ctx->pc = 0x1D5D180u;
    ctx->pc = 0x2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4000u, 0x1D5D180u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D188u;
}
