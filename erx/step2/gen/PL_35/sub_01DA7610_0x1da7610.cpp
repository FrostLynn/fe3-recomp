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

// Function: sub_01DA7610
// Address: 0x1da7610 - 0x1da7618
void sub_01DA7610_0x1da7610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7610_0x1da7610");
#endif

    ctx->pc = 0x1da7610u;

    // 0x1da7610: 0x80b245a  j           func_2C9168
    ctx->pc = 0x1DA7610u;
    ctx->pc = 0x2C9168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9168u, 0x1DA7610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7618u;
}
