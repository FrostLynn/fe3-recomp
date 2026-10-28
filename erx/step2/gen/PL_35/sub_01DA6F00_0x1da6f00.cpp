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

// Function: sub_01DA6F00
// Address: 0x1da6f00 - 0x1da6f08
void sub_01DA6F00_0x1da6f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA6F00_0x1da6f00");
#endif

    ctx->pc = 0x1da6f00u;

    // 0x1da6f00: 0x80b0a90  j           func_2C2A40
    ctx->pc = 0x1DA6F00u;
    ctx->pc = 0x2C2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A40u, 0x1DA6F00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA6F08u;
}
