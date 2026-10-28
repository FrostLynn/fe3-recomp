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

// Function: sub_01C50220
// Address: 0x1c50220 - 0x1c50228
void sub_01C50220_0x1c50220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50220_0x1c50220");
#endif

    ctx->pc = 0x1c50220u;

    // 0x1c50220: 0x80b27a6  j           func_2C9E98
    ctx->pc = 0x1C50220u;
    ctx->pc = 0x2C9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E98u, 0x1C50220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50228u;
}
