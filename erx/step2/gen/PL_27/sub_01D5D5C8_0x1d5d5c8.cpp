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

// Function: sub_01D5D5C8
// Address: 0x1d5d5c8 - 0x1d5d5d0
void sub_01D5D5C8_0x1d5d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D5C8_0x1d5d5c8");
#endif

    ctx->pc = 0x1d5d5c8u;

    // 0x1d5d5c8: 0x80b27a6  j           func_2C9E98
    ctx->pc = 0x1D5D5C8u;
    ctx->pc = 0x2C9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E98u, 0x1D5D5C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D5D0u;
}
