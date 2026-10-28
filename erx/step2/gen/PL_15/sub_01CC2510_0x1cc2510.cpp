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

// Function: sub_01CC2510
// Address: 0x1cc2510 - 0x1cc2518
void sub_01CC2510_0x1cc2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2510_0x1cc2510");
#endif

    ctx->pc = 0x1cc2510u;

    // 0x1cc2510: 0x80b0b58  j           func_2C2D60
    ctx->pc = 0x1CC2510u;
    ctx->pc = 0x2C2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D60u, 0x1CC2510u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2518u;
}
