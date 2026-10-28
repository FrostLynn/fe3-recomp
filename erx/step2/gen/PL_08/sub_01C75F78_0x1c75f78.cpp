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

// Function: sub_01C75F78
// Address: 0x1c75f78 - 0x1c75f80
void sub_01C75F78_0x1c75f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75F78_0x1c75f78");
#endif

    ctx->pc = 0x1c75f78u;

    // 0x1c75f78: 0x80b1eac  j           func_2C7AB0
    ctx->pc = 0x1C75F78u;
    ctx->pc = 0x2C7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AB0u, 0x1C75F78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75F80u;
}
