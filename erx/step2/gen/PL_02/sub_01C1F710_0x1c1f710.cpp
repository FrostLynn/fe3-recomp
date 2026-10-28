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

// Function: sub_01C1F710
// Address: 0x1c1f710 - 0x1c1f718
void sub_01C1F710_0x1c1f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F710_0x1c1f710");
#endif

    ctx->pc = 0x1c1f710u;

    // 0x1c1f710: 0x80b1482  j           func_2C5208
    ctx->pc = 0x1C1F710u;
    ctx->pc = 0x2C5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5208u, 0x1C1F710u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F718u;
}
