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

// Function: sub_01D5D308
// Address: 0x1d5d308 - 0x1d5d310
void sub_01D5D308_0x1d5d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D308_0x1d5d308");
#endif

    ctx->pc = 0x1d5d308u;

    // 0x1d5d308: 0x80b1556  j           func_2C5558
    ctx->pc = 0x1D5D308u;
    ctx->pc = 0x2C5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5558u, 0x1D5D308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D310u;
}
