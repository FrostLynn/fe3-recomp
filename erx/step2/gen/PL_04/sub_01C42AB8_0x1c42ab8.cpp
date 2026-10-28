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

// Function: sub_01C42AB8
// Address: 0x1c42ab8 - 0x1c42ac0
void sub_01C42AB8_0x1c42ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42AB8_0x1c42ab8");
#endif

    ctx->pc = 0x1c42ab8u;

    // 0x1c42ab8: 0x80b1eac  j           func_2C7AB0
    ctx->pc = 0x1C42AB8u;
    ctx->pc = 0x2C7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7AB0u, 0x1C42AB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42AC0u;
}
