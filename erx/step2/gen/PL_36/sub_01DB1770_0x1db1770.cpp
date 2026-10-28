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

// Function: sub_01DB1770
// Address: 0x1db1770 - 0x1db1778
void sub_01DB1770_0x1db1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1770_0x1db1770");
#endif

    ctx->pc = 0x1db1770u;

    // 0x1db1770: 0x80b25cc  j           func_2C9730
    ctx->pc = 0x1DB1770u;
    ctx->pc = 0x2C9730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9730u, 0x1DB1770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1778u;
}
