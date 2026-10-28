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

// Function: sub_01CDAA40
// Address: 0x1cdaa40 - 0x1cdaa48
void sub_01CDAA40_0x1cdaa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAA40_0x1cdaa40");
#endif

    ctx->pc = 0x1cdaa40u;

    // 0x1cdaa40: 0x80b24d2  j           func_2C9348
    ctx->pc = 0x1CDAA40u;
    ctx->pc = 0x2C9348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9348u, 0x1CDAA40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAA48u;
}
