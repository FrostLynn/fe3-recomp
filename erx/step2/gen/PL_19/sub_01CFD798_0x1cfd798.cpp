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

// Function: sub_01CFD798
// Address: 0x1cfd798 - 0x1cfd7a0
void sub_01CFD798_0x1cfd798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD798_0x1cfd798");
#endif

    ctx->pc = 0x1cfd798u;

    // 0x1cfd798: 0x80b1222  j           func_2C4888
    ctx->pc = 0x1CFD798u;
    ctx->pc = 0x2C4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4888u, 0x1CFD798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD7A0u;
}
