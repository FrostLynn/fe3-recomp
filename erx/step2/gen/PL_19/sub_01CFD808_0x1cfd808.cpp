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

// Function: sub_01CFD808
// Address: 0x1cfd808 - 0x1cfd810
void sub_01CFD808_0x1cfd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD808_0x1cfd808");
#endif

    ctx->pc = 0x1cfd808u;

    // 0x1cfd808: 0x80b1460  j           func_2C5180
    ctx->pc = 0x1CFD808u;
    ctx->pc = 0x2C5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5180u, 0x1CFD808u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD810u;
}
