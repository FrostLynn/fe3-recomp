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

// Function: sub_01C818A0
// Address: 0x1c818a0 - 0x1c818a8
void sub_01C818A0_0x1c818a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C818A0_0x1c818a0");
#endif

    ctx->pc = 0x1c818a0u;

    // 0x1c818a0: 0x80b0f6c  j           func_2C3DB0
    ctx->pc = 0x1C818A0u;
    ctx->pc = 0x2C3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3DB0u, 0x1C818A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C818A8u;
}
