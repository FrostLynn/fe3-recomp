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

// Function: sub_01D0C300
// Address: 0x1d0c300 - 0x1d0c308
void sub_01D0C300_0x1d0c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C300_0x1d0c300");
#endif

    ctx->pc = 0x1d0c300u;

    // 0x1d0c300: 0x80b1468  j           func_2C51A0
    ctx->pc = 0x1D0C300u;
    ctx->pc = 0x2C51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51A0u, 0x1D0C300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C308u;
}
