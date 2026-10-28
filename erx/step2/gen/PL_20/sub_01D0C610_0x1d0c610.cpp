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

// Function: sub_01D0C610
// Address: 0x1d0c610 - 0x1d0c618
void sub_01D0C610_0x1d0c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C610_0x1d0c610");
#endif

    ctx->pc = 0x1d0c610u;

    // 0x1d0c610: 0x80b27a6  j           func_2C9E98
    ctx->pc = 0x1D0C610u;
    ctx->pc = 0x2C9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E98u, 0x1D0C610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C618u;
}
