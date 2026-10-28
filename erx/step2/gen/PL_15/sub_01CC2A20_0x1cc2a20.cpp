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

// Function: sub_01CC2A20
// Address: 0x1cc2a20 - 0x1cc2a28
void sub_01CC2A20_0x1cc2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2A20_0x1cc2a20");
#endif

    ctx->pc = 0x1cc2a20u;

    // 0x1cc2a20: 0x80b151c  j           func_2C5470
    ctx->pc = 0x1CC2A20u;
    ctx->pc = 0x2C5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5470u, 0x1CC2A20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2A28u;
}
