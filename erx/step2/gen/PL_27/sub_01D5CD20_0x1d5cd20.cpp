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

// Function: sub_01D5CD20
// Address: 0x1d5cd20 - 0x1d5cd30
void sub_01D5CD20_0x1d5cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CD20_0x1d5cd20");
#endif

    ctx->pc = 0x1d5cd20u;

    // 0x1d5cd20: 0x80d9758  j           func_365D60
    ctx->pc = 0x1D5CD20u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1D5CD20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CD28u;
    // 0x1d5cd28: 0x0  nop
    ctx->pc = 0x1d5cd28u;
    // NOP
    // 0x1d5cd2c: 0x0  nop
    ctx->pc = 0x1d5cd2cu;
    // NOP
    ctx->pc = 0x1d5cd30u;
}
