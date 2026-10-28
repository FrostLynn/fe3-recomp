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

// Function: sub_01DBBC50
// Address: 0x1dbbc50 - 0x1dbbc58
void sub_01DBBC50_0x1dbbc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC50_0x1dbbc50");
#endif

    ctx->pc = 0x1dbbc50u;

    // 0x1dbbc50: 0x80b2ada  j           func_2CAB68
    ctx->pc = 0x1DBBC50u;
    ctx->pc = 0x2CAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB68u, 0x1DBBC50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC58u;
}
