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

// Function: sub_01C8D630
// Address: 0x1c8d630 - 0x1c8d638
void sub_01C8D630_0x1c8d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D630_0x1c8d630");
#endif

    ctx->pc = 0x1c8d630u;

    // 0x1c8d630: 0x80b2054  j           func_2C8150
    ctx->pc = 0x1C8D630u;
    ctx->pc = 0x2C8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8150u, 0x1C8D630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D638u;
}
