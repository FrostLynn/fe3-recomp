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

// Function: sub_01D51910
// Address: 0x1d51910 - 0x1d51918
void sub_01D51910_0x1d51910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51910_0x1d51910");
#endif

    ctx->pc = 0x1d51910u;

    // 0x1d51910: 0x80b0f6a  j           func_2C3DA8
    ctx->pc = 0x1D51910u;
    ctx->pc = 0x2C3DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3DA8u, 0x1D51910u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D51918u;
}
