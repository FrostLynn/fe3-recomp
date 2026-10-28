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

// Function: sub_01CEFF08
// Address: 0x1ceff08 - 0x1ceff10
void sub_01CEFF08_0x1ceff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFF08_0x1ceff08");
#endif

    ctx->pc = 0x1ceff08u;

    // 0x1ceff08: 0x80b0faa  j           func_2C3EA8
    ctx->pc = 0x1CEFF08u;
    ctx->pc = 0x2C3EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EA8u, 0x1CEFF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFF10u;
}
