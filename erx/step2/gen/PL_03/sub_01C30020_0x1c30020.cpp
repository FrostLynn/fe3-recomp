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

// Function: sub_01C30020
// Address: 0x1c30020 - 0x1c30028
void sub_01C30020_0x1c30020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30020_0x1c30020");
#endif

    ctx->pc = 0x1c30020u;

    // 0x1c30020: 0x80b27a8  j           func_2C9EA0
    ctx->pc = 0x1C30020u;
    ctx->pc = 0x2C9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9EA0u, 0x1C30020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C30028u;
}
