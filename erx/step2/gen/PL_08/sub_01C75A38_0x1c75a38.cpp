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

// Function: sub_01C75A38
// Address: 0x1c75a38 - 0x1c75a40
void sub_01C75A38_0x1c75a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75A38_0x1c75a38");
#endif

    ctx->pc = 0x1c75a38u;

    // 0x1c75a38: 0x80b0dc4  j           func_2C3710
    ctx->pc = 0x1C75A38u;
    ctx->pc = 0x2C3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3710u, 0x1C75A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75A40u;
}
