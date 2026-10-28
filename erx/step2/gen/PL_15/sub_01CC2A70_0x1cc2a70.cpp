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

// Function: sub_01CC2A70
// Address: 0x1cc2a70 - 0x1cc2a78
void sub_01CC2A70_0x1cc2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2A70_0x1cc2a70");
#endif

    ctx->pc = 0x1cc2a70u;

    // 0x1cc2a70: 0x80b1dfe  j           func_2C77F8
    ctx->pc = 0x1CC2A70u;
    ctx->pc = 0x2C77F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77F8u, 0x1CC2A70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2A78u;
}
