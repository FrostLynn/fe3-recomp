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

// Function: sub_01D891D8
// Address: 0x1d891d8 - 0x1d891e0
void sub_01D891D8_0x1d891d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D891D8_0x1d891d8");
#endif

    ctx->pc = 0x1d891d8u;

    // 0x1d891d8: 0x80b272e  j           func_2C9CB8
    ctx->pc = 0x1D891D8u;
    ctx->pc = 0x2C9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CB8u, 0x1D891D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D891E0u;
}
