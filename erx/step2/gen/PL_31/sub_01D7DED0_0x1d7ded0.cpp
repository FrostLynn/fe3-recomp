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

// Function: sub_01D7DED0
// Address: 0x1d7ded0 - 0x1d7ded8
void sub_01D7DED0_0x1d7ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DED0_0x1d7ded0");
#endif

    ctx->pc = 0x1d7ded0u;

    // 0x1d7ded0: 0x80b2326  j           func_2C8C98
    ctx->pc = 0x1D7DED0u;
    ctx->pc = 0x2C8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8C98u, 0x1D7DED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DED8u;
}
