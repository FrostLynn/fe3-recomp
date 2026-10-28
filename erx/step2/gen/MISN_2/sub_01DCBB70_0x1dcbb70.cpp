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

// Function: sub_01DCBB70
// Address: 0x1dcbb70 - 0x1dcbb78
void sub_01DCBB70_0x1dcbb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB70_0x1dcbb70");
#endif

    ctx->pc = 0x1dcbb70u;

    // 0x1dcbb70: 0x80a6130  j           func_2984C0
    ctx->pc = 0x1DCBB70u;
    ctx->pc = 0x2984C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2984C0u, 0x1DCBB70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCBB78u;
}
