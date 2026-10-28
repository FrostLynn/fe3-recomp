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

// Function: sub_01DE0030
// Address: 0x1de0030 - 0x1de0040
void sub_01DE0030_0x1de0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0030_0x1de0030");
#endif

    ctx->pc = 0x1de0030u;

    // 0x1de0030: 0x80a63bc  j           func_298EF0
    ctx->pc = 0x1DE0030u;
    ctx->pc = 0x298EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EF0u, 0x1DE0030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE0038u;
    // 0x1de0038: 0x0  nop
    ctx->pc = 0x1de0038u;
    // NOP
    // 0x1de003c: 0x0  nop
    ctx->pc = 0x1de003cu;
    // NOP
    ctx->pc = 0x1de0040u;
}
