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

// Function: sub_01D67178
// Address: 0x1d67178 - 0x1d67180
void sub_01D67178_0x1d67178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67178_0x1d67178");
#endif

    ctx->pc = 0x1d67178u;

    // 0x1d67178: 0x80b313e  j           func_2CC4F8
    ctx->pc = 0x1D67178u;
    ctx->pc = 0x2CC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4F8u, 0x1D67178u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D67180u;
}
