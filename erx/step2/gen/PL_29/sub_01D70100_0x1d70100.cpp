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

// Function: sub_01D70100
// Address: 0x1d70100 - 0x1d70108
void sub_01D70100_0x1d70100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70100_0x1d70100");
#endif

    ctx->pc = 0x1d70100u;

    // 0x1d70100: 0x80b0dd6  j           func_2C3758
    ctx->pc = 0x1D70100u;
    ctx->pc = 0x2C3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3758u, 0x1D70100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70108u;
}
