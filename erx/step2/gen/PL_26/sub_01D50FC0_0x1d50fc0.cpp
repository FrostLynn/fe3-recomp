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

// Function: sub_01D50FC0
// Address: 0x1d50fc0 - 0x1d50fd0
void sub_01D50FC0_0x1d50fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D50FC0_0x1d50fc0");
#endif

    ctx->pc = 0x1d50fc0u;

    // 0x1d50fc0: 0x80cbf78  j           func_32FDE0
    ctx->pc = 0x1D50FC0u;
    ctx->pc = 0x32FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDE0u, 0x1D50FC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D50FC8u;
    // 0x1d50fc8: 0x80e5244  j           func_394910
    ctx->pc = 0x1D50FC8u;
    ctx->pc = 0x394910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394910u, 0x1D50FC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D50FD0u;
}
