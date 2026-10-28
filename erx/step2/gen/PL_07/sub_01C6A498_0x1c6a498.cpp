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

// Function: sub_01C6A498
// Address: 0x1c6a498 - 0x1c6a4a0
void sub_01C6A498_0x1c6a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A498_0x1c6a498");
#endif

    ctx->pc = 0x1c6a498u;

    // 0x1c6a498: 0x80b1e32  j           func_2C78C8
    ctx->pc = 0x1C6A498u;
    ctx->pc = 0x2C78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C78C8u, 0x1C6A498u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A4A0u;
}
