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

// Function: sub_01D66EA0
// Address: 0x1d66ea0 - 0x1d66ea8
void sub_01D66EA0_0x1d66ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66EA0_0x1d66ea0");
#endif

    ctx->pc = 0x1d66ea0u;

    // 0x1d66ea0: 0x80b23a4  j           func_2C8E90
    ctx->pc = 0x1D66EA0u;
    ctx->pc = 0x2C8E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E90u, 0x1D66EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66EA8u;
}
