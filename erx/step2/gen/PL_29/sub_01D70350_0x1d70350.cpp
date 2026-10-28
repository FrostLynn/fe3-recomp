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

// Function: sub_01D70350
// Address: 0x1d70350 - 0x1d70358
void sub_01D70350_0x1d70350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70350_0x1d70350");
#endif

    ctx->pc = 0x1d70350u;

    // 0x1d70350: 0x80b164a  j           func_2C5928
    ctx->pc = 0x1D70350u;
    ctx->pc = 0x2C5928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5928u, 0x1D70350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70358u;
}
