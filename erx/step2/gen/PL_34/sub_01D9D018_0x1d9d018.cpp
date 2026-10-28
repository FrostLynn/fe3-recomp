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

// Function: sub_01D9D018
// Address: 0x1d9d018 - 0x1d9d020
void sub_01D9D018_0x1d9d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D018_0x1d9d018");
#endif

    ctx->pc = 0x1d9d018u;

    // 0x1d9d018: 0x80b200c  j           func_2C8030
    ctx->pc = 0x1D9D018u;
    ctx->pc = 0x2C8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8030u, 0x1D9D018u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D020u;
}
