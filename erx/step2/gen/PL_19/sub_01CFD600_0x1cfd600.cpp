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

// Function: sub_01CFD600
// Address: 0x1cfd600 - 0x1cfd608
void sub_01CFD600_0x1cfd600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD600_0x1cfd600");
#endif

    ctx->pc = 0x1cfd600u;

    // 0x1cfd600: 0x80b1768  j           func_2C5DA0
    ctx->pc = 0x1CFD600u;
    ctx->pc = 0x2C5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5DA0u, 0x1CFD600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD608u;
}
