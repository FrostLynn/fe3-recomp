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

// Function: sub_01CFD310
// Address: 0x1cfd310 - 0x1cfd318
void sub_01CFD310_0x1cfd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD310_0x1cfd310");
#endif

    ctx->pc = 0x1cfd310u;

    // 0x1cfd310: 0x80b0b22  j           func_2C2C88
    ctx->pc = 0x1CFD310u;
    ctx->pc = 0x2C2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C88u, 0x1CFD310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD318u;
}
