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

// Function: sub_01CEFD88
// Address: 0x1cefd88 - 0x1cefd90
void sub_01CEFD88_0x1cefd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFD88_0x1cefd88");
#endif

    ctx->pc = 0x1cefd88u;

    // 0x1cefd88: 0x80b2556  j           func_2C9558
    ctx->pc = 0x1CEFD88u;
    ctx->pc = 0x2C9558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9558u, 0x1CEFD88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFD90u;
}
