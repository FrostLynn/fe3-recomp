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

// Function: sub_01C98B88
// Address: 0x1c98b88 - 0x1c98b90
void sub_01C98B88_0x1c98b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C98B88_0x1c98b88");
#endif

    ctx->pc = 0x1c98b88u;

    // 0x1c98b88: 0x80b2e44  j           func_2CB910
    ctx->pc = 0x1C98B88u;
    ctx->pc = 0x2CB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB910u, 0x1C98B88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C98B90u;
}
