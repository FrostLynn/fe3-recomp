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

// Function: sub_01C006B0
// Address: 0x1c006b0 - 0x1c006b8
void sub_01C006B0_0x1c006b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C006B0_0x1c006b0");
#endif

    ctx->pc = 0x1c006b0u;

    // 0x1c006b0: 0x80b1e9a  j           func_2C7A68
    ctx->pc = 0x1C006B0u;
    ctx->pc = 0x2C7A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A68u, 0x1C006B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C006B8u;
}
