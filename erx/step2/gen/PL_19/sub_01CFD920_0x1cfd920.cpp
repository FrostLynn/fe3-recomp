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

// Function: sub_01CFD920
// Address: 0x1cfd920 - 0x1cfd928
void sub_01CFD920_0x1cfd920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD920_0x1cfd920");
#endif

    ctx->pc = 0x1cfd920u;

    // 0x1cfd920: 0x80b1ffc  j           func_2C7FF0
    ctx->pc = 0x1CFD920u;
    ctx->pc = 0x2C7FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7FF0u, 0x1CFD920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD928u;
}
