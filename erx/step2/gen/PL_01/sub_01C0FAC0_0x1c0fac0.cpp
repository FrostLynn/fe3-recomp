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

// Function: sub_01C0FAC0
// Address: 0x1c0fac0 - 0x1c0fac8
void sub_01C0FAC0_0x1c0fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FAC0_0x1c0fac0");
#endif

    ctx->pc = 0x1c0fac0u;

    // 0x1c0fac0: 0x80b16c4  j           func_2C5B10
    ctx->pc = 0x1C0FAC0u;
    ctx->pc = 0x2C5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B10u, 0x1C0FAC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FAC8u;
}
