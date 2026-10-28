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

// Function: sub_01D9CBD0
// Address: 0x1d9cbd0 - 0x1d9cbd8
void sub_01D9CBD0_0x1d9cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CBD0_0x1d9cbd0");
#endif

    ctx->pc = 0x1d9cbd0u;

    // 0x1d9cbd0: 0x80b1abc  j           func_2C6AF0
    ctx->pc = 0x1D9CBD0u;
    ctx->pc = 0x2C6AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6AF0u, 0x1D9CBD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CBD8u;
}
