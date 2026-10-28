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

// Function: sub_01DBBA20
// Address: 0x1dbba20 - 0x1dbba28
void sub_01DBBA20_0x1dbba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBA20_0x1dbba20");
#endif

    ctx->pc = 0x1dbba20u;

    // 0x1dbba20: 0x80b2b44  j           func_2CAD10
    ctx->pc = 0x1DBBA20u;
    ctx->pc = 0x2CAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD10u, 0x1DBBA20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBA28u;
}
