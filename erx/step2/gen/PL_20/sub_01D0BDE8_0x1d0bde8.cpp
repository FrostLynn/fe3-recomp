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

// Function: sub_01D0BDE8
// Address: 0x1d0bde8 - 0x1d0bdf0
void sub_01D0BDE8_0x1d0bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BDE8_0x1d0bde8");
#endif

    ctx->pc = 0x1d0bde8u;

    // 0x1d0bde8: 0x80b0a8e  j           func_2C2A38
    ctx->pc = 0x1D0BDE8u;
    ctx->pc = 0x2C2A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A38u, 0x1D0BDE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BDF0u;
}
