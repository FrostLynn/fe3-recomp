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

// Function: sub_01CEF630
// Address: 0x1cef630 - 0x1cef638
void sub_01CEF630_0x1cef630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF630_0x1cef630");
#endif

    ctx->pc = 0x1cef630u;

    // 0x1cef630: 0x80b0b58  j           func_2C2D60
    ctx->pc = 0x1CEF630u;
    ctx->pc = 0x2C2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D60u, 0x1CEF630u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF638u;
}
