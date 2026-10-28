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

// Function: sub_01DA6E68
// Address: 0x1da6e68 - 0x1da6e70
void sub_01DA6E68_0x1da6e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA6E68_0x1da6e68");
#endif

    ctx->pc = 0x1da6e68u;

    // 0x1da6e68: 0x80a96ba  j           func_2A5AE8
    ctx->pc = 0x1DA6E68u;
    ctx->pc = 0x2A5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AE8u, 0x1DA6E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA6E70u;
}
