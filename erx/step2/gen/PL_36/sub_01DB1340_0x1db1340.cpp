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

// Function: sub_01DB1340
// Address: 0x1db1340 - 0x1db1348
void sub_01DB1340_0x1db1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1340_0x1db1340");
#endif

    ctx->pc = 0x1db1340u;

    // 0x1db1340: 0x80b0dac  j           func_2C36B0
    ctx->pc = 0x1DB1340u;
    ctx->pc = 0x2C36B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36B0u, 0x1DB1340u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1348u;
}
