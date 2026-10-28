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

// Function: sub_01CC2420
// Address: 0x1cc2420 - 0x1cc2428
void sub_01CC2420_0x1cc2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2420_0x1cc2420");
#endif

    ctx->pc = 0x1cc2420u;

    // 0x1cc2420: 0x80d97c2  j           func_365F08
    ctx->pc = 0x1CC2420u;
    ctx->pc = 0x365F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F08u, 0x1CC2420u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2428u;
}
