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

// Function: sub_01CA2B88
// Address: 0x1ca2b88 - 0x1ca2b90
void sub_01CA2B88_0x1ca2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2B88_0x1ca2b88");
#endif

    ctx->pc = 0x1ca2b88u;

    // 0x1ca2b88: 0x80b0ffe  j           func_2C3FF8
    ctx->pc = 0x1CA2B88u;
    ctx->pc = 0x2C3FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FF8u, 0x1CA2B88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2B90u;
}
