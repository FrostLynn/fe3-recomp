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

// Function: sub_01D9C9B8
// Address: 0x1d9c9b8 - 0x1d9c9c8
void sub_01D9C9B8_0x1d9c9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9C9B8_0x1d9c9b8");
#endif

    ctx->pc = 0x1d9c9b8u;

    // 0x1d9c9b8: 0x808136a  j           func_204DA8
    ctx->pc = 0x1D9C9B8u;
    ctx->pc = 0x204DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA8u, 0x1D9C9B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9C9C0u;
    // 0x1d9c9c0: 0x810a958  j           func_42A560
    ctx->pc = 0x1D9C9C0u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1D9C9C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9C9C8u;
}
