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

// Function: sub_01C0FFB0
// Address: 0x1c0ffb0 - 0x1c0ffb8
void sub_01C0FFB0_0x1c0ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FFB0_0x1c0ffb0");
#endif

    ctx->pc = 0x1c0ffb0u;

    // 0x1c0ffb0: 0x80b26a8  j           func_2C9AA0
    ctx->pc = 0x1C0FFB0u;
    ctx->pc = 0x2C9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AA0u, 0x1C0FFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FFB8u;
}
