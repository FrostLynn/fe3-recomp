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

// Function: sub_01C1F9B8
// Address: 0x1c1f9b8 - 0x1c1f9c0
void sub_01C1F9B8_0x1c1f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F9B8_0x1c1f9b8");
#endif

    ctx->pc = 0x1c1f9b8u;

    // 0x1c1f9b8: 0x80b25e2  j           func_2C9788
    ctx->pc = 0x1C1F9B8u;
    ctx->pc = 0x2C9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9788u, 0x1C1F9B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F9C0u;
}
