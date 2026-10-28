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

// Function: sub_01C1FC28
// Address: 0x1c1fc28 - 0x1c1fc30
void sub_01C1FC28_0x1c1fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FC28_0x1c1fc28");
#endif

    ctx->pc = 0x1c1fc28u;

    // 0x1c1fc28: 0x80b1a78  j           func_2C69E0
    ctx->pc = 0x1C1FC28u;
    ctx->pc = 0x2C69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C69E0u, 0x1C1FC28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FC30u;
}
