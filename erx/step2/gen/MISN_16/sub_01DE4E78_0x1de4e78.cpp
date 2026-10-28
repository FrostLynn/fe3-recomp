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

// Function: sub_01DE4E78
// Address: 0x1de4e78 - 0x1de4e88
void sub_01DE4E78_0x1de4e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E78_0x1de4e78");
#endif

    ctx->pc = 0x1de4e78u;

    // 0x1de4e78: 0x8089f76  j           func_227DD8
    ctx->pc = 0x1DE4E78u;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1DE4E78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE4E80u;
    // 0x1de4e80: 0x0  nop
    ctx->pc = 0x1de4e80u;
    // NOP
    // 0x1de4e84: 0x0  nop
    ctx->pc = 0x1de4e84u;
    // NOP
    ctx->pc = 0x1de4e88u;
}
