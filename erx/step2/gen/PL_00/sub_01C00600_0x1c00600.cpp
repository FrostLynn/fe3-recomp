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

// Function: sub_01C00600
// Address: 0x1c00600 - 0x1c00608
void sub_01C00600_0x1c00600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00600_0x1c00600");
#endif

    ctx->pc = 0x1c00600u;

    // 0x1c00600: 0x80b1460  j           func_2C5180
    ctx->pc = 0x1C00600u;
    ctx->pc = 0x2C5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5180u, 0x1C00600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00608u;
}
