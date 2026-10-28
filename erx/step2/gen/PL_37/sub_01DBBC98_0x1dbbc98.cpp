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

// Function: sub_01DBBC98
// Address: 0x1dbbc98 - 0x1dbbca0
void sub_01DBBC98_0x1dbbc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC98_0x1dbbc98");
#endif

    ctx->pc = 0x1dbbc98u;

    // 0x1dbbc98: 0x80b2a46  j           func_2CA918
    ctx->pc = 0x1DBBC98u;
    ctx->pc = 0x2CA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA918u, 0x1DBBC98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBCA0u;
}
