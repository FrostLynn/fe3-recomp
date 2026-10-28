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

// Function: sub_01D27330
// Address: 0x1d27330 - 0x1d27338
void sub_01D27330_0x1d27330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27330_0x1d27330");
#endif

    ctx->pc = 0x1d27330u;

    // 0x1d27330: 0x80b200e  j           func_2C8038
    ctx->pc = 0x1D27330u;
    ctx->pc = 0x2C8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8038u, 0x1D27330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27338u;
}
