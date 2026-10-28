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

// Function: sub_01DBBC60
// Address: 0x1dbbc60 - 0x1dbbc68
void sub_01DBBC60_0x1dbbc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC60_0x1dbbc60");
#endif

    ctx->pc = 0x1dbbc60u;

    // 0x1dbbc60: 0x80b2b04  j           func_2CAC10
    ctx->pc = 0x1DBBC60u;
    ctx->pc = 0x2CAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC10u, 0x1DBBC60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC68u;
}
