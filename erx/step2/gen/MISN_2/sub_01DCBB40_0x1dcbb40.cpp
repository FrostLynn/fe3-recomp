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

// Function: sub_01DCBB40
// Address: 0x1dcbb40 - 0x1dcbb48
void sub_01DCBB40_0x1dcbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB40_0x1dcbb40");
#endif

    ctx->pc = 0x1dcbb40u;

    // 0x1dcbb40: 0x80a96be  j           func_2A5AF8
    ctx->pc = 0x1DCBB40u;
    ctx->pc = 0x2A5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AF8u, 0x1DCBB40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DCBB48u;
}
