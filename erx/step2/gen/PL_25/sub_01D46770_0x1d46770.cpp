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

// Function: sub_01D46770
// Address: 0x1d46770 - 0x1d46778
void sub_01D46770_0x1d46770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46770_0x1d46770");
#endif

    ctx->pc = 0x1d46770u;

    // 0x1d46770: 0x80b2b1a  j           func_2CAC68
    ctx->pc = 0x1D46770u;
    ctx->pc = 0x2CAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC68u, 0x1D46770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46778u;
}
