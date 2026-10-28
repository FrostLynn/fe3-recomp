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

// Function: sub_01DB1960
// Address: 0x1db1960 - 0x1db1968
void sub_01DB1960_0x1db1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1960_0x1db1960");
#endif

    ctx->pc = 0x1db1960u;

    // 0x1db1960: 0x80b2b04  j           func_2CAC10
    ctx->pc = 0x1DB1960u;
    ctx->pc = 0x2CAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC10u, 0x1DB1960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1968u;
}
