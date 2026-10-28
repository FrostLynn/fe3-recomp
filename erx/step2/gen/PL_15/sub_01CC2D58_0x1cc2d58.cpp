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

// Function: sub_01CC2D58
// Address: 0x1cc2d58 - 0x1cc2d60
void sub_01CC2D58_0x1cc2d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2D58_0x1cc2d58");
#endif

    ctx->pc = 0x1cc2d58u;

    // 0x1cc2d58: 0x80b28a8  j           func_2CA2A0
    ctx->pc = 0x1CC2D58u;
    ctx->pc = 0x2CA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A0u, 0x1CC2D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2D60u;
}
