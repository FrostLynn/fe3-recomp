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

// Function: sub_01C42670
// Address: 0x1c42670 - 0x1c42678
void sub_01C42670_0x1c42670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42670_0x1c42670");
#endif

    ctx->pc = 0x1c42670u;

    // 0x1c42670: 0x80b1bca  j           func_2C6F28
    ctx->pc = 0x1C42670u;
    ctx->pc = 0x2C6F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F28u, 0x1C42670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42678u;
}
