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

// Function: sub_01CEF628
// Address: 0x1cef628 - 0x1cef630
void sub_01CEF628_0x1cef628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF628_0x1cef628");
#endif

    ctx->pc = 0x1cef628u;

    // 0x1cef628: 0x80b0b56  j           func_2C2D58
    ctx->pc = 0x1CEF628u;
    ctx->pc = 0x2C2D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D58u, 0x1CEF628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF630u;
}
