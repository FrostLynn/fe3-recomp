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

// Function: sub_01D66F38
// Address: 0x1d66f38 - 0x1d66f40
void sub_01D66F38_0x1d66f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66F38_0x1d66f38");
#endif

    ctx->pc = 0x1d66f38u;

    // 0x1d66f38: 0x80b25b8  j           func_2C96E0
    ctx->pc = 0x1D66F38u;
    ctx->pc = 0x2C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C96E0u, 0x1D66F38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66F40u;
}
