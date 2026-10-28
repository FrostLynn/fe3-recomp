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

// Function: sub_01D335F0
// Address: 0x1d335f0 - 0x1d335f8
void sub_01D335F0_0x1d335f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D335F0_0x1d335f0");
#endif

    ctx->pc = 0x1d335f0u;

    // 0x1d335f0: 0x80b0aa2  j           func_2C2A88
    ctx->pc = 0x1D335F0u;
    ctx->pc = 0x2C2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A88u, 0x1D335F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D335F8u;
}
