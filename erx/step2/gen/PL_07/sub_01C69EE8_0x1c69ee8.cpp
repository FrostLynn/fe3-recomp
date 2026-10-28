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

// Function: sub_01C69EE8
// Address: 0x1c69ee8 - 0x1c69ef0
void sub_01C69EE8_0x1c69ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C69EE8_0x1c69ee8");
#endif

    ctx->pc = 0x1c69ee8u;

    // 0x1c69ee8: 0x80b0a8e  j           func_2C2A38
    ctx->pc = 0x1C69EE8u;
    ctx->pc = 0x2C2A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A38u, 0x1C69EE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C69EF0u;
}
