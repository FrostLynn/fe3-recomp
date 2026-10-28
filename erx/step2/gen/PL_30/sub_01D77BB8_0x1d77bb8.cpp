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

// Function: sub_01D77BB8
// Address: 0x1d77bb8 - 0x1d77bc0
void sub_01D77BB8_0x1d77bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77BB8_0x1d77bb8");
#endif

    ctx->pc = 0x1d77bb8u;

    // 0x1d77bb8: 0x80b0930  j           func_2C24C0
    ctx->pc = 0x1D77BB8u;
    ctx->pc = 0x2C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24C0u, 0x1D77BB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77BC0u;
}
