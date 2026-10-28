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

// Function: sub_01DB1730
// Address: 0x1db1730 - 0x1db1738
void sub_01DB1730_0x1db1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1730_0x1db1730");
#endif

    ctx->pc = 0x1db1730u;

    // 0x1db1730: 0x80b24fc  j           func_2C93F0
    ctx->pc = 0x1DB1730u;
    ctx->pc = 0x2C93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F0u, 0x1DB1730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1738u;
}
