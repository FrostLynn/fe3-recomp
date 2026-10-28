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

// Function: sub_01C1F480
// Address: 0x1c1f480 - 0x1c1f488
void sub_01C1F480_0x1c1f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F480_0x1c1f480");
#endif

    ctx->pc = 0x1c1f480u;

    // 0x1c1f480: 0x80b15ee  j           func_2C57B8
    ctx->pc = 0x1C1F480u;
    ctx->pc = 0x2C57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57B8u, 0x1C1F480u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F488u;
}
