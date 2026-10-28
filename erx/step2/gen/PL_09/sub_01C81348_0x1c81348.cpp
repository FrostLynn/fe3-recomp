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

// Function: sub_01C81348
// Address: 0x1c81348 - 0x1c81350
void sub_01C81348_0x1c81348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81348_0x1c81348");
#endif

    ctx->pc = 0x1c81348u;

    // 0x1c81348: 0x80b0fae  j           func_2C3EB8
    ctx->pc = 0x1C81348u;
    ctx->pc = 0x2C3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EB8u, 0x1C81348u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81350u;
}
