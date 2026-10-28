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

// Function: sub_01CC2E50
// Address: 0x1cc2e50 - 0x1cc2e58
void sub_01CC2E50_0x1cc2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2E50_0x1cc2e50");
#endif

    ctx->pc = 0x1cc2e50u;

    // 0x1cc2e50: 0x80b29da  j           func_2CA768
    ctx->pc = 0x1CC2E50u;
    ctx->pc = 0x2CA768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA768u, 0x1CC2E50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2E58u;
}
