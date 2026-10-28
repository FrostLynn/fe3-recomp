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

// Function: sub_01C42B28
// Address: 0x1c42b28 - 0x1c42b30
void sub_01C42B28_0x1c42b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42B28_0x1c42b28");
#endif

    ctx->pc = 0x1c42b28u;

    // 0x1c42b28: 0x80b200e  j           func_2C8038
    ctx->pc = 0x1C42B28u;
    ctx->pc = 0x2C8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8038u, 0x1C42B28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42B30u;
}
