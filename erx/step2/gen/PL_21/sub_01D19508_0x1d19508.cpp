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

// Function: sub_01D19508
// Address: 0x1d19508 - 0x1d19510
void sub_01D19508_0x1d19508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19508_0x1d19508");
#endif

    ctx->pc = 0x1d19508u;

    // 0x1d19508: 0x80b1118  j           func_2C4460
    ctx->pc = 0x1D19508u;
    ctx->pc = 0x2C4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4460u, 0x1D19508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19510u;
}
