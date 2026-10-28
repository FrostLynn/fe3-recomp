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

// Function: sub_01D462A0
// Address: 0x1d462a0 - 0x1d462a8
void sub_01D462A0_0x1d462a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D462A0_0x1d462a0");
#endif

    ctx->pc = 0x1d462a0u;

    // 0x1d462a0: 0x80b13d8  j           func_2C4F60
    ctx->pc = 0x1D462A0u;
    ctx->pc = 0x2C4F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4F60u, 0x1D462A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D462A8u;
}
