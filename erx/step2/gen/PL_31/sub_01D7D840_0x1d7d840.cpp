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

// Function: sub_01D7D840
// Address: 0x1d7d840 - 0x1d7d848
void sub_01D7D840_0x1d7d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D840_0x1d7d840");
#endif

    ctx->pc = 0x1d7d840u;

    // 0x1d7d840: 0x80b0dd6  j           func_2C3758
    ctx->pc = 0x1D7D840u;
    ctx->pc = 0x2C3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3758u, 0x1D7D840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7D848u;
}
