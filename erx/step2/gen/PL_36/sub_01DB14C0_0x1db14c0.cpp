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

// Function: sub_01DB14C0
// Address: 0x1db14c0 - 0x1db14c8
void sub_01DB14C0_0x1db14c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB14C0_0x1db14c0");
#endif

    ctx->pc = 0x1db14c0u;

    // 0x1db14c0: 0x80b1416  j           func_2C5058
    ctx->pc = 0x1DB14C0u;
    ctx->pc = 0x2C5058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5058u, 0x1DB14C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB14C8u;
}
