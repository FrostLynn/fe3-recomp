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

// Function: sub_01D670E0
// Address: 0x1d670e0 - 0x1d670e8
void sub_01D670E0_0x1d670e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D670E0_0x1d670e0");
#endif

    ctx->pc = 0x1d670e0u;

    // 0x1d670e0: 0x80b0f3e  j           func_2C3CF8
    ctx->pc = 0x1D670E0u;
    ctx->pc = 0x2C3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF8u, 0x1D670E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D670E8u;
}
