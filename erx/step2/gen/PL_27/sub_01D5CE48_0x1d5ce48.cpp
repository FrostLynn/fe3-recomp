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

// Function: sub_01D5CE48
// Address: 0x1d5ce48 - 0x1d5ce50
void sub_01D5CE48_0x1d5ce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CE48_0x1d5ce48");
#endif

    ctx->pc = 0x1d5ce48u;

    // 0x1d5ce48: 0x80b0eae  j           func_2C3AB8
    ctx->pc = 0x1D5CE48u;
    ctx->pc = 0x2C3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AB8u, 0x1D5CE48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CE50u;
}
