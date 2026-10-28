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

// Function: sub_01DE1960
// Address: 0x1de1960 - 0x1de1968
void sub_01DE1960_0x1de1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1960_0x1de1960");
#endif

    ctx->pc = 0x1de1960u;

    // 0x1de1960: 0x808b692  j           func_22DA48
    ctx->pc = 0x1DE1960u;
    ctx->pc = 0x22DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DA48u, 0x1DE1960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE1968u;
}
