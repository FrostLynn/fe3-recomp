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

// Function: sub_01CC2BE8
// Address: 0x1cc2be8 - 0x1cc2bf0
void sub_01CC2BE8_0x1cc2be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2BE8_0x1cc2be8");
#endif

    ctx->pc = 0x1cc2be8u;

    // 0x1cc2be8: 0x80b2448  j           func_2C9120
    ctx->pc = 0x1CC2BE8u;
    ctx->pc = 0x2C9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9120u, 0x1CC2BE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2BF0u;
}
