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

// Function: sub_01D9C920
// Address: 0x1d9c920 - 0x1d9c930
void sub_01D9C920_0x1d9c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9C920_0x1d9c920");
#endif

    ctx->pc = 0x1d9c920u;

    // 0x1d9c920: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D9C920u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D9C920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9C928u;
    // 0x1d9c928: 0x0  nop
    ctx->pc = 0x1d9c928u;
    // NOP
    // 0x1d9c92c: 0x0  nop
    ctx->pc = 0x1d9c92cu;
    // NOP
    ctx->pc = 0x1d9c930u;
}
