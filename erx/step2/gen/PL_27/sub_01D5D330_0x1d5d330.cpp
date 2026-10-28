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

// Function: sub_01D5D330
// Address: 0x1d5d330 - 0x1d5d338
void sub_01D5D330_0x1d5d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D330_0x1d5d330");
#endif

    ctx->pc = 0x1d5d330u;

    // 0x1d5d330: 0x80b1dec  j           func_2C77B0
    ctx->pc = 0x1D5D330u;
    ctx->pc = 0x2C77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C77B0u, 0x1D5D330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D338u;
}
