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

// Function: sub_01D19238
// Address: 0x1d19238 - 0x1d19240
void sub_01D19238_0x1d19238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19238_0x1d19238");
#endif

    ctx->pc = 0x1d19238u;

    // 0x1d19238: 0x80b189e  j           func_2C6278
    ctx->pc = 0x1D19238u;
    ctx->pc = 0x2C6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6278u, 0x1D19238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19240u;
}
