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

// Function: sub_01C00230
// Address: 0x1c00230 - 0x1c00238
void sub_01C00230_0x1c00230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00230_0x1c00230");
#endif

    ctx->pc = 0x1c00230u;

    // 0x1c00230: 0x80b189e  j           func_2C6278
    ctx->pc = 0x1C00230u;
    ctx->pc = 0x2C6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6278u, 0x1C00230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00238u;
}
