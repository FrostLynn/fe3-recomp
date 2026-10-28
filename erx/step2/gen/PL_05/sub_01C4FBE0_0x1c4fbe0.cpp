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

// Function: sub_01C4FBE0
// Address: 0x1c4fbe0 - 0x1c4fbe8
void sub_01C4FBE0_0x1c4fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FBE0_0x1c4fbe0");
#endif

    ctx->pc = 0x1c4fbe0u;

    // 0x1c4fbe0: 0x80b19d6  j           func_2C6758
    ctx->pc = 0x1C4FBE0u;
    ctx->pc = 0x2C6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6758u, 0x1C4FBE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FBE8u;
}
