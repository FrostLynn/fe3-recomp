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

// Function: sub_01CC2688
// Address: 0x1cc2688 - 0x1cc2690
void sub_01CC2688_0x1cc2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2688_0x1cc2688");
#endif

    ctx->pc = 0x1cc2688u;

    // 0x1cc2688: 0x80b1c7c  j           func_2C71F0
    ctx->pc = 0x1CC2688u;
    ctx->pc = 0x2C71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71F0u, 0x1CC2688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2690u;
}
