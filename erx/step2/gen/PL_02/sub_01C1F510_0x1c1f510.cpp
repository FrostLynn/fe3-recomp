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

// Function: sub_01C1F510
// Address: 0x1c1f510 - 0x1c1f518
void sub_01C1F510_0x1c1f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F510_0x1c1f510");
#endif

    ctx->pc = 0x1c1f510u;

    // 0x1c1f510: 0x80b0cac  j           func_2C32B0
    ctx->pc = 0x1C1F510u;
    ctx->pc = 0x2C32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32B0u, 0x1C1F510u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F518u;
}
