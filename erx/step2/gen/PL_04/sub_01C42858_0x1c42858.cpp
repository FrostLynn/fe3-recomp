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

// Function: sub_01C42858
// Address: 0x1c42858 - 0x1c42860
void sub_01C42858_0x1c42858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42858_0x1c42858");
#endif

    ctx->pc = 0x1c42858u;

    // 0x1c42858: 0x80b0fae  j           func_2C3EB8
    ctx->pc = 0x1C42858u;
    ctx->pc = 0x2C3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EB8u, 0x1C42858u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42860u;
}
