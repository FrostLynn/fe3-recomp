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

// Function: sub_01CC2960
// Address: 0x1cc2960 - 0x1cc2968
void sub_01CC2960_0x1cc2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2960_0x1cc2960");
#endif

    ctx->pc = 0x1cc2960u;

    // 0x1cc2960: 0x80b11fc  j           func_2C47F0
    ctx->pc = 0x1CC2960u;
    ctx->pc = 0x2C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47F0u, 0x1CC2960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2968u;
}
