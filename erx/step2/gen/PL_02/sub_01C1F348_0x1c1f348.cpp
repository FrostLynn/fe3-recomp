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

// Function: sub_01C1F348
// Address: 0x1c1f348 - 0x1c1f350
void sub_01C1F348_0x1c1f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F348_0x1c1f348");
#endif

    ctx->pc = 0x1c1f348u;

    // 0x1c1f348: 0x80b18d8  j           func_2C6360
    ctx->pc = 0x1C1F348u;
    ctx->pc = 0x2C6360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6360u, 0x1C1F348u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F350u;
}
