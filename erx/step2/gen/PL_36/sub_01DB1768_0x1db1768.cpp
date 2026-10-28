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

// Function: sub_01DB1768
// Address: 0x1db1768 - 0x1db1770
void sub_01DB1768_0x1db1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1768_0x1db1768");
#endif

    ctx->pc = 0x1db1768u;

    // 0x1db1768: 0x80b25c6  j           func_2C9718
    ctx->pc = 0x1DB1768u;
    ctx->pc = 0x2C9718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9718u, 0x1DB1768u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1770u;
}
