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

// Function: sub_01C1FC50
// Address: 0x1c1fc50 - 0x1c1fc58
void sub_01C1FC50_0x1c1fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FC50_0x1c1fc50");
#endif

    ctx->pc = 0x1c1fc50u;

    // 0x1c1fc50: 0x80b3344  j           func_2CCD10
    ctx->pc = 0x1C1FC50u;
    ctx->pc = 0x2CCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD10u, 0x1C1FC50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FC58u;
}
