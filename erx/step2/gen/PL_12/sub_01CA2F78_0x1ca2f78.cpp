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

// Function: sub_01CA2F78
// Address: 0x1ca2f78 - 0x1ca2f80
void sub_01CA2F78_0x1ca2f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2F78_0x1ca2f78");
#endif

    ctx->pc = 0x1ca2f78u;

    // 0x1ca2f78: 0x80b25b8  j           func_2C96E0
    ctx->pc = 0x1CA2F78u;
    ctx->pc = 0x2C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C96E0u, 0x1CA2F78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2F80u;
}
