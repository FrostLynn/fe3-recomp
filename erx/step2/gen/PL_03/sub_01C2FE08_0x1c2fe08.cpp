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

// Function: sub_01C2FE08
// Address: 0x1c2fe08 - 0x1c2fe10
void sub_01C2FE08_0x1c2fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FE08_0x1c2fe08");
#endif

    ctx->pc = 0x1c2fe08u;

    // 0x1c2fe08: 0x80b1fac  j           func_2C7EB0
    ctx->pc = 0x1C2FE08u;
    ctx->pc = 0x2C7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EB0u, 0x1C2FE08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FE10u;
}
