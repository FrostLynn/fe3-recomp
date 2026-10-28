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

// Function: sub_01CFDB00
// Address: 0x1cfdb00 - 0x1cfdb08
void sub_01CFDB00_0x1cfdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDB00_0x1cfdb00");
#endif

    ctx->pc = 0x1cfdb00u;

    // 0x1cfdb00: 0x80b2740  j           func_2C9D00
    ctx->pc = 0x1CFDB00u;
    ctx->pc = 0x2C9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D00u, 0x1CFDB00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDB08u;
}
