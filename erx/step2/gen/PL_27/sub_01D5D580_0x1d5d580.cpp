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

// Function: sub_01D5D580
// Address: 0x1d5d580 - 0x1d5d588
void sub_01D5D580_0x1d5d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D580_0x1d5d580");
#endif

    ctx->pc = 0x1d5d580u;

    // 0x1d5d580: 0x80b2704  j           func_2C9C10
    ctx->pc = 0x1D5D580u;
    ctx->pc = 0x2C9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C10u, 0x1D5D580u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D588u;
}
