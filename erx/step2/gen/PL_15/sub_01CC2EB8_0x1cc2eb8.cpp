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

// Function: sub_01CC2EB8
// Address: 0x1cc2eb8 - 0x1cc2ec0
void sub_01CC2EB8_0x1cc2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2EB8_0x1cc2eb8");
#endif

    ctx->pc = 0x1cc2eb8u;

    // 0x1cc2eb8: 0x80b2d66  j           func_2CB598
    ctx->pc = 0x1CC2EB8u;
    ctx->pc = 0x2CB598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB598u, 0x1CC2EB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2EC0u;
}
