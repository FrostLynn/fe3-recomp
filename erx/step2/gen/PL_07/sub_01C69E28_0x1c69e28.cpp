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

// Function: sub_01C69E28
// Address: 0x1c69e28 - 0x1c69e38
void sub_01C69E28_0x1c69e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C69E28_0x1c69e28");
#endif

    ctx->pc = 0x1c69e28u;

    // 0x1c69e28: 0x80d9758  j           func_365D60
    ctx->pc = 0x1C69E28u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1C69E28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C69E30u;
    // 0x1c69e30: 0x0  nop
    ctx->pc = 0x1c69e30u;
    // NOP
    // 0x1c69e34: 0x0  nop
    ctx->pc = 0x1c69e34u;
    // NOP
    ctx->pc = 0x1c69e38u;
}
