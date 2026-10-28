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

// Function: sub_01C42660
// Address: 0x1c42660 - 0x1c42668
void sub_01C42660_0x1c42660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42660_0x1c42660");
#endif

    ctx->pc = 0x1c42660u;

    // 0x1c42660: 0x80b1b18  j           func_2C6C60
    ctx->pc = 0x1C42660u;
    ctx->pc = 0x2C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C60u, 0x1C42660u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42668u;
}
