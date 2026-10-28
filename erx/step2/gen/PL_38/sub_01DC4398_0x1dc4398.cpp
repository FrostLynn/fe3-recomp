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

// Function: sub_01DC4398
// Address: 0x1dc4398 - 0x1dc43a0
void sub_01DC4398_0x1dc4398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4398_0x1dc4398");
#endif

    ctx->pc = 0x1dc4398u;

    // 0x1dc4398: 0x80b0d5a  j           func_2C3568
    ctx->pc = 0x1DC4398u;
    ctx->pc = 0x2C3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3568u, 0x1DC4398u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC43A0u;
}
