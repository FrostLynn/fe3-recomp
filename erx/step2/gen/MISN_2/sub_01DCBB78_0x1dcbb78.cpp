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

// Function: sub_01DCBB78
// Address: 0x1dcbb78 - 0x1dcbb80
void sub_01DCBB78_0x1dcbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB78_0x1dcbb78");
#endif

    ctx->pc = 0x1dcbb78u;

    // 0x1dcbb78: 0x808b692  j           func_22DA48
    ctx->pc = 0x1DCBB78u;
    ctx->pc = 0x22DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DA48u, 0x1DCBB78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCBB80u;
}
