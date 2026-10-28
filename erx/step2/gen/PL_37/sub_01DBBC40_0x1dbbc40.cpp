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

// Function: sub_01DBBC40
// Address: 0x1dbbc40 - 0x1dbbc48
void sub_01DBBC40_0x1dbbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC40_0x1dbbc40");
#endif

    ctx->pc = 0x1dbbc40u;

    // 0x1dbbc40: 0x80b29da  j           func_2CA768
    ctx->pc = 0x1DBBC40u;
    ctx->pc = 0x2CA768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA768u, 0x1DBBC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC48u;
}
