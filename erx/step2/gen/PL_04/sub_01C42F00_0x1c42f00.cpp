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

// Function: sub_01C42F00
// Address: 0x1c42f00 - 0x1c42f08
void sub_01C42F00_0x1c42f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42F00_0x1c42f00");
#endif

    ctx->pc = 0x1c42f00u;

    // 0x1c42f00: 0x80b1a16  j           func_2C6858
    ctx->pc = 0x1C42F00u;
    ctx->pc = 0x2C6858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6858u, 0x1C42F00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42F08u;
}
