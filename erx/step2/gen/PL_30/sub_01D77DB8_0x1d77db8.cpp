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

// Function: sub_01D77DB8
// Address: 0x1d77db8 - 0x1d77dc0
void sub_01D77DB8_0x1d77db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77DB8_0x1d77db8");
#endif

    ctx->pc = 0x1d77db8u;

    // 0x1d77db8: 0x80b1db0  j           func_2C76C0
    ctx->pc = 0x1D77DB8u;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x1D77DB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77DC0u;
}
