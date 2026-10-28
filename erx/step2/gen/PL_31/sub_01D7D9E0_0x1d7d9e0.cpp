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

// Function: sub_01D7D9E0
// Address: 0x1d7d9e0 - 0x1d7d9e8
void sub_01D7D9E0_0x1d7d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D9E0_0x1d7d9e0");
#endif

    ctx->pc = 0x1d7d9e0u;

    // 0x1d7d9e0: 0x80b17ba  j           func_2C5EE8
    ctx->pc = 0x1D7D9E0u;
    ctx->pc = 0x2C5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5EE8u, 0x1D7D9E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7D9E8u;
}
