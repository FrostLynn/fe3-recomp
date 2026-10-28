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

// Function: sub_01CC2D48
// Address: 0x1cc2d48 - 0x1cc2d50
void sub_01CC2D48_0x1cc2d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2D48_0x1cc2d48");
#endif

    ctx->pc = 0x1cc2d48u;

    // 0x1cc2d48: 0x80b2898  j           func_2CA260
    ctx->pc = 0x1CC2D48u;
    ctx->pc = 0x2CA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA260u, 0x1CC2D48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2D50u;
}
