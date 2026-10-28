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

// Function: sub_01D929D8
// Address: 0x1d929d8 - 0x1d929e0
void sub_01D929D8_0x1d929d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D929D8_0x1d929d8");
#endif

    ctx->pc = 0x1d929d8u;

    // 0x1d929d8: 0x80b0c54  j           func_2C3150
    ctx->pc = 0x1D929D8u;
    ctx->pc = 0x2C3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3150u, 0x1D929D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D929E0u;
}
