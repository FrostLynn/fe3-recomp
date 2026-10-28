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

// Function: sub_01DBBC80
// Address: 0x1dbbc80 - 0x1dbbc88
void sub_01DBBC80_0x1dbbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBC80_0x1dbbc80");
#endif

    ctx->pc = 0x1dbbc80u;

    // 0x1dbbc80: 0x80b29f2  j           func_2CA7C8
    ctx->pc = 0x1DBBC80u;
    ctx->pc = 0x2CA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7C8u, 0x1DBBC80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBC88u;
}
