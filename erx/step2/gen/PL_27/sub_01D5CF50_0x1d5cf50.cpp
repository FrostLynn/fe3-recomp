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

// Function: sub_01D5CF50
// Address: 0x1d5cf50 - 0x1d5cf58
void sub_01D5CF50_0x1d5cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CF50_0x1d5cf50");
#endif

    ctx->pc = 0x1d5cf50u;

    // 0x1d5cf50: 0x80b1bca  j           func_2C6F28
    ctx->pc = 0x1D5CF50u;
    ctx->pc = 0x2C6F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F28u, 0x1D5CF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CF58u;
}
