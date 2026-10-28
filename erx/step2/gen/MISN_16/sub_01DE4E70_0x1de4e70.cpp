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

// Function: sub_01DE4E70
// Address: 0x1de4e70 - 0x1de4e78
void sub_01DE4E70_0x1de4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E70_0x1de4e70");
#endif

    ctx->pc = 0x1de4e70u;

    // 0x1de4e70: 0x8089f80  j           func_227E00
    ctx->pc = 0x1DE4E70u;
    ctx->pc = 0x227E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E00u, 0x1DE4E70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE4E78u;
}
