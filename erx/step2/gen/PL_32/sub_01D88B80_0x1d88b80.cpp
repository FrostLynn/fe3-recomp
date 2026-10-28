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

// Function: sub_01D88B80
// Address: 0x1d88b80 - 0x1d88b88
void sub_01D88B80_0x1d88b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88B80_0x1d88b80");
#endif

    ctx->pc = 0x1d88b80u;

    // 0x1d88b80: 0x80b1c5a  j           func_2C7168
    ctx->pc = 0x1D88B80u;
    ctx->pc = 0x2C7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7168u, 0x1D88B80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88B88u;
}
