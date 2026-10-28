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

// Function: sub_01DBBC10
// Address: 0x1dbbc10 - 0x1dbbc18
void sub_01DBBC10_0x1dbbc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC10_0x1dbbc10");
#endif

    ctx->pc = 0x1dbbc10u;

    // 0x1dbbc10: 0x80b0f6a  j           func_2C3DA8
    ctx->pc = 0x1DBBC10u;
    ctx->pc = 0x2C3DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3DA8u, 0x1DBBC10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC18u;
}
