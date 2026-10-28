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

// Function: sub_01CEFAA8
// Address: 0x1cefaa8 - 0x1cefab0
void sub_01CEFAA8_0x1cefaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEFAA8_0x1cefaa8");
#endif

    ctx->pc = 0x1cefaa8u;

    // 0x1cefaa8: 0x80b12ba  j           func_2C4AE8
    ctx->pc = 0x1CEFAA8u;
    ctx->pc = 0x2C4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AE8u, 0x1CEFAA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEFAB0u;
}
