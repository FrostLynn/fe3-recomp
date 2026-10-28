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

// Function: sub_01CA3218
// Address: 0x1ca3218 - 0x1ca3220
void sub_01CA3218_0x1ca3218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3218_0x1ca3218");
#endif

    ctx->pc = 0x1ca3218u;

    // 0x1ca3218: 0x80b1a78  j           func_2C69E0
    ctx->pc = 0x1CA3218u;
    ctx->pc = 0x2C69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C69E0u, 0x1CA3218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA3220u;
}
