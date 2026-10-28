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

// Function: sub_01D0BDC8
// Address: 0x1d0bdc8 - 0x1d0bdd8
void sub_01D0BDC8_0x1d0bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BDC8_0x1d0bdc8");
#endif

    ctx->pc = 0x1d0bdc8u;

    // 0x1d0bdc8: 0x80cbf78  j           func_32FDE0
    ctx->pc = 0x1D0BDC8u;
    ctx->pc = 0x32FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FDE0u, 0x1D0BDC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BDD0u;
    // 0x1d0bdd0: 0x80e5244  j           func_394910
    ctx->pc = 0x1D0BDD0u;
    ctx->pc = 0x394910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394910u, 0x1D0BDD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BDD8u;
}
