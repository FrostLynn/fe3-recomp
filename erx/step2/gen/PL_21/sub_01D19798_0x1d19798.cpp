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

// Function: sub_01D19798
// Address: 0x1d19798 - 0x1d197a0
void sub_01D19798_0x1d19798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19798_0x1d19798");
#endif

    ctx->pc = 0x1d19798u;

    // 0x1d19798: 0x80b21d8  j           func_2C8760
    ctx->pc = 0x1D19798u;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x1D19798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D197A0u;
}
