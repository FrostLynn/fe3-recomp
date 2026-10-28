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

// Function: sub_01C81150
// Address: 0x1c81150 - 0x1c81158
void sub_01C81150_0x1c81150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81150_0x1c81150");
#endif

    ctx->pc = 0x1c81150u;

    // 0x1c81150: 0x80b1b18  j           func_2C6C60
    ctx->pc = 0x1C81150u;
    ctx->pc = 0x2C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C60u, 0x1C81150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81158u;
}
