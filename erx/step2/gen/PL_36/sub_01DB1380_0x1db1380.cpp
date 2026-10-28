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

// Function: sub_01DB1380
// Address: 0x1db1380 - 0x1db1388
void sub_01DB1380_0x1db1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1380_0x1db1380");
#endif

    ctx->pc = 0x1db1380u;

    // 0x1db1380: 0x80b1012  j           func_2C4048
    ctx->pc = 0x1DB1380u;
    ctx->pc = 0x2C4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4048u, 0x1DB1380u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1388u;
}
