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

// Function: sub_01DA7768
// Address: 0x1da7768 - 0x1da7770
void sub_01DA7768_0x1da7768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7768_0x1da7768");
#endif

    ctx->pc = 0x1da7768u;

    // 0x1da7768: 0x80b2898  j           func_2CA260
    ctx->pc = 0x1DA7768u;
    ctx->pc = 0x2CA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA260u, 0x1DA7768u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7770u;
}
