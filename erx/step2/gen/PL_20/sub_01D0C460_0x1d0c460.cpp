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

// Function: sub_01D0C460
// Address: 0x1d0c460 - 0x1d0c468
void sub_01D0C460_0x1d0c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C460_0x1d0c460");
#endif

    ctx->pc = 0x1d0c460u;

    // 0x1d0c460: 0x80b20c6  j           func_2C8318
    ctx->pc = 0x1D0C460u;
    ctx->pc = 0x2C8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8318u, 0x1D0C460u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C468u;
}
