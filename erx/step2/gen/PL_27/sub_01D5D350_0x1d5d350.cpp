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

// Function: sub_01D5D350
// Address: 0x1d5d350 - 0x1d5d358
void sub_01D5D350_0x1d5d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D350_0x1d5d350");
#endif

    ctx->pc = 0x1d5d350u;

    // 0x1d5d350: 0x80b1e32  j           func_2C78C8
    ctx->pc = 0x1D5D350u;
    ctx->pc = 0x2C78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C78C8u, 0x1D5D350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D358u;
}
