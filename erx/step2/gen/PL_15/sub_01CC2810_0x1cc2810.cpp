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

// Function: sub_01CC2810
// Address: 0x1cc2810 - 0x1cc2818
void sub_01CC2810_0x1cc2810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2810_0x1cc2810");
#endif

    ctx->pc = 0x1cc2810u;

    // 0x1cc2810: 0x80b0cd8  j           func_2C3360
    ctx->pc = 0x1CC2810u;
    ctx->pc = 0x2C3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3360u, 0x1CC2810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2818u;
}
