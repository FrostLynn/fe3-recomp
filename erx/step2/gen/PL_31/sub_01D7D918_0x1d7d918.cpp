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

// Function: sub_01D7D918
// Address: 0x1d7d918 - 0x1d7d920
void sub_01D7D918_0x1d7d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D918_0x1d7d918");
#endif

    ctx->pc = 0x1d7d918u;

    // 0x1d7d918: 0x80b2b7c  j           func_2CADF0
    ctx->pc = 0x1D7D918u;
    ctx->pc = 0x2CADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADF0u, 0x1D7D918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7D920u;
}
