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

// Function: sub_01CFD828
// Address: 0x1cfd828 - 0x1cfd830
void sub_01CFD828_0x1cfd828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD828_0x1cfd828");
#endif

    ctx->pc = 0x1cfd828u;

    // 0x1cfd828: 0x80b14ac  j           func_2C52B0
    ctx->pc = 0x1CFD828u;
    ctx->pc = 0x2C52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B0u, 0x1CFD828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD830u;
}
