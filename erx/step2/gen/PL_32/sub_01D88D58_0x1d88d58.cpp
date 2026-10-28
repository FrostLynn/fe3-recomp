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

// Function: sub_01D88D58
// Address: 0x1d88d58 - 0x1d88d60
void sub_01D88D58_0x1d88d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88D58_0x1d88d58");
#endif

    ctx->pc = 0x1d88d58u;

    // 0x1d88d58: 0x80b0fc2  j           func_2C3F08
    ctx->pc = 0x1D88D58u;
    ctx->pc = 0x2C3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F08u, 0x1D88D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88D60u;
}
