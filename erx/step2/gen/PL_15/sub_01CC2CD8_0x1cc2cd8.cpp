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

// Function: sub_01CC2CD8
// Address: 0x1cc2cd8 - 0x1cc2ce0
void sub_01CC2CD8_0x1cc2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2CD8_0x1cc2cd8");
#endif

    ctx->pc = 0x1cc2cd8u;

    // 0x1cc2cd8: 0x80b2730  j           func_2C9CC0
    ctx->pc = 0x1CC2CD8u;
    ctx->pc = 0x2C9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CC0u, 0x1CC2CD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2CE0u;
}
