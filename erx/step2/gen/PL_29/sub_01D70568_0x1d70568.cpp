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

// Function: sub_01D70568
// Address: 0x1d70568 - 0x1d70570
void sub_01D70568_0x1d70568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70568_0x1d70568");
#endif

    ctx->pc = 0x1d70568u;

    // 0x1d70568: 0x80b13b0  j           func_2C4EC0
    ctx->pc = 0x1D70568u;
    ctx->pc = 0x2C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4EC0u, 0x1D70568u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70570u;
}
