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

// Function: sub_01C81108
// Address: 0x1c81108 - 0x1c81110
void sub_01C81108_0x1c81108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81108_0x1c81108");
#endif

    ctx->pc = 0x1c81108u;

    // 0x1c81108: 0x80b2b44  j           func_2CAD10
    ctx->pc = 0x1C81108u;
    ctx->pc = 0x2CAD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD10u, 0x1C81108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81110u;
}
