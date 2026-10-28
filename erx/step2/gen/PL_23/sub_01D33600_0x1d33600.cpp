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

// Function: sub_01D33600
// Address: 0x1d33600 - 0x1d33608
void sub_01D33600_0x1d33600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33600_0x1d33600");
#endif

    ctx->pc = 0x1d33600u;

    // 0x1d33600: 0x80b0b24  j           func_2C2C90
    ctx->pc = 0x1D33600u;
    ctx->pc = 0x2C2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C90u, 0x1D33600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33608u;
}
