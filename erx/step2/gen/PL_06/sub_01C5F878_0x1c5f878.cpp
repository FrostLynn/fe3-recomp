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

// Function: sub_01C5F878
// Address: 0x1c5f878 - 0x1c5f880
void sub_01C5F878_0x1c5f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F878_0x1c5f878");
#endif

    ctx->pc = 0x1c5f878u;

    // 0x1c5f878: 0x80b1620  j           func_2C5880
    ctx->pc = 0x1C5F878u;
    ctx->pc = 0x2C5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5880u, 0x1C5F878u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F880u;
}
