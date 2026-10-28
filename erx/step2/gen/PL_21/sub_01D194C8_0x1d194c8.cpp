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

// Function: sub_01D194C8
// Address: 0x1d194c8 - 0x1d194d0
void sub_01D194C8_0x1d194c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D194C8_0x1d194c8");
#endif

    ctx->pc = 0x1d194c8u;

    // 0x1d194c8: 0x80b1038  j           func_2C40E0
    ctx->pc = 0x1D194C8u;
    ctx->pc = 0x2C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40E0u, 0x1D194C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D194D0u;
}
