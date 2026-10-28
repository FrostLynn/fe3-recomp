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

// Function: sub_01C1F518
// Address: 0x1c1f518 - 0x1c1f520
void sub_01C1F518_0x1c1f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F518_0x1c1f518");
#endif

    ctx->pc = 0x1c1f518u;

    // 0x1c1f518: 0x80b0cd4  j           func_2C3350
    ctx->pc = 0x1C1F518u;
    ctx->pc = 0x2C3350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3350u, 0x1C1F518u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F520u;
}
