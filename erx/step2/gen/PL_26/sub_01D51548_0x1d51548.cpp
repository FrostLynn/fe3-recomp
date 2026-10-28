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

// Function: sub_01D51548
// Address: 0x1d51548 - 0x1d51550
void sub_01D51548_0x1d51548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51548_0x1d51548");
#endif

    ctx->pc = 0x1d51548u;

    // 0x1d51548: 0x80b1556  j           func_2C5558
    ctx->pc = 0x1D51548u;
    ctx->pc = 0x2C5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5558u, 0x1D51548u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D51550u;
}
