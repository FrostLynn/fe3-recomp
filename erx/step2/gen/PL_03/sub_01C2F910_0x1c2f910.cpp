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

// Function: sub_01C2F910
// Address: 0x1c2f910 - 0x1c2f918
void sub_01C2F910_0x1c2f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F910_0x1c2f910");
#endif

    ctx->pc = 0x1c2f910u;

    // 0x1c2f910: 0x80b0caa  j           func_2C32A8
    ctx->pc = 0x1C2F910u;
    ctx->pc = 0x2C32A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C32A8u, 0x1C2F910u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F918u;
}
