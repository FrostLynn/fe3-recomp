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

// Function: sub_01D77C60
// Address: 0x1d77c60 - 0x1d77c68
void sub_01D77C60_0x1d77c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77C60_0x1d77c60");
#endif

    ctx->pc = 0x1d77c60u;

    // 0x1d77c60: 0x80b0bd0  j           func_2C2F40
    ctx->pc = 0x1D77C60u;
    ctx->pc = 0x2C2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F40u, 0x1D77C60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77C68u;
}
