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

// Function: sub_01C6A350
// Address: 0x1c6a350 - 0x1c6a358
void sub_01C6A350_0x1c6a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A350_0x1c6a350");
#endif

    ctx->pc = 0x1c6a350u;

    // 0x1c6a350: 0x80b11b0  j           func_2C46C0
    ctx->pc = 0x1C6A350u;
    ctx->pc = 0x2C46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C0u, 0x1C6A350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A358u;
}
