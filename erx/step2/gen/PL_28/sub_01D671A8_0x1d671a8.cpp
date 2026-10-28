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

// Function: sub_01D671A8
// Address: 0x1d671a8 - 0x1d671b0
void sub_01D671A8_0x1d671a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D671A8_0x1d671a8");
#endif

    ctx->pc = 0x1d671a8u;

    // 0x1d671a8: 0x80b2a6e  j           func_2CA9B8
    ctx->pc = 0x1D671A8u;
    ctx->pc = 0x2CA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9B8u, 0x1D671A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D671B0u;
}
